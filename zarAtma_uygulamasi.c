#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	
	int puan1,puan2;
	int zar1,zar2;
	char isim1[10],isim2[10];
	char secim;
	int sonuc=0;
	
	printf("birinci oyuncunun ismi: ");
	gets(isim1);
	printf("ikinci oyuncunun ismi: ");
	gets(isim2);
	
	printf("%s oyuncusu zar atsin mi? evet icin 1 hayir icin 0 girin: ",isim1);
	scanf("%d",&secim);
	
	if(secim==0){
	printf("%s oyuncusu zar atmadi",isim1);
	return 0;
	}
	
	if(secim==1){
		
		srand(time(NULL));
		
		
		zar1=1+ rand() %6 ;
		zar2=1+ rand() %6 ;
		
		puan1=zar1+zar2;
		printf("%s oyuncusun attigi zarlar: %d ve %d \n",isim1,zar1,zar2);
		
		
		printf(" %s oyuncusu zar atisi yapsin\n",isim2);
		
		zar1=1+ rand() %6 ;
		zar2=1+ rand() %6 ;
		
		puan2=zar1+zar2;
		printf("%s oyuncusun attigi zarlar: %d ve %d \n",isim2,zar1,zar2);
		
		
		if(puan1==7 || puan1==11){
			sonuc=1;
			printf("%s oyuncusu kazandi",isim1);
			return 0;
		}
		else if(puan1==2 || puan1==3 || puan1 ==12){
			sonuc=1;
			printf("%s oyuncusu kaybetti",isim1);
			return 0; 
		}
		
		if(puan2==7 || puan2==11){
			sonuc=1;
			printf("%s oyuncusu kazandi",isim2);
			return 0;
		}
		else if(puan2==2 || puan2==3 || puan2 ==12){
			sonuc=1;
			printf("%s oyuncusu kaybetti",isim2);
			return 0;
		}
		
		else{
			 
			 printf("%s oyuncusunun puani: %d\n",isim1,puan1);
			 printf("%s oyuncusunun puani: %d\n",isim2,puan2);
			
			int i;
			
			for(i=1;i<7;i++){
				
		printf("%s oyuncusunun %d.zar atisi: ",isim1,i);
		
		zar1=1+ rand() %6 ;
		zar2=1+ rand() %6 ;
		
		printf("%d ve %d\n",zar1,zar2);
		
		if(puan1==(zar1+zar2)){
			sonuc=1;
			printf("\n %s oyuncusu kazandi",isim1);
			return 0;
		}
		printf("%s oyuncusunun %d.zar atisi: ",isim2,i);
		
		zar1=1+ rand() %6 ;
		zar2=1+ rand() %6 ;
		
		printf("%d ve %d\n",zar1,zar2);
		
		if(puan2==(zar1+zar2)){
			sonuc=1;
			printf("%s oyuncusu kazandi",isim2);
			return 0;
		}
			}
			
		}
		
		if(sonuc!=1){
			printf("kimse kazanamadi..");
		}
		
		
	}
	
	return 0;
}
