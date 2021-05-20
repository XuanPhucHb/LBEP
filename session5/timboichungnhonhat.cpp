#include <stdio.h>


int main(){
	int a, b;
	
	printf("nhap a: ");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);
	if (a == 0 || b == 0){
        printf("nhap sai");
    }else {
    	int bcnn = a * b;
    	if(a == b){
    		printf("bcnn: %d", bcnn);
		} else if(a > b){
			while(a > b){
    			a -= b;
			}
		}else {
			while(a < b){
    			b -= a;
			}
		}
    	
    	
	}
    
}
