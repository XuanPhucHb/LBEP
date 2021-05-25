#include<stdio.h>

int main(){
	printf("nhap n: ");
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("nhap x: ");
	int x;
	scanf("%d", &x);
	for(int i = 0; i < n; i++){
		if(x == arr[i]){
			printf("%d thuoc mang", x);
			break;
		}
	}
}
