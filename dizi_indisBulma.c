#include <stdio.h>
#include <stdlib.h>

void indeksbul(char *dizi, char harf){
	
	int indis=0;
	int adet=0; // direkt diziyi de verebiliriz ya da diziyi tutan bir pointer oluþturabiliriz
	char *ptr=dizi;
	/*while(*dizi!='\0'){
		
		if(harf==*dizi){
			printf("%d.indis\n",indis);
			adet++;
		}
		
		dizi++;
		indis++;
	}*/
	
		while(*ptr!='\0'){
		
		if(harf==*ptr){
			printf("%d.indis\n",indis);
			adet++;
		}
		
		ptr++;
		indis++;
	}
	
	
	if(adet==0){
		printf("\n%c harfi metinde yok");
	}
	else{
		printf("\n%c harfinden %d adet var",harf,adet);
	}
}

int main() {
	
	char metin[50];
	char harf;
	printf("metni girin: ");
	gets(metin);
	printf("harfi girin: ");
	harf=getchar();
	
	indeksbul(metin,harf);
	
	return 0;
}
