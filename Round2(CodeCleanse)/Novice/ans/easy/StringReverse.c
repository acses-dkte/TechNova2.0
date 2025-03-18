#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;


    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int hexValues[] = {
        0x64, 0x6F, 0x73, 0x61, 0x69, 0x64, 0x6C, 0x69, 0x73, 0x61,
        0x6D, 0x62, 0x61, 0x72, 0x63, 0x68, 0x61, 0x74, 0x6E, 0x69
    };


    int length = sizeof(hexValues) / sizeof(hexValues[0]);

    char hiddenString[length + 1];
    for (int i = 0; i < length; i++) {
        hiddenString[i] = (char)hexValues[i];
    }
    hiddenString[length] = '\0';

    printf("Original string: %s\n", hiddenString);

    reverseString(hiddenString);


    printf("Reversed string: %s\n", hiddenString);

    return 0;
}