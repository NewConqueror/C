#include <stdio.h>
#include <stdlib.h>

 struct kayit{
 	char ad[20];
 	char soyad[20];
 	int sinif;
 	float ort;
 };

 struct kayit ogr; // main in dýþýnda da tanýmlayabiliyormuþuz struct ý sorun yok

int main() {
	
	printf("adi: ");
	scanf("%s",&ogr.ad);
	printf("soyadi: ");
	scanf("%s",&ogr.soyad);
	printf("sinifi: ");
	scanf("%d",&ogr.sinif);
	printf("ortalamasi: ");
	scanf("%f",&ogr.ort);
	
	printf("%s",ogr.ad);
	printf("\n");
	printf("%s",ogr.soyad);
	printf("\n");
	printf("%d",ogr.sinif);
	printf("\n");
	printf("%.2f",ogr.ort);

	return 0;
}
