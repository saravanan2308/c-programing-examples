#include<stdio.h>
int main(){
	int n,first,last;
	printf("enter a 3 digit number:");
	scanf("%d",&n);
	last = n % 10;
	first= n / 100;
	printf("sum of first amd last digit= %d\n",first+last);
	return 0;
}

	
