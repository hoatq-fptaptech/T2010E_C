#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so nguyen duong: ");
		scanf("%d",&n);
	}while(n < 0);
	// di tiep neu n>0
	int s =1 ;
	for(int i=1;i<=n;i++){
		s*=i;
	}
	printf("%d! = %d",n,s);
}
