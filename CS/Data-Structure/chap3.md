# 3. 栈、队列和数组

## 栈

### 栈的基本概念

#### 栈的定义

> 只允许在==一端==进行插入和删除的==线性表==

栈顶，栈底，空栈

**后进先出**

n个不同元素进栈，出栈元素不同排列个数为$\cfrac{1}{n+1}C_{2n}^{n}$ 卡特兰数

#### 栈的基本操作

- InitStack(&S)
- StackEmpty(S)
- Push(&S, x)
- Pop(&S, &x)
- GetTop(S, &x)
- DestroyStack(&S)

### 栈的顺序存储结构

#### 顺序栈的实现

> 顺序存储，一组地址连续的存储单元存放自栈底到栈顶的数据元素

<details>
  <summary>code</summary>

```c
#define MaxSize 50
typedef struct
{
    ElemType data[MaxSize];
    int top;
} SqStck;
```

</details>

- 栈顶指针：`S.top`，初始设置`S.top=-1`；栈顶元素：`S.data[S.top]`
- 进栈操作：栈不满时，先栈顶指针加1，再送值到栈顶元素
- 出栈操作：栈非空时，先取栈顶元素值，再将栈顶指针减1
- 栈空条件：`S.top==-1`；栈满条件：`S.top==MaxSize-1`；栈长：`S.top+1`

#### 顺序栈的基本运算

1. 初始化

<details>
  <summary>code</summary>

```c++
void InitStack(SqStck &S)
{
    S.top = -1;
}
```

</details>

2. 判栈空

<details>
  <summary>code</summary>

```c++
bool StackEmpty(SqStck S)
{
    if (S.top == -1)
        return true;
    else
        return false;
}
```

</details>

3. 进栈

<details>
  <summary>code</summary>

```c++
bool Push(SqStck &S, ElemType x)
{
    if (S.top == MaxSize - 1)
        return false;
    S.data[++S.top] = x;
    return true;
}
```

</details>

4. 出栈

<details>
  <summary>code</summary>

```c++
bool Pop(SqStck &S, ElemType &x)
{
    if (S.top == -1)
        return false;
    x = S.data[S.top--];
    return true;
}
```

</details>

5. 读栈顶元素

<details>
  <summary>code</summary>

```c++
bool GetTop(SqStck &S, ElemType &x)
{
    if (S.top == -1)
        return false;
    x = S.data[S.top];
    return true;
}
```

</details>

#### 共享栈

> 两个栈共享一个一维数组空间

`top0=-1`时0号栈为空，`top1=MaxSize`时1号栈为空；仅当两个栈顶指针相邻时`top1-top0=0`，栈满

整个存储空间被占满时，发生上溢

### 栈的链式存储结构

优点：便于多个栈共享存储空间，不存在栈满上溢的情况。

通常采用单链表实现，规定所有操作都在表头进行

<details>
  <summary>code</summary>

```c++
#define MaxSize 50
typedef struct Linknode
{
    ElemType data;
    struct Linknode *next;
} *LiStack;
```

</details>

## 队列

### 队列的基本概念

#### 队列的定义

> 操作受限的线性表。只允许在一端进行插入，在另一端进行删除。特点：==先进先出==

队首，队尾，空队列

#### 队列常见的基本操作

- InitQueue(&Q)
- QueueEmpty(Q)
- EnQueue(&Q, x)
- DeQueue(&Q, &x)
- GetHead(Q, &x)

### 队列的顺序存储结构

#### 队列的顺序存储

> 分配一块连续的存储单元存放队列的元素，并附设两个指针：队首指针`front`指向队首元素，队尾指针`rear`指向队尾元素的下一个位置

<details>
  <summary>code</summary>

```c++
#define MaxSize 50
typedef struct
{
    ElemType data[MaxSize];
    int front, rear;
} SqQueue;
```

</details>

- 初始时：`Q.front=Q.rear=0`
- 进队操作：队不满时，先送值到队尾元素，再将==队尾指针==加1
- 出队操作：队不空时，先取队头元素值，再将==队首指针==加1

假溢出

#### 循环队列

> 将顺序队列臆造成一个环状结构。队首指针`Q.front=MaxSize-1`后，再前进一个位置就自动到0。

- 初始时：`Q.front=Q.rear=0`
- 队首指针进1：`Q.front=(Q.front+1)%MaxSize`
- 队尾指针进1：`Q.rear=(Q.rear+1)%MaxSize`
- 队列长度：`(Q.rear+MaxSize-Q.front)%MaxSize`
- 出队入队时：指针都按顺时针方向进1

- 队空：`Q.front==Q.rear`
- 队满：`Q.front==Q.rear`

如何区分：

1. 牺牲一个单元来区分，入队时少用一个队列单元。“队头指针在队尾的下一个位置作为队满的标志”

- 队满条件：`(Q.rear+1)%MaxSize==Q.front`
- 队空条件：`Q.front==Q.rear`
- 队列中元素的个数：`(Q.rear-Q.front+MaxSize)%MaxSize`

2. 类型中增设表示元素个数的数据成员。（队空队满都有`Q.front==Q.rear`）

- 队空：`Q.size==0`
- 队满：`Q.size==MaxSize`

3. 类型中增设`tag`数据成员。`tag=0`时，若因删除导致`Q.front==Q.rear`，则为队空；`tag=1`时，若因插入导致`Q.front==Q.rear`，则为队满

#### 循环队列的操作

1. 初始化

<details>
  <summary>code</summary>

```c++
void InitQueue(SqQueue &Q)
{
    Q.rear = Q.front = 0;
}
```

</details>

2. 判队空

<details>
  <summary>code</summary>

```c++
bool isEmpty(SqQueue Q)
{
    if (Q.rear == Q.front) return true;
    else return false;
}
```

</details>

3. 入队

<details>
  <summary>code</summary>

```C++
bool EnQueue(SqQueue &Q, ElemType x)
{
    if ((Q.rear + 1) % MaxSize == Q.front) return false;
    Q.data[Q.rear] = x;
    Q.rear = (Q.rear + 1) % MaxSize;
    return true;
}
```

</details>

4. 出队

<details>
  <summary>code</summary>

```C++
bool DeQueue(SqQueue &Q, ElemType &x)
{
    if (Q.rear == Q.front) return false;
    x = Q.data[Q.front];
    Q.front = (Q.front + 1) % MaxSize;
    return true;
}
```

</details>

### 队列的链式存储结构

#### 队列的链式存储

> 同时带有队头指针和队尾指针的单链表

<details>
  <summary>code</summary>

```c++
typedef struct LinkNode
{
    ElemType data;
    struct LinkNode *next;
} LinkNode;

typedef struct
{
    LinkNode *front, *rear;
} *LinkQueue;
```

</details>

队列为空：`Q.front==NULL && Q.rear==NULL`

出队：首先判断队列是否为空，不为空，则取出队首元素，将其从链表中摘除，并让`Q.front`指向下一个结点（若该结点为最后一个结点，则置`Q.front`和`Q.rear`都为`NULL`）

入队：建立一个新结点，将该结点插入到链表的尾部，并让`Q.rear`指向这个新插入的结点（若原队列为空，则令`Q.front`也指向这个结点）

设计成带头结点的单链表，插入和删除操作就统一了

**特别适合于数据元素变动比较大的情形，不存在队列满和溢出的问题**

#### 链式队列的基本操作

1. 初始化

<details>
  <summary>code</summary>

```c++

```

</details>

2. 判队空

<details>
  <summary>code</summary>

```c++

```

</details>

3. 入队

<details>
  <summary>code</summary>

```C++

```

</details>

4. 出队

<details>
  <summary>code</summary>

```C++

```

</details>

### 双端队列

> 允许两端都可以进行入队和出队操作的队列

输出受限的双端队列：允许在一端进行插入和删除，但在另一端只允许插入

输入受限的双端队列：允许在一端进行插入和删除，但在另一端只允许删除

## 栈和队列的应用

### 栈在括号匹配中的应用

算法设计思想

1. 初始设置一个空栈，顺序读入括号
2. 若是右括号，或栈顶与之匹配则消解，或不合法推出
3. 若是右括号，则压入栈中。算法结束时，栈为空，否则括号序列不匹配

### 栈在表达式求值中的应用

中缀表达式：A+B*(C-D)-E/F

后缀表达式：ABCD-*+EF-

后缀表达式算法过程：顺序扫描表达式的每一项，若是操作数，则压入栈中；若是操作符`<op>`，则连续从栈中取出两个操作数`Y`和`X`，形成运算指令`X <op> Y`，并将结果重新压入栈中。当表达式顶部都扫描并处理完后，栈顶存放的就是最后的计算结果。

:star2: 中缀表达式转后缀表达式

![中缀表达式转后缀表达式](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/edxsbm.png)

### 栈在递归中的应用

> 一个函数、过程或数据结构的定义中有应用了它自身，则这个函数、过程或数据结构称为`是递归定义的`

只需少量代码即可描述出解题过程所需的多次重复计算，通常情况下效率不高。

斐波那契数列定义
$$
Fib(n) = \begin{dcases}
    Fib(n-1) + Fib(n-2), & n \gt 1 \\
    1, & n = 1 \\
    0, & n = 0
\end{dcases}
$$

<details>
  <summary>code</summary>

```c++

```

</details>

递归模型是不能循环定义的，必须满足两个条件：

1. 递归表达式（递归体）
2. 边界条件（递归出口）

**递归的精髓在于能否将原始问题转换为属性相同但规模较小的问题**

递归次数较多容易造成栈溢出

### 队列在层次遍历中的应用

过程描述：

1. 根结点入队
2. 若队为空（所有结点都以访问完毕），则结束遍历，否则重复操作3
3. 队列中第一个结点出队，并访问之。若其有左孩子，则将左孩子入队；若其有右孩子，则将右孩子入队，返回操作2

### 队列在计算机系统中的应用

1. 解决主机与外部设备之间速度不匹配的问题➡️设置数据缓冲队列
2. 解决由多用户引起的资源竞争问题➡️CPU调度

## 数组和特殊矩阵

### 数组的定义

> `n`个相同类型数据元素构成的有限序列。

数组元素；下标；维界

### 数组的存储结构

$$
LOC(a_i) = LOC(a_0) + i \times L （ 0 \le i \lt n）
$$

L是每个数组元素所占的存储单元

多维数组，<u>两种映射方式</u>：行优先和列优先

### 特殊矩阵的压缩存储

压缩存储：多个值相同的元素只分配一个存储空间，对零元素不分配存储空间

#### 对称矩阵

> $a_{ij} = a{ji}$
>

上三角元素与下三角相同，采用一维数组`B[n(n+1)/2]`存放

下标对应关系：
$$
k = \begin{dcases}
    \frac{i(i-1)}{2} + j -1, & i \ge j （下三角区和主对角线元素）\\
    \frac{j(j-1)}{2} + i -1, & i \lt j （上三角区元素a_{ij} = a{ji}）
\end{dcases}
$$

#### 三角矩阵

> 上三角区为同一常量

下三角

采用一维数组`B[n(n+1)/2 + 1]`存放

对应关系：
$$
k = \begin{dcases}
    \frac{i(i-1)}{2} + j -1, & i \ge j （下三角区和主对角线元素）\\
    \frac{n(n+1)}{2}, & i \lt j （上三角区元素）
\end{dcases}
$$
上三角

对应关系：
$$
k = \begin{dcases}
    \frac{(i-1)(2n-i+2)}{2} + (j - i), & i \le j （上三角区和主对角线元素）\\
    \frac{n(n+1)}{2}, & i \gt j （下三角区元素）
\end{dcases}
$$


#### 三对角矩阵

$|i-j| \gt 1时，a_{ij} = 0(1 \le i, j \le n)$

将三条对角线上的元素按行优先方式存储在一维数组中

下标$k = 2i + j -3$

### 稀疏矩阵

非零元素个数t，矩阵元素个数s $s \gg t$

使用三元组存储

$$
\boldsymbol{M} = \begin{bmatrix}
    4 & 0 & 0 & 0\\
    0 & 0 & 6 & 0\\
    0 & 9 & 0 & 0\\
    0 & 23 & 0 & 0
\end{bmatrix}
$$

| i    | j    | v    |
| ---- | ---- | ---- |
| 0    | 0    | 4    |
| 1    | 2    | 6    |
| 2    | 1    | 9    |
| 3    | 1    | 23   |

## :heavy_exclamation_mark: Tips

1. 队列入队修改队尾指针，出队修改队首指针
