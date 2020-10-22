#include <stdio.h>
void NhapMang(int arr[][4],int n){
	for(int i=0;i<n;i++){
		// dang trong 1 mang con
		for(int j=0;j<4;j++){
			printf("tmp[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
int main(){
	int tmp[3][4];
	// nhap gia tri cho mang 2 chieu tmp
	NhapMang(tmp,3);
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%5d",tmp[i][j]);
		}
		printf("\n");
	}
}
