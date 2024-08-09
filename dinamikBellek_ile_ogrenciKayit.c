#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci{
	char ad[10];
	int numara;
	int vize;
	int final;
};

void yenikayit(struct ogrenci *ptr, int n){
	
	int i=0;
    char ad[10];
	int numara;
	int vize;
	int final;
	
	while(i<n){
		
		printf("%d.ogrencinin bilgilerini giriniz\n",i+1);
		printf("ad: "); scanf("%s",ad);
		printf("numara: "); scanf("%d",&numara); 	
		printf("vize: "); scanf("%d",&vize);
		printf("final: "); scanf("%d",&final);
		
		strcpy(ptr->ad,ad);
		ptr->numara=numara;
		ptr->vize=vize;
		ptr->final=final;
		
		ptr++;
		i++;
	}
	
	printf("kayit islemi tamamlandi.\n");
	
}

void listele(struct ogrenci *ptr,int n){
	
	system("cls");
	int i=0;
	
	while(i<n){
		
		printf("%d.numarali ogrencinin bilgileri\n",ptr->numara);
		printf("ad: %s\n",ptr->ad); 
		printf("numara: %d\n",ptr->numara);  	
		printf("vize: %d\n",ptr->vize); 
		printf("final: %d\n",ptr->final); 
		printf("*********************\n");
		
		ptr++;
		i++;
	}

      printf("listeleme islemi tamamlandi.\n\n");
}

void guncelle(struct ogrenci *ptr, int n){  
	
	int i=0;
    char ad[10];
	int numara;
	int vize;
	int final;
	
	printf("kaydi guncellenicek ogrenci numarasi: "); scanf("%d",&numara);
	int sonuc=0;
	
	while(i<n){
		
		if(numara==ptr->numara){
			
		printf("%d.numarali ogrencinin yeni bilgilerini giriniz\n",ptr->numara);
		printf("ad: "); scanf("%s",ad);	
		printf("vize: "); scanf("%d",&vize);
		printf("final: "); scanf("%d",&final);
		
		strcpy(ptr->ad,ad);
		ptr->numara=numara;
		ptr->vize=vize;
		ptr->final=final;
		sonuc=1;
		break;
	}
	    
		ptr++;
		i++;
	}
	
	if(sonuc==0)
        printf("%d. numarali ogrenci listede yok!\n",numara);  	
          	
	
	printf("kayit islemi tamamlandi.\n");
	
}

void orthesapla(struct ogrenci *ptr, int n){  
	
	int i=0;
	int ort=0;
	int toplam=0;
	int sonort=0;
	
	while(i<n){
		
	ort= ptr->vize * 0.4 + ptr->final * 0.6 ;
	
	toplam+=ort; 
		
		ptr++;
		i++;
	}
	sonort=toplam/n;
	
	printf("sinif ortalamasi: %d\n",sonort);
	
}


void enbasariliogr(struct ogrenci *ptr, int n){  
	
	int i=0;
	int buyuk=0;
    char ad[10];
	int numara;
	int ort;
	
	while(i<n){
		
	ort= ptr->vize * 0.4 + ptr->final * 0.6 ;
	
	if(buyuk<ort){
		buyuk=ort;
		numara=ptr->numara;
		strcpy(ad,ptr->ad);
		ort=buyuk;
	}
		
		ptr++;
		i++;
	}
	
        printf("en basarili ogrencinin bilgileri\n");
		printf("ad: %s\n",ad); 
		printf("numara: %d\n",numara);  	
		printf("ortalama: %d\n",buyuk);
	    printf("******************\n");
}

int menu(){
	int secim;
	printf("1-yeni kayit ekleme\n");
	printf("2-kayit listeleme\n");
	printf("3-kayit guncelleme\n");
	printf("4-sinif ort hesaplama\n");
	printf("5-ort a gore en basarili ogrenci\n");
	printf("0 cikis..\n\n");
	printf("secim yapiniz: ");
	scanf("%d",&secim);
	
	return secim;
}

int main() {
	int secim;
	int n;
	printf("kac ogrenci kayit etmek istersiniz: ");  scanf("%d",&n);

	secim=menu();
	
	struct ogrenci *ogrptr= malloc( n * sizeof(struct ogrenci ));
	struct ogrenci *ptr=ogrptr; // kaydý ilerletmek ve baþtaki deðeri kaybetmemek için
	
	if(secim==0){
		printf("cikis yapiliyor..");
	}
	
	while(secim!=0){
		
		
		
		if(secim==1){
			yenikayit(ptr,n); 
			secim=menu();
		}
		
		if(secim==2){
			
			listele(ptr,n); 
			secim=menu();
		}
		
		if(secim==3){
			
			guncelle(ptr,n);
			secim=menu();
		}
		
		if(secim==4){
			
			orthesapla(ptr,n);
			secim=menu();
		}
		
		if(secim==5){
			enbasariliogr(ptr,n);
			secim=menu();
		}
		
		else{ printf("hatali giris yaptiniz.");
		}
		
	}
	
	
	
	return 0;
}
