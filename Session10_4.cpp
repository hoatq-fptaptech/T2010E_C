#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,*arr;
	printf("Nhap n=");
	scanf("%d",&n);
	// cap phat n o nho
	arr = (int *)malloc(n*sizeof(int));
	// nhap gia tri cho mang
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",arr+i);
	}
	// sap xep
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(*(arr+j) > *(arr+j+1)){ // if(arr[j]<arr[j+1])
				int tmp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = tmp;
			}
		}
	}
	// nhan doi kich thuoc mang:
	arr = (int *)realloc(arr,n*2*sizeof(int));
	// nhap gia tri cho mang
	for(int i=n;i<n*2;i++){
		printf("arr[%d]=",i);
		scanf("%d",arr+i);
	}
	// sap xep lai
	for(int i=0;i<n*2-1;i++){
		for(int j=0;j<n*2-i-1;j++){
			if(*(arr+j) > *(arr+j+1)){
				int tmp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = tmp;
			}
		}
	}
	// in ra ket qua:
	for(int i=0;i<n*2;i++){
		printf("%5d",*(arr+i));
	}
}
