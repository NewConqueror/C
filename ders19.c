#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// ödev 2 yi yap bir ara
	
	int dizi[100];
	int i,sayi;
	
	printf("eleman sayisi :");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++){
		
		printf("dizinin %d.degeri giriniz : ",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("\n\n");
	for(i=0;i<sayi;i++){
		printf("%d\n",dizi[i]);
	}
	
	
	
	
 /* ödev1  iyice anla char sehir[3][15];
 int i;
 
 for(i=0;i<3;i++)
 {
  printf("%d.Sehirin ismini giriniz: ",i+1);
  scanf("%s",sehir[i]);
  
 }
 
 printf("Girmis oldugunuz sehir isimleri: \n");
 
 for(i=0;i<3;i++)
 {
  printf("%s\n",sehir[i]);
 }*/
	
	
	
	
	
	
	
	
	
	/*char sehir[15];
	int i;
	
	for(i=0;i<3;i++){
		
		printf("sehri giriniz :");
		scanf("%s",sehir);
		printf("%d.girdiginiz sehir : %s",i+1,sehir)	;
	printf("\n");
}*/
	return 0;
}
