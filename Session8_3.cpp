#include <stdio.h>
#include "hammorong.h"
int main(){
	int n;
	printf("n=");
	scanf("%d",&n);
	int arr[n];
	NhapMang(arr,n);
	// sap xep tu be den lon
	SapXepMang(arr,n,1);
	InMang(arr,n);
	// sap xep tu lon den be
	SapXepMang(arr,n,0);
	InMang(arr,n);
}
