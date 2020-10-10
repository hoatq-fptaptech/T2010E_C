#include <stdio.h>
int main(){
	for(int i=1;i<=5;i++){
		printf("A %d\n",i);
		if(i==3){
			break; // khi da tim duoc thu can tim
			//continue;
		}
		printf("B %d\n",i);
	}
}
