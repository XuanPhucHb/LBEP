#include <stdio.h>

int main(){
	float tong;
	float count = 1;
	
	while(count <= 1000){
		tong += (float)1/count;
		count++;
	}
	printf("tong so nguyen tu 1 den 1/1000: %f", tong);
}
