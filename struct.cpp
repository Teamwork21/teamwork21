#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct book_st{
	char ten[30];
	char theloai[30];
	int giatien;
}st;
void nhap (st *a, int &n){
	system("cls");
	for (int i=0; i<n; i++){
    fflush(stdin); 
	printf("\nNhap ten sach %d :",i);  
	gets((a+i)->ten);
	printf("\nNhap the loai :"); 
	gets((a+i)->theloai);
	printf("\nNhap gia tien :"); 
	scanf("%d",&(a+i)->giatien);
    }
}
void xuat(st *a, int n){
	printf("\n*  TEN SACH           THE LOAI           GIA TIEN  *");
	for (int i=0; i<n; i++){
    printf("\n   %-20s%-20s%d ",(a+i)->ten,(a+i)->theloai,(a+i)->giatien);
   }
}
void sapxep(st *a, int n){
	system("cls");
	for(int i=0; i<n-1; i++){
		for(int j=n-1; j<n; j++){
			if(strcmp((a+i)->theloai,(a+j)->theloai)<0){
			    st x = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = x;
			}
		}
	}
}
void luufile(st *a, int n){
	system("cls");
    FILE * fp;
    fp = fopen ("C:\\book.txt","wb");
    fprintf(fp, "\n%-50s%-50s%-50s","TEN SACH","THE LOAI","GIA TIEN");
    for(int i = 0;i < n;i++){
        fprintf(fp,"\n%-50s%-50s%-50d", (a+i)->ten,(a+i)->theloai,(a+i)->giatien);
    }
    fclose (fp);
}
int main(){
	int key,n;
	book_st *a;
	a = (struct book_st*) malloc(n*sizeof(struct book_st));
	bool Danhap = false;
	do{
		printf("\nNhap so luong sach : ");
		scanf("%d",&n);
	}while (n<=0);
	while(true){
		system("cls");
		printf("\n ***** ****************************************** ***");
		printf("\n ***** *************** MENU ********************  ***");
		printf("\n ***** ********* 1.NHAP DU LIEU SACH ************ ***");
		printf("\n ***** 2.SAP XEP THONG KE HIEN THI THONG TIN SACH ***");
		printf("\n ***** ****** 3.GHI FILE VAO TAP TIN BOOK.TXT *** ***");
		printf("\n ***** **********      4.THOAT    *************** ***");
		printf("\n ***** ****************************************** ***");
		printf ("\nMOI BAN NHAP LUA CHON : ");
		scanf("%d",&key);
		switch(key){
			case 1:
				printf("\nBan da chon nhap du lieu sach.");
				nhap(a,n);
				printf("\nDa nhap thanh cong.");
				Danhap = true;
				printf("\nNhan phim bat ky de tiep tuc.");
				getch();
				break;
			case 2:
			    if(Danhap){
			    	printf("\nBan da chon sap xep sach .");
			    	sapxep(a,n);
			    	xuat(a,n);
				}
				else{
					printf("\nHay nhap du lieu sach truoc.");
				}
				printf("\nNhan phim bat ky de tiep tuc.");
				getch();
				break;
			case 3:
			    if(Danhap){
			    	printf("\nBan da chon ghi file vao tap tin C:\\book.txt.");
			    	luufile(a, n);
				}
				else{
					printf("\nHay nhap du lieu truoc.");
				}
				printf("\nGhi file thanh cong.");
				printf("\nNhan phim bat ky de tiep tuc.");
				getch();
				break;
					
			case 4:
				system("cls");
			    printf("\nBan da chon thoat chuong trinh.");
			    getch();
			    return 0;
			default:
			    printf("\nKhong co chuc nang nay...");
				printf("\nNhan phim bat ky de tiep tuc...");
				getch();
				break;	
	    }
    }  
}

