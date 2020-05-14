#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int s,r,t,m = 3,n = 5;
	float x = 3.0,y ;
	t = n/m;
	printf("gia tri t la: %d\n", t);
	r = n%m;
	printf("gia tri r la: %d\n", r);
	y = n/m;
	printf("gia tri y la: %f\n", y);
	t = x*y-m/2;
	printf("gia tri t la: %d\n", t);
	x = x*2.0;
	printf("gia tri x la: %f\n", x);
	s = (m+n)/r;
	printf("gia tri s la: %d\n", s);
	y = --n;
	printf("gia tri y la: %f\n", y);
	return 0;
	
 } 
