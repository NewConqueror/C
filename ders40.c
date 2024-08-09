#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char kitapad[30],yazar[30],kitapyazar[60];
	
	printf("kitap adini ve yazarini giriniz: ");
	scanf("%s %s",kitapad,yazar);
	
	strcat(kitapyazar,kitapad); // kitapyazar a kitapad daki veriyi yolladým
	strcat(kitapyazar," "); // kitapyazar a boþluðu yolladým
	strcat(kitapyazar,"- ");
	strcat(kitapyazar,yazar);   // kitapyazar a yazardaki veriyi yolladým
	/* aslýnda bütün yaptýðýmýz kitapyazar a sýrasýyla veri eklemek oldu
	   önce adý sonra boþluðu sonra da yazarý atadýk ve boþ olan deðiþkeni doldurduk*/
	   printf("\n");
	printf("%s",kitapyazar);
	
	return 0;
}
