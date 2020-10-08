#include <stdio.h>
int main(){
	int a,b,c;
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);
	
	if(a+b>c && a+c>b && b+c >a){
		int p= a+b+c;
		float p2 =  (float)p / 2;
		printf("Nua chu vi: %f",p2);
	}else{
		printf("Khong phai tam giac");
	}
}
