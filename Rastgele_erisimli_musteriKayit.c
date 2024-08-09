#include <stdio.h>
#include <stdlib.h>
// RASTGELE ER���ML� DOSYA M��TER� KAY�T
// fwrite fread
struct musteri{
	int no;
	char ad[10];
	char soyad[10];	
	int bakiye;
};

int main() {
	// �nce bellekte 100 ki�ilik yer ay�r�caz
	
	struct musteri bosmusteri={0,"","",0 };
	FILE *ptr;
	int i;
    
    if((ptr=fopen("rastgele musteri.txt","w"))!=NULL){
    	
    for(i=0;i<100;i++){
    	
    	fwrite(&bosmusteri,sizeof(struct musteri),1,ptr);
    	// bosmusteri ye yaz toplam struct hangi boyuttaysa o kadar yer ay�r
    	// ad 10 soyad 10 no 10 bakiye 10 vs gibi toplam 40 l�k yer ay�r
    	// 1 er 1 er yaz ve ptr nin g�sterdi�i dosyaya yaz yani rastgele muusteri.txt dosyas�na yazacak
	}
  }
    fclose(ptr);
	printf("100 musteri kaydi icin yer ayrildi\n\n");
	
	
	if((ptr=fopen("rastgele musteri.txt","r+"))!=NULL){
    	
    for(i=0;i<2;i++){
    	
    	printf("%d.musterinin bilgilerini giriniz: ",i+1);
    	scanf("%d%s%s%d",&bosmusteri.no,bosmusteri.ad,bosmusteri.soyad,&bosmusteri.bakiye);
    	
    	fseek(ptr,(bosmusteri.no-1) * sizeof(struct musteri),SEEK_SET); 
    	// kay�t yap�lacak yerin koordinatlar�n� belirledik ba�tan itibaren kaydet 
    	// ptr nin g�sterdi�i dosyada ptr yi ba�a al�yor muhtemelen yani rastgele musteri.txt de
    	// -1 de istedi�imiz yere kaydetsin diye mesela 15 dersek 0 dan saymaya ba�lad��� zaman
    	// 15 say�s� 16. h�creye denk gelicek 15. h�creye denk gelmesi i�in -1 yazd�k
    	
    	fwrite(&bosmusteri,sizeof(struct musteri),1,ptr); // yazma i�lemini yapt�k
	}
  }
	printf("musteri kayit islemi tamamlandi");
	fclose(ptr);
	
	
	if((ptr=fopen("rastgele musteri.txt","r"))!=NULL){
    	
    
    	printf("kayitli musteri bilgileri\n");
    	printf("%s\t%s\t%s\t%s\n","no","ad","soyad","bakiye\n");
    	
    	while(!feof(ptr)){
		
    	fread(&bosmusteri,sizeof(struct musteri),1,ptr); // yazma i�lemini yapt�k
    	if(bosmusteri.no!=0)
    	printf("%s\t%s\t%d\t%d\n",bosmusteri.ad,bosmusteri.soyad,bosmusteri.no,bosmusteri.bakiye);
	}
  }
	fclose(ptr);
	
	
	
	
	return 0;
}
