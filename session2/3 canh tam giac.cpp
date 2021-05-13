#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	
	printf("Kiem tra su ton tai cua tam giac\n");
	printf("nhap canh 1:");
	scanf("%d",&a);
	printf("nhap canh 2:");
	scanf("%d",&b);
	printf("nhap canh 3:");
	scanf("%d",&c);
	if(a >= b + c || b >= a + c || c >= a + b){
		printf("Khong phai tam giac");
	} else {
		float p,s;
		printf("La tam giac\n");
		if((a + b + c) % 2 == 0){
			
			p = (a + b + c) / 2;
		} else {
			p = (a + b + c) / 2 + 0.5;
		}
		printf("Chu vi tam giac: %f", p * 2);
		s = sqrt(p * (p - a)* (p - b) * (p - c));
		printf("\nDien tich tam giac: %f", s);
		
	}
	
}
