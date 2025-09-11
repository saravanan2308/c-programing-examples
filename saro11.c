#include<stdio.h>
int main(){
	int n,middle;
	printf("Enter a 3 digit number :");
	scanf("%d",&n);
	middle=(n/10)%10;
	printf("Middle digit = %d\n",middle);
	return 0;
}