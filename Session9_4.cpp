#include <stdio.h>
#include <string.h>
int main(){
	char ars[5][20];// mang 5 string
	for(int i=0;i<5;i++){
		printf("Nhap chuoi %d: ",i);
		scanf("%s",ars[i]);
	}
	printf("Nhung chuoi vua nhap:\n");
	for(int i=0;i<5;i++){
		printf("%s\n",ars[i]);
	}
	///
	// sap xep mang tren theo alphabe
	for(int i=0;i<5-1;i++){
		for(int j=0;j<5-i-1;j++){
			// so sanh  de swap 2 phan tu ars[j] va ars[j+1]
			if(strcmp(ars[j],ars[j+1]) >0){
				// doi gia tri cua ars[j] va ars[j+1]
				char tmp[20];
				strcpy(tmp,ars[j]);
				strcpy(ars[j],ars[j+1]);
				strcpy(ars[j+1],tmp);
			}
		}
	}	
	//
	printf("Nhung chuoi vua nhap:\n");
	for(int i=0;i<5;i++){
		printf("%s\n",ars[i]);
	}
}
