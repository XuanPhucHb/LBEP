#include<stdio.h>
//nhap mang n so nguyen, tim so luong cac so duong lien tiep nhieu nhat
int main(){
	printf("nhap n: ");
	int n;
	scanf("%d", &n);
	int arr[n];
	int count = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		if(arr[i] > 0){
			count = 1; // danh dau co so duong trong mang
		}
	}
	if(count > 0){
		int countTemp = 1;
		for(int i = 0; i < n - 1; i++){
			if(arr[i] > 0 && arr[i+1] > 0){
				countTemp++;
				if(countTemp > count){
					count = countTemp;
				}
			} else {
				if(countTemp > count){
					count = countTemp;
				}
				countTemp = 1;
				printf("count: %d\n", count);
			}
		}
		printf("tong so duong lien tiep nhieu nhat: %d", count);
	} else {
		printf("khong co so duong trong mang");
	}
}
