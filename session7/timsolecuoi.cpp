#include<stdio.h>
//nhap mang n so nguyen, tim so le cuoi cung cua mang
int main(){
	printf("nhap n: ");
	int n;
	scanf("%d", &n);
	int arr[n];
	int solecuoi;
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		if(arr[i] % 2 != 0){
			solecuoi = arr[i];
		}
	}
		if(solecuoi % 2 == 0){
			printf("khong co so le trong mang");
		} else {
			printf("so le cuoi trong mang: %d", solecuoi);
		}
	
}
