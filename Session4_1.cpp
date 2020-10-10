#include <stdio.h>
int main(){
	float tk=4000,ls=0.08;
	int n;
	printf("Nhap so nam KH muon gui: ");
	scanf("%d",&n);
	int i=1;
//	for(i=1;i<=n;i++){
//		tk = tk + tk*ls;
//	//	printf("TK nam thu %d = %f\n",i,tk);
//	}
//	while(i<=n){
//		tk = tk+tk*ls;
//		i++;
//	}
	do{
		tk = tk+tk*ls;
		i++;
	}while(i<=n);
	printf("So tien thu duoc: %f",tk);
}
