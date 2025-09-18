#include<stdio.h>
int main(){
	int a,b,c;
	printf("%d %d",&a,&b);
	scanf("%d %d",&a,&b);
	c=a-b;
	if(c%2==0)
	  printf("a is the even number");
	else
	  printf("b is the odd number");
	return 0;
}