#include <stdio.h>

int main(){
	int x=10;
	int *ptr=&x;
	printf("cach 1 bien \n");
	printf("gia tri %d vi tri %d\n",x,&x);
	printf("cach 2 con tro \n");
	printf("gia tri %d vi tri %d",*ptr,ptr);
	return 0;
}
