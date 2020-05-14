//NHAP HAI SO.TINH TICH CUA HAI SO LON HON HAY BANG 1000
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a,b,s ;
	s = 0;
	printf("nhap a:");
	scanf("%d", &a);
	printf("nhap b:");
	scanf("%d", &b);
	s = a*b;
	if (s>1000)
	printf("tich cua a va b lon hon 1000 ");
	else if(s ==1000)
	printf("tich cua a va b bang 1000 ");
	return 0;
}
