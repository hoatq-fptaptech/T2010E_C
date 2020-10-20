#include <stdio.h>
int main(){
	int n;
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n);
	int arr[n];// thay vi 6 so thi:mang n so nhap tu ban phim
	for(int i=0;i<n;i++){
		printf("arr[%d]=",&arr[i]);
	}
	for(int i=0;i<n-1;i++){
		// so sanh va day so lon ve cuoi danh sach
		for(int j=0;j<n-i-1;j++){
			if(arr[j] > arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
		// sau khi noi bot xong
		//printf("Mang sau khi 1 vong lap:\n");
		//for(int k=0;k<6;k++){
		//	printf("%5d",arr[k]);
		//}
		//printf("\nIn xong ----- \n");
	}
	printf("mang sau khi da sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
