#include <stdio.h>


struct student
{
    char name[30];
    int roll;
    float mark;
};



int main() 
{
    struct student x[10];
    for(int i=0;i<10;i++)
    {
    printf("enter name");
    fgets(x[i].name[i],sizeof (x[i].name),stdin);

    printf("enter roll :");
    scanf("%d",&x[i].roll);

    printf("enter mark :");
    scanf("%f",&x[i].mark);

    }

for(int i = 0; i < 10; i++)
    {
        printf("Student name: %s", x[i].name);
        printf("Student roll: %d\n", x[i].roll);
        printf("Student mark: %f\n\n", x[i].mark);
    }

   
}