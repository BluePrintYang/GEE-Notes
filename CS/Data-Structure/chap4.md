# 4. 串

## 串的定义和实现

### 串的定义

> 零个或多个字符组成的有限序列

$$
S = ' a_1 a_2 \cdots a_n'（n \ge 0）
$$

长度；空串 ∅

子串；主串

空格串

### 串的存储结构

#### 定长顺序存储表示

> 一组==地址连续==的存储单元存储串值的字符序列

<details>
  <summary>code</summary>

```c++

```

</details>

串的实际长度只能小于或等于`MAXLEN`，超过会被舍去，称为**截断**

#### 堆分配存储表示

> 一组==地址连续==的存储单元存储串值的字符序列，但是存储空间是在程序执行过程中==动态分配==得到的

<details>
  <summary>code</summary>

```c++

```

</details>

#### 块链存储表示

> 类似线性表的链式存储结构

### 串的基本操作

- StrAssign(&T, chars)
- StrCopy(&T, S)
- StrEmpty(S)
- StrLength(S)
- SubString(&Sub, S, pos, len)
- Concat(&T, S1, S2)
- Index(S, T)
- ClearString(&S)
- DestroyString(&S)

## 串的模式匹配

### 简单的模式匹配算法

> 字符串的定位操作通常称为串的**模式匹配**，它求的是子串在主串中的位置。

暴力匹配算法

```c++
```

最坏时间复杂度`O(mn)`

### 串的模式匹配算法——KMP算法

#### 字符串的前缀、后缀和部分匹配值

前缀：除最后一个字符串外，字符串的所有头部字符串

后缀：除第一个字符外，字符串的所有尾部子串

部分匹配值：字符串的前缀和后缀的最长相等前后缀长度

例：

- 'a'的前缀后缀都为∅，最长相等前后缀长度为0
- 'ab'的前缀{a} ∩ 后缀{b} = ∅，最长相等前后缀长度为0
- 'aba'的前缀{a, ab} ∩ 后缀{a, ba} = {a}，最长相等前后缀长度为1
- 'abab'的前缀{a, ab, aba} ∩ 后缀{a, ba, aba} = {ab}，最长相等前后缀长度为2
- 'ababa'的前缀{a, ab, aba, abab} ∩ 后缀{a, ba, aba, baba} = {a, aba}，最长相等前后缀长度为3

因此，'ababa'的部分匹配值为00123

移动位数 = 已匹配的字符数 - 对应的部分匹配值

==主串不会回退==，时间复杂度`O(m+n)`

#### KMP算法的原理是什么

`next`数组

`next[j]`的含义：在子串的第`j`个字符与主串发生失配时，跳到子串的`next[j]`位置重新与主串当前位置进行比较。
$$
next[j] = \begin{cases}
    0, & j = 1\\
    max \set{k | 1 \lt k \lt j 且 ' p_1 L p_{k-1} ' = ' p_{j - k + 1} L p_{j-1} '}, & 当此集合不为空时\\
    1, & 其他情况
\end{cases}
$$

<details>
  <summary>get_nextval</summary>

```c++

```

</details>

<details>
  <summary>Index_KMP</summary>

```c++

```

</details>

### KMP算法的进一步优化

对`next`数组进行优化

<details>
  <summary>get_nextval</summary>

```c++

```

</details>
