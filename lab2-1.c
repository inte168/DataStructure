#include <stdio.h>

int main()
{
    printf("----허정윤  2021041047-----\n");
    //char, int, float, double형 변수를 각각 선언
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    //각 변수의 크기를 sizeof 함수를 이용하여 출력
    printf("size of char: %ld byte\n", sizeof(charType));
    printf("size of int: %ld byte\n", sizeof(integerType));
    printf("size of float: %ld byte\n", sizeof(floatType));
    printf("size of double: %ld byte\n", sizeof(doubleType));

    printf("---------------------------------------\n");
    //자료형 자체를 sizeof 함수에 넣어 크기를 출력
    printf("size of char: %ld byte\n", sizeof(char));
    printf("size of int: %ld byte\n", sizeof(int));
    printf("size of float: %ld byte\n", sizeof(float));
    printf("size of double: %ld byte\n", sizeof(double));
    
    printf("---------------------------------------\n");
    //위 4개 자료형의 포인터 변수를 sizeof 함수에 넣어서 출력
    printf("size of char: %ld byte\n", sizeof(char*));
    printf("size of int: %ld byte\n", sizeof(int*));
    printf("size of float: %ld byte\n", sizeof(float*));
    printf("size of double: %ld byte\n", sizeof(double*));

    return 0;
}