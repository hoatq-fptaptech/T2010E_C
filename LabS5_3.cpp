#include <stdio.h>
int main(){
	int a,b;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
//	int ucln=1;
//	for(int i=1;i<=a;i++){
//		if(a%i==0 && b%i==0){
//			ucln = i;
//		}
//	}
//	printf("UCLN: %d",ucln);
	for(int i=a;i>0;i--){
		if(a%i==0 && b%i==0){
			printf("UCLN: %d\n",i);
			break;
		}
	}
	for(int i=a;true;i++){
		if(i%a==0&&i%b==0){
			printf("BCNN: %d",i);
			break;
		}
	}
}
