#include <stdio.h>
int main(){
	int d;
	printf("Nhap ngay: ");
	scanf("%d",&d);
	int m;
	printf("Nhap thang: ");
	scanf("%d",&m);
	int x;// ngay thu .. trong nam
	switch(m){
		case 1: x = d;break;
		case 2: x = 31+d;break;
		case 3: x = 31+28+d;break;
		case 4: x = 31+28+31+d;break;
		case 5: x = 31+28+31+30+d;break;
		case 6: x = 31+28+31+30+31+d;break;
		case 7: x = 31+28+31+30+31+30+d;break;
		case 8: x = 31+28+31+30+31+30+31+d;break;
		case 9: x = 31+28+31+30+31+30+31+31+d;break;
		case 10: x = 31+28+31+30+31+30+31+31+30+d;break;
		case 11: x = 31+28+31+30+31+30+31+31+30+31+d;break;
		case 12: x = 31+28+31+30+31+30+31+31+30+31+30+d;break;
	}
}
