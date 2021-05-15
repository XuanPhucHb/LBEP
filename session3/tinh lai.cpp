#include <stdio.h>

int main(){
	float lai = 0.08, tongtien = 4000;
	printf("tinh tong tien sau 4 nam voi 4000$ va lai suat la 8/nam", lai);
	tongtien += tongtien * 0.08;
	printf("\ntong tien sau 1 nam: %f", tongtien);
	tongtien += tongtien * 0.08;
	printf("\ntong tien sau 2 nam: %f", tongtien);
	tongtien += tongtien * 0.08;
	printf("\ntong tien sau 3 nam: %f", tongtien);
	tongtien += tongtien * 0.08;
	printf("\ntong tien sau 4 nam: %f", tongtien);
	
}
