#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    int i, n, word = 0;
    printf("Enter the string length:");
    scanf("%d", &n);
    
    char *str = (char *)malloc((n + 1) * sizeof(char));
    if (str == NULL)
    {
        printf("ERROR in memory allocation");
        return 1;
    }
    printf("Enter the string:");
    scanf(" %[^\n]%*c", str);
    //check validity of input 
    bool validity = true;
    for (i = 0; i < n; i++) 
    { 
        if (!isalpha(str[i]) && str[i] != ' ' ) 
        {
            validity = false;
            break;
        }
    }
    if(!validity)
    {
        printf("Invalid input");
        free(str);
        return 1;
    }
    //logic
    for (i = 0; i < n; i++) 
    { 
        if (isupper(str[i])) 
        {
            word++;
        }
    }
    printf("No of words are:%d", word);
    free(str);
    
    return 0;
}

