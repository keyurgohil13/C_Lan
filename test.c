#include<stdio.h>
main(){
	
	int a, b, sum;
	
	printf("Enter your choice no. :- ");
	scanf("%d", &a);
	
	printf("Enter your second choice :-");
	scanf("%d", &b);
	
	sum = a + b;
	
	printf("Sum of %d and %d is = %d", a,b,sum);
}