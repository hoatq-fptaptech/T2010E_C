#include <stdio.h>
int main(){
	// nhap so luong phan tu trong mang
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	// khai bao va nap gia tri ban dau cho mang
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[]=");
		scanf("%d",&arr[i]);
	}
	// Dung thuat toan buble sort de sap xep lai mang
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= tmp;
			}
		}
	}
	// In ra de xem viec sap xep dung hay sai
	printf("Sau khi sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
	// nhap gia tri can tim kiem
	printf("\n Tim kiem:\n");
	int x;
	scanf("%d",&x);
	// dung thuat toan binary search de tim x trong mang
	int l=0,h=n-1,flag=0;
	while(l<=h){
		int m=(l+h)/2;
		if(x==arr[m]){
			flag=1;
			printf("x nam trong mang!");
			break;
		}else if(x<arr[m]){
			h=m-1;
		}else{
			l=m+1;
		}
	}
	// truong hop khong tim thay
	if(flag==0){
		printf("Khong tim thay dau!");
	}
}
