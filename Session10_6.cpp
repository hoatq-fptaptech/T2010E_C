#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct BanThan{
	char tenbanthan[50];
}BT;
typedef struct GF{
	char avatar[100];
	char hoten[50];
	char sdt[20];
	BT hoibanthan[10];
	BT banthannhat;
}GF;
typedef struct SinhVien{
	char hoten[50];
	char sdt[20];
	char diachi[200];
	GF my_gf;	
}SV;
int main(){
	SV hvc;
	printf("Nhap ho ten:");
	scanf("%s",hvc.hoten);
	printf("Nhap Avatar ban gai HVC:");
	scanf("%s",hvc.my_gf.avatar); 
	printf("Nhap ten cho ban than cua ban gai:");
	scanf("%s",hvc.my_gf.banthannhat.tenbanthan);
}
