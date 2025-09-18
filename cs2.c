#include<stdio.h>
int main(){
	int a,b;
	printf("%d %d",&a,&b);
	scanf("%d %d",&a,&b);
	if(a<b)
	  printf("a is the smallest number");
	else
	  printf("b is the smallest number");
	return 0;
}