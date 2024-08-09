#include <stdio.h>
#include <stdlib.h>
// ptr yolluyoz ki asýl deðeri deðiþsiin
void sifrele(char *ptr,int anahtar){
	
	while(*ptr!='\0'){
		
		*ptr=*ptr+anahtar;
		ptr++;
	}
	
}

void sifrecoz(char *ptr,int anahtar){
	
	while(*ptr!='\0'){
		
		*ptr=*ptr-anahtar;
		ptr++;
	}
}

int main(){
	
	char metin[100];
    int anahtar;
	
	printf("metni giriniz: "); gets(metin);
	printf("anahtari giriniz: "); scanf("%d",&anahtar);
	
    sifrele(metin,anahtar);
	
	printf("sifrelenmis metin: %s\n",metin);
	
	sifrecoz(metin,anahtar);
	
	printf("cozulmus metin: %s",metin);
	
	return 0;
}
