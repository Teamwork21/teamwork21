// Game KÉO BÚA BAO  
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
void game(){
 int r;
 char key;
 char ng,may,i[3];
 printf (" ******************************\n"); 
 printf (" \n\t\t=== TRO CHOI KEO BUA BAO ===\n");       
 printf ("\nKEO <=> K");
 printf ("\nBUA <=> B");
 printf ("\nBAO <=> O");
 printf ("\n\t\t===           END         ===\n");
 printf("\nMoi ban chon : ");
 scanf("%c", &ng);
  ng= tolower(ng); //Chuyen chu nhap vao thanh chu thuong
  
  //lay ngau nhien
 srand(time(NULL)); 
 r=rand()%3+1;
    switch(r)
    {
       case 1: may='b'; //Chuyen gia tri so ngau nhien thanh chu tuong ung
       break;
       case 2: may='k';
       break;
       case 3: may='o';
       break;
    }
 //In ket qua
 if ((ng=='k')||(ng=='b')||(ng=='o'))//kiem ra xem co nhap sai khong
 {
  //In ra ket qua cua nguoi
  switch(ng)
  {
     case 'b': strcpy(i,"BUA");
     break;
     case 'k': strcpy(i,"KEO");
     break;
     case 'o': strcpy(i,"BAO");
     break;
    }
    printf(" Ban ra %s\n",i);
  //In ra ket qua cua may
  switch(may)
  {
     case 'b': strcpy(i,"BUA");
     break;
     case 'k': strcpy(i,"KEO");
     break;
     case 'o': strcpy(i,"BAO");
     break;
  }
  printf(" May ra %s\n",i);
 //xac nhan ket qua 
	if (ng==may)
          printf("\n\t KET QUA HOA\n");
    else if ((ng=='b' && may=='k')||(ng=='k' && may=='o')||(ng=='o' && may=='b'))
          printf("\n\t CHUC MUNG BAN DA CHIEN THANG\n");
    else 
          printf("\n\t RAT TIEC BAN DA THUA HUHU\n");
          
  } 
    else
          printf(" Ban da nhap sai\n"); 
 
}
int main (){
	while(true){
		system ("cls");
		game();
		int luachon;
		printf ("\nBan co muon choi tiep khong");
		printf ("\n1.Choi tiep");
		printf ("\n2.Thoat");
		printf ("\nNhap lua chon : ");
		scanf ("%d",&luachon);
		if (luachon==1){
			game();
			
		}
		if (luachon==2){
			break ;
		}
		
	}
}

