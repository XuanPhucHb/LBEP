#include <stdio.h>

int main(){
		float lai = 0.08, tongtien;
		int nam;
	printf("Ban muon gui bao nhieu tien?");
	scanf("%f", &tongtien);
	printf("Ban muon gui trong bao nhieu nam?");
	scanf("%d", &nam);
	printf("tinh tong tien sau %d nam voi %f$ va lai suat la %f/nam", nam, tongtien, lai);
	int count = 1;
	while(count <= nam){
		printf("\ntong tien sau %d nam: %f", count, tongtien);
		tongtien += tongtien * 0.08;
		count++;
	}
}
