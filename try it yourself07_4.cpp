//luong cuoi thang cua nhan vien
#include<stdio.h>
int main(int argc, char *argv[]) {
	int muc_luong;
	char  loai_nhanvien;
	// nhap vao muc luong.
	printf("nhap muc luong: ");
	scanf("%d", &muc_luong);
	//nhap vao loai nhan vien.
	printf("nhap vao loai nhan vien: ");
	scanf("%c", &loai_nhanvien);
	switch (loai_nhanvien){
		case 'A':
			printf("luong cuoi thang cua nhan vien: %d", muc_luong + 300);
			break;
		case 'B':
		     printf("luong cuoi thang cua nhan vien: %d", muc_luong + 250);	
		     break;
		default:
		printf("luong cuoi thang cua nhan vien: %d", muc_luong + 100);
}
return 0; 	
} 
