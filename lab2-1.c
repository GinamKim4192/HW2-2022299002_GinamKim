#include <stdio.h>
int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("----- [김기남]   [2022299002] -----\n");

    // char자료형은 1byte의 메모리 크기를 사용한다.
    printf("Size of char: %ld byte\n",sizeof(charType));
    // int자료형은 4bytes의 메모리 크기를 사용한다.
    printf("Size of int: %ld bytes\n",sizeof(integerType));
    // float자료형은 4bytes의 메모리 크기를 사용한다.
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    // double자료형은 8bytes의 메모리 크기를 사용한다.
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    printf("-----------------------------------------\n");
    // 변수명을 지정하지 않은 자료형에도
    // 위와 동일한 메모리 크기를 사용한다.
    printf("Size of char: %ld byte\n",sizeof(char));
    printf("Size of int: %ld bytes\n",sizeof(int));
    printf("Size of float: %ld bytes\n",sizeof(float));
    printf("Size of double: %ld bytes\n",sizeof(double));
    printf("-----------------------------------------\n");
    // 포인터는 주소값을 할당받아, 단순히 해당 주소에 접근하는 것이기에
    // 주소만 할당받을 수 있는 메모리 크기인 4bytes만 사용한다.
    // 단, 위의 내용들은 컴파일러가 64bit가 아닌 32bit를 사용할 경우임.
    printf("Size of char*: %ld byte\n",sizeof(char*));
    printf("Size of int*: %ld bytes\n",sizeof(int*));
    printf("Size of float*: %ld bytes\n",sizeof(float*));
    printf("Size of double*: %ld bytes\n",sizeof(double*));

    return 0;
}

