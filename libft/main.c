#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "functions.h"


int main()
{
    // FT_ISALPHA
        // char letter = '3';
        // int num = ft_isalpha(letter);
        // printf("%d", num);
    // FT_ISDIGIT
        // char    num = 'O';
        // int result1 = ft_isdigit(num);
        // int result2 = isdigit(num);
        // printf("My function: %d \nReal function: %d", result1, result2);
    // FT_ISALNUM
        // char lettlernum = '1';
        // int result1 = ft_isalnum(lettlernum);
        // int result2 = isalnum(lettlernum);
        // printf("My function: %d\nReal function: %d", result1, result2);
    // FT_ISANCII
        // char letter = '÷';
        // int result1 = ft_isascii(0177);
        // int result2 = isascii(0177);
        // printf("My function: %d\nReal function: %d\n", result1, result2);
    // FT_ISPRINT UNSIGNED CHAR - VERIFICAR
        // int result1 = ft_isprint(-1);
        // int result2 = isprint(-1);
        // printf("My function: %d\nReal Function:%d\n", result1, result2);
    // FT_STRLEN
        // const char *string = "Hello Word!";
        // int result1 = ft_strlen(string);
        // int result2 = strlen(string);
        // printf("My function: %d\nReal function: %d\n", result1,result2);
    // FT_MEMSET
        char buffer[5];
        char data = 'A';
        int count = 5;
        memset(buffer, data, count);
            for (int i = 0; i <= count; i++)
                buffer[i] = data;
            for (int i = 0; i <= count; i++)
                printf("%c", buffer[i]);

        printf("\n\n");
        char buffer1[5];
        char data1 = 'A';
        int count1 = 5;
        memset(buffer1, data1, sizeof(count1));
            for (int i = 0; i <= count1; i++)
                buffer1[i] = data1;
            for (int i = 0; i <= count1; i++)
                printf("%c", buffer1[i]);
        
}