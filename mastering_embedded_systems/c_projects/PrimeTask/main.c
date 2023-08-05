#include <stdio.h>
#include <stdlib.h>


int is_prime(int x);
int interval1,interval2;


int main () {

	printf("enter first number ");
	scanf("%d",&interval1);
	printf("enter seconed number  ");
	scanf("%d",&interval2);
	printf("the prime numbers between the interval are:\n");

	for(interval1;interval1<=interval2;interval1++){
		if(is_prime(interval1)){
			printf("%d\n",interval1);
		}
	}

}
int is_prime(int x)
{
    int i;

	if(x<=1){
		return 0;
	}
	for(i=2; i*i<=x;i++){
		if(x%i==0){
			return 0;
		}else {
			return 1;
		}
	}


}

