#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi=20;
	int *s=&sayi; 
	
	// sayiyi ekrana yazdirma
	printf("deger: %d",sayi);
	printf("\n");
	// sayinin bellek adresini ekrana yazdirma
	printf("bellek adresi: %x\n",s); // ampersand yani gemici düðümüne bir daha gerek yokkk
	
	char kelime='A';
	char *h=&kelime;
	// kelimeyi ekrana yazdýrma
	printf("harf: %c\n",kelime);
	// bellek adresini ekrana yazdýrma
	printf("adres: %x",h); 
	
	
	
	return 0;
}
