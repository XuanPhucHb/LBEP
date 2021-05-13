#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
	printf("nhap c:");
	scanf("%d",&c);
	if(a < b){
		if(a < c){
			printf("so nho nhat: %d", a);
		} else {
			printf("so nho nhat: %d", c);
		}
	} else {
		if(b < c){
			printf("so nho nhat: %d", b);
		} else {
			printf("so nho nhat: %d", c);
		}
	}
	
}
