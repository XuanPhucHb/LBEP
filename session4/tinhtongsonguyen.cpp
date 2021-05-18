#include <stdio.h>

int main(){
	int tong, count = 1;
	
	while(count <= 100000){
		tong += count;
		count++;
	}
	printf("tong so nguyen tu 1 den 100000: %d", tong);
}
