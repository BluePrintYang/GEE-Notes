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

int main()
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
    return 0;
}
