#include<stdio.h>
main(){
	
	int l,r;
	float area;
	const float pi = 3.14;
	
	printf("Add circle radius :-");
	scanf("%d", &r);
	
	area = pi * (r*r);
	
	printf("Area of square = %f", area);
}