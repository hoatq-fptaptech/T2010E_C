#include <stdio.h>
#include <stdlib.h>
int main(){
	int *a;
	// cap phat o nho lan dau tien
	a = (int *)malloc(5*sizeof(int));// p la mang
	// 2 dong tren tuong duong int a[5];
	for(int i=0;i<5;i++){
		printf("nhap gt thu %d:",i);
		//scanf("%d",&a[i]);
		scanf("%d",(a+i));
	}
	printf("Co muon nhap them bao nhieu gia tri nua:");
	int t;
	scanf("%d",&t);
	a = (int *)realloc(a,(t+5)*sizeof(int));
	for(int i=5;i<t+5;i++){
		printf("nhap gt thu %d:",i);
		//scanf("%d",&a[i]);
		scanf("%d",(a+i));
	}
	
	printf("Sau khi nhap xong xuoi:\n");
	for(int i=0;i<t+5;i++){
		printf("%5d",a[i]);
	}
	free(a);
	// chuong trinh con rat dai....
	float *f;
	f = (float *)malloc(5*sizeof(float));
	f = (float *)realloc(f,8*sizeof(float));
	
	f = (float *)realloc(f,0*sizeof(float));
	//free(f);
	int n,*arr;
	printf("Nhap n=");
	scanf("%d",&n);
	//arr = (int *)malloc(n*sizeof(int));// thue phong dung luon
	arr = (int *)calloc(n,sizeof(int));
	
}
