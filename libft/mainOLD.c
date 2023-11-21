#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
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
        // char buffer[5];
        // char data = 'A';
        // int count = 5;
        // memset(buffer, data, count);
        //     for (int i = 0; i <= count; i++)
        //         buffer[i] = data;
        //     for (int i = 0; i <= count; i++)
        //         printf("%c", buffer[i]);

        // printf("\n\n");
        // char buffer1[5];
        // char data1 = 'A';
        // int count1 = 5;
        // memset(buffer1, data1, sizeof(count1));
        //     for (int i = 0; i <= count1; i++)
        //         buffer1[i] = data1;
        //     for (int i = 0; i <= count1; i++)
        //         printf("%c", buffer1[i]);
    // FT_BZERO
         char buffer2[5] = "frank";
         int count2 = 0;
         printf("My function: \n");
             printf("01%s", buffer2);
             ft_bzero(buffer2, count2);
             printf("\n02%s", buffer2);
             for (int i = 0; i <= count2; i++)
                 printf("%c", buffer2[i]);
                 printf("\n03%s", buffer2);

        // printf("\n\n");

        // printf("Real function: \n");
        // char buffer[5] = "frank";
        // int count = 0;
        //     printf("01%s", buffer);
        //     bzero(buffer, count);
        //     printf("\n02%s", buffer);
        //     for (int i = 0; i <= count; i++)
        //         printf("%c", buffer[i]);
        //         printf("\n03%s", buffer);
    //FT_TOUPPER
        // printf("Result Real Function:");
        // printf("%c", toupper(-1));

        // printf("\nResult My Function:");
        // printf("%c", ft_toupper(-1));
    //FT_TOLOWER
        // printf("Result Real Function:");
        // printf("%c", tolower('-'));

        // printf("\nResult My Function:");
        // printf("%c", ft_tolower('-'));
    //FT_STRCHR
        // const char *str = "Hello Word!";
        // int ch = '!';
        // char *result = strchr(str, ch);
        // printf("%s", result);

        // printf("\n\n");

        // const char *str2 = "Hello Word!";
        // int ch2 = '!';
        // char *result2 = ft_strchr(str2, ch2);
        // printf("%s", result2);
    //FT_MEMCPY
        // printf("Real function:\n");
        // char src[] = "Hello Word!";
        // char dest[sizeof(src)];
        // size_t n = sizeof(src); // size_t = sizeof(src) pega o tamanho do array src

        // memcpy(dest,src,n);
        // printf("%s\n", dest);
        // printf("%s\n", src);
        // printf("%zu\n", n);


        // printf("\n");
        // printf("My function:\n");
        // char src1[] = "Hello Word!";
        // char dest1[sizeof(src1)];
        // size_t n1 = sizeof(src1); // size_t = sizeof(src) pega o tamanho do array src

        // ft_memcpy(dest1,src1,n1);
        // printf("%s\n", dest1);
        // printf("%s\n", src1);
        // printf("%zu\n", n1);
    //FT_MEMMOVE
        printf("Real function:\n");
        char *src = "Hello Word!";
        char dst[9];
        size_t number = sizeof(dst);

        memmove(dst + 2,src,9);

        printf("%s", dst);

        printf("\n\n");
        printf("My function:\n");
        char *src1 = "Hello Word!";
        char dst1[9];
        size_t number1 = sizeof(dst1);

        ft_memmove(dst1,src1,9);

        printf("%s", dst1);

}
