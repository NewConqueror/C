#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nereden[100]="adam angaragucluyum diyor adam da faca bile yok nasıl aq ";
	char nereye[100]="";
	
	strncpy(nereye,nereden,47);
	printf("%s",nereye);
	printf("\n");
//	printf("%d",strlen(nereden)); printf("\n"); 
	char kaynak[30]="merhaba turkiyeeee";
	char kopya[30]="";
	 
	strcpy(kopya,kaynak);
	printf("%s",kopya);
	
	return 0;
}
