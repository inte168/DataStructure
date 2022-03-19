#include <stdio.h>

int main()
{
    int i;
    int *ptr;
    int **dptr;
    printf("----������  2021041047-----\n");
    i = 1234;

    printf("[checking values before ptr = &i] \n");     //ptr=&i�� �ϱ� �� ��µ�
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("values of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
                                                        //���� ��������� i�� ���� 1234, ptr�� ���� �����Ⱚ�� ���� ���̰�, i�� ptr �ּҰ��� �״�� ���� ���̴�.
    ptr=&i;    /*ptr is now holding the address of i */

    printf("\n[checking values after ptr = &i] \n");    //ptr=&i�� ������ ���� ���
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("values of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("values of *ptr == %d\n", *ptr);
                                                        //ptr�� ���� i�� �ּҰ��� ����ϰ�, *ptr�� i�� ���� 1234�� ���. �������� ���� ����
    dptr = &ptr;    /* dptr is now holding the address of ptr */

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("values of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("values of *ptr == %d\n", *ptr);             //������� ���� ������ ��°� ����
    printf("values of dptr == %p\n", dptr);
    printf("address of dptr == %p\n", &dptr);
    printf("values of *dptr == %p\n", *dptr);
    printf("values of **dptr == %d\n", **dptr);
                                                        //dptr�� ptr�� �ּҰ� ���, &dptr�� �״�� �ڱ� �ּҰ�, *dptr�� ptr�� ��, �� i�� �ּ�, **dptr�� i�� �� 1234. 
    *ptr = 7777;    /* changing the value of *ptr */    //ptr�� ���� �ּ�(==i�� �ּ�)�� ���� ���� 7777�� �ٲ۴�.

    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);
    printf("values of *ptr == %d\n", *ptr);
    printf("values of **dptr == %d\n", **dptr);
                                                        //i�� ���� 7777, *ptr�� 7777, **dptr�� 7777
    return 0;
}