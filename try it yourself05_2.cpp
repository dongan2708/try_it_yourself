#include<stdio.h>
#include<stdlib.h>
int main(int argc , char *argv[])
{
	float fa,ff,fi;
	printf("nhap vao a cm = ");
	scanf("%f", &fa);
	ff = fa/2.54;
	fi = (fa/2.54)/12;
	printf("ket qua chuye doi la:\n");
	printf("gia tri doi sang foot la = %f\n", ff);
	printf("gia tri doi sang inch la = %f\n", fi);
	return 0;
	
}
