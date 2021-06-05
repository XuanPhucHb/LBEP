#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	
	printf("Check the existence of a triangle\n");
	printf("Input edge 1:");
	scanf("%d",&a);
	printf("Input edge 2:");
	scanf("%d",&b);
	printf("Input edge 3:");
	scanf("%d",&c);
	if(a <= 0 || b <= 0 || c <= 0){
		printf("The edge of triangle must greater than 0");
	} else if(a >= b + c || b >= a + c || c >= a + b){
		printf("This triangle is not exist with 3 edges");
	} else {
		float p,s;
		printf("This is a triangle\n");
		if((a + b + c) % 2 == 0){
			p = (a + b + c) / 2;
		} else {
			p = (a + b + c) / 2 + 0.5;
		}
		s = sqrt(p * (p - a)* (p - b) * (p - c));
		printf("\nThe area of the triangle: %f", s);
	}
	
}
