#include <stdio.h>
#include <stdlib.h>


int main() {
	int sayi;
	printf("sayi gir: ");
	scanf("%d",&sayi);
	
	int max=0;
	
	while(sayi>0){
		
		int tp =sayi%10;
		if(tp>max){
			max=tp;
		}
		sayi = sayi/10;
	}
	
	printf("max: %d",max);
	
/*	int sayi; bazen çalýþýyor iyileþtirme lazým
	printf("sayi gir: ");
	scanf("%d",&sayi);
	
	int max=0;
	int gerekli;
	int i;
	for(i=0;i<10;i++){
		sayi = sayi/10;
		gerekli = sayi%10;
		if(gerekli>max){
			max=gerekli;
		}
	}
	
	printf("max: %d",max);
	
	
	
	return 0;
}
