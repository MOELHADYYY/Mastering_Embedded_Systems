#include <stdio.h>


struct complex
{
    int real1;
    int cmplx1;
    
    int real2;
    int cmplx2;
};

int add(struct complex x)
{
    int res1=x.real1+x.real2;
    int res2=x.cmplx1+x.cmplx2;
    printf("%d + %di",res1,res2);

}


int main() 
{
    struct complex x;
    printf("enter 1st complex number");
    scanf("%d \n %d",&x.real1,&x.cmplx1);


    printf("enter 2nd complex number");
    scanf("%d \n %d",&x.real2,&x.cmplx2);
    add( x );

}