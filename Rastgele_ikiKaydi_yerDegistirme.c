#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// RASTGELE ERÝÞÝMLÝ DOSYA ÝÞLMELERÝ ÝLE ÝKÝ KAYDIN YER DEÐÝÞTÝRÝLMESÝ UYGULAMASI

struct ogrenci{
	int no ;
	char ad[10];
	int ort;
};
struct ogrenci bosogr={ 0,"", 0};
struct ogrenci ogr   ={ 0,"", 0};
struct ogrenci temp1 ={ 0,"", 0};
struct ogrenci temp2 ={ 0,"", 0};

FILE *ptr;

void olustur(){
	system("cls");
	int size,i;
	printf("kac ogrenci kaydi yapmak istiyorsunuz"); scanf("%d",&size);
	
	if(( ptr=fopen("pcmuh.txt","w"))!=NULL ){
		
		for(i=0;i<size;i++){
			fwrite(&bosogr,sizeof(struct ogrenci),1, ptr);
		}
		
	}
	fclose(ptr);
	printf("%d ogrenci icin yer ayrildi",size);
}

void ekle(){
	system("cls");
	printf("yeni kayit edilecek ogrenci bilgilerini giriniz\n");
	printf("numara / ad / ortalama: "); scanf("%d%s%d",&ogr.no,ogr.ad,&ogr.ort);
	
	if(( ptr=fopen("pcmuh.txt","r+"))!=NULL ){
		
	  fseek(ptr, (ogr.no-1) * sizeof(struct ogrenci), SEEK_SET );
	  fwrite(&ogr,sizeof(struct ogrenci),1, ptr);
	  
	}
	fclose(ptr);
	printf("kayit islemi tamamlandi.\n");
}

void sil(){
	system("cls");
	int numara;
	int sonuc=0;
	printf("silinecek ogrencinin numarasini giriniz\n");
	printf("numara"); scanf("%d",&numara);
	
	if(( ptr=fopen("pcmuh.txt","r+"))!=NULL ){
		
		while(!feof(ptr)){
			
			fread(&ogr,sizeof(struct ogrenci),1,ptr);
			if(numara==ogr.no){
			
			fseek(ptr, (ogr.no-1) * sizeof(struct ogrenci), SEEK_SET );// konumuna gittik
	        fwrite(&bosogr,sizeof(struct ogrenci),1, ptr);
				sonuc=1;
				break;
			}
			
		}
	}
	fclose(ptr);
	if(sonuc==1)
	printf("%d numarali ogrenci silindi\n",numara);
	else
	printf("%d numarali ogrenci listede yok!!\n",numara);	
	
	printf("silme islemi tamamlandi.\n");
	
	
}

void yazdir(){
	system("cls");
		if(( ptr=fopen("pcmuh.txt","r+"))!=NULL ){
		printf(" NO/   AD   / ORTALAMA\n");
		while(!feof(ptr)){
			
			
			fread(&ogr,sizeof(struct ogrenci),1,ptr);
			printf("  %d   %s    %d\n",ogr.no,ogr.ad,ogr.ort);
			
		}
	}
	fclose(ptr);	
}

void yerdegistir(){
	system("cls");
	int num1,num2;
	printf("yer degistirmek istediginiz ogrencilerin numaralarýný giriniz\n");
	printf("numara-1: "); scanf("%d",&num1);
	printf("numara-2: "); scanf("%d",&num2);
	
	if(( ptr=fopen("pcmuh.txt","r+"))!=NULL ){
	
		while(!feof(ptr)){
			fread(&ogr,sizeof(struct ogrenci),1,ptr);
			
			if(num1==ogr.no){
					temp1.no=ogr.no;
					strcpy(temp1.ad,ogr.ad);
					temp1.ort=ogr.ort;
			}
			if(num2==ogr.no){
					temp2.no=ogr.no;
					strcpy(temp2.ad,ogr.ad);
					temp2.ort=ogr.ort;
			}
			
		}
		fseek(ptr, (num1-1) * sizeof(struct ogrenci), SEEK_SET );// konumuna gittik
	    fwrite(&temp2,sizeof(struct ogrenci),1, ptr);
	    
	    fseek(ptr, (num2-1) * sizeof(struct ogrenci), SEEK_SET );// konumuna gittik
	    fwrite(&temp1,sizeof(struct ogrenci),1, ptr);
	}
	fclose(ptr);
	printf("%d ve %d numarali ogrencilerin yerleri degistirildi \n",num1,num2);	
}

int main() {
	
	int secim=-1;
	
	while(secim!=0){
		
		printf("\n\n1-yeni kayit ekle\n");
		printf("2-kayit sil\n");
		printf("3-yazdir\n");
		printf("4-yer degistir\n");
		printf("5-liste olustur (resetle)\n");
		printf("0-cikis.\n");
		printf("seciminiz: "); scanf("%d",&secim);
		
		if(secim==1){
			ekle();
		}
		
		else if(secim==2){
			sil();
		}
		
		else if(secim==3){
			yazdir();
		}
		
		else if(secim==4){
			yerdegistir();
		}
		
		else if(secim==5){
			olustur();
		}
		else if(secim==0){
			printf("cikis yaptiniz.\n");
		}
		else{
			printf("hatali secim yaptiniz.\n");
		}
	}
	
	return 0;
}
