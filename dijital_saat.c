#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main() {
	
	int saat,dakika,saniye,milisaniye;
	
	printf("saati girin: "); scanf("%d",&saat);
	printf("dakikayi girin: "); scanf("%d",&dakika);
	printf("saniyeyi girin: "); scanf("%d",&saniye);
	printf("milisaniyeyi girin: "); scanf("%d",&milisaniye);
	
	while(1){
		
		milisaniye++;
		if(milisaniye>=60){
			saniye++;
			milisaniye=0;
		}
		
		if(saniye>=60){
			dakika++;
			saniye=0;
		}
		
		if(dakika>=60){
			saat++;
			dakika=0;
		}
		
		if(saat>=24){
			saat=saat-24;
		}
		
		printf("\n\n\n\n\n\n");
		printf("\t\t\t\t");
		printf("SAAT:DAKIKA:SANIYE:MILISANIYE\n\n");
		printf("\t\t\t\t");
		printf("%02d:%02d:%02d:%02d:",saat,dakika,saniye,milisaniye);
		system("cls");
	}
	return 0;
}
