#include<stdio.h>
int main(){
	char ch;
	printf("Enter a character:");
	scanf("%s",&ch);
	if(ch >= 'a' && ch <= 'z'){
		printf("is a lower case");
	}
	  
	 else if(ch>='A' && ch<='Z'){
	 	printf("is a uppercase");
	 }
	  
	 else if(ch>='0' && ch<='9'){
	 	printf("is a digit");
	 }
	   
	 else{
	 	printf("is a special symbol");
	 }
	   
	return 0;
}
	
        
