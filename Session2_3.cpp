#include <stdio.h>
int main(){
	int a;
	printf("Nhap a= ");
	scanf("%d",&a);
	int b;
	printf("Nhap b= ");
	scanf("%d",&b);
	int c;
	printf("Nhap c= ");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("Max: %d",a);
		}else{
			printf("Max: %d",c);
		}
	}else{
		if(b>c){
			printf("Max: %d",b);
		}else{
			printf("Max: %d",c);
		}
	}
}
