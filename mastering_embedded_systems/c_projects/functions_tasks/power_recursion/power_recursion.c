#include<stdio.h>
#include<stdlib.h>

int main()
{ int number,power,y;
printf("enter your number");
scanf("%d",&number);
printf("enter power");
scanf("%d",&power);
y=get_power(number,power);
printf("the result is %d",y);

}

int get_power(int num,int pow)
{
    if (pow==0)
    {
        return 1;
    }else{
return num*get_power( num , pow-1);
    }

  }