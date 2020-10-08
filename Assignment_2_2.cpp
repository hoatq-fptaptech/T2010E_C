#include <stdio.h>
int main(){
	int a;
	printf("Nhap a=");
	scanf("%d",&a);
	int b;
	printf("Nhap b=");
	scanf("%d",&b);
	if(a>=b){
		if(b==0){
			printf("Khong the chia cho 0");
		}else{
			int c = a/b;
			printf("%d / %d = %d",a,b,c);
		}
	}else{
		int c = a*b;
		printf("%d x %d = %d",a,b,c);
	}
}
