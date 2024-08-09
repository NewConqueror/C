#include <stdio.h>
#include <stdlib.h>

int topla(int sayi){
	if(sayi>0)
	return sayi+topla(sayi-1);
}

int basamaktopla(int sayi){
	if(sayi>0)
	return sayi%10 +basamaktopla(sayi/10);
}

int main() {
	int sayi;
   printf("sayi gir: ");
   scanf("%d",&sayi);
   printf("sonuc: %d\n",topla(sayi));
   printf("basamak toplami: %d",basamaktopla(sayi));
	return 0;
}
