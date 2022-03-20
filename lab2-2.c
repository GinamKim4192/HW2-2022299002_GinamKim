#include <stdio.h>
int main()
{
    int i;
    int *ptr;
    int **dptr;
    i = 1234;

    printf("----- [김기남]   [2022299002] -----\n");

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);

    ptr = &i; /* ptr is now holding the address of i */

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    /* i의 메모리 주소를 ptr의 값으로 할당 받은 것이다.
    printf("value of ptr == %p\n", ptr);
    /* i의 메모리 주소와 ptr의 메모리 주소는 다르다.
       따라서, ptr은 i의 메모리 주소를 참조할뿐,
       ptr의 메모리 주소가 i의 메모리 주소로 이동하는 것이 아니다. */
    printf("address of ptr == %p\n", &ptr);
    /* *ptr은 ptr에 할당되어 있는 값을 이용하여
       해당 메모리 주소로 이동 및 할당되어 있는 값을 가져온다. */
    printf("value of *ptr == %d\n", *ptr);

    dptr = &ptr; /* dptr is now holding the address of ptr */
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of dptr == %p\n", dptr);
    printf("address of ptr == %p\n", &dptr);
    printf("value of *dptr == %p\n", *dptr);
    printf("value of **dptr == %d\n", **dptr);
    *ptr = 7777; /* changing the value of *ptr */
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);
    **dptr = 8888; /* changing the value of **dptr */
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);
    return 0;
    return 0;

}

