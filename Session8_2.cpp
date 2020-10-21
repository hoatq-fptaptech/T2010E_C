#include <stdio.h>
#include "hammorong.h"
int main(){
	// Nhap va in mang 5 so nguyen
	int arr[5];
	NhapMang(arr,5);
	InMang(arr,5);
	
	// Nhap va in mang 7 so nguyen
	int arr2[7];
	NhapMang(arr2,7);
	InMang(arr2,7);
	
	// Nhap va in mang n so nguyen
	int n;
	printf("n=");
	scanf("%d",&n);
	int arr3[n];
	NhapMang(arr3,n);
	InMang(arr3,n);
}

