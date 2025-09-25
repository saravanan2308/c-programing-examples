#include<stdio.h>
int main(){
	char ch1,ch2;
	printf("Enter a character: ");
	scanf("%s%s",&ch1,&ch2);
	if(ch1 == ch2 ){
		printf("equal");
	}
	else{
		printf("not");
	}
	return 0;
}