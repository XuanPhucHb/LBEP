#include <stdio.h>

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
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			printf("%d da co trong mang", x);
			return 0;
		}
	}
	n++;
	printf("n: %d\n", n);
	a[n - 1] = x;
	printf("mang sau khi them:\n");
	for(int i = 0; i < n; i++){
		printf("%d\n", a[i]);
	}
}
