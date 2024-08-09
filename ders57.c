#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE *belge;
	char karakter[50];
	
	belge=fopen("C:\\Users\\Fatih\\Masa�st�\\yazd�rma.txt","r");
	
	fgets(karakter,22,belge);
	puts(karakter);
	fclose(belge);
	
	return 0;
}
