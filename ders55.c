#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE *belge;
	belge=fopen("C:\\Users\\Fatih\\Masa�st�\\deneme.txt","w");
	putc('A',belge);
	putc('\n',belge);
	putc('B',belge);
	putc('\n',belge);
	
	fputs("fatih yeni\n",belge);
	fputs("iz� pc m�h",belge);
	fclose(belge);
	
	return 0;
}
