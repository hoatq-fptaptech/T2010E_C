#include <stdio.h>
int main(){
	float tk=4000,ls =0.08;
	int n=0;
	for(;tk<1000000;tk+=tk*ls,n++);
	/// 
	printf("So nam can gui: %d",n);
}
