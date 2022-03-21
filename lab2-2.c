#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;

i = 1234;

printf("[----- [조정동] [2017015041] -----]\n");

printf("\n[checking values before ptr = &i] \n");
printf("value of i == %d\n", i); //i 값
printf("address of i == %p\n", &i); //i 값이 저장되어있는 주소
printf("value of ptr == %p\n", ptr); //ptr의 값
printf("address of ptr == %p\n", &ptr); //ptr이 저장되어있는 주소

ptr = &i; /* ptr is now holding the address of i */

printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i); //i 값
printf("address of i == %p\n", &i); //i 값이 저장되어있는 주소
printf("value of ptr == %p\n", ptr); //ptr의 값 (ptr = i 값이 저장되어있는 주소)
printf("address of ptr == %p\n", &ptr); //ptr이 저장되어있는 주소
printf("value of *ptr == %d\n", *ptr); //포인터 ptr이 가리키는 값을 가져옴 즉 i의 값인 1234 출력 

dptr = &ptr; /* dptr is now holding the address of ptr */

printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i); //i 값
printf("address of i == %p\n", &i); //i 값이 저장되어있는 주소
printf("value of ptr == %p\n", ptr); //ptr 값
printf("address of ptr == %p\n", &ptr); //ptr 값이 저장되어있는 주소
printf("value of *ptr == %d\n", *ptr); //포인터 ptr이 가리키는 값을 가져옴
printf("value of dptr == %p\n", dptr); //dptr 값 (dptr = ptr 값이 저장되어있는 주소)
printf("address of dptr == %p\n", &dptr); //dptr 값이 저장되어있는 주소
printf("value of *dptr == %p\n", *dptr); //포인터 dptr이 가리키는 값을 가져옴 즉 ptr의 값을 출력
printf("value of **dptr == %d\n", **dptr); //포인터 함수를 두번쓴 것으로 dptr이 가리키는 값인 ptr의 값을 가져오고 
                                           //ptr이 가리키는 값인 i의 값을 가져옴

*ptr = 7777; /* changing the value of *ptr */   

printf("\n[after *ptr = 7777] \n"); 
printf("value of i == %d\n", i); //*ptr = i값 이므로 i 값이 7777로 바뀌어서 출력
printf("value of *ptr == %d\n", *ptr); //*ptr값인 7777이 출력
printf("value of **dptr == %d\n", **dptr); // **dptr = *ptr = i값 이므로 7777이 출력 

**dptr = 8888; /* changing the value of **dptr */

printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i); //**dptr = *ptr = i값 이므로 i = 8888이 출력
printf("value of *ptr == %d\n", *ptr); //**dptr = *ptr 이므로 8888이 출력
printf("value of **dptr == %d\n", **dptr); //**dptr = 8888이 출력

return 0;
}