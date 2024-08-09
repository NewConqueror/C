#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE *belge;
	char karakter;
	belge=fopen("C:\\Users\\Fatih\\Masa�st�\\yazd�rma.txt","r");
	
	do{
		karakter=getc(belge);
		printf("%c",karakter);
		
	}while(karakter!=EOF);
	
	fclose(belge);
	 	
	return 0;
}
