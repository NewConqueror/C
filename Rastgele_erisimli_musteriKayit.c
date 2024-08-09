#include <stdio.h>
#include <stdlib.h>
// RASTGELE ERÝÞÝMLÝ DOSYA MÜÞTERÝ KAYÝT
// fwrite fread
struct musteri{
	int no;
	char ad[10];
	char soyad[10];	
	int bakiye;
};

int main() {
	// önce bellekte 100 kiþilik yer ayýrýcaz
	
	struct musteri bosmusteri={0,"","",0 };
	FILE *ptr;
	int i;
    
    if((ptr=fopen("rastgele musteri.txt","w"))!=NULL){
    	
    for(i=0;i<100;i++){
    	
    	fwrite(&bosmusteri,sizeof(struct musteri),1,ptr);
    	// bosmusteri ye yaz toplam struct hangi boyuttaysa o kadar yer ayýr
    	// ad 10 soyad 10 no 10 bakiye 10 vs gibi toplam 40 lýk yer ayýr
    	// 1 er 1 er yaz ve ptr nin gösterdiði dosyaya yaz yani rastgele muusteri.txt dosyasýna yazacak
	}
  }
    fclose(ptr);
	printf("100 musteri kaydi icin yer ayrildi\n\n");
	
	
	if((ptr=fopen("rastgele musteri.txt","r+"))!=NULL){
    	
    for(i=0;i<2;i++){
    	
    	printf("%d.musterinin bilgilerini giriniz: ",i+1);
    	scanf("%d%s%s%d",&bosmusteri.no,bosmusteri.ad,bosmusteri.soyad,&bosmusteri.bakiye);
    	
    	fseek(ptr,(bosmusteri.no-1) * sizeof(struct musteri),SEEK_SET); 
    	// kayýt yapýlacak yerin koordinatlarýný belirledik baþtan itibaren kaydet 
    	// ptr nin gösterdiði dosyada ptr yi baþa alýyor muhtemelen yani rastgele musteri.txt de
    	// -1 de istediðimiz yere kaydetsin diye mesela 15 dersek 0 dan saymaya baþladýðý zaman
    	// 15 sayýsý 16. hücreye denk gelicek 15. hücreye denk gelmesi için -1 yazdýk
    	
    	fwrite(&bosmusteri,sizeof(struct musteri),1,ptr); // yazma iþlemini yaptýk
	}
  }
	printf("musteri kayit islemi tamamlandi");
	fclose(ptr);
	
	
	if((ptr=fopen("rastgele musteri.txt","r"))!=NULL){
    	
    
    	printf("kayitli musteri bilgileri\n");
    	printf("%s\t%s\t%s\t%s\n","no","ad","soyad","bakiye\n");
    	
    	while(!feof(ptr)){
		
    	fread(&bosmusteri,sizeof(struct musteri),1,ptr); // yazma iþlemini yaptýk
    	if(bosmusteri.no!=0)
    	printf("%s\t%s\t%d\t%d\n",bosmusteri.ad,bosmusteri.soyad,bosmusteri.no,bosmusteri.bakiye);
	}
  }
	fclose(ptr);
	
	
	
	
	return 0;
}
