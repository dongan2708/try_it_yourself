#include<stdio.h>

int main() {
	char kyTu;
	//Nhap vao ky tu tu ban phim.
	printf(" Nhap ky tu: ");
	scanf("%c", &kyTu);
	
	switch (kyTu) {
		case 'A':
		case 'a':
	      	printf("Ada");
	      	break;
		case 'B':
		case 'b':
		    printf("Basic");
	      	break;
		case 'C':
		case 'c':
		    printf("COBOL");
	      	break;
		case 'D':
		case 'd':
		    printf("dBASE");
	      	break;
		case 'F':
		case 'f':	
		    printf("Fortran");
	      	break;
	    case 'P':
		case 'p':
		    printf("Pascal");
	      	break;
	    case 'V':
		case 'v':
		    printf("Visual C++");
	      	break;
	    default:
		  printf("Khong co lua chon nao ca.");
		  }  	
}
			  	  	  	
		  	  	  	
	

