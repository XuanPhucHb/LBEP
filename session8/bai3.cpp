#include <stdio.h>

int main(){
	printf("nhap n");
	int n;
	scanf("%d",&n);
	printf("nhap cac phan tu cua mang");
	int a[n], tg;
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
		for(int k=0;k<=i;k++){
			for(int j = 0;j < i; j++){
	            if(a[j] > a[j + 1]){
	                tg = a[j];
	                a[j] = a[j + 1];
	                a[j + 1] = tg;
	            }
	        }
	        
		}
        
	}
	printf("mang sau khi sap xep:\n");
	for(int e = 0; e < n; e++){
		printf("%d\n", a[e]);
	}
}
