#include <stdio.h>
#include <stdlib.h>

char ad[10];
char soyad[10];
char tel[10];
char adres[10];

FILE *dosya;
FILE *gecici;

void ekle(){
	printf("kayit edilecek musteri bilgilerini giriniz\n");
	
	if( (dosya=fopen("musteri.txt","a"))!= NULL){
		printf("ad: "); scanf("%s",ad);
		printf("soyad: "); scanf("%s",soyad);
		printf("tel: "); scanf("%s",tel);
		printf("adres: "); scanf("%s",adres);
		
		fprintf(dosya,"%s\t%s\t%s\t%s\n",ad,soyad,tel,adres);
	}	
	printf("kayit islemi basarili.\n");
	fclose(dosya);
}

void listele(){
	system("cls");
	printf("kayitli musteri bilgileri\n");
	 printf("***************************\n");
     printf("ad\tsoyad\ttelefon\t\tadres\n");
     
	if( (dosya=fopen("musteri.txt","r"))!=NULL){
		
		strcpy(ad,"");
		strcpy(soyad,"");
		strcpy(tel,"");
		strcpy(adres,"");

	 while(!feof(dosya)){
	 	
	 	fscanf(dosya,"%s\t%s\t%s\t%s\n",ad,soyad,tel,adres);
	 	printf("%s\t%s\t%s\t%s\n",ad,soyad,tel,adres);
	 }	
	 
	}
	printf("***************************\n");
	printf("listeleme islemi basarili.\n");
	fclose(dosya);	
}

void ara(){
	system("cls");
	char isim[10];
	int sonuc=0;
	if( (dosya=fopen("musteri.txt","r"))!=NULL){
	 printf("aranacak ismi giriniz: "); scanf("%s",isim);
	 
	 while(!feof(dosya)){
	 	
	 	fscanf(dosya,"%s\t%s\t%s\t%s\n",ad,soyad,tel,adres);
	 	if(strcmp(isim,ad)==0){
	 		printf("***************************\n");
	 		printf("%s\t%s\t%s\t%s\n",ad,soyad,tel,adres);
	 		sonuc=1;
	 		break;
		 }
	 	
	 }	
	 printf("***************************\n");
	}
	if(sonuc==0){
	printf("%s isimli kisi listede yok",isim);	
	}
	
	fclose(dosya);	
	
}

void sil(){
	system("cls");
	char isim[10];
	int sonuc=0;
	if( (dosya=fopen("musteri.txt","r"))!=NULL){
	 printf("silinecek musteriyi giriniz: "); scanf("%s",isim);
	 
	 while(!feof(dosya)){
	 	
	 	fscanf(dosya,"%s\t%s\t%s\t%s\n",ad,soyad,tel,adres);
	 	if(strcmp(isim,ad)==0){
	 		
			fclose(dosya);	
	 		yedekle();
	 		guncelle(isim);
	 		sonuc=1;
	 		break;
		 }
	 	
	 }	

	}
	if(sonuc==0){
	printf("%s isimli kisi listede yok",isim);	
	}
	else{
		printf("silme islemi basarili.\n");
	}
	
}

void yedekle(){
	
	if( (gecici=fopen("yedek.txt","w"))!=NULL){
       
    if( (dosya=fopen("musteri.txt","r"))!=NULL){
	
	 while(!feof(dosya)){
	 	
	 	fscanf(dosya,"%s\t%s\t%s\t%s\n",ad,soyad,tel,adres);
	 	fprintf(gecici,"%s\t%s\t%s\t%s\n",ad,soyad,tel,adres);
	 }	
	 
	}
	
}    
    remove("musteri.txt");
	fclose(dosya);
	fclose(gecici);
	
}

void guncelle(char *ptrisim){
	
	if( (dosya=fopen("musteri.txt","w"))!=NULL){
       
    if( (gecici=fopen("yedek.txt","r"))!=NULL){
	
	 while(!feof(gecici)){
	 	
	 	fscanf(gecici,"%s\t%s\t%s\t%s\n",ad,soyad,tel,adres);
	 	if(strcmp(ptrisim,ad)==0)
	 	continue;
	 	
	 	fprintf(dosya,"%s\t%s\t%s\t%s\n",ad,soyad,tel,adres);
	 }	
	 
	}
	
}    
    remove("yedek.txt");
	fclose(dosya);
	fclose(gecici);
	
}

int menu(){
	int secim;
	
	printf("\n1-ekle\n");
	printf("2-listele\n");
	printf("3-ara\n");
	printf("4-sil\n");
	printf("0-cikis\n");
	printf("secim yapiniz: "); scanf("%d",&secim);
	return secim;
}

int main() {
	
	int secim=menu();
	
	while(secim!=0){
		
		if(secim==1){
			ekle();
			secim=menu();
		}
		
		else if(secim==2){
		    listele();
			secim=menu();
		}
		
		else if(secim==3){
			ara();
			secim=menu();
		}
		
		else if(secim==4){
			sil();
			secim=menu();
		}
		else{
			printf("hatali secim yaptiniz.\n");
		    secim=menu();
		}
	}
	
	return 0;
}
