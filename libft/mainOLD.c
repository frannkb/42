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
        //  const char *string = "Hello Word!";
        //  size_t result1;
        //  result1 = ft_strlen1(string);
        //  size_t result2 ;
        //  result2 = strlen(string);
        //  printf("My function: %d\nReal function: %d\n", result1,result2);
    // FT_STRLCPY
        // char *name = "frank";
        // char dst[5];
        // int n = ft_strlcpy(dst, name, 0);
        // printf("%d", n);
        // printf("\n%s", name);
        // printf("\n%s", dst);
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
        // char buffer2[5] = "frank";
        // int count2 = 0;
        // printf("My function: \n");
        //     printf("01%s", buffer2);
        //     ft_bzero(buffer2, count2);
        //     printf("\n02%s", buffer2);
        //     for (int i = 0; i <= count2; i++)
        //         printf("%c", buffer2[i]);
        //         printf("\n03%s", buffer2);

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
        // const char *str = "Hello World!";
        // char target_char = 'W';

        // char *result = ft_strchr(str, target_char);

        // if (result != 0) {
        //     printf("Character '%c' found at position: %ld\n", target_char, result - str);
        // } else {
        //     printf("Character '%c' not found in the string.\n", target_char);
        //     printf("Character '%s' not found in the string.\n", result);
        // }
    //FT_STRRCHR
        // const char	*name = "Frank Brunro";
        // char	ch = 'r';

        // char *n = ft_strrchr(name, ch);
        // printf("%s\n", n);
        // printf("%s\n", name);
        // printf("%c\n", ch);
    //FT_STRNCMP
        // char	*s1 = "FRANK";
        // char	*s2 = "BRUNO";

        // int n = ft_strncmp(s1,s2,0);

        // printf("%s\n", s1);
        // printf("%s\n", s2);
        // printf("%d\n", n);
    //FT_STRNSTR
        // const char *haystack = "Hello, World!";
        // const char *needle1 = "World";
        // const char *needle2 = ", ";
        // const char *needle3 = "";  // Empty string as a needle
        // size_t len = strlen(haystack);

        // // Test case 1: Search for "World" in "Hello, World!"
        // char *result1 = ft_strnstr(haystack, needle1, len);
        // printf("Result 1: %s\n", result1 ? result1 : "Not found");

        // // Test case 2: Search for "foo" in "Hello, World!"
        // char *result2 = ft_strnstr(haystack, needle2, len);
        // printf("Result 2: %s\n", result2 ? result2 : "Not found");

        // // Test case 3: Search for an empty string in "Hello, World!"
        // char *result3 = ft_strnstr(haystack, needle3, len);
        // printf("Result 3: %s\n", result3 ? result3 : "Not found");
    //FT_MEMCPY
        // char source[] = "Hello, World!"; // 13 characteres
        // char destination[20];  // Make sure the destination buffer is large enough

        // // Test case 1: Copy the entire string
        // ft_memcpy(destination, source, strlen(source) + 1);
        // printf("Result 1: %s\n", destination);

        // // Test case 2: Copy a portion of the string
        // ft_memcpy(destination, source + 7, 5);  // Copy "World" from source
        // printf("Result 2: %s\n", destination);

        // // Test case 3: Copy from a null source (should not crash)
        // ft_memcpy(destination, 0, 5);
        // printf("Result 3: %s\n", destination);

        // // Test case 4: Copy to a null destination (should not crash)
        // ft_memcpy(NULL, source, strlen(source) + 1);
        // printf("Result 4: %s\n", destination);
    //FT_MEMMOVE
        // char buffer[20];

        // // Test case 1: Non-overlapping regions
        // const char *source1 = "Hello, World!"; //13
        // ft_memmove(buffer, source1, strlen(source1) + 1);
        // printf("Result 1: %s\n", buffer);

        // // Test case 2: Overlapping regions (source before destination)
        // const char *source2 = buffer + 6;  // Copying "World" from buffer to buffer
        // ft_memmove(buffer, source2, 5);
        // printf("Result 2: %s\n", buffer);

        // // Test case 3: Overlapping regions (destination before source)
        // const char *source3 = buffer;
        // ft_memmove(buffer + 6, source3, 5);
        // printf("Result 3: %s\n", buffer);

        // // Test case 4: Overlapping regions with a null pointer (testing for safety)
        // ft_memmove(NULL, buffer, 5);
        // ft_memmove(buffer, NULL, 5);
}
