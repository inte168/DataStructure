#include <stdio.h>

int main()
{
    printf("----������  2021041047-----\n");
    //char, int, float, double�� ������ ���� ����
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    //�� ������ ũ�⸦ sizeof �Լ��� �̿��Ͽ� ���
    printf("size of char: %ld byte\n", sizeof(charType));
    printf("size of int: %ld byte\n", sizeof(integerType));
    printf("size of float: %ld byte\n", sizeof(floatType));
    printf("size of double: %ld byte\n", sizeof(doubleType));

    printf("---------------------------------------\n");
    //�ڷ��� ��ü�� sizeof �Լ��� �־� ũ�⸦ ���
    printf("size of char: %ld byte\n", sizeof(char));
    printf("size of int: %ld byte\n", sizeof(int));
    printf("size of float: %ld byte\n", sizeof(float));
    printf("size of double: %ld byte\n", sizeof(double));
    
    printf("---------------------------------------\n");
    //�� 4�� �ڷ����� ������ ������ sizeof �Լ��� �־ ���
    printf("size of char: %ld byte\n", sizeof(char*));
    printf("size of int: %ld byte\n", sizeof(int*));
    printf("size of float: %ld byte\n", sizeof(float*));
    printf("size of double: %ld byte\n", sizeof(double*));

    return 0;
}