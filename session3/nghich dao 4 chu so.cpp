#include <stdio.h>

int main(){
	int n;
	printf("nhap n nguyen duong va khong qua 4 chu so:");
	scanf("%d", &n);
	if(n < 1 || n > 9999){
		printf("khong hop le!!!");
	} else {
		if(n < 10){
			printf("so nghich dao: %d", n);
		} else if(n < 100){
			printf("so nghich dao: :");
			printf("%d", n % 10);
			n = n / 10;
			printf("%d", n % 10);
		} else if(n < 1000){
			printf("so nghich dao: :");
			printf("%d", n % 10);
			n = n / 10;
			printf("%d", n % 10);
			n = n / 10;
			printf("%d", n % 10);
		} else (n < 10000){
			printf("so nghich dao: :");
			printf("%d", n % 10);
			n = n / 10;
			printf("%d", n % 10);
			n = n / 10;
			printf("%d", n % 10);
			n = n / 10;
			printf("%d", n % 10);
		}
	}
}
