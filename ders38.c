#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char kelime[50];
	printf("kelimeyi giriniz: ");
	//scanf("%s",kelime); // scanf te bo�lu�u almad��� i�in kelimenin tam uzunlu�unu bulmak i�in faydal� de�il
	gets(kelime); // gets te kelimenin tamam�n� al�yor bu y�zden daha faydal�
	printf("katar uzunlugu: %d",strlen(kelime));
	return 0;
}
