#include <stdio.h>
int main(){
	int arr[5] = {1,2,3,4,5};// arr chinh la bien con tro
	printf("pt dau tien: %d\n",arr[0]);
	printf("pt dau tien: %d\n",*arr);
	
	printf("pt cuoi cung: %d\n",arr[4]);
	printf("pt cuoi cung: %d\n",*(arr+4));
	
	printf("Nhap gia tri cho mang:\n");
	for(int i=0;i<5;i++){
		printf("Nhap pt thu %d:",i);
		//scanf("%d",&arr[i]);
		scanf("%d",(arr+i));
	}
	
}
