#include <stdio.h>


int main(){
	int a, b;
	
	printf("nhap a: ");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);
	if(a*b == 0){
		printf("Nhap sai");
	} else {
		while (a*b != 0){ 
	        if (a > b){
	            a %= b;
	        }else{
	            b %= a;
	        }
    	}
    	printf("uoc chung lon nhat: %d", a + b);
	}
}
