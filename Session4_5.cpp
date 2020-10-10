#include <stdio.h>
int main(){
	int n;
	printf("Nhap n="); // gia su n=8
	scanf("%d",&n);
	int x=1;// gia su x la so can tim;
//	for(int i=1;i<n;i++){
//		if(i%2!=0){
//			// day la so le
//			x= i;
//		}
//	}
	for(int i=n-1;i>0;i--){
		if(i%2!=0){
			// lan dau tien thi duoc luon i=7 la gia tri can tim
			x = i;
			break;
		}
	}
	printf("x = %d",x);
}
