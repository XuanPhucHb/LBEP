#include <stdio.h>

void checkInArray(){
	int a[5] = [12, 51, 10, 22, 99];
	printf("Nhap 1 so");
	int n;
	scanf("%d",&n);
	for(int i; i < 5; i++){
		if(n == a[i]){
			printf("%d thuoc mang", n);
			return;
		}
	}
	printf("%d khong thuoc mang", n);
}

void checkOddArray(){
	int a[5] = [12, 51, 10, 22, 99, 19, 22, 101, 9999, 71287, 0];
	printf("Cac so le trong mang: ");
	for(int i; i < 5; i++){
		if(a[i] % 2 != 0){
			printf("%d ", a[i]);
		}
	}
}
int timucln(int a, int b){
	if(a*b == 0){
		return 0;
	} else {
		while (a*b != 0){ 
	        if (a > b){
	            a %= b;
	        }else{
	            b %= a;
	        }
    	}
    	return a + b;
	}
}

int main(){
	printf("Chon chuc nang:\n");
	printf("1. Tim 1 so co nam trong mang khong\n");
	printf("2. In ra cac so le trong mang\n");
	printf("3. Tim UCLN cua 2 so\n");
	printf("4. Tim BCNN cua 2 so\n");
	int n;
	scanf("%d",&n);
	switch(n){
		case 1:
			checkInArray();
			break;
		case 2:
			
			break;
		case 3:
			int a, b;
			printf("nhap a: ");
			scanf("%d", &a);
			printf("nhap b: ");
			scanf("%d", &b);
			printf("uoc chung lon nhat: %d", timucln(a, b));
			break;
		case 4:
			break;
		default:
			break;
	}
}
