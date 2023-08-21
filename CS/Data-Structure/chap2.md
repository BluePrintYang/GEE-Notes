# 2. 线性表

## 线性表的定义和基本操作

### 线性表的定义

> ==相同==数据类型的n个数据元素的<u>有序列表</u>

特点

- 元素个数==有限==
- 元素具有逻辑上的顺序性，有==先后次序==
- 都是数据元素，每个都是单个元素
- 数据类型都==相同==（占有相同大小空间）
- 元素具有抽象性（仅讨论元素间逻辑关系）

:bangbang: 线性表是逻辑结构，表示元素一对一的相邻关系。顺序表和链表是指存储结构。

### 线性表的基本操作

- InitList(&L)
- Length(L)
- LocateElem(L, e)
- GetElem(L, i)
- ListInsert(&L, i, e)
- ListDelete(&L, i, &e)
- PrintList(L)
- Empty(L)
- DestroyList(&L)

## 线性表的顺序表示

### 顺序表的定义

> 线性表的顺序存储

地址连续，逻辑上相邻的物理上也相邻。即逻辑顺序与物理顺序相同。

<details>
  <summary>code</summary>

```c++
#define MaxSize 50
typedef struct
{
    ElemType data[MaxSize];
    int length;
} SqList;
```

```c++
#define InitSize 100
typedef struct
{
    ElemType *data;
    int MaxSize, length;
} SqList;
```

```c++
// C 初始动态分配
L.data = (ElemType *)malloc(sizeof(ElemType) * InitSize);

// C++ 初始动态分配
L.data = new ElemType[InitSize];
```

</details>

最主要特点：随机访问。（通过首地址以及元素序号可在O(1)时间内找到指定元素）

存储密度高，结点指存储数据。

逻辑上相邻的物理上也相邻。（插入删除需要大量移动操作）

### 顺序表上的基本操作

1. 插入操作

<details>
  <summary>code</summary>

```c++
bool ListInsert(SqList &L, int i, ElemType e)
{
    if (i < 1 || i > L.length + 1)
    {
        return false;
    }
    if (L.length >= MaxSize)
    {
        return false;
    }
    for (int j = L.length; j >= i; j--)
    {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    L.length++;
    return true;
}
```

</details>

> 最好情况：在表尾插入，不执行后移语句，时间复杂度为`O(1)`
> 最坏情况：在表头插入，后移语句执行n次，时间复杂度为`O(n)`
> 平均情况：移动次数$\frac{n}{2}$，时间复杂度为`O(n)`

因此，顺序性插入算法平均时间复杂度为`O(n)`

2. 删除操作

<details>
  <summary>code</summary>

```c++
bool ListDelete(SqList &L, int i, ElemType &e)
{
    if (i < 1 || i > L.length)
    {
        return false;
    }
    e = L.data[i - 1];
    for (int j = i; j < L.length; j++)
    {
        L.data[j - 1] = L.data[j];
    }
    L.length--;
    return true;
}
```

</details>

> 最好情况：删除表尾元素，无需移动元素，时间复杂度为`O(1)`
>
> 最坏情况：删除表头元素，移动所有元素，时间复杂度为`O(n)`
>
> 平均情况：移动次数$\frac{n-1}{2}$，时间复杂度为`O(n)`

因此，顺序表删除算法平均时间复杂度为`O(n)`

3. 按值查找（顺序查找）

<details>
  <summary>code</summary>

```c++
int LocateElem(SqList L, ElemType e)
{
    int i;
    for (i = 0; i < L.length; i++)
    {
        if (L.data[i] == e)
        {
            return i + 1;
        }
    }
    return 0;
}
```

</details>

> 最好情况：查找表头元素，比较一次，时间复杂度为`O(1)`
> 最坏情况：查找表尾元素（或不存在），比较所有元素，时间复杂度为`O(n)`
> 平均情况：比较次数$\frac{n+1}{2}$，时间复杂度为`O(n)`

因此，顺序表按值查找平均时间复杂度为`O(n)`

## 顺序表的链式表示

### 单链表的定义

> 线性表的链式存储。通过一组任意的存储单元来存储线性表中的数据元素。包含数据域和指针域

<details>
  <summary>code</summary>

```c++

```

</details>

可以解决顺序表需要大量连续存储单元的缺点，但存在浪费存储空间的缺点。

**非随机存取**：不能直接找到某个特点结点，需要从头遍历

头结点与头指针：头指针始终指向链表第一个结点。头结点是带头结点链表的第一个结点，通常不存储信息。

引入头结点的好处：

1. 在链表第一个位置上的操作与其他位置一致，无序特殊处理
2. 无论链表是否为空，头指针都是指向头结点的非空指针。因此空表和非空表的处理也得到了统一

### 单链表上基本操作的实现

#### 采用头插法建立单链表

> 新结点插入到当前链表的表头

<details>
  <summary>code</summary>

```c++

```

</details>

每个结点插入时间为`O(1)`，设表长为`n`，总时间复杂度为`O(n)`

#### 采用尾插法建立单链表

> 新结点插入到当前链表的表尾

<details>
  <summary>code</summary>

```c++

```

</details>

#### 按序号查找结点

> 从第一个结点出发，找到第1个结点为止，否则返回最后一个结点指针域`NULL`

<details>
  <summary>code</summary>

```c++

```

</details>

时间复杂度`O(n)`

#### 按值查找表结点

> 从第一个结点出发，找到结点数据域为指定值为止，返回该结点指针，没有则返回NULL`

<details>
  <summary>code</summary>

```c++

```

</details>

时间复杂度`O(n)`

#### 插入结点操作

> 将值为x的结点插入到单链表的第`i`个位置上。
>
> 先检查插入位置合法性，然后找到待插入位置的前驱结点，再在其后插入新结点

<details>
  <summary>code</summary>

```c++

```

</details>

时间复杂度为`O(n)`，主要开销为找到第`i-1`个元素。如果在给定的结点后面插入，则时间复杂度为`O(1)`

#### 删除结点操作

> 将单链表的第`i`个结点删除。

<details>
  <summary>code</summary>

```c++

```

</details>

#### 求表长操作

时间复杂度`O(n)`

:bangbang: 不包括头结点

### 双链表

在单链表的基础上增加了一个前驱指针

<details>
  <summary>code</summary>

```c++

```

</details>

#### 双链表的插入操作

<details>
  <summary>code</summary>

```c++

```

</details>

#### 双链表的删除操作

<details>
  <summary>code</summary>

```c++

```

</details>

### 循环链表

#### 循环单链表

> 与单链表的区别是最后一个结点的指针不是`NULL`，而是指向头结点

判空条件：头结点指针是否指向头结点

单链表只能从表头开始遍历，循环单链表可以从任意位置遍历

:star2:有时对循环单链表不设头指针而设尾指针。设头指针时，对表尾插入元素需要`O(n)`时间复杂度；而设尾指针时，`r->next`即为头指针，对表头表尾插入都只需要`O(1)`时间复杂度

#### 循环双链表

> 头结点的`prior`指针指向尾结点

判空条件：头结点`prior`域和`next`域都为L

### 静态链表

> 借助数组来描述线性表的链式存储结构。指针为数组下标
>

### 顺序表和链表的比较

#### 存取（读写）方式

顺序表可以顺序存取，也可以随机存取；链表只能从表头顺序存取。

#### 逻辑结构与物理结构

顺序存储时，逻辑上相邻的物理上也相邻；链式存储时，逻辑上相邻物理上不一定相邻。

#### 查找、插入和删除操作

按值查找，顺序表无序时，两者时间复杂度都为O(n)；顺序表有序时，采用折半查找，时间复杂度为O(logn)

按序号查找，顺序表`O(1)`；链表`O(n)`

插入、删除：顺序表`O(n)`；链表`O(1)`

#### 空间分配

顺序表静态存储时，需要预先分配空间；动态分配虽然可以扩充空间，但需要移动大量元素。

链式存储只在需要时申请分配。

##### 基于存储考虑

难以估计长度时，不宜采用顺序表；链表存储密度小于1

##### 基于运算考虑

经常按序号访问，采用顺序表；经常插入删除，采用链表

##### 基于环境考虑
