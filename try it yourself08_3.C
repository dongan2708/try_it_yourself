#include<stdio.h>
main()
{
	int a,b,c,x,y,z;
	printf("nhap gia tri a ");
	scanf("%d", &a);
	printf("nhap gia tri b ");
	scanf("%d", &b);
	printf("nhap gia tri c ");
	scanf("%d", &c);
	x = a;y = b;z = c;
	if (x > y && x>z) {
		printf("gia tri lon nhat la: %d", x);
	}
	else if(y > x && z > y) {
		printf("gia tri lon nhat la: %d", y);
	}
	else if(z > x && z > y) {
		printf("gia tri lon nhat la: %d", z);
	}
	return 0;
}
