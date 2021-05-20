#include <stdio.h>


int main(){
	printf("nhap n: ");
	int n, count = 1, s = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n / 2; i++){
		if(n % i == 0){
			s += i;
			count++;
		}
	}
	s += n;
	printf("\nso uoc: %d", count);
	printf("\ntong cac uoc: %d", s);
}
