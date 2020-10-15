#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap n=");
		scanf("%d",&n);
	}while(n<=2);
	int x1=0,x2=1,x3=1;
	for(int i=0; x2+x3<n ;i++){
		x1=x2;
		x2=x3;
		x3=x1+x2;// x2 cu + x3 cu	
	}
	printf("so can tim: %d",x3);
}
