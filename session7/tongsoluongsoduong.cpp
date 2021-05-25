#include<stdio.h>
//nhap mang n so nguyen, tim so luong cac so duong lien tiep nhieu nhat
int main(){
	printf("nhap n: ");
	int n;
	scanf("%d", &n);
	int arr[n];
	int sum = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	sum = 0;
	int sumTemp = 0;
	for(int i = 0; i < n - 1; i++){
		if(arr[i] > 0 && arr[i+1] > 0){
			sumTemp += arr[i];
			if(i == n - 2 && arr[n - 1] > 0){
				sumTemp += arr[n - 1];
			}
			if(sumTemp > sum){
				sum = sumTemp;
			}
		} else {
			if(arr[i] > 0){
				sumTemp += arr[i];
			}
			if(sumTemp > sum){
				sum = sumTemp;
			}
			sumTemp = 0;
		}
	}
	printf("tong so duong lien tiep nhieu nhat: %d", sum);
}
