#include<stdio.h>
int main(){
	int a,b;
	printf("%d %d",&a,&b);
	scanf("%d %d",&a,&b);
	if(a>100&a<=999)
	  printf("is three number");
	else
	  printf(" is not number");
	return 0;
}