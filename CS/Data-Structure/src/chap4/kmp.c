#include <stdio.h>
#include <string.h>

void get_next(char *pattern, int *next)
{
    int i = 0, j = -1;
    next[0] = -1;
    int len = strlen(pattern);
    while (i < len - 1)
    {
        if (j == -1 || pattern[i] == pattern[j])
        {
            i++;
            j++;
            next[i] = j;
        }
        else
        {
            j = next[j];
        }
    }
}

void get_nextval(char *pattern, int *nextval)
{
    int i = 0, j = -1;
    int len = strlen(pattern);
    nextval[0] = -1;

    while (i < len - 1)
    {
        if (j == -1 || pattern[i] == pattern[j])
        {
            i++;
            j++;

            // 修改的部分
            if (pattern[i] != pattern[j])
                nextval[i] = j;
            else
                nextval[i] = nextval[j];
        }
        else
        {
            j = nextval[j];
        }
    }
}

int kmp_match(char *text, char *pattern)
{
    int n = strlen(text);
    int m = strlen(pattern);
    int next[m];
    get_next(pattern, next);
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (j == -1 || text[i] == pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            j = next[j];
        }
    }
    if (j == m)
    {
        return i - j;
    }
    else
    {
        return -1;
    }
}

void test_kmp()
{
    char text[] = "abababsdba";
    char pattern[] = "absdb";
    int position = kmp_match(text, pattern);
    if (position != -1)
    {
        printf("找到模式串在文本串中的位置：%d\n", position);
    }
    else
    {
        printf("未找到模式串在文本串中的位置\n");
    }
}

int main()
{
    char pattern[] = "ababaaaba";
    int m = strlen(pattern);
    int next[m];
    get_next(pattern, next);
    for (int i = 0; i < m; i++)
    {
        printf("%d ", next[i] + 1);
    }
    printf("\n");
    get_nextval(pattern, next);
    for (int i = 0; i < m; i++)
    {
        printf("%d ", next[i] + 1);
    }
    return 0;
}
