#include <stdio.h>
#include <stdlib.h>

 struct kitapbilgi{
 	char kitapad[20];
 	char yazar[20];
 	int fiyat;
 	float puan;
 };

   struct ogrenci{
   	char ad[10];
   	char soyad[10];
   	int no;
   };


int main() {
	printf("benim ornek"); printf("\n\n");
	struct ogrenci sd={
		"fatih","yeni",277
	};
	printf("ad: %s",sd.ad); printf("\n");
	printf("soy ad: %s",sd.soyad); printf("\n");
	printf("numara: %d",sd.no);printf("\n\n");
	
	
	struct kitapbilgi kb={
		"icimizdeki seytan","sabahattin ali",10,8.3
	};
	
	printf("kitap adi: %s",kb.kitapad);
	printf("\n");
	printf("yazar: %s",kb.yazar);
	printf("\n");
	printf("fiyati: %d",kb.fiyat);
	printf("\n");
	printf("puani: %.1f",kb.puan);
	return 0;
}
