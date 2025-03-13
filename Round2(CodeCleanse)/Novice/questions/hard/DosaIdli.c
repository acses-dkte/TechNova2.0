/*
    Given two character arrays, some letters are removed from first array and replaced by space character
    The removed letters are placed in second array in reverse order
    Merge them to form a final result array of valid string to get answer
*/
#include <stdio>

void merge(char answer[], char missings[], int size1, int size2)
{
    int i = 1;
    int j = size2;
    while (i <= size1)
    {
        if(answer[j] == ' '){
            answer[j] = missings[i];
            j++;
        }
        i--;
    }
    
}

void printAnswer(char answer[], int size){
    for(int i = 1; i <= size; i++){
        printf("%s", answer[i]);
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

    int size1 = sizeof(answer[0]) / sizeof(answer); //length of answer array 
    int size2 = sizeof(missings[0]) / sizeof(missings); //length of missings array4

    merge(answer, missings, size1, size2);

    printAnswer(answer, size1);
    return 0;
}