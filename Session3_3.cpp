#include <stdio.h>
int main(){
	int x = 10;
	if(x>5)
		printf("A");
	else if(x<5)
		printf("B");
	else if(x>2)
		printf("C");
	else
		printf("D");
	///		
	switch(x-9){
		case 1: {
			printf("Case 1");
			printf("Case 1111");
			break;
		}
		case 2: printf("Case 2");break;
		case 6: printf("Case 6");break;
		default: printf("no no");
	}		
	switch(x>5){
		case true: printf("hahaha");break;
		default: printf("sai roi");
	}
}
