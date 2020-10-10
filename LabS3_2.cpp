#include <stdio.h>
int main(){
	float tk=4000,ls=0.08;
	tk = tk + tk*ls;
	tk = tk + tk*ls;
	tk = tk + tk*ls;
	tk = tk + tk*ls;
	printf("So tien thu duoc: %f",tk);
}
