#include <stdio.h>

int main(){
	int n, a;
	printf("nhap n nguyen duong va khong qua 4 chu so:");
	scanf("%d", &n);
	if(n < 1 || n > 9999){
		printf("khong hop le!!!");
	} else {
		while(n/10 > 0 || n%10 > 0){
			a = n %10;
			printf("%d", a);
			n = n / 10;
		}
		
	}
}
