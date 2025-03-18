#include <stdio.h>
#include <string.h>

int findSubstring(char *str, char *sub)
{
    int strLen = strlen(str);
    int subLen = strlen(sub);
    if (subLen > strLen)
    {
        return -1;
    }
    for (int i = 0; i <= strLen - subLen; i++)
    {
        if (strncmp(str + i, sub, subLen) == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char str[] = "AI will take your job and you will remain jobless if you can't solve this problem on your own, ohhh sorry, you don't even have a job to lose :)";
    char sub[] = "this";
    printf("%d\n", strlen(str));
    int index = findSubstring(str, sub);
    if (index != -1)
    {
        printf("%d\n", index);
    }
    else
    {
        printf("Substring not found\n");
    }
    return 0;
}