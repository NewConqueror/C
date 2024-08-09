#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
char kelimeler[][20]={"AHMET","AYSE","FATMA","BILGISAYAR","MUHENDIS","CPU","RAM","HARDDISK","ELMA","ARMUT"};
char *kelime;
char *tahmin;
int size;
 
void kelime_olustur(){
	
	int indis;
	indis= rand() %10;
	kelime =kelimeler[indis];
	size=strlen(kelime);
	
	tahmin= malloc( (size+1) * sizeof(char));
	int i=0;
	while(i<size){
		
	     tahmin[i]='-';
	     
		i++;
	}
	tahmin[i]='\0' ; 
	//printf("kelime: %s\n",kelime);
	printf("uzunluk: %d\n",size);
	printf("tahmininiz: %s\n",tahmin);
}

int harf_kontrol(char harf){
	
	int i=0,sonuc=0;
	printf("tahmininiz: ");
	while(i<size){
		
		if(harf==kelime[i]){
			 tahmin[i]=harf;
			 sonuc=1;
		}
		
		i++;
	}
	printf(" %s\n",tahmin);
	return sonuc;
} 
 
int kelime_kontrol(){
	
	printf("tahmininiz: ");
	
	int i=0,sonuc=1;
	
	while(i<size){
		
		if(tahmin[i]=='-')
		sonuc=0;
		
		i++;
	}
	printf(" %s\n",tahmin);
	return sonuc;
}

void sehpaCiz(int n ) 
{
	system("cls"); 
	printf("\n\n\t\tHANGMAN OYUNU \n\n")   ; 
	
		if(n==2 )
	{		
		printf("\t\t----------\n") ; 			
	}
	
		if(n==3 )
	{
		
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t----------\n") ; 			
	}
		if(n==4 )
	{
		
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t----------\n") ; 			
	}
		if(n==5 )
	{
		
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t----------\n") ; 			
	}
		if(n==6 )
	{
		
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t----------\n") ; 			
	}
		if(n==7 )
	{
		printf("\t\t__________\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t----------\n") ; 			
	}
		if(n== 8 )
	{
		printf("\t\t__________\n") ; 
		printf("\t\t     |    |\n") ; 
		printf("\t\t     O    |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t----------\n") ; 			
	}
		if(n== 9 )
	{
		printf("\t\t__________\n") ; 
		printf("\t\t     |    |\n") ; 
		printf("\t\t     O    |\n") ; 
		printf("\t\t    /|\\   |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t----------\n") ; 			
	}
	
	
	if(n== 10 )
	{
		printf("\t\t__________\n") ; 
		printf("\t\t     |    |\n") ; 
		printf("\t\t     O    |\n") ; 
		printf("\t\t    /|\\   |\n") ; 
		printf("\t\t     |    |\n") ; 
		printf("\t\t    / \\   |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t----------\n") ; 			
		printf("\t\tASILDINIZ !!! \n"); 
		printf("kelimemimiz  : %s", kelime); 
		
	}
	
	printf("\n\n")	 ; 
}

int main(){
	
	srand(time(NULL));
	kelime_olustur();
	int adet=0;
	char harf;
	while(adet<10){
		adet++;
		printf("harfi girin: "); scanf(" %c",&harf);
		printf("\n");
		
		if(harf_kontrol(harf)==1)
		adet--;
		
		sehpaCiz(adet);
		
		if(kelime_kontrol()==1){
			
		printf("TEBRIKLER KAZANDINIZ\n");
		printf("kelime: %s\n",tahmin);
		break;
		 }
	}
	
	return 0;
}
