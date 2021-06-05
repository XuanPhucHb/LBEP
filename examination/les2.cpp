#include<stdio.h>
#include<string.h>

void upperCase(char s[]){
	printf("Convert string s to upper case");
	strupr(s);
	printf("\nUper Case: %s", s);
}

int main() {
	char s[100];
	printf("Enter string: ");
	fgets(s, sizeof(s), stdin);
 	upperCase(s);
}
