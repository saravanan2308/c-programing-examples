#include<stdio.h>
int main(){
	int  a,b; //10 20
	scanf("%d%d",&a,&b);
	printf("a-> %d b-> %d\n",a,b);
	a=a^b;//30
	b=a^b;// 30-20 ->10
	a=a^b;// 30-10 -> 20

    printf("a-> %d b-> %d",a,b);	
	return 0;
}