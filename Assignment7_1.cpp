#include <stdio.h>
int main(){
	int n;
	printf("Nhap so luong phan tu cua danh sach:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int x;
	printf("Nhap gia tri x can tim can duoi:");
	scanf("%d",&x);
	int max=x;
	// tim gia tri nho hon x de cho vao max
	for(int i=0;i<n;i++){
		if(arr[i]<x){
			max = arr[i];
			break;
		}
	}
	if(max == x){
		printf("mang khong co gia tri nao nho hon %d",x);
	}else{
		// khi co gia tri nho hon x, di tim tiem can duoi
		for(int i=0;i<n;i++){
			if(arr[i]>max && arr[i]<x){
				max = arr[i];
			}
		}
		printf("Tiem can duoi: %d",max);
	}
}
