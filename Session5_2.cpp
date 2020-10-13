#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap vao 1 so nguyen duong: ");
		scanf("%d",&n);
	}while(n <=2);
	int a=0,b=1,c=1;
	for(int i=3;i<=n;i++){
		a = b;
		b = c;
		c = a+b;
	}
	printf("So thu %d trong day Fibo: %d",n,c);
}
