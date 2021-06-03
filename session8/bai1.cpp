#include <stdio.h>
#include <math.h>

int main(){
	printf("nhap n");
	int n;
	scanf("%d",&n);
	printf("nhap cac phan tu cua mang");
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	printf("nhap x");
	int x;
	scanf("%d",&x);
	int b = 0 - abs(a[0]);
	for(int i = 0; i < n; i++){
		if(b < a[i] && a[i] < x){
			b = a[i];
		}
	}
	printf("so can tim: %d", b);
}
