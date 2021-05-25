#include<stdio.h>
//nhap mang n so nguyen, tim so duong nho nhat
int main(){
	printf("nhap n: ");
	int n;
	scanf("%d", &n);
	int arr[n];
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int soduongnhonhat = arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i] > 0 && arr[i] < soduongnhonhat){
			soduongnhonhat = arr[i];
		}
	}
		if(soduongnhonhat <= 0){
			printf("khong co duong trong mang");
		} else {
			printf("so duong nho nhat trong mang: %d", soduongnhonhat);
		}
	
}
