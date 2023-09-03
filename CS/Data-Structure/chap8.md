# 8. 排序

## 排序的基本概念

### 排序的定义

重新排列列表中的元素，使表中元素满足按关键字有序

算法的稳定性：两个值相同的元素，排序前后相对位置不变

分类：内部排序，外部排序

## 插入排序

### 直接插入排序

> 从第二个元素开始，将其插入到==前面已排好序==的序列中的合适位置

![insertion sort](https://upload.wikimedia.org/wikipedia/commons/4/42/Insertion_sort.gif)

- 空间效率：O(1)
- 时间效率：比较关键词和移动元素
  - 最好：O(n)
  - 最坏：$O(n^2)$
  - 平均：$O(n^2)$
- 时间复杂度：$O(n^2)$
- 稳定性：稳定

### 折半插入排序

> 相对直接插入来说，在查找当前元素位置时，采用折半查找

减少了比较次数，但没有减少移动次数

- 时间复杂度：$O(n^2)$
- 稳定性：稳定

### 希尔排序

直接插入适合基本有序，数据量不大，由此改进而得到希尔排序

> 按间隔分割为几个子表，子表直接插入排序，再对全体直接插入

![shell sort](https://upload.wikimedia.org/wikipedia/commons/d/d8/Sorting_shellsort_anim.gif)

- 空间效率：O(1)
- 时间效率：依赖于增量序列的函数
  - 最坏：$O(n^2)$
  - 某个特定范围：$O(n^{1.3})$
- 稳定性：不稳定

## 交换排序

### 冒泡排序

> 相邻比较，逆序交换，最多 n - 1 趟

![Bubble-sort](https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif)

- 空间效率：O(1)
- 时间效率：
  - 最好：O(n)
  - 最坏：$O(n^2)$
  - 平均：$O(n^2)$
- 时间复杂度：$O(n^2)$
- 稳定性：稳定

### 快速排序

> 选取主元，从左找第一个大于主元，从右找第一个小于主元，交换，左右指针重合后与主元交换，使主元左边都比主元小，右边都比主元大。再对左边和右边分别进行快速排序。

![quick sort](https://upload.wikimedia.org/wikipedia/commons/6/6a/Sorting_quicksort_anim.gif)

每次快排能确定主元大最终位置

- 空间效率：递归栈
  - 最好：$O(log_2n)$
  - 最坏：$O(n)$
  - 平均：O(log_2n)$

- 时间效率：
  - 最坏：$O(n^2)$
- 时间复杂度：理想情况下，$O(nlog_2n)$
- 稳定性：不稳定

## 选择排序

### 简单选择排序

> 选出最小的元素与==前面已排好序==的最后一个元素交换

![selection sort](https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif)

- 空间效率：O(1)
- 时间效率：$O(n^2)$
- 时间复杂度：$O(n^2)$
- 稳定性：不稳定

### 堆排序

> 建堆，取堆顶，调整堆

![heapsort](https://upload.wikimedia.org/wikipedia/commons/1/1b/Sorting_heapsort_anim.gif)

- 空间效率：O(1)
- 时间效率：建堆时间 O(n)，调整时间 O(h)
  - 最好：$O(nlog_2n)$
  - 最坏：$O(nlog_2n)$
  - 平均：$O(nlog_2n)$
- 时间复杂度：$O(nlog_2n)$
- 稳定性：不稳定

## 归并排序和基数排序

### 归并排序

> 将两个或以上==有序表==合并为新的有序表

![merge sort](https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif)

- 空间效率：O(n)
- 时间效率：每趟归并 O(n), 共需 $\lceil\log_2n\rceil$ 趟
- 时间复杂度：$O(nlog_2n)$
- 稳定性：稳定

### 基数排序

最高位优先，最低位优先

> 需要r个队列，r为关键词基数。按照优先级依次入队，收集；根据每个关键词权值位数d，执行d次

- 空间效率：O(r)
- 时间效率：d 趟分配与收集
- 时间复杂度：$O(d(n+r))$
- 稳定性：稳定

## 各种内部排序算法的比较及应用

### 内部排序算法的比较

![排序算法比较](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20230903152311941.png)

###  内部排序算法的应用

## 外部排序

### 外部排序的基本概念

内存放不下所有数据，需要将数据一部分一部分地调入内存排序

### 外部排序的方法

核心：减少 I/O 次数

增大归并路数，可减少归并趟数，进而减少 I/O 次数

### 多路平衡归并与败者树

![5路归并败者树](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20230903152654480.png)

### 置换-选择排序（生成初始归并段）

![选择排序过程](https://raw.githubusercontent.com/BluePrintYang/PicHub/master/premaster/image-20230903152719033.png)

### 最佳归并树

$$
\text{度为0的结点有} n_0 \text{（=n）个，度为 k 的结点有 } n_k \text{ 个，严格 k 叉树有 }\\
n_0 = (k-1) n_k + 1 \text{ 由此可得 } n_k = (n_0 - 1) / (k - 1) \\
$$

- 若 $(n_0 - 1) \% (k - 1) = 0$ 则正好构成 k 叉树
- 若 $(n_0 - 1) \% (k - 1) = u \ne 0$ ，则需补充 k - u - 1 个

