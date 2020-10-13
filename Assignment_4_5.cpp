#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap vao 1 so nguyen duong: ");
		scanf("%d",&n);
	}while(n <=0);
	int uoc = 0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			uoc++;
		}
	}
	if(uoc == 2){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong phai so nguyen to",n);
	}
}
