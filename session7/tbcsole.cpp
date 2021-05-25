#include<stdio.h>

int main(){
	printf("nhap n: ");
	int n;
	scanf("%d", &n);
	int arr[n];
	int sum = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		if(arr[i] % 2 != 0)
			sum += arr[i];
			printf("tong: %d\n", sum);
	}
	
		printf("tong: %f\n", sum);
	printf("trung binh cong: %f", (float)sum/n);
	
}
