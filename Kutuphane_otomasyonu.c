#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct kitap{
	
	int barkod;
	char kitapadi[20];
	char yazaradi[20];
	char yayinevi[20];
	char kitapturu[20];
	char teminturu[20];
	char temintarihi[20];
	int stoksayisi;
	
} kitap ;

typedef struct uye{
	
	char tc[20];
	char adsoyad[20];
	char cinsiyet;
	char dogumtarihi[20];
	char telefon[20];
	char eposta[20];
	char uyeliktarihi[20];
	char adres[20];
	int durum;
	
} uye ;

typedef struct emanet{
	
	int kitapbarkod;
	char uyetc[20];
	time_t teslimtarihi;
	time_t iadetarihi;
	int kullanacagiGunsayisi;
	int kullandigiGunsayisi;
	int gecikmeGunsayisi;
	int durum;
	
} emanet ;


void kitapekle(){
	system("cls");
	printf("Kitap ekleme ekrani\n\n");
	
	kitap k1;
	
	printf("barkod       : "); scanf("%d",&k1.barkod);
	printf("kitap adi    : "); scanf(" %[^\n]s",k1.kitapadi);
	printf("yazar adi    : "); scanf(" %[^\n]s",k1.yazaradi);
	printf("yayin evi    : "); scanf(" %[^\n]s",k1.yayinevi);
	printf("kitap turu   : "); scanf(" %[^\n]s",k1.kitapturu);
	printf("temin turu   : "); scanf(" %[^\n]s",k1.teminturu);
	printf("temin tarihi : "); scanf(" %[^\n]s",k1.temintarihi);
	printf("stok sayisi  : "); scanf("%d",&k1.stoksayisi);
	
	FILE *ptr=fopen("kitaplarko.dat","a+b");
	fwrite(&k1, sizeof(kitap), 1, ptr);
	fclose(ptr);
	printf("kitap kaydi tamam.\n");
	
}

void kitapsil(){
	system("cls");
	printf("Kitap silme ekrani\n\n");
	
	kitap k1;
	int barkod;
	int sonuc=0;
	
	printf("silmek istediginiz kitabin barkodu : "); scanf("%d",&barkod);
	
	FILE *ptr=fopen("kitaplarko.dat","r+b");
	FILE *yptr=fopen("yedekko.dat","w+b");
	
	while(fread(&k1, sizeof(kitap), 1, ptr)!=NULL){
		
		if(k1.barkod!=barkod){
			fwrite(&k1, sizeof(kitap), 1, yptr);
		}
		else{
			sonuc=1;
		}
	}
	fclose(ptr);
	fclose(yptr);
	
	if(sonuc==0){
		printf("%d barkod numarali kitap bulunamadi.\n",barkod);
	}
	else{
		
		remove("kitaplarko.dat");
		rename("yedekko.dat","kitaplarko.dat");
		printf("%d barkod numarali kitap silindi\n",barkod);
	}
	
}

void kitaplistele(){
	system("cls");
	printf("Kitap listeleme ekrani\n\n");
	
	kitap k1;
	int barkod;
	int kitapsayisi=0;
	
	FILE *ptr=fopen("kitaplarko.dat","r+b");
	
printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n","BARKOD","KITAP-ADI","YAZAR-ADI","YAYIN EVI","KITAP TURU","TEMIN TURU","TEMÝN TARÝHÝ","STOK");
	while(fread(&k1, sizeof(kitap), 1, ptr)!=NULL){
	
printf("%d\t%s\t%s\t%s\t%s\t%s\t%s\t%d\n",k1.barkod,k1.kitapadi,k1.yazaradi,k1.yayinevi,k1.kitapturu,k1.teminturu,k1.temintarihi,k1.stoksayisi);
		
		kitapsayisi+=k1.stoksayisi;
	}
	fclose(ptr);

	printf("Toplam kitap sayisi: %d",kitapsayisi);
}




void kitapislemleri(){
	system("cls");
	printf("Kitap islemleri ekrani\n\n");
	
	int secim;
	printf("1-kitap ekle\n");
	printf("2-kitap sil\n");
	printf("3-kitap listele\n");
	printf("0-ana menuye don\n");
	printf("seciminiz: "); scanf("%d",&secim);
	
	switch(secim){
		
		case 1: kitapekle(); break;
		case 2: kitapsil(); break;
		case 3: kitaplistele(); break;
		case 0: break;
		default: printf("hatali secim yaptiniz ana menuye donuluyor.\n"); break;
	}
	
	
}

void uyeekle(){
	system("cls");
	printf("uye ekleme ekrani\n\n");
	
	uye u1;
	
	printf("TC            : "); scanf(" %[^\n]s",u1.tc);
	printf("ad soyad      : "); scanf(" %[^\n]s",u1.adsoyad);
	printf("cinsiyet      : "); scanf(" %[^\n]s",&u1.cinsiyet);
	printf("dogum tarihi  : "); scanf(" %[^\n]s",u1.dogumtarihi);
	printf("telefon       : "); scanf(" %[^\n]s",u1.telefon);
	printf("eposta        : "); scanf(" %[^\n]s",u1.eposta);
	printf("uyelik tarihi : "); scanf(" %[^\n]s",u1.uyeliktarihi);
	printf("adres         : "); scanf(" %[^\n]s",u1.adres);
	u1.durum=0;
	
	FILE *ptr=fopen("uyelerko.dat","a+b");
	fwrite(&u1, sizeof(uye), 1, ptr);
	fclose(ptr);
	printf("uye kaydi tamam.\n");
	
}

void uyesil(){
	system("cls");
	printf("uye silme ekrani\n\n");
	
	uye u1;
	char tc[20];
	int sonuc=0;
	
	printf("silmek istediginiz kisinin tc : "); scanf(" %[^\n]s",tc);
	
	FILE *ptr=fopen("uyelerko.dat","r+b");
	FILE *yptr=fopen("yedekko.dat","w+b");
	
	while(fread(&u1, sizeof(uye), 1, ptr)!=NULL){
		
		if(strcmp(tc,u1.tc)!=0){
			fwrite(&u1, sizeof(uye), 1, yptr);
		}
		else{
			sonuc=1; 	
		}
	}
	fclose(ptr);
	fclose(yptr);
	
	if(sonuc==0){
		printf("%s TC numarali kisi bulunamadi.\n",tc);
	}
	else{
		
		remove("uyelerko.dat");
		rename("yedekko.dat","uyelerko.dat");
		printf("%s TC numarali kisi silindi\n",tc);
	}
	
	
}

void uyelistele(){
	system("cls");
	printf("uye listeleme ekrani\n\n");
	
	uye u1;
	int kisisayisi=0;
	
	FILE *ptr=fopen("uyelerko.dat","r+b");
	
printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n","TC","AD-SOYAD","CINSIYET","DOGUM TARIHI","TELEFON","EPOSTA","UYELIK TARIHI","ADRES","DURUM");
	while(fread(&u1, sizeof(uye), 1, ptr)!=NULL){
	
printf("%s\t%s\t%c\t%s\t%s\t%s\t%s\t%d\n",u1.tc,u1.adsoyad,u1.cinsiyet,u1.dogumtarihi,u1.telefon,u1.eposta ,u1.uyeliktarihi,u1.adres,u1.durum);
		
	    kisisayisi++;
	}
	fclose(ptr);

	printf("Toplam kisi sayisi: %d",kisisayisi);
	
}

void uyeislemleri(){
 	system("cls");
	printf("uye islemleri ekrani\n\n");
	
	int secim;
	printf("1-uye ekle\n");
	printf("2-uye sil\n");
	printf("3-uye listele\n");
	printf("0-ana menuye don\n");
	printf("seciminiz: "); scanf("%d",&secim);
	
	switch(secim){
		
		case 1: uyeekle(); break;
		case 2: uyesil(); break;
		case 3: uyelistele(); break;
		case 0: break;
		default: printf("hatali secim yaptiniz ana menuye donuluyor.\n"); break;
	}
	
 	
 	
 }
 
void stokguncelle(int barkod,int adet){
	
	kitap k1;
	int sayac=0;
	
	FILE *ptr=fopen("kitaplarko.dat","r+b");
	
	while(fread(&k1, sizeof(kitap), 1, ptr)!=NULL){
		
		if(barkod==k1.barkod){
			break;
		}
	   
	   sayac++;	
	}
	rewind(ptr);
	
	fseek(ptr, (sayac) * sizeof(kitap), SEEK_SET);
	k1.stoksayisi+=adet;
	fwrite(&k1, sizeof(kitap), 1, ptr);
	fclose(ptr);
	printf("stok guncellendi.\n");
}
 
 
void emanetkitapver(){
	system("cls");
	printf("emanet kitap verme ekrani\n\n");
	
	emanet e1;
	kitap  k1;
	uye    u1;
	int usonuc=0,ksonuc=0;
	
	printf("TC     :    "); scanf(" %[^\n]s",e1.uyetc);
	printf("barkod : ");    scanf("%d",&e1.kitapbarkod);
	
	FILE *uptr=fopen("uyelerko.dat","r+b");
	
	while(fread(&u1, sizeof(uye), 1, uptr)!=NULL){
		
		if(strcmp(e1.uyetc,u1.tc)==0){
			usonuc=1;
			break;
		}
		
	}
	fclose(uptr);
	if(usonuc==0){
		printf("%s TC numarali uye yok ana menuye donuluyor.\n",e1.uyetc);
		return;
	}
	
	if(u1.durum==-1){
		printf("%s TC numrali kisi yasakli sie",e1.uyetc);
	}

	FILE *kptr=fopen("kitaplarko.dat","r+b");
	
	while(fread(&k1, sizeof(kitap), 1, kptr)!=NULL){
		
		if(e1.kitapbarkod==k1.barkod){
			ksonuc=1;
			break;
		}
		
	}
	fclose(kptr);
	
	if(ksonuc==0){
		printf("%s barkod numarali kitap yok ana menuye donuluyor.\n",e1.kitapbarkod);
		return;
	}
	
	if(k1.stoksayisi < 1){
		printf("%d barkod numarali kitap elimizde yok",e1.kitapbarkod);
		return;
	}
	
	FILE *ptr=fopen("emanetlerko.dat","a+b");
	printf("kac gun kullanacak: "); scanf("%d",&e1.kullanacagiGunsayisi);
	e1.teslimtarihi=time(0); 
	
	fwrite(&e1, sizeof(emanet), 1, ptr);
	fclose(ptr);
	printf("emanet kaydi tamam.\n");
	stokguncelle(e1.kitapbarkod, -1);
	
}

uyeguncelle(char *tcptr){
	
	uye u1; 
	int sonuc=0,sayac=0;
	
	FILE *ptr=fopen("uyelerko.dat","r+b");
	
	while(fread(&u1, sizeof(uye), 1, ptr)!=NULL){
		
		if(strcmp(*tcptr,u1.tc)==0){
			sonuc=1;
			break;
		}
		
		sayac++;
	}
	if(sonuc==1){
		
		rewind(ptr);
		fseek(ptr, (sayac)* sizeof(uye), SEEK_SET);
		u1.durum=-1;
		fwrite(&u1, sizeof(uye), 1, ptr);
		printf("uye durumu guncellendi");
	}
	fclose(ptr);
}

void emanetiadeal(){
	system("cls");
	printf("emanet kitap iade alma ekrani\n\n");
	
	emanet e1;

	int sonuc=0,sayac=0;
	char uyeTC[20];
	int emanetbarkod;
	
	printf("TC     :    "); scanf(" %[^\n]s",uyeTC);
	printf("barkod : ");    scanf("%d",&emanetbarkod);
	
	FILE *ptr=fopen("emanetlerko.dat","r+b");
	
	while(fread(&e1, sizeof(emanet), 1, ptr)!=NULL){
		
		if(strcmp(e1.uyetc,uyeTC)==0 && emanetbarkod==e1.kitapbarkod){
			sonuc=1;
			break;
		}
		sayac++;
	}
	
	if(sonuc==0){
		fclose(ptr);
		printf("%s TC veya %d barkod numarali emanet kaydi yok.\n",uyeTC,emanetbarkod);
		return;
	}
	else{
		rewind(ptr);
	e1.teslimtarihi = time(0);
	
	float saniye,dakika,saat,gun;
	saniye=difftime(e1.iadetarihi,e1.teslimtarihi);
	dakika=saniye/60;
	saat=dakika/60;
	gun=saat/24;
	e1.kullandigiGunsayisi= gun;
	printf("kullandigidniz saniye: %.2f\n",saniye);
	printf("kullandigidniz dakika: %.2f\n",dakika);
	printf("kullandigidniz saat  : %.2f\n",saat);
	printf("kullandigidniz gun   : %.2f\n",gun);	
	
	e1.gecikmeGunsayisi=e1.kullanacagiGunsayisi - e1.kullandigiGunsayisi;
	
	if(e1.gecikmeGunsayisi > 10)
		e1.durum = -1;
	else
	e1.durum=1;	
	
	e1.durum=1;
	fseek(ptr, (sayac)* sizeof(emanet), SEEK_SET);
	fwrite(&e1, sizeof(emanet), 1, ptr);
	fclose(ptr);
	printf("emanet kaydi tamam.\n");
	}
	
	stokguncelle(e1.kitapbarkod, 1);
	if(e1.durum==-1)
	uyeguncelle(uyeTC);
	
}

void emanetlistele(){
	
	system("cls")  ; 
	printf("Emanet kitap listeleme ekrani ... \n\n"); 
	emanet e1; 
	int sayac=0; 
	FILE * ptr= fopen("emanetlerko.dat", "r+b") ; 
	printf("%-20s%-20s%-20s%-20s\n", "TC", "BARKOD", "TARIH", "DURUM" ) ; 
	while( fread(&e1, sizeof(emanet) ,1, ptr ) !=NULL  )
	{
		struct tm *tbilgi= localtime(&e1.teslimtarihi); 
		char tarih[20]; 
		strftime( tarih, sizeof(tarih), "%d.%m.%Y", tbilgi ); 
		
		if( e1.durum==0 )
		{
			printf("%-20s%-20d%-20s%-20d\n" , e1.uyetc, e1.kitapbarkod, tarih, e1.durum);  
			sayac++; 
		}		
	}
	fclose(ptr); 
	printf("Emanet kayit sayisi : %d \n", sayac) ;
	
}
 
 
void emanetKitapIslemleri(){
	system("cls");
	printf("Emanet kitap islemleri ekrani\n\n");
	
	int secim;
	printf("1-emanet kitap ver\n");
	printf("2-emanet kitabý iade al\n");
	printf("3-emanetteki kitaplari listele\n");
	printf("0-ana menuye don\n");
	printf("seciminiz: "); scanf("%d",&secim);
	
	switch(secim){
		
		case 1: emanetkitapver(); break;
		case 2: emanetiadeal(); break;
		case 3: emanetlistele(); break;
		case 0: break;
		default: printf("hatali secim yaptiniz ana menuye donuluyor.\n"); break;
	}
	
 	
 }

int menu(){
	int secim;
	printf("\nKUTUPHANE OTOMASYONU\n\n");
	printf("1-KITAP ISLEMLERI\n");
	printf("2-UYE ISLEMLERI\n");
	printf("3-EMANET KITAP ISLEMLERI\n");
	printf("0-PROGRAMI KAPAT\n\n");
	printf("seciminiz: "); scanf("%d",&secim);
	return secim;
}

int main() {
	
	int secim=menu();
	
	while(secim!=0){
		
		switch(secim){
			
			case 1: kitapislemleri(); break;
			case 2: uyeislemleri(); break;
			case 3: emanetKitapIslemleri(); break;
			case 0: break;
			default: printf("hatali secim yaptiniz.\n");
		}
		secim=menu();
	}
	
	
	return 0;
}
