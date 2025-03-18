/*
    Given two character arrays, some letters are removed from first array and replaced by space character
    The removed letters are placed in second array in reverse order
    Merge them to form a final result array of valid string to get answer
*/
#include <stdio.h>

void merge(char answer[], char missings[], int size1, int size2)
{
    int i = 0;
    int j = size2 - 1;
    while (i < size1)
    {
        if(answer[i] == ' '){
            answer[i] = missings[j];
            j--;
        }

        i++;
    }
    
}

void printAnswer(char answer[], int size){
    for(int i = 0; i < size; i++){
        printf("%c", answer[i]);
    }
}

int main()
{

    //this will be the final merged array
    char answer[] = {'D', ' ', 's', 'a',
                     ' ', 'd', 'l', ' ',
                     'S', ' ', 'm', 'b', ' ', 'a', 'r',
                     'C', 'h', ' ', 't', ' ', 'e', 'y',
                     'C', 'h', ' ', 't', 'n', ' ', 'y',
                     };
                     
                     
    //no need to modify this array
    char missings[] = {'e', 'u', 'n', 'u', 'a', 'a', 'i', 'I', 'o'}; 

    int size1 = sizeof(answer) / sizeof(answer[0]); //length of answer array
    int size2 = sizeof(missings) / sizeof(missings[0]); //length of missings array
    merge(answer, missings, size1, size2);
    printAnswer(answer, size1);
    return 0;
}