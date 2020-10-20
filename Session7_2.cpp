#include <stdio.h>
int main(){
	int arr[6] = {3,1,4,5,2,0};// thay vi 6 so: mang n so
	
	for(int i=1;i<6;i++){
		// so sanh arr[i] voi nhung so phia truoc no
		int tmp = arr[i];
		int j=i-1;
		for(;j>=0;j--){
			if(arr[j]>tmp){
				arr[j+1] = arr[j];
			}else{
				break;
			}
		}
		arr[j+1] = tmp;
		printf("\n Sau moi vong lap:\n");
		for(int k=0;k<6;k++){
			printf("%5d",arr[k]);
		}
		printf("\n xong vong lap ---\n");
	}
	printf("Mang sau khi sap xep:\n");
	for(int i=0;i<6;i++){
		printf("%5d",arr[i]);
	}
}
