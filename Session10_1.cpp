#include <stdio.h>
#include <iostream>
int main(){
	int x = 10;
	printf("Dia chi cua x: ");
	std::cout << &x;
	int *p;// khai bao bien con tro
	p = &x;
	printf("\n");
	printf("Dia chi cua p: ");
	std::cout << &p;
	x++;
	printf("\n x = %d",*p);// x=11;
	(*p)++;
	printf("\n x = %d",x);// x=;
	p++;
	
	
}
