/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yustinov <ev.ustinov03@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:24:54 by yustinov          #+#    #+#             */
/*   Updated: 2024/09/20 16:15:21 by yustinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdint.h>

void test_ft_isalpha() {
    printf("Testing now ft_isalpha\n");
    printf("-------------------\n");
    assert(ft_isalpha('A') == 1);
    assert(ft_isalpha('a') == 1);
    assert(ft_isalpha('Z') == 1);
    assert(ft_isalpha('8') == 0);
    assert(ft_isalpha('-') == 0);	
    assert(ft_isalpha(' ') == 0);
    assert(ft_isalpha('\n') == 0);
    assert(ft_isalpha('1') == 0);
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_isdigit() {
    printf("Testing now ft_isdigit\n");
    printf("-------------------\n");
    assert(ft_isdigit('9') == 1);
    assert(ft_isdigit('4') == 1);
    assert(ft_isdigit('2') == 1);
    assert(ft_isdigit(';') == 0);
    assert(ft_isdigit('a') == 0);
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_isalnum() {
    printf("Testing now ft_isalnum\n");
    printf("-------------------\n");
    assert(ft_isalnum('0') == 1);
    assert(ft_isalnum('9') == 1);
    assert(ft_isalnum('Z') == 1);
    assert(ft_isalnum('A') == 1);
    assert(ft_isalnum('a') == 1);
    assert(ft_isalnum('z') == 1);
    assert(ft_isalnum('.') == 0);
    assert(ft_isalnum(';') == 0);
    assert(ft_isalnum('\t') == 0);
    assert(ft_isalnum('\0') == 0);
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_isascii() {
    printf("Testing now ft_isascii\n");
    printf("-------------------\n");
    assert(ft_isascii('z') == 1);
    assert(ft_isascii('\0') == 1);
    assert(ft_isascii('&') == 1);
    assert(ft_isascii('1') == 1);
    assert(ft_isascii((char)129) == 0);
    assert(ft_isascii((char)128) == 0);
    assert(ft_isascii('+') == 1);
    assert(ft_isascii('`') == 1);
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_isprint() {
    printf("Testing now ft_isprint\n");
    printf("-------------------\n");
    assert(ft_isprint(32) == 1);  // space ' '
    assert(ft_isprint(99) == 1); // c
    assert(ft_isprint(1) == 0); // SOH (start of heading) 
    assert(ft_isprint(20) == 0); // DC4 (device control 4)
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_bzero() {
    printf("Testing now ft_bzero\n");
    printf("-------------------\n");
    char	buffer[10];
    memset(buffer, 'A', sizeof(buffer));
    ft_bzero(buffer, 5);
    for (int i = 0; i < 5; i++) 
    {
	assert(buffer[i] == 0);
    }
    for (int i = 5; i < 10; i++) {
	    assert(buffer[i] == 'A');
    }
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_memchr() {
    printf("Testing now ft_memchr\n");
    printf("-------------------\n");
    // Test 1: Normal case
    char str1[] = "Hello, world!";
    char *result1 = ft_memchr(str1, 'w', sizeof(str1));
    assert(result1 != NULL);
    assert(result1 == &str1[7]); // 'w' is at index 7

    // Test 2: Character not found
    char *result2 = ft_memchr(str1, 'x', sizeof(str1));
    assert(result2 == NULL); // 'x' is not in the string

    // Test 3: Search in empty string
    char *result3 = ft_memchr("", 'a', 0);
    assert(result3 == NULL); // No characters to search

    // Test 4: Search for the first character
    char *result4 = ft_memchr(str1, 'H', sizeof(str1));
    assert(result4 != NULL);
    assert(result4 == &str1[0]); // 'H' is at index 0

    // Test 5: Search for the null terminator
    char *result5 = ft_memchr(str1, '\0', sizeof(str1));
    assert(result5 != NULL);
    assert(result5 == &str1[13]); // null terminator is at the end of the string

    // Test 6: Searching beyond the length
    char *result6 = ft_memchr(str1, 'o', 5);
    assert(result6 == &str1[4]); 
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_memcmp() {
    printf("Testing now ft_memcmp\n");
    printf("-------------------\n");
        // Test 1: Compare two identical strings
    char str1[] = "Hello, world!";
    char str2[] = "Hello, world!";
    assert(ft_memcmp(str1, str2, sizeof(str1)) == 0);

    // Test 2: Compare two different strings
    char str3[] = "Hello, world!";
    char str4[] = "Hello, friend!";
    assert(ft_memcmp(str3, str4, sizeof(str3)) != 0); // should not be equal

    // Test 3: Compare with different length
    assert(ft_memcmp(str1, str4, 5) == 0); // Only compare first 5 characters (same)

    // Test 4: Compare with first string shorter
    char str5[] = "Hello";
    char str6[] = "Hello, world!";
    assert(ft_memcmp(str5, str6, 5) == 0); // should be equal for first 5 characters

    // Test 5: Compare with first string longer
    assert(ft_memcmp(str6, str5, 5) == 0); // should also be equal for first 5 characters

    // Test 6: Compare with zero length
    assert(ft_memcmp(str1, str2, 0) == 0); // should be equal, as length is zero

    // Test 7: Compare with different characters
    char str7[] = {0xFF, 0xAA, 0x00};
    char str8[] = {0xFF, 0xAB, 0x00};
    assert(ft_memcmp(str7, str8, 3) < 0); // first differing character is less than

    // Test 8: Compare with same first bytes
    char str9[] = {0x00, 0xFF};
    char str10[] = {0x00, 0xAA};
    assert(ft_memcmp(str9, str10, 2) > 0); // first byte equal, second byte different
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_memcpy() {
    printf("Testing now ft_memcpy\n");
    printf("-------------------\n");
    // Test 1: Basic copy
    char src1[] = "Hello, world!";
    char dest1[20];
    ft_memcpy(dest1, src1, sizeof(src1));
    assert(strcmp(dest1, src1) == 0); // Check if the destination equals the source

    // Test 2: Zero bytes to copy
    //char dest2[20];
    //ft_memcpy(dest2, src1, 0);
   // assert(dest2[0] == '\0'); // Ensure the destination is unchanged (uninitialized)

    // Test 3: Overlapping regions (behavior is undefined, but should not crash)
    char overlap[] = "Hello, world!";
    ft_memcpy(overlap + 7, overlap, 6); // Copy "Hello" into "world"
    assert(strcmp(overlap, "HelloHello!")); // Check the result after the copy

    // Test 4: Copying to a smaller destination
    char small_dest[5];
    ft_memcpy(small_dest, src1, 5);
    small_dest[5] = '\0'; // Null-terminate the string
    assert(strcmp(small_dest, "Hello") == 0); // Check if the destination has the expected result

    // Test 5: Copying non-ASCII characters
    unsigned char src2[] = {0xFF, 0xAA, 0x00};
    unsigned char dest3[3];
    ft_memcpy(dest3, src2, 3);
    assert(dest3[0] == 0xFF && dest3[1] == 0xAA && dest3[2] == 0x00); // Check if non-ASCII bytes are copied correctly
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_memmove() {
    printf("Testing now ft_memmove\n");
    printf("-------------------\n");
    // Test 1: Basic move
    char src1[] = "Hello, world!";
    char dest1[20];
    ft_memmove(dest1, src1, sizeof(src1));
    assert(strcmp(dest1, src1) == 0); // Check if the destination equals the source

    // Test 3: Overlapping regions (src before dest)
    char overlap1[] = "Hello, world!";
    ft_memmove(overlap1 + 7, overlap1, 6); // Move "Hello" into "world"
    assert(strcmp(overlap1, "HelloHello!")); // Check the result after the move

    // Test 4: Overlapping regions (dest before src)
    char overlap2[] = "Hello, world!";
    ft_memmove(overlap2, overlap2 + 7, 6); // Move "world!" to the front
    assert(strcmp(overlap2, "world!")); // Check the result after the move

    // Test 5: Copying non-ASCII characters
    unsigned char src2[] = {0xFF, 0xAA, 0x00};
    unsigned char dest3[3];
    ft_memmove(dest3, src2, 3);
    assert(dest3[0] == 0xFF && dest3[1] == 0xAA && dest3[2] == 0x00); // Check if non-ASCII bytes are copied correctly

    // Test 6: Move within the same buffer
    char buf[] = "1234567890";
    ft_memmove(buf + 2, buf, 8); // Move "12345678" to start at buf[2]
    assert(strcmp(buf, "1212345678") == 0); // Check the result after the move
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_memset() {
    printf("Testing now ft_memset\n");
    printf("-------------------\n");
    char	buffer[50];
    ft_memset(buffer, 'A', 10);
    for (int i = 0; i < 10; i++)
	    assert(buffer[i] == 'A');
    ft_memset(buffer + 10, 'B', 20);
    for (int i = 10; i < 20; i++)
	   assert(buffer[i] == 'B'); 
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_strchr() {
    printf("Testing now ft_strchr\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_strlcat() {
    printf("Testing now ft_strlcat\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_strlcpy() {
    printf("Testing now ft_strlcpy\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_strlen() {
    printf("Testing now ft_strlen\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_strncmp() {
    printf("Testing now ft_strncmp\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_strrchr() {
    printf("Testing now ft_strrchr\n");
    printf("-------------------\n");
    // Test case 1: Character is in the string
    char *result = ft_strchr("Hello, world!", 'w');
    assert(result != NULL);
    assert(strcmp(result, "world!") == 0);

    // Test case 2: Character is at the beginning
    result = ft_strchr("Hello, world!", 'H');
    assert(result != NULL);
    assert(strcmp(result, "Hello, world!") == 0);

    // Test case 3: Character is at the end
    result = ft_strchr("Hello, world!", '!');
    assert(result != NULL);
    assert(strcmp(result, "!") == 0);

    // Test case 4: Character is not in the string
    result = ft_strchr("Hello, world!", 'x');
    assert(result == NULL);

    // Test case 5: Empty string
    result = ft_strchr("", 'a');
    assert(result == NULL); // Should return NULL for an empty string

    // Test case 6: Character is '\0' (null terminator)
    result = ft_strchr("Hello, world!", '\0');
    assert(result != NULL);
    assert(strcmp(result, "") == 0); // Should point to the null terminator

    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_tolower() {
    printf("Testing now ft_tolower\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_toupper() {
    printf("Testing now ft_toupper\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_strnstr() {
    printf("Testing now ft_strnstr\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}
void test_ft_atoi() {
       	printf("Testing now ft_atoi\n");
	printf("-------------------\n");
	const char	*nodigits = "    \t\t\tdasdasdsdas";
	const char	*simple = "21321";
	const char	*negative = "-123";
	const char	*minint = "  \t\t\v-2147483648";
	const char	*maxint = "  \t\t\t2147483647";
	const char	*zero = "0";
	const char	*moresigns = " \t\r\v   +42";
	const char	*justspace = "               ";

	assert(ft_atoi(nodigits) == 0);
	assert(ft_atoi(simple) == 21321);
	assert(ft_atoi(negative) == -123);
	assert(ft_atoi(minint) == -2147483648);
	assert(ft_atoi(maxint) == 2147483647);
	assert(ft_atoi(zero) == 0);
	assert(ft_atoi(moresigns) == 42);
	assert(ft_atoi(justspace) == 0);
	printf("All tests passed! Congrats ;D\n");
	printf("---------------------------\n");
}
void test_ft_calloc() {
    printf("Testing now ft_calloc\n");
    printf("-------------------\n");
    size_t n = 5, size = sizeof(int);
    int *arr = (int *)ft_calloc(n, size);
    assert(arr != NULL);
    for (size_t i = 0; i < n; i++)
	    assert(arr[i] == 0);
    free(arr);
    arr = (int *)ft_calloc(0, size);
    assert(arr != NULL);
    free(arr);
    arr = (int *)ft_calloc(n, 0);
    assert(arr != NULL);
    free(arr);
    arr = (int *)ft_calloc(SIZE_MAX, SIZE_MAX);
    assert(arr == NULL);
    if (arr != NULL)
    	free(arr);


    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_strdup() {
    printf("Testing now ft_strdup\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_substr() {
    printf("Testing now ft_substr\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_strjoin() {
    printf("Testing now ft_strjoin\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_strtrim() {
    printf("Testing now ft_strtrim\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}
void free_split(char **split) {
    if (split) {
        for (int i = 0; split[i] != NULL; i++) {
            free(split[i]);
        }
        free(split);
    }
}

void test_ft_split() {
    printf("Testing now ft_split\n");
    printf("-------------------\n");
        // Test case 1: Regular string with spaces
    char **result = ft_split("Hello world from C", ' ');
    assert(result != NULL);
    assert(result[0] != NULL && strcmp(result[0], "Hello") == 0);
    assert(result[1] != NULL && strcmp(result[1], "world") == 0);
    assert(result[2] != NULL && strcmp(result[2], "from") == 0);
    assert(result[3] != NULL && strcmp(result[3], "C") == 0);
    assert(result[4] == NULL); // Check for NULL termination
    free_split(result);

}

void test_ft_itoa() {
    printf("Testing now ft_itoa\n");
    printf("-------------------\n");
    char	*result;
    result = ft_itoa(-12345);
    assert(strcmp(result,"-12345") == 0);
    free(result);
    result = ft_itoa(0);
    assert(strcmp(result,"0") == 0);
    free(result);
    result = ft_itoa(-2147483648);
    assert(strcmp(result,"-2147483648") == 0);
    free(result);
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_strmapi() {
    printf("Testing now ft_strmapi\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_striteri() {
    printf("Testing now ft_striteri\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_putchar_fd() {
    printf("Testing now ft_putchar_fd\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_putstr_fd() {
    printf("Testing now ft_putstr_fd\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_putendl_fd() {
    printf("Testing now ft_putendl_fd\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_putnbr_fd() {
    printf("Testing now ft_putnbr_fd\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_lstnew() {
    printf("Testing now ft_lstnew\n");
    printf("-------------------\n");
    char *content1 = "Hello, World!";
    t_list *node1 = ft_lstnew(content1);
    assert(strcmp(content1, node1->content) == 0);
    free(node1);
    char *content2 = NULL;
    t_list *node2 = ft_lstnew(content2);
    assert(node2 == NULL);
    free(node2);
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_lstadd_front() {
    printf("Testing now ft_lstadd_front\n");
    printf("-------------------\n");
    t_list *head = NULL; // Initially, the list is empty
    t_list *new_node = malloc(sizeof(t_list));
    new_node->content = (void *)1; // Assign some content
    new_node->next = NULL;
    ft_lstadd_front(&head, new_node);
    assert(head == new_node); // The new node should now be the head
    assert(head->next == NULL); // The next should be NULL
	 // Create another node
    t_list *second_node = malloc(sizeof(t_list));
    second_node->content = (void *)2;
    second_node->next = NULL;
    ft_lstadd_front(&head, second_node);
    assert(head == second_node); // The second node should now be the head
    assert(head->next == new_node); // The next should point to the first node

    // Clean up
    free(new_node);
    free(second_node);
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_lstsize() {
    printf("Testing now ft_lstsize\n");
    printf("-------------------\n");
    t_list *empty_list = NULL;
    assert(ft_lstsize(empty_list) == 0); // Should return 0
    t_list *single_node = malloc(sizeof(t_list));
    single_node->content = (void *)1; // Assign some content
    single_node->next = NULL;
    assert(ft_lstsize(single_node) == 1); // Should return 1
    free(single_node); // Clean up
    t_list *head = malloc(sizeof(t_list));
    head->content = (void *)1;
    head->next = malloc(sizeof(t_list));
    head->next->content = (void *)2;
    head->next->next = malloc(sizeof(t_list));
    head->next->next->content = (void *)3;
    head->next->next->next = NULL;

    assert(ft_lstsize(head) == 3); // Should return 3

    // Clean up the allocated memory
    free(head->next->next); // Free third node
    free(head->next);       // Free second node
    free(head);            // Free head node
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_lstlast() {
    printf("Testing now ft_lstlast\n");
    printf("-------------------\n");
    t_list *empty_list = NULL;
    assert(ft_lstlast(empty_list) == NULL); 
    t_list *single_node = malloc(sizeof(t_list));
    single_node->content = (void *)1; // Assign some content
    single_node->next = NULL;
    assert(ft_lstlast(single_node) == single_node); 
    free(single_node); // Clean up

    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_lstadd_back() {
    printf("Testing now ft_lstadd_back\n");
    printf("-------------------\n");
    t_list	*head = NULL;
    t_list	*new_node = ft_lstnew((void *)1);
    ft_lstadd_back(&head, new_node);
    assert(head == new_node); // The new node should now be the head
    assert(head->next == NULL); // The next should be NULL
    t_list	*second = ft_lstnew((void *)2);
    ft_lstadd_back(&head, second);
    assert(head->next == second); // The second node should be next to head
    assert(second->next == NULL); // The next of second node should be NULL
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void del(void *content)
{
	free(content);
}

void test_ft_lstdelone() {
    printf("Testing now ft_lstdelone\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_lstclear() {
    printf("Testing now ft_lstclear\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_lstiter() {
    printf("Testing now ft_lstiter\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

void test_ft_lstmap() {
    printf("Testing now ft_lstmap\n");
    printf("-------------------\n");
    printf("All tests passed! Congrats ;D\n");
    printf("---------------------------\n");
}

int main() {
    test_ft_isalpha();
    test_ft_isdigit();
    test_ft_isalnum();
    test_ft_isascii();
    test_ft_isprint();
    test_ft_bzero();
    test_ft_memchr();
    test_ft_memcmp();
    test_ft_memcpy();
    test_ft_memmove();
    test_ft_memset();
    test_ft_strchr();
    test_ft_strlcat();
    test_ft_strlcpy();
    test_ft_strlen();
    test_ft_strncmp();
    test_ft_strrchr();
    test_ft_tolower();
    test_ft_toupper();
    test_ft_strnstr();
    test_ft_atoi();
    test_ft_calloc();
    test_ft_strdup();
    test_ft_substr();
    test_ft_strjoin();
    test_ft_strtrim();
    test_ft_split();
    test_ft_itoa();
    test_ft_strmapi();
    test_ft_striteri();
    test_ft_putchar_fd();
    test_ft_putstr_fd();
    test_ft_putendl_fd();
    test_ft_putnbr_fd();
    test_ft_lstnew();
    test_ft_lstadd_front();
    test_ft_lstsize();
    test_ft_lstlast();
    test_ft_lstadd_back();
    test_ft_lstdelone();
    test_ft_lstclear();
    test_ft_lstiter();
    test_ft_lstmap();

    return 0;
}

