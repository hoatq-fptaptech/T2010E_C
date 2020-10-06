#include <stdio.h>
int main(){
	int x;
	printf("Nhap x = ");
	scanf("%d",&x);
	// da co gia tri cua x;
	printf("Gia tri x = %d\n",x);
	if(x>=0){
		if(x==0){
			printf("%d khong am khong duong",x);
		}else{
			printf("%d la so duong",x);
		}
	}else{
		printf("%d la so am",x);
	}
}
