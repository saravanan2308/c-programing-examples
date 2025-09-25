#include<stdio.h>
int main(){
	char ch;
	printf("Enter a digit",&ch);
	scanf("%s",&ch);
	if(ch >='0' && ch <='9'){
		printf("digit");
	}
	else{
		printf("not");
	}
	return 0;
}