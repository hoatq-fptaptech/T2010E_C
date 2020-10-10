#include <stdio.h>
int main(){
	int x = 10; // global variable
	if(x>5){
		int y = 2;// y la local variable
		x+=y;
		printf("x = %d",x);
	}
	//printf("y = %d",y); -- loi vi y ko ton tai ngoai day
	if(x>2){
		int y=3;
		x+=y;
		printf("x = %d",x);
	}
}
