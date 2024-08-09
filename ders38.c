#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char kelime[50];
	printf("kelimeyi giriniz: ");
	//scanf("%s",kelime); // scanf te boþluðu almadýðý için kelimenin tam uzunluðunu bulmak için faydalý deðil
	gets(kelime); // gets te kelimenin tamamýný alýyor bu yüzden daha faydalý
	printf("katar uzunlugu: %d",strlen(kelime));
	return 0;
}
