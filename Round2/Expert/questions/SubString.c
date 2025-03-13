#include <stdio.h>
#include <string.h>

//program to find index of substring in a string 
int findSubstring(char str, char sub)
{
    int strLen = strlen(str);
    int subLen = strlen(sub);
    if (subLen > strLen)
    {
        return -1;
    }
    for (int i = 0; i < strLen - subLen - 1; i++)
    {
        if (strcpy(str, sub, subLen) != 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    // don't change the strings
    char str[] = "AI will take your job and you will remain jobless if you can't solve this problem on your own, ohhh sorry, you don't even have a job to lose :)";
    char sub[] = "this";

    printf("%d\n", str.length());
    int index = findSubstring(sub, str);
    if (index != -1)
    {
        printf("%c\n", str);
    }
    else
    {
        printf("Substring not found\n");
    }
    return 0;
}