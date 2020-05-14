#include<stdio.h>
int main(int argc , char *argv[]) {
	int x;
    int y;
	
	//nhap vao so thu nhat.
	
	printf("nhap so thu nhat: x = ");
	scanf("%d", &x);

	//nhap vao so thu hai.
	printf("nhap so thu hai: y = ");
	scanf("%d", &y);

    if (x <2000 || x > 3000) {
		printf("gia tri x nhap vao la : %d", x);
		}
	if (y >100 && y < 500)	{
		printf("gia tri  y nhap vao la : %d", y);
		}



return 0;	
}
