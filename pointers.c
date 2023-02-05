/*
 * Chapter 2: Pointers
 *
 * Description: 
 *
 * Author: Zephyr Zhou
 * 
 * Date: 2.5.2023
 */

 #include <stdio.h>
 #include <math.h>

 int main()
 {
    /*
     * The following example is creation and assigning pointers of two 
     * primitive types.
     */
    int i = 100;
    int *i_pointer = &i;
    printf("The address of the integer: %d", i);
    printf(" is: %p\n", i_pointer);

    char j = 'K';
    char *j_pointer =  &j;
    printf("The address of the integer: %c", j);
    printf(" is: %p\n", j_pointer);

    printf("-----------------------------------\n");
    /*
     * What about the case of non-primitive type? An array?
     */

    int arr[5] = {1, 3, 5, 7, 9};
    int *arr_pointer_5 = &arr[4];
    int *arr_pointer_4 = &arr[3];
    printf("The address of the fifth element of this array is: %p\n", arr_pointer_5);
    printf("The address of the forth element of this array is: %p\n", arr_pointer_4);
    printf("-----------------------------------\n");

    /*
     * We can try using pointers to assign values back into the array
     * using the above provided example.
     */

    // Note here, the address of firstEle differs from the address of arr[0].
    int firstEle = arr[0];
    int *arr_pointer_1 = &firstEle;
    printf("The origin first value: %d\n", firstEle);
    printf("The address of the firstEle: %p\n", arr_pointer_1);
    printf("The address of the first element of the array: %p\n", &arr[0]);
    

    // We are modifing the value at firstEle's address, hence no modification 
    // will be done to the array.
    *arr_pointer_1 = 0;
    printf("The new first value: %d\n", firstEle);

    printf("-----------------------------------\n");

    /*
     * Is there a way we can use pointers to make change to an array? Absolutely.
     * Suppose we want to change the first element of the above array to "2".
     */

    int arr_2[5] = {1, 4, 6, 8, 10};
    printf("The origin value of the first element of arr_2: %d\n", arr_2[0]);

    *(&arr_2[0]) = 2;
    printf("The new value of the first element of arr_2: %d\n", arr_2[0]);

    printf("-----------------------------------\n");

    /*
     * Then we can consider using pointer arithemetic to traverse and  make shifts to 
     * values in an array.
     */

    int arr_3[5] = {1, 2, 3, 4, 5};
    int *firstAddress = &arr_3[0];
    printf("1: %d\n", *firstAddress);
    printf("4: %d\n", *(firstAddress + 3));

    int index = 0;

    while (index < 5){
        *firstAddress = (*firstAddress) * (*firstAddress);
        printf("The new element at index: %d", index);
        printf(" is: %d", *firstAddress);
        printf(" The address is: %p\n", firstAddress);

        // When we add "unit 1" to a pointer, what is happening under the hood
        // is that the address increase by a size of "unit size" in this array.
        // 4 Bytes in this case since all elements are integers. 
        firstAddress = firstAddress + 1;
        index++;
    }

    return (0);
 }
