#include <stdio.h>
int main(){
	int n;
	printf("Nhap so luong phan tu cua danh sach:");
	scanf("%d",&n);
	int arr[n];
	// Nhap mang
	for(int i=0;i<n;i++){	
		int flag;
		do{
			printf("Nhap phan tu arr[%d]=",i);
			scanf("%d",&arr[i]);
			// kiem tra xem arr[i] vua nhap co nam trong mang tu 0->i-1
			flag = 0;
			for(int j=0;j<i;j++){
				if(arr[j]==arr[i]){
					flag =1;
					break;
				}
			}
		}while(flag==1);
		
		
	}
}
