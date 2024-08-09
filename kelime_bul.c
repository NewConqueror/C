#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
void harfbul(char *metin){
	
	int enfazlaharf=0;
	char encokharf;
	
	int boy=strlen(metin);
	int i=0;  int adet=0;
	char harf='a';
	
	while(harf<='z'){
		i=0; adet=0;
		
		while(i<boy){
			
			if(harf==metin[i]){
				
				adet++;
			}
			i++;
		}
		
		if(adet!=0)
		printf("%c den %d adet var\n",harf,adet);
		
		if(enfazlaharf<adet){
			enfazlaharf=adet;
			encokharf=harf; 
			
		}
		
		harf++;
	}
	printf("en fazla olan harf %c  %d adet var",encokharf,enfazlaharf); 
}
*/

void kelimebul(char *metin){
	
	if(*metin== '\0'){
	printf("metin girilmedi");
	exit(0);
    }
	int boy=strlen(metin);
	int adet=0;
	
	while(*metin!='\0'){
		
		if(*metin== ' ')
		adet++;
		
		
		metin++;
	}
	
    printf("karakter sayisi: %d\n",boy);	
    printf("kelime sayisi: %d",++adet);
}

int main() {
	
	char *metin= malloc(100 * sizeof(char));
	printf("metni girin: " );
	gets(metin);
	
	kelimebul(metin);
	
	
	/*char *metin= malloc(100 * sizeof(char));
	
	printf("metni girin: ");
	gets(metin);
	
	harfbul(metin);*/
	
	return 0;
}
