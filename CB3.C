#include<stdio.h>
int main(){
	char ch;
	printf("Enter a alphabet",&ch);
	scanf("%s",&ch);
	if(ch >='a' && ch <='z'){
		printf("alphabet");
	}
	else{
		printf("not");
	}
	return 0;
}