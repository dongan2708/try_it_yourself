#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,hieu;
	printf("nhap gia tri :\n", a,b);
	scanf("%d %d", &a,&b);
	hieu = a-b;
	if (hieu ==a || hieu ==b)
	printf(" hieu bang gia tri:\n", hieu);
	else
	printf("hieu khong bang gia tri nao da nhap:\n", hieu);
	
	return 0;
}
