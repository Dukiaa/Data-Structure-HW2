#include <stdio.h>
int main()
{
char charType;
int integerType;
float floatType;
double doubleType;



printf("[----- [조정동] [2017015041] -----]\n");

printf("\nSize of char: %ld byte\n",sizeof(charType)); //자료형 char의 메모리 크기
printf("Size of int: %ld bytes\n",sizeof(integerType)); //자료형 int의 메모리 크기
printf("Size of float: %ld bytes\n",sizeof(floatType)); //자료형 float의 메모리 크기
printf("Size of double: %ld bytes\n",sizeof(doubleType)); //자료형 double의 메모리 크기

printf("-----------------------------------------\n");

printf("Size of char: %ld byte\n",sizeof(char)); //변수 char의 메모리 크기
printf("Size of int: %ld bytes\n",sizeof(int)); //변수 int의 메모리 크기
printf("Size of float: %ld bytes\n",sizeof(float)); //변수 float의 메모리 크기
printf("Size of double: %ld bytes\n",sizeof(double)); //변수 double의 메모리 크기

printf("-----------------------------------------\n");

printf("Size of char*: %ld byte\n",sizeof(char*)); //char 주소의 메모리 크기
printf("Size of int*: %ld bytes\n",sizeof(int*)); //int 주소의 메모리 크기
printf("Size of float*: %ld bytes\n",sizeof(float*)); //float 주소의 메모리 크기
printf("Size of double*: %ld bytes\n",sizeof(double*)); //double 주소의 메모리 크기

return 0;
}

