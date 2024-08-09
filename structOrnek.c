#include <stdio.h>
#include <stdlib.h>

struct ogrenci{
	char ad[10];
	char soyad[10];
	int yas;
};


int main(){
	
	struct ogrenci ogr[2]={ "fatih","yeni",18,"saliha","yeni",12 };
	
	struct ogrenci *ptr;
	
	ptr=ogr;
	
	int i;
	
    for(i=0;i<2;i++,ptr++){	
    	printf("ad: %s \t soyad: %s \t yas: %d",ptr->ad,ptr->soyad,ptr->yas);
    	printf("\n");
	}
	
	
	return 0;
}
