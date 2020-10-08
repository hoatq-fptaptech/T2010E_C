#include <stdio.h>
int main(){
	int d;
	printf("Nhap ngay: ");
	scanf("%d",&d);
	int m;
	printf("Nhap thang: ");
	scanf("%d",&m);
	int x;// ngay thu .. trong nam
	if(m==1){
		x = d;
	}
	if(m==2){
		x = 31+d;		
	}
	if(m==3){
		x = 31+28+d;
	}
	if(m==4){
		x = 31+28+31+d;
	}
	if(m==5){
		x = 31+28+31+30+d;
	}
	if(m==6){
		x = 31+28+31+30+31+d;
	}
	if(m==7){
		x = 31+28+31+30+31+30+d;
	}
	if(m==8){
		x = 31+28+31+30+31+30+31+d;
	}
	if(m==9){
		x = 31+28+31+30+31+30+31+31+d;
	}
	if(m==10){
		x = 31+28+31+30+31+30+31+31+30+d;
	}
	if(m==11){
		x = 31+28+31+30+31+30+31+31+30+31+d;
	}
	if(m==12){
		x = 31+28+31+30+31+30+31+31+30+31+30+d;
	}
	if(x%7==0){
		printf("Day la ngay thu %d trong nam va la chu nhat",x);
	}else{
		int thu = x%7 +1;
		printf("Day la ngay thu %d trong nam va la thu %d",x,thu);
	}
	
}
