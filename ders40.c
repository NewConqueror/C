#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char kitapad[30],yazar[30],kitapyazar[60];
	
	printf("kitap adini ve yazarini giriniz: ");
	scanf("%s %s",kitapad,yazar);
	
	strcat(kitapyazar,kitapad); // kitapyazar a kitapad daki veriyi yollad�m
	strcat(kitapyazar," "); // kitapyazar a bo�lu�u yollad�m
	strcat(kitapyazar,"- ");
	strcat(kitapyazar,yazar);   // kitapyazar a yazardaki veriyi yollad�m
	/* asl�nda b�t�n yapt���m�z kitapyazar a s�ras�yla veri eklemek oldu
	   �nce ad� sonra bo�lu�u sonra da yazar� atad�k ve bo� olan de�i�keni doldurduk*/
	   printf("\n");
	printf("%s",kitapyazar);
	
	return 0;
}
