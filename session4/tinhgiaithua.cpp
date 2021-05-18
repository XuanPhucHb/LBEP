#include <stdio.h>

int main(){
	int n, ketqua = 1;
	printf("Nhap n: ");
	scanf("%d", &n);
	int count = 2;
	if(n <= 0){
		printf("nhap so nguyen duong!!!");
	} else {
		while(count <= n){
		ketqua *= count;
		count++;
		}
		printf("%d! = %d", n, ketqua);
	}
	
}
