#include <stdio.h>
#include <stdlib.h>


int main() {
	int no,ort;
	char ad[10];
	FILE *dosya;
	
	if((dosya=fopen("C:\\Users\\Halime\\OneDrive\\Masaüstü\\ogrkayit.txt","w"))==NULL)
	printf("dosya olusturulamadi");
	else{
		 printf("ogrencinin no ad ve ortalamasini giriniz\n");
		 scanf("%d%s%d",&no,&ad,&ort);
		 
		 while(!feof(stdin)){
		 	fprintf(dosya,"%d\t%s\t%d\n",no,ad,ort);
		 	printf("\n : ? :");
		 	scanf("%d%s%d",&no,&ad,&ort);
		 }
		fclose(dosya);
		printf("yazma islemi tamamlandi okuma islemine geciliyor..\n");
	}
		
		if((dosya=fopen("C:\\Users\\Halime\\OneDrive\\Masaüstü\\ogrkayit.txt","r"))==NULL)
	printf("dosya bulunamadi");
	
	else {
		printf("no\t ad\tort\n");
		
		while(!feof(dosya)){
			
			fscanf(dosya,"%d\t%s\t%d",&no,&ad,&ort);
			printf("%d\t%s\t%d\n",no,ad,ort);
		}
		fclose(dosya);
		printf("\nokuma islemi tamamlandi\n");
		
	}
	
	
	return 0;
}
