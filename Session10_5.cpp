#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct SinhVien{ // thuc the
	char hoten[50];// thuoc tinh
	int diemthi; // thuoc tinh
}SV;
int main(){
	struct SinhVien abc;
	SV huavancuong;
	printf("Nhap ten cho sinh vien:");
	scanf("%s",huavancuong.hoten);
	printf("Nhap diem cho sinh vien:");
	scanf("%d",&huavancuong.diemthi);
	printf("Thong tin sinh vien:\n");
	printf("%s: %d\n",huavancuong.hoten,huavancuong.diemthi);
	
	SV huavancuong2;
	//huavancuong2.diemthi = huavancuong.diemthi;
	//strcpy(huavancuong2.hoten,huavancuong.hoten);
	memcpy(&huavancuong2,&huavancuong,sizeof(SV));
	
	SV T2010E[25];
	for(int i=0;i<25;i++){
		printf("Nhap Ten SV thu %d:",i);
		scanf("%s",T2010E[i].hoten);
		printf("Nhap diem SV thu %d:",i);
		scanf("%d",&T2010E[i].diemthi);
	}
	
	// sap xep sv theo thu tu alphabe
	for(int i=0;i<25-1;i++){
		for(int j=0;j<25-i-1;j++){
			if(strcmp(T2010E[j].hoten,T2010E[j+1].hoten) > 0){
				SV tmp;
				memcpy(&tmp,&T2010E[j],sizeof(SV));
				memcpy(&T2010E[j],&T2010E[j+1],sizeof(SV));
				memcpy(&T2010E[j+1],&tmp,sizeof(SV));
			}
		}
	}
	
	// sap xep sv theo thu tu diem thap den cao
	for(int i=0;i<25-1;i++){
		for(int j=0;j<25-i-1;j++){
			if(T2010E[j].diemthi > T2010E[j+1].diemthi){
				SV tmp;
				memcpy(&tmp,&T2010E[j],sizeof(SV));
				memcpy(&T2010E[j],&T2010E[j+1],sizeof(SV));
				memcpy(&T2010E[j+1],&tmp,sizeof(SV));
			}
		}
	}
	// khai bao mang struct dang con tro
	SV *hvc;
	hvc = &huavancuong;
	printf("Diem thi cua hua van cuong: %d",hvc->diemthi);
	// huavancuong.diemthi <=> hvc->diemthi
	printf("Ten cua HVC: %s",hvc->hoten);
	
	SV *lopsangthu7;
	//lopsangthu7 = (SV *)malloc(5*sizeof(SV));
	lopsangthu7 = (SV *)calloc(5,sizeof(SV));
	// nhap thong tin cho 5 sinh vien tren:
	for(int i=0;i<5;i++){
		printf("Nhap ten sv:");
		scanf("%s",(lopsangthu7 +i)->hoten);
		printf("Nhap diem thi:");
		scanf("%d",&((lopsangthu7+i)->diemthi));
	}
	lopsangthu7 = (SV *)realloc(lopsangthu7,8*sizeof(SV));
	free(lopsangthu7);
}
