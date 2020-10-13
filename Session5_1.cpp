#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap vao 1 so nguyen duong: ");
		scanf("%d",&n);
	}while(n <=0);
	for(int i=1;i<=n;i++){
		// tung gia tri cua i la so <= n
		// kiem tra i co phai so nguyen to
		int uoc = 0;
		for(int j =1;j<=i;j++){
			if(i%j==0){
				uoc++;
			}
		}
		if(uoc == 2){
			printf("SNT: %d\n",i);
		}
	}
}
