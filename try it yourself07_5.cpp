#include<stdio.h>

int main(int argc , char *argv[]) {
	// nhap diem cua hoc vien.
	int diem;
	printf("nhap diem hoc vien: ");
	scanf("%d", &diem);
	char A,B,C,D,E;
	printf("xep loai:\n");
	scanf("%c", &A,&B,&C,&D,&E);
	
	if (diem >= 75) {
		printf("loai A\n", diem);
	}
	else if (diem >= 60 && diem < 75){
		printf("loai B\n", diem);
	}
	else if (diem >= 45 && diem <60){
		printf("loai C\n", diem);
	}
	else if (diem >= 35 && diem <45){
		printf("loai D\n", diem); 
	}
	else {
		printf("loai E\n", diem);
	}
}
