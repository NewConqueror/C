#include <stdio.h>
#include <stdlib.h>
//deðiþkenler
struct calisan{
	char isim[10];
	int yas;
	float maas;
};

FILE *ptr,*ptr2;
int main() {
	
	struct calisan c1,c2;
	// dosya oluþturma
	ptr=fopen("kayitlar.txt","a");
	
	if(ptr!=NULL){
		// kayit vs
		printf("isim girin: "); scanf(" %[^\n]",&c1.isim);
		printf("yas girin: "); scanf("%d",&c1.yas);
		printf("maas girin: "); scanf("%f",&c1.maas);
		
		fprintf(ptr,"%s\t%d\t%.2f\n",c1.isim,c1.yas,c1.maas);
		
		fclose(ptr);
		printf("kayit tamam\n");
		
	/*	remove("kayitlar.txt");
	    printf("dosya silindi");
	    rename("kayitlar.txt","kayitlar2.txt");	
		printf("dosyanin ismi degisti");*/
    
    // dosyadan okuma yapma ve kiþi silme
	ptr=fopen("kayitlar.txt","r");
	ptr2=fopen("yedek2.txt","w");	
	char ad[10];
	int yas2;  // if(yas2==c2.yas){fprintf(ptr2,"%s\t%d\t%.2f\n","",c2.yas,100);}
	// böyle yaparsak yasý atýyorum 20 ye eþit olanlarýn adý silinecek maasý 100 lira olucak
		if(ptr!=NULL && ptr!=NULL){
          
            printf("silmek istediginiz kisinin ismi: "); scanf("%s",ad);
           
            
			while(fscanf(ptr,"%s\t%d\t%f\n",c2.isim,&c2.yas,&c2.maas)!=EOF){ 
				
			printf("%s\t%d\t%.2f\n",c2.isim,c2.yas,c2.maas);
			if(strcmp(ad,c2.isim)==0)
				 continue;
				 
			fprintf(ptr2,
			
			}
			
				printf("%s isimli kisi silindi\n",ad);
		}
		fclose(ptr);
		fclose(ptr2);
		printf("okuma islemi tamam\n");
		remove("kayitlar.txt");
		rename("yedek2.txt","kayitlar.txt");
		printf("silme islemi tamam\n");
	}
	
	
	return 0;
}
