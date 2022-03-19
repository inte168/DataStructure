#include <stdio.h>

int main()
{
    int i;
    int *ptr;
    int **dptr;
    printf("----허정윤  2021041047-----\n");
    i = 1234;

    printf("[checking values before ptr = &i] \n");     //ptr=&i를 하기 전 출력들
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("values of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
                                                        //위의 결과값들은 i의 값은 1234, ptr의 값은 쓰레기값이 있을 것이고, i와 ptr 주소값은 그대로 나올 것이다.
    ptr=&i;    /*ptr is now holding the address of i */

    printf("\n[checking values after ptr = &i] \n");    //ptr=&i를 선언한 후의 출력
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("values of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("values of *ptr == %d\n", *ptr);
                                                        //ptr의 값이 i의 주소값을 출력하고, *ptr은 i의 값인 1234를 출력. 나머지는 위와 동일
    dptr = &ptr;    /* dptr is now holding the address of ptr */

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("values of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("values of *ptr == %d\n", *ptr);             //여기까진 위의 문단의 출력과 동일
    printf("values of dptr == %p\n", dptr);
    printf("address of dptr == %p\n", &dptr);
    printf("values of *dptr == %p\n", *dptr);
    printf("values of **dptr == %d\n", **dptr);
                                                        //dptr은 ptr의 주소값 출력, &dptr은 그대로 자기 주소값, *dptr은 ptr의 값, 즉 i의 주소, **dptr은 i의 값 1234. 
    *ptr = 7777;    /* changing the value of *ptr */    //ptr의 값인 주소(==i의 주소)에 적힌 값을 7777로 바꾼다.

    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);
    printf("values of *ptr == %d\n", *ptr);
    printf("values of **dptr == %d\n", **dptr);
                                                        //i의 값은 7777, *ptr은 7777, **dptr도 7777
    return 0;
}