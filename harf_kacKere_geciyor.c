#include <stdio.h>
#include <stdlib.h>

int karbul(char *metin , char harf){
	int i=0;
	while(*metin!='\0'){
		
		if(harf==*metin)
		i++;
		
		metin++;
	}
	
	return i;
}


int main() {
	
	char metin[100];
	char harf;
	int sonuc;
	printf("metni giriniz: ");
	gets(metin);
	printf("aradiginiz harfi girin: ");
	scanf("%c",&harf);
	
	sonuc=karbul(metin,harf);
	
	printf("aradiginiz harften: %d adet var",sonuc);
	
	return 0;
}
