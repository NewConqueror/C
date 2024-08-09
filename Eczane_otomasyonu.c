#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct hasta{
	
	char tc[12];     // primitive keys birincil anahtar
	char adsoyad[20];
	char cinsiyet;	
	char adres[20];
	char tel[20];
	int guvence;

} hasta ;

typedef struct ilac{
	
	int barkod;       // primitive keys birincil anahtar
	char ilacadi[20];
	char uretici[20];
	int adet;
	float fiyat;
	
} ilac ;

typedef struct satis{
	
	char hastatc[12];     // yabancýl anahtar birincil anahtarý kullanan yani
	int ilacbarkod;       // yabancýl anahtar
	int adet;
	char tarih[10];
	float fiyat;
	
} satis ;

stokguncelle(int barkod,int adet){
	
	ilac i1;
	int sonuc=0,sayac=0;

    FILE *ptr=fopen("ilaclarecz.dat","r+b");
    
    while(fread(&i1, sizeof(ilac), 1, ptr)!=NULL){
    	
    	if(barkod==i1.barkod){
    	   sonuc=1;
    	   break;
		}
    	sayac++;
	}
	if(sonuc==0){
		fclose(ptr);
	}
	else{
	
		rewind(ptr);
		
		i1.adet=i1.adet-adet;
		
		fseek(ptr, (sayac) * sizeof(ilac),SEEK_SET);
		fwrite(&i1, sizeof(ilac), 1, ptr);
		fclose(ptr);
		printf("Stok kismindan ilac eksildi.\n"); 
	}
		
}	
	
void satisyap(){
	system("cls");
	printf("Satis ekrani\n\n");
	satis s1;
	hasta h1;
	ilac  i1;
	
	int hsonuc=0,isonuc=0;
	
	printf("Hasta TC   : "); scanf(" %[^\n]s",s1.hastatc);
	printf("Ilac barkod: "); scanf("%d",&s1.ilacbarkod);
	printf("Adet kutu  : "); scanf("%d",&s1.adet);
	
	FILE *hptr=fopen("hastalarecz.dat","r+b");
	FILE *iptr=fopen("ilaclarecz.dat","r+b");
	
	while(fread(&h1, sizeof(hasta), 1, hptr)!=NULL){
		
		if(strcmp(h1.tc,s1.hastatc)==0){
			hsonuc=1;
			break;
		}
		
	}
	
	while(fread(&i1, sizeof(ilac), 1, iptr)!=NULL){
		
		if(i1.barkod==s1.ilacbarkod){
			isonuc=1;
			break;
		}
		
	}
	fclose(hptr);
	fclose(iptr);
	
	if(hsonuc==0){
		printf("Hatali tc numarasi.\n");
		return ;
	}
	
	if(isonuc==0){
		printf("hatali barkod numarasi.\n");
		return ;
	}
	
	if(s1.adet > i1.adet){
		printf("stokta yeterli miktarda ilac yok.\n");
		return ;
	}
	else
	{
		FILE *sptr=fopen("satislarecz.txt","a");
		float toplamfiyat;
		toplamfiyat= s1.adet * i1.fiyat ;
		time_t satisTarihi=time(NULL);
		if(sptr==NULL){
			printf("dosya bulunamadi");
		}
		else{
			
		fprintf(sptr,"***********************\n");
		fprintf(sptr,"satis tarihi   	: %s\n",ctime(&satisTarihi) );
		fprintf(sptr,"kisi  bilgileri: %s\t%s\t%s\n",h1.tc,h1.adsoyad,h1.tel);	
		fprintf(sptr,"ilac  bilgileri: %d\t%s\n",i1.barkod,i1.ilacadi);
		fprintf(sptr,"ucret bilgileri [adet/fiyat/toplamucret] : %d\t%.2f\t%.2f\n",s1.adet,i1.fiyat,toplamfiyat);	
		fclose(sptr);
		printf("satis tamam\n");	
		printf("Toplam ucret: %.2f TL\n",toplamfiyat);
		
		stokguncelle(s1.ilacbarkod,s1.adet);
		}
		
	}
} 

int guvence(){
	int secim;
	printf("1-SGK \n");
	printf("2-GSK \n");
	printf("3-EMEKLI\n");
	printf("4-guvence kaydi yok\n");
	printf("seciminiz: "); scanf("%d",&secim);
	return secim;
}

void hastakaydi(){
	system("cls");
	
	hasta h1;
	
	printf("\n Hasta kayit ekrani\n\n");
	printf("TC       : "); scanf(" %[^\n]s",h1.tc);
	printf("Ad-soyad : "); scanf(" %[^\n]s",h1.adsoyad);
	printf("Cinsiyet : "); scanf(" %c",&h1.cinsiyet);
	printf("Adres    : "); scanf(" %[^\n]s",h1.adres);
	printf("Telefon  : "); scanf(" %[^\n]s",h1.tel);
    h1.guvence=guvence();
    
    FILE *ptr=fopen("hastalarecz.dat","a+b");
    
    fwrite(&h1, sizeof(hasta), 1, ptr);
    fclose(ptr);
    printf("Hasta kaydi tamam\n");
}
 
void ilackaydi(){
	
	system("cls");
	
	ilac i1;
	
	printf("\n ilac kayit ekrani\n\n");
	printf("Barkod No     : "); scanf(" %d",&i1.barkod);
	printf("Ilac Adi      : "); scanf(" %[^\n]s",i1.ilacadi);
	printf("Uretici Firma : "); scanf(" %[^\n]s",i1.uretici);
	printf("Adet (kutu)   : "); scanf(" %d",&i1.adet);
	printf("Fiyat         : "); scanf(" %f",&i1.fiyat);
    
    FILE *ptr=fopen("ilaclarecz.dat","a+b");
    
    fwrite(&i1, sizeof(ilac), 1, ptr);
    fclose(ptr);
    printf("ilac kaydi tamam\n");
	
}
 
void hastalistele(){
	system("cls");
	
	hasta h1;
	
	printf("\n Hasta listeleme ekrani\n\n");
	printf("%-12s%-20s%-10s%-10s%-11s%-8s\n","TC","AD-SOYAD","CINSIYET","ADRES","TELEFON","GUVENCE" );
	
    FILE *ptr=fopen("hastalarecz.dat","r+b");
    
    while(fread(&h1, sizeof(hasta), 1, ptr)!=NULL){
    	
    printf("%-12s%-20s%-10c%-11s%-11s%-8d\n",h1.tc,h1.adsoyad,h1.cinsiyet,h1.adres,h1.tel,h1.guvence);
    	
	}
    fclose(ptr);
}
 
void ilaclistele(){
	
	system("cls");
	
	ilac i1;
	
	printf("\n Ilac listeleme ekrani\n\n");
	printf("%-12s%-20s%-20s%-12s%-10s \n","BARKOD NO","ILAC ADI","FIRMA ADI","ADET(KUTU)","FIYAT(TL)");
	
    FILE *ptr=fopen("ilaclarecz.dat","r+b");
    
    while(fread(&i1, sizeof(ilac), 1, ptr)!=NULL){
    	
    printf("%-12d%-20s%-20s%-12d%.2f TL \n",i1.barkod,i1.ilacadi,i1.uretici,i1.adet,i1.fiyat);
    	
	}
    fclose(ptr);
	
}
void ilacguncelle(){
	
	system("cls");
	ilac i1;
	
	int barkod,yeniadet;
	float yenifiyat; 
	int sonuc=0,sayac=0;
	
	printf("\n Ilac guncelleme ekrani\n\n");
	printf("guncellemek istediginiz ilacin barkod no: "); scanf("%d",&barkod);
	
    FILE *ptr=fopen("ilaclarecz.dat","r+b");
    
    while(fread(&i1, sizeof(ilac), 1, ptr)!=NULL){
    	
    	if(barkod==i1.barkod){
    	   printf("%-12d%-20s%-10s%-11d%2.f TL \n",i1.barkod,i1.ilacadi,i1.uretici,i1.adet,i1.fiyat);
    	   sonuc=1;
    	   break;
		}
    	sayac++;
	}
	if(sonuc==0){
		printf("%d barkod numarali ilac yok.\n",barkod);
		fclose(ptr);
	}
	else{
		printf("yeni stok adetini girin  : "); scanf("%d",&yeniadet);
		printf("yeni ilac fiyatini girin : "); scanf("%f",&yenifiyat);
		
		rewind(ptr);
		
		i1.adet=yeniadet;
		i1.fiyat=yenifiyat;
		
		fseek(ptr, (sayac) * sizeof(ilac),SEEK_SET);
		fwrite(&i1, sizeof(ilac), 1, ptr);
		fclose(ptr);
		printf("Ilac guncelleme islemi tamamlandi.\n"); 
	}
		
	}
	

void satislari_raporla(){
	system("cls");
	
	FILE *ptr=fopen("satislarecz.txt","r");
	
	char ch;
    if(ptr!=NULL){
		
	while(!feof(ptr)){
		
		ch=fgetc(ptr);
		printf("%c",ch);
		
	}
	
	
	}	
	else{
		printf("dosya bulunamadi.\n");
	}
	fclose(ptr);
}
	
	
void ilacKaydiSil() 
{
	system("cls") ; 	
	printf("Ilac kaydi silme ekrani \n\n"); 
	int barkod; 
	ilac i1; 
	int sonuc=0; 
	printf("Barkod no : "); scanf("%d", &barkod); 
	FILE *ptr= fopen("ilaclarecz.dat", "r+b"); 
	FILE *yptr= fopen("yedekecz.dat", "w+b"); 
	
	while( fread(&i1, sizeof(ilac), 1, ptr) !=NULL )
	{
		if( barkod != i1.barkod )
		fwrite(&i1, sizeof(ilac), 1, yptr) ; 	
		else
		{
			sonuc =1; 			
		}	
	}
	
	fclose(ptr); 
	fclose(yptr); 
	
	if( sonuc == 1 )
	{
	remove("ilaclarecz.dat"); 
	rename("yedekecz.dat","ilaclarecz.dat" ); 
	printf("%d barkod numarali ilac kaydi silindi \n", barkod); 
	}
	else
	printf("%d barkod numarali ilac kaydiniz bulunamadi !\n" , barkod ) ; 	
}

void kisiKaydiSil()
{
	system("cls") ; 	
	printf("Kisi kaydi silme ekrani \n\n"); 
	char tc[20]; 
	hasta  h1; 
	int sonuc=0; 
	printf("Kisi TC : "); scanf(" %[^\n]s", tc ); 
	FILE *ptr= fopen("hastalarecz.dat", "r+b"); 
	FILE *yptr= fopen("yedekecz.dat", "w+b"); 
	
	while( fread(&h1, sizeof(hasta ), 1, ptr) !=NULL )
	{
		if( strcmp( tc, h1.tc)==0 )
		sonuc=1; 
		else		
		fwrite(&h1, sizeof(hasta) , 1, yptr) ; 	
	}
	
	fclose(ptr); 
	fclose(yptr); 
	
	if( sonuc == 1 )
	{
	remove("hastalarecz.dat"); 
	rename("yedekecz.dat","hastalarecz.dat" ); 
	printf("%s TC numarali kisi kaydi silindi \n", tc); 
	}
	else
	printf("%s TC numarali kisi kaydi bulunamadi !\n" , tc ) ; 	
}


int menu(){
	int secim;
	printf("\nECZANE OTOMASYONU\n\n");	
	printf("1-satis yap\n");
	printf("2-hasta kaydi\n");
	printf("3-hastalari listele\n");
	printf("4-ilac kaydi\n");
	printf("5-ilaclari listele\n");
	printf("6-ilaclari guncelle\n");
	printf("7-satislari raporla\n");
	printf("8-ilac kaydi sil\n");
	printf("9-kisi kaydi sil\n");
	printf("0-programi kapat\n");
	printf("seciminiz: "); scanf("%d",&secim);
	return secim;
	
}


int main() {
	
	int secim=menu();
	
	while(secim!=0){
		
		switch(secim){
			
			case 1: satisyap(); break;
			case 2: hastakaydi(); break;
			case 3: hastalistele(); break;
			case 4: ilackaydi(); break;
			case 5: ilaclistele(); break;
			case 6: ilacguncelle(); break;
			case 7: satislari_raporla(); break;
			case 8: ilacKaydiSil(); break;
			case 9: kisiKaydiSil(); break;
			case 0: break;
			default: printf("hatali secim yaptiniz.\n");
		}
		
		secim=menu();
	}
	
	return 0;
}
