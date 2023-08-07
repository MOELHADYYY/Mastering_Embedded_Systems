#include<stdio.h>
#include<stdlib.h>
int get_factorial(int x);

int main() 
{
    int i,y;
printf("enter the number: ");
scanf("%d",&i);
printf(" the number is : %d \n",i);


if(y==0)
{
    printf("factorial undefined");
}else
{
y = get_factorial(i);
}
printf("the factorial is%d",y);

}


int get_factorial(int x){
   
    if(x<=0)
    {
        return 0;
    }else
    { 
        
      return x*get_factorial(x-1);
    }
   
    }
