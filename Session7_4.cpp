#include <stdio.h>
int main(){
	int arr[8] = {0,4,6,7,9,10,15,18}; // mang n so nguyen, nhap 1 so x can tim
	int s=5;// so can tim
	int flag = 0;// co` bao hieu tim thay
	int l = 0;// vi tri bien trai
	int h=7;// vi tri bien phai
	while(l<=h){
		int m = (l+h)/2;
		if(s== arr[m]){
			flag = 1;
			printf("Da tim thay!");
			break;
		}else if(s < arr[m]){
			h = m-1;
		}else if(s > arr[m]){
			l = m+1;
		}		
	}
	if(flag == 0){
		printf("Khong tim thay..");
	}
}
