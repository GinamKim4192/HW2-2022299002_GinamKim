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
    /* *ptr은 ptr에 할당되어 있는 값과 같은
       해당 메모리 주소로 이동 및 할당되어 있는 값을 가져온다. */
    printf("value of *ptr == %d\n", *ptr);

    dptr = &ptr; /* dptr is now holding the address of ptr */
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);
    // dptr은 ptr의 메모리 주소를 값으로 할당받음.
    printf("value of dptr == %p\n", dptr);
    /* dptr은 i와 ptr의 메모리 주소는 다르다.
       따라서, dptr은 ptr의 메모리 주소를 참조할 뿐,
       dptr의 메모리 주소가 i의 메모리 주소로 이동하는 것이 아니다.*/
    printf("address of dptr == %p\n", &dptr);
    /* *dptr은 dptr에 할당된 값과 같은,
        ptr의 메모리 주소로 이동하여 ptr에 할당되어 있는 값을 가져온다.*/
    printf("value of *dptr == %p\n", *dptr);
    /* **dptr은 dptr에 할당된 값과 같은 메모리 주소로 이동 및
       해당 주소에 할당되어 있는 값을 가져오고,
       한 번더, 그 값과 같은 메모리 주소로 이동 및 할당되어 있는 값을 가져온다*/
    printf("value of **dptr == %d\n", **dptr);

    *ptr = 7777; /* changing the value of *ptr */
    /* *ptr = 7777; 은 ptr에 할당되어 있는 값과 같은 메모리 주소로 이동한 상태에서
       이동한 메모리 주소의 값을 바꾼다.
       따라서, 실질적으로 i의 값을 7777로 새로 할당하는 것이다.*/
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);

    **dptr = 8888; /* changing the value of **dptr */
    /* **dptr = 8888; 은 dptr에 할당되어 있는 값과 같은 메모리 주소로 이동한 상태에서
    한번 더, 이동한 메모리 주소에 할당되어 있는 값과 같은 메모리 주소로 이동한다.
    이후에 최종적으로 도착한 메모리 주소의 값을 8888로 새로 할당하는 것이다.
    즉, 실질적으로 i의 값이 8888로 바뀌는 것이다.*/
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);
    return 0;

}

