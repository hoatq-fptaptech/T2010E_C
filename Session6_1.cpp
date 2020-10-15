#include <stdio.h>
int main(){
	int n;
	int arr[n]; 
	printf("Nhap so luong so can tim kiem:");
	scanf("%d",&n);
	//int arr2[5] = {1,2,3,4,5};// int a=1,b=2,c=3,d=4,e=5
	for(int i=0;i<n;i++){
		printf("nhap arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	// co mang 5 so nguyen
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}		
	// max
	printf("Max: %d",max);
}
