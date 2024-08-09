#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct hasta{
	char tc[11];
	char ad[20];
	char soyad[20];
	char tel[20];
	char adres[20];
	int klinikNO;
	int doktorNO;
	int durum;
};

struct doktor{
	char ad[20];
	char soyad[20];
	int klinikNO;
	int doktorNO;
};



void hasta_kayit(){
	
	struct hasta  h1;
	struct doktor d1;
	int sonuc=0;
	system("cls");
	
	printf("Hasta kayit ekrani\n\n");
	printf("tc   : "); scanf(" %[^\n]s",h1.tc);
	printf("ad   : "); scanf(" %[^\n]s",h1.ad);
	printf("soyad: "); scanf(" %[^\n]s",h1.soyad);
	printf("tel  : "); scanf(" %[^\n]s",h1.tel);
	printf("adres: "); scanf(" %[^\n]s",h1.adres);
	
	system("cls");
	printf("KLINIKLER\n1-KBB\n2-FIZIK\n3-COCUK\n4-noroloji\n5-dahiliye\n");
	printf("klinik no: "); scanf("%d",&h1.klinikNO);
	
	FILE *ptr=fopen("doktorlar.txt","r+b");
	
	if(ptr!=NULL){
		while(fread(&d1, sizeof(struct doktor), 1, ptr)!=NULL){
			
			if(h1.klinikNO==d1.klinikNO){
				sonuc=1;
				printf("%d\t%s\t%s\n",d1.doktorNO,d1.ad,d1.soyad);
			}
			
		}
		
	}
	fclose(ptr);
	 
	if(sonuc==0){
		printf("bu bolumde doktor yok!\n");
	}
	else{
	    printf("doktor no: "); scanf("%d",&h1.doktorNO);
	    h1.durum=0;
	    
	    FILE *hptr=fopen("hastalar.txt","a+b");
	    if(hptr!=NULL){
	    	fwrite(&h1, sizeof(struct hasta), 1, hptr);
		}
		fclose(hptr);
	}


	printf("Hasta kaydi tamam\n");
	
}


muayene_et(struct doktor d1){
	
	struct hasta  h1;
	int sonuc=0,sayac=0;
	char aciklama[50];
	system("cls");
	char dosyaadi[6];
	dosyaadi[0]=d1.ad[0];
	dosyaadi[1]=d1.soyad[0];
	dosyaadi[2]='.';
	dosyaadi[3]='t';
	dosyaadi[4]='x';
	dosyaadi[5]='t';
	
	FILE *mptr=fopen(dosyaadi,"a");
	
	printf("\n\nBekleyen hastalar\n\n");
	
	FILE *hptr=fopen("hastalar.txt","r+b");
	
	if(hptr!=NULL){
		
		while(fread(&h1, sizeof(struct hasta), 1, hptr) !=NULL){
			sayac++;
			if(d1.doktorNO==h1.doktorNO && h1.durum==0){
				
				sonuc=1;
				printf("%s hastasinin muayene sonucu: ",h1.ad);
				scanf("%[^\n]s",aciklama);
				h1.durum=1;
				
				fprintf(mptr,"%s\t%s\t%s\t%s\n",h1.tc,h1.ad,h1.soyad,aciklama);
				fclose(mptr);
				
				fseek(hptr, (sayac)* sizeof(struct hasta), SEEK_SET);
				
				fwrite(&h1, sizeof(struct hasta), 1, hptr);
				fclose(hptr);
				break;
			}
		}
		
	}
	fclose(hptr);
	 
	if(sonuc==0){
		printf("bekleyen hastaniz kalmadi!\n");
	}
	else{
	    muayene_et(d1);
	}
	
	
	
}


void bekleyen_hastalar(struct doktor d1){
	
	struct hasta  h1;
	int sonuc=0;
	system("cls");
	
	printf("\n\nBekleyen hastalar ekrani \n\n");
	
	FILE *hptr=fopen("hastalar.txt","r+b");
	
	if(hptr!=NULL){
		
		while(fread(&h1, sizeof(struct hasta), 1, hptr)!=NULL){
			
			if(d1.doktorNO==h1.doktorNO && h1.durum==0){
				
				sonuc=1;
				printf("%s\t%s\t%s\n",h1.tc,h1.ad,h1.soyad);
				
			}
		}
		
	}
	fclose(hptr);
	 
	if(sonuc==0){
		printf("bekleyen hastaniz yok!\n");
	}
	else{
	    muayene_et(d1);
	}
	
}


void doktor_giris(){
	
	struct doktor d1;
	system("cls");
	char kullaniciadi[20];
	char parola[20];
	int sonuc=0;
	
	printf("Doktor giris ekrani\n\n");
	printf("kullanici adi   : "); scanf(" %[^\n]s",kullaniciadi);
	printf("parola: "); scanf(" %[^\n]s",parola);
	
	
	FILE *ptr=fopen("doktorlar.txt","r+b");
	if(ptr!=NULL){
		while(fread(&d1, sizeof(struct doktor), 1, ptr)!=NULL){
			
			if(strcmp(kullaniciadi,d1.ad)==0 && strcmp(parola,d1.soyad)==0){
					sonuc=1;
					printf("Hosgeldiniz Dr. %s %s",d1.ad,d1.soyad);
					break;
			}
		}
		
	}
	fclose(ptr);
	if(sonuc==0){
		printf("hatali kullanici adi veya parola!\n");
	}
	else{
		bekleyen_hastalar(d1);
	}
	
}


void doktor_kayit(){
	
	struct doktor d1;
	system("cls");
	
	printf("Doktor kayit ekrani\n\n");
	printf("ad   : "); scanf(" %[^\n]s",d1.ad);
	printf("soyad: "); scanf(" %[^\n]s",d1.soyad);
	system("cls");
	printf("KLINIKLER\n1-KBB\n2-FIZIK\n3-COCUK\n4-noroloji\n5-dahiliye\n");
	printf("klinik no: "); scanf("%d",&d1.klinikNO);
	printf("doktor no: "); scanf("%d",&d1.doktorNO);
	
	FILE *ptr=fopen("doktorlar.txt","a+b");
	if(ptr!=NULL){
		fwrite(&d1, sizeof(struct doktor), 1, ptr);
	}
	fclose(ptr);
	printf("doktor kaydi tamam\n");
}

doktor_listele(){
	
	system("cls");
	struct doktor d1;
	int adet=0;
	FILE *ptr=fopen("doktorlar.txt","r+b");
	printf("%s\t%s\t%s\t%s\n","kNO","dNO","AD","SOYAD");
	
	if(ptr!=NULL){

	while(fread(&d1, sizeof(struct doktor), 1, ptr)!=NULL){
		printf("%d\t%d\t%s\t%s\n",d1.klinikNO,d1.doktorNO,d1.ad,d1.soyad);
		adet++;
		}
		printf("doktor sayisi: %d",adet);
	}
	fclose(ptr);
}

int menu(){
	int secim;
	printf("\n\nHASTANE OTOMASYONU\n\n");
	printf("1- hasta kayit\n");
	printf("2- doktor giris\n");
	printf("3- doktor kayit\n");
	printf("4- doktor listele\n");
	printf("0-programi kapat\n");
	printf("seciminiz: "); scanf("%d",&secim);
	return secim;
}


int main() {
	
	int secim=menu();
	
	while(secim!=0){
		
		switch(secim){
			case 1: hasta_kayit();    break;
			case 2: doktor_giris();   break;
			case 3: doktor_kayit();   break;
			case 4: doktor_listele(); break;
			case 0: break;
			default : printf("hatali secim yaptiniz.\n");
		}
		secim=menu();
	}
	
	
	return 0;
}
