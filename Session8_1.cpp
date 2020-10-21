#include <stdio.h>
#include "hammorong.h"
int main(){
	int x = TinhTong(5,3);// 5+3
	int y = TinhTong(x,100);
	int x1= DaoNguoc(x);
	int y1= DaoNguoc(y);
	printf("Dao nguoc cua %d la %d\n",x,x1);
	printf("Dao nguoc cua %d la %d\n",y,y1);
	printf("Nhap 1 so can kiem tra nguyen to:");
	int snt;
	scanf("%d",&snt);
	Hello();// thuc thi ham voi void
	//int uoc = DemSoLuongUoc(snt);
	if(DemSoLuongUoc(snt) ==2){
		printf("%d la so nguyen to",snt);
	}else{
		printf("%d ko phai la so nguyen to",snt);
	}
	// cach 2
	if(KiemTraSNT(snt)){
		printf("%d la so nguyen to",snt);
	}else{
		printf("%d ko phai la so nguyen to",snt);
	}
}
