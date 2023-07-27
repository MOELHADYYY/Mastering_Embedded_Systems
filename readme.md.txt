print ascii of a character

#include <avr/io.h>
#include <util/delay.h>

void main()
{
	char x;

	while(1)
	{
		printf("enter a character:\t");
		scanf("%c",&x);
		printf("ascii of   character is:%d",x);


	}




}
*********************************************************
swap two numbers
#include <avr/io.h>
#include <util/delay.h>

void main()
{
	float x=1.2;
	float y=2.45;
	float z;

	while(1)
	{
		float z=x;
		float x=y;
		float y=z;

	}




}
******************************************
checking odd or even
#include <stdio.h>
#include <stdlib.h>

void main()
{
  int x;
  printf("enter your number :");
  scanf("%d",&x);
  if(x %2==0){
    printf("your number is even");

  } else {
    printf("your number is odd");

  }
}
*************************************************
checking consonant or vowel
#include <stdio.h>
#include <stdlib.h>

void main()
{
  char x;
  printf("enter your alphabet :");
  scanf("%c",&x);
  switch (x)
  {
  case 'a':
    case 'e':
         case 'i':
             case 'o':
                 case 'u':
  {
      printf("the letter is vowel");
  }
  break;
                 default:
                    printf("letter is consonant");

}}
**************************************************
factorial code
#include <stdio.h>
#include <stdlib.h>

void main()
{
  int x, factorial=1,i;

  printf("enter your number :");
  scanf("%d",&x);

  if(x>0){
for (i=1;i<=x;i++){
    factorial*=i;



  }
  printf("%d",factorial);
  } else if (x==0){
  
  printf("factorila is 1")
  }else{
      printf("the number has no factorial")
  }
}


*********************************************
calculator
 #include <stdio.h>
#include <stdlib.h>

void main()
{
  int x,i,sum,mult,div,subt,sign;


  printf("enter your numbers :    ");
  scanf("%d\t %d",&x,&i);

  printf("Select an operation: 1. Add 2. Subtract 3. Multiply 4. Divide\n");
  scanf("%d",&sign);
  switch(sign){

  case 1 :
      {
         printf("the sum is %d ",sum=x+i);
      }
      break;
       case 2  :
      {
         printf("the subt is %d ",subt=x-i);
      } break;
       case 3 :
      {
         printf("the product is %d ",mult=x*i);
      }break;
       case 4 :
      {
         printf("the division is %d ",sum=x/i);
      } break;
      default:{
      printf("wrong operation");
      }





  }









 }

