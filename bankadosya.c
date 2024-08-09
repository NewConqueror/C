#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int no,bakiye,secim;
	char ad[30];
	
	FILE *dosya;
	
    if((dosya=fopen("C:\\Users\\Halime\\OneDrive\\Masaüstü\\musteriler.txt","r"))==NULL)
    printf("dosya bulunamadi");
    
    else
    while(1){
    	
    	printf("\n banka bilgileri uygulamasi\n");
    	printf("1-hesabinda para olan musteriler\n");
    	printf("2-hesabinda para olmayan musteriler\n");
    	printf("3-borcu olan musteriler\n");
    	printf("4-cikis..\n");
    	printf("secim yapiniz: ");
    	scanf("%d",&secim);
    	printf("\n\n");
    	
    	switch(secim){
    		fscanf(dosya,"%d\t%s\t%d",&no,&ad,&bakiye);
    		
    		case 1: printf("1-hesabinda para olan musteriler\n");
    	    while(!feof(dosya)){
    	    	
    	    	if(bakiye>0){
    	    		printf("%d\t%s\t%d\n",no,ad,bakiye);
				}
    	    		fscanf(dosya,"%d\t%s\t%d",&no,&ad,&bakiye);
    	    		
			}
    		break;
    		
    		case 2: printf("2-hesabinda para olmayan musteriler\n");
			while(!feof(dosya)){
    	    	
    	    	if(bakiye==0){
    	    		printf("%d\t%s\t%d\n",no,ad,bakiye);
				}
    	    		fscanf(dosya,"%d\t%s\t%d",&no,&ad,&bakiye);
    	    		
			}
    		break;
    		
    		case 3:  printf("3-borcu olan musteriler\n");
			while(!feof(dosya)){
    	    	
    	    	if(bakiye<0){
    	    		printf("%d\t%s\t%d\n",no,ad,bakiye);
				}
    	    		fscanf(dosya,"%d\t%s\t%d",&no,&ad,&bakiye);
    	    		
			}
    		break;
    		
    		case 4: printf("cikis yaptiniz..");
    		return 0;
    		
		}
    	rewind(dosya);
    	
	}
	
	return 0;
}
