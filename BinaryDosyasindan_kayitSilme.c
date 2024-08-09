#include <stdio.h>
#include <stdlib.h>

struct calisan{
	char ad[10];
	int yas;
	float maas;
};

FILE *ptr,*ptr2;

int main() {
	
	struct calisan c1;
	
	ptr=fopen("verikayit.dat","ab");
	// veri yazma
	if(ptr!=NULL){
		
		printf("ismi  girin: "); scanf(" %[^\n]s",c1.ad);
		printf("yasi  girin: "); scanf("%d",&c1.yas);
		printf("maasi girin: "); scanf("%f",&c1.maas);
	
	    fwrite( &c1, sizeof(struct calisan), 1, ptr);	
	    fclose(ptr);
	    printf("kayit tamam\n");
	}
	// veri okuma
	ptr=fopen("verikayit.dat","rb");
	ptr2=fopen("yedek.dat","wb");
	
	int yas2;
	printf("silinecek kisilerin yasini giriniz: "); scanf("%d",&yas2);
	
	if(ptr!=NULL && ptr2!=NULL){
		
		while( fread(&c1, sizeof(struct calisan), 1, ptr) !=NULL ){
			
			if(yas2!=c1.yas)
			fwrite(&c1, sizeof(struct calisan), 1, ptr2);
		}
	    
	    fclose(ptr);
	    fclose(ptr2);
	   remove("verikayit.dat");
	   rename("yedek.dat","verikayit.dat");
	}
	
	ptr=fopen("verikayit.dat","rb");
	
	if(ptr!=NULL){
		
		while( fread(&c1, sizeof(struct calisan), 1, ptr) !=NULL ){
			
			printf("%s\t%d\t%.2f\n",c1.ad,c1.yas,c1.maas);
		}
	    
	    fclose(ptr);
}
	return 0;
}
