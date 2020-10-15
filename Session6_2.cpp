#include <stdio.h>
int main(){
	int n;
	printf("Nhap so luong so can tim kiem:");
	scanf("%d",&n);
	int arr[n]; 
	for(int i=0;i<n;i++){
		printf("nhap arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int total=0;
	for(int i=0;i<n;i++){
		total+=arr[i];
	}
	printf("Trung binh cong: %f\n",(float)total/n);
	int total_odd = 0;
	int count = 0;
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			total_odd+=arr[i];
			count++;
		}
	}
	if(count==0){
		printf("Mang ko co so le");
	}else{
		printf("TBC so le: %f",(float)total_odd/count);
	}
}
