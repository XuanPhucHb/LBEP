#include <stdio.h>

int main(){
	int a, b, thutu, thu;
	int countDayOfMonth1 = 31;
	int countDayOfMonth2 = 28;
	int countDayOfMonth3 = 31;
	int countDayOfMonth4 = 30;
	int countDayOfMonth5 = 31;
	int countDayOfMonth6 = 30;
	int countDayOfMonth7 = 31;
	int countDayOfMonth8 = 31;
	int countDayOfMonth9 = 30;
	int countDayOfMonth10 = 31;
	int countDayOfMonth11 = 30;
	printf("nhap ngay:");
	scanf("%d", &a);
	printf("nhap thang:");
	scanf("%d", &b);
	if(a > 31 || a < 1){
		printf("Khong co ngay %d trong nam", a);
	} else if((b == 4 || b == 6 || b == 9 || b == 11) && a > 30){
		printf("Khong co ngay %d thang %d trong nam", a, b);
	} else {
		if(a > 28 && b == 2){
			printf("Khong co ngay %d thang 2 trong nam", a);
		} else  if(b > 12 || b < 1){
			printf("Khong co thang %d trong nam", b);
		} else {
			if(b == 1) {
				thutu = a;
			} else if(b == 2) {
				thutu = countDayOfMonth1 + a;
			} else if(b == 3) {
				thutu = countDayOfMonth1 + countDayOfMonth2 + a;
			} else if(b == 4) {
				thutu = countDayOfMonth1 + countDayOfMonth2 + countDayOfMonth3 + a;
			} else if(b == 5) {
				thutu = countDayOfMonth1 + countDayOfMonth2 + countDayOfMonth3 + countDayOfMonth4 + a;
			} else if(b == 6) {
				thutu = countDayOfMonth1 + countDayOfMonth2 + countDayOfMonth3 + countDayOfMonth4 + countDayOfMonth5 + a;
			} else if(b == 7) {
				thutu = countDayOfMonth1 + countDayOfMonth2 + countDayOfMonth3 + countDayOfMonth4 + countDayOfMonth5 + countDayOfMonth6 + a;
			} else if(b == 8) {
				thutu = countDayOfMonth1 + countDayOfMonth2 + countDayOfMonth3 + countDayOfMonth4 + countDayOfMonth5 + countDayOfMonth6 + countDayOfMonth7 + a;
			} else if(b == 9) {
				thutu = countDayOfMonth1 + countDayOfMonth2 + countDayOfMonth3 + countDayOfMonth4 + countDayOfMonth5 + countDayOfMonth6 + countDayOfMonth7 + countDayOfMonth8 + a;
			} else if(b == 10) {
				thutu = countDayOfMonth1 + countDayOfMonth2 + countDayOfMonth3 + countDayOfMonth4 + countDayOfMonth5 + countDayOfMonth6 
				+ countDayOfMonth7 + countDayOfMonth8 + countDayOfMonth9 + a;
			} else if(b == 11) {
				thutu = countDayOfMonth1 + countDayOfMonth2 + countDayOfMonth3 + countDayOfMonth4 + countDayOfMonth5 + countDayOfMonth6 
				+ countDayOfMonth7 + countDayOfMonth8 + countDayOfMonth9 + countDayOfMonth10 + a;
			} else {
				thutu = countDayOfMonth1 + countDayOfMonth2 + countDayOfMonth3 + countDayOfMonth4 + countDayOfMonth5 + countDayOfMonth6 
				+ countDayOfMonth7 + countDayOfMonth8 + countDayOfMonth9 + countDayOfMonth10 + countDayOfMonth11 + a;
			}
			printf("\nngay %d trong nam", thutu);
			if(thutu % 7 == 0){
				printf(" va la chu nhat");
			} else {
				thu = thutu % 7 + 1;
				printf(" va la thu %d", thu);
			}
		}
	}
}
