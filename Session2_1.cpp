#include <stdio.h>
int main(){
	int x = 10;
	x = x + 1;
	printf("xin chao, x = %d \n",x);
	x = 20;
	printf("xin chao, x = %d\n",x);
	x= x * 15 * 13;
	printf("xin chao, x = %d\n",x);
	float pi = 3.14158; 
	printf("So PI = %f\n",pi);
	char h = 'm';
	printf("x = %d va pi = %f va h = %c\n",x,pi,h);
	scanf("%d",&x);// nhap 1 so nguyen tu ban phim cho x
	printf("Nhap gia tri cho pi:");
	scanf("%f",&pi);// nhap so thuc pi
}
