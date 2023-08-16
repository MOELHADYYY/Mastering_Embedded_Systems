#include <stdio.h>


struct distance
{
   float dist1_inch;
    float dist1_feet;
    
    float dist2_inch;
    float dist2_feet;
};

int add(struct distance x)
{
    int res1=x.dist1_inch+x.dist2_inch;
    int res2=x.dist1_feet+x.dist2_feet;
    printf("%d \ %d",res1,res2);

}


int main() 
{
    struct distance x;
    printf("enter 1st distance");
    scanf("%f \n %f",&x.dist1_inch,&x.dist1_feet);


    printf("enter 2nd distance");
    scanf("%f \n %f",&x.dist2_inch,&x.dist2_feet);
    add( x );

}