/*
 * Chapter 1: Printing Result
 *
 * Description: 
 *
 * Author: Zephyr Zhou
 * 
 * Date: 2.5.2023
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("1. Print an integer: %d\n", 100);
    printf("2. Print a character: %c\n", 'K');
    printf("3. Print a string: %s\n", "Rice University");
    printf("--------------------------------------------\n");

    bool flag_1 = true;
    bool flag_0 = false;
    printf("4. Print a bool in term of 1 and 0: \n");
    printf("flag_1: %d\n", flag_1);
    printf("flag_0: %d\n", flag_0);

    return(0);
}