#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *ptr;
// yeni dosya oluþturma
void yeni(){
	system("cls");
	char dosyaAdi[30];
	char metin[100];
	int secim;
	printf("olusturmak istediginiz dosya adini girin: "); scanf("%s",dosyaAdi);
	
	ptr=fopen(dosyaAdi,"w");
	
	if(ptr!=NULL){
		printf("%s isimli dosya olusturuldu\n",dosyaAdi);
		bas:
		printf("\n\n1-metin ekle\n");
		printf("2-dosya icerigini goster\n");
		printf("3-dosya icerigini temizle\n");
		printf("4-ana menuye don\n");
		printf("seciminiz: "); scanf("%d",&secim);
		if(secim==1){
			system("cls");
			ptr=fopen(dosyaAdi,"a");
			printf("metni giriniz: "); scanf(" %[^\n]s",metin);
			fprintf(ptr,"%s\n",metin);
			fclose(ptr);
			printf("metin eklendi\n");
		}
		else if(secim==2){
			system("cls");
			ptr=fopen(dosyaAdi,"r");
			printf("dosya icerigi\n\n");
			
			while( !feof(ptr) ){
				char ch;
				
				ch=fgetc(ptr);
				printf("%c",ch);
				
			}
		
			fclose(ptr);
		}
		
		else if(secim==3){
			system("cls");
			ptr=fopen(dosyaAdi,"w");
			printf("dosya icerigi temzizlendi\n");
			
			fclose(ptr);
		}
		else if(secim==4){
			fclose(ptr);
			return 0;
		}
		else{
			system("cls");
			printf("hatali secim yaptiniz.\n");
		}
		
		goto bas;
		
	}
	fclose(ptr);
}

void ac(){
	
	system("cls");
	char dosyaAdi[30];
	char metin[100];
	int secim;
	
	printf("acmak istediginiz dosya adini girin: "); scanf("%s",dosyaAdi);
	
	ptr=fopen(dosyaAdi,"r");
	
	if(ptr!=NULL){
		printf("%s isimli dosya acildi\n",dosyaAdi);
		bas:
		printf("\n\n1-metin ekle\n");
		printf("2-dosya icerigini goster\n");
		printf("3-dosya icerigini temizle\n");
		printf("4-ana menuye don\n");
		printf("seciminiz: "); scanf("%d",&secim);
		if(secim==1){
			system("cls");
			ptr=fopen(dosyaAdi,"a");
			printf("metni giriniz: "); scanf(" %[^\n]s",metin);
			fprintf(ptr,"%s\n",metin);
			fclose(ptr);
			printf("metin eklendi\n");
		}
		else if(secim==2){
			system("cls");
			ptr=fopen(dosyaAdi,"r");
			printf("dosya icerigi\n\n");
		
			while( !feof(ptr) ){
				char ch;
				
				ch=fgetc(ptr);
				printf("%c",ch);
				
			}
	
			fclose(ptr);
	}
		else if(secim==3){
			system("cls");
			ptr=fopen(dosyaAdi,"w");
			printf("dosya icerigi temzizlendi\n");
			
			fclose(ptr);
		}
	    else if(secim==4){
			fclose(ptr);
			return 0;
		}
		else{
			system("cls");
			printf("hatali secim yaptiniz.\n");
		}
		
		goto bas;
		
	}
	fclose(ptr);
}
/*
void sil(){
	char ad[20];
	int sonuc=0;
	printf("silmek istediginiz dosyanin adini girin: "); scanf("%s",ad);
	ptr=fopen(ad,"r");
	if(ptr!=NULL){
		remove("%s");
		printf("%s isimli dosya silindi",ad);
		sonuc=1;
	}
	if(sonuc==0){
		printf("%s isimli dosya yok",ad);
	}
} bulamadým yapmanýn yolunu*/


int menu(){
	int secim;
	printf("\nNOT DEFTERI\n\n");
	printf("1-yeni olustur\n");
	printf("2-ac\n");
//	printf("3-sil\n");
	printf("0-cikis\n");
	printf("seciminiz: "); scanf("%d",&secim);
	return secim;
}

int main() {
	
	int secim=menu();
	
	while(secim!=0){
		
		switch(secim){
			
			case 1: yeni(); break;
			case 2: ac();   break;
			/*case 3: sil();   break;*/
			case 0: printf("cikis yaptiniz.\n"); break;
			default : printf("hatali secim yaptiniz\n"); break;
		}
		secim=menu();
	}
	
	
	return 0;
}
