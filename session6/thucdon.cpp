#include <stdio.h>

int main(){
	int n;
	int flag = 1;
	
	int tongtien = 0;
	while(flag == 1){
		printf("\n1. Chon mon an");
		printf("\n2. Goi do uong");
		printf("\n3. Thanh toan");
		printf("\n4. Thoat chuong trinh");
		printf("\nLua chon: ");
		scanf("%d", &n);
		int flag2 = 1;
		switch(n){
			case 1:
				while(flag2 == 1){
					printf("------------------");
					printf("\nMoi chon mon");
					printf("\n1. Com ga");
					printf("\n2. Pho");
					printf("\n3. Bun");
					printf("\n4. Quay lai");
					int chonmon;
					printf("\nLua chon: ");
					scanf("%d", &chonmon);
					switch (chonmon){
						case 1:
							printf("Cam on quy khach\n");
							tongtien += 50000;
							flag2 = 0;
							break;
						case 2:
							printf("Cam on quy khach\n");
							tongtien += 40000;
							flag2 = 0;
							break;
						case 3:
							printf("Cam on quy khach\n");
							tongtien += 40000;
							flag2 = 0;
							break;
						case 4:
							flag2 = 0;
							break;
						default:
							break;
					}
				}
				printf("------------------");
				break;
			case 2:
				while(flag2 == 1){
					printf("Moi chon do uong");
					printf("\n1. Cocacola");
					printf("\n2. Nuoc loc");
					printf("\n3. Coffee");
					printf("\n4. Quay lai");
					int chonmon;
					printf("\nLua chon: ");
					scanf("%d", &chonmon);
					switch (chonmon){
						case 1:
							printf("Cam on quy khach\n");
							tongtien += 20000;
							flag2 = 0;
							break;
						case 2:
							printf("Cam on quy khach\n");
							tongtien += 10000;
							flag2 = 0;
							break;
						case 3:
							printf("Cam on quy khach\n");
							tongtien += 30000;
							flag2 = 0;
							break;
						case 4:
							flag2 = 0;
							break;
						default:
							break;
					}
				}
				break;
			case 3:
				printf("Hoa don cua quy khach là: %d", tongtien);
				printf("\nCam on quy khach");
				flag = 0;
				break;
			case 4:
				flag = 0;
				break;
		}
	}
}
