#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c,delta;
	int x1,x2;
	printf("giai PT bac 2 mot an");
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
	printf("nhap c:");
	scanf("%d",&c);
	if (a == 0){
		if(b == 0){
			if(c == 0){
				printf("vo so nghiem");
			} else {
				printf("vo nghiem");
			}
		} else {
			printf("1 nghiem: x = %d", -c / b);
		}
	} else {
		delta = b * b - 4 * a * c;
		if (delta > 0){
			printf("2 nghiem: \n");
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("x1 = %d", x1);
			printf("\nx2 = %d", x2);
		} else if (delta == 0) {
			printf("nghiem kep:\n x1 = x2 = %d", -b / (2 * a));
		} else {
			printf("vo nghiem");
		}
	}
	
}
