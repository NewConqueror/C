#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE *metinbelgesi;
	char veri1[20]="bilgisayar ";
	char veri2[20]="muhendisligi ";
	char veri3[20]="bolumu";
	
	metinbelgesi=fopen("C:\\Users\\Fatih\\Masa�st�\\yazd�rma2.txt","w");
	
	fputs(veri1,metinbelgesi);
	
	fputs(veri2,metinbelgesi);
	
	fputs(veri3,metinbelgesi);
	
	fclose(metinbelgesi);
	
	return 0;
}
