///a có chia hêt cho b không 

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int a,b;
	printf("nhap vao a:");
	scanf("%d", &a);
	printf("nhap vao b:");
	scanf("%d", &b);
	if (a % b == 0)
	  printf("a chia het cho b");
	else if(a % b != 0)
	  printf("a khong chia het cho b");
	return 0;
}
