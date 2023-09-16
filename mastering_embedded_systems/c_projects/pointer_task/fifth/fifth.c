#include <stdio.h>
struct employee
{
    int age;
    char name[10];
}


int main()
{
struct employee emp1={30,{"mohamed hady"}};
struct employee *ptrs;
ptrs =&emp1;



    return 0;
}