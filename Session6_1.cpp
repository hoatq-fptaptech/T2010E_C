#include <stdio.h>
int main(){
	int n;
	printf("Nhap so luong so can tim kiem:");
	scanf("%d",&n);
	int arr[n]; 
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
	printf("Max: %d\n",max);
	
	// tim so khong phai so lon nhat
	int max2 = max;
	for(int i=0;i<n;i++){
		if(arr[i]<max){
			max2 = arr[i];
			break;
		}
	}
	if(max2 == max){
		printf("Mang toan bo so giong nhau");
	}else{
		for(int i=0;i<n;i++){
			if(max2<arr[i]&& arr[i]<max){
				max2= arr[i];
			}
		}
		printf("Max 2: %d",max2);
	}
	
}
