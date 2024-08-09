#include <stdio.h>
#include <stdlib.h>

struct calisan{
	char ad[20];
	int yas;
	float maas;
};

FILE *ptr;

int main() {
	
	ptr=fopen("kayit2.dat","wb");
int i;
struct calisan c1;	
	if(ptr!=NULL){
		
		for(i=0;i<3;i++){
			
			printf("ismi girin: ") ; scanf(" %[^\n]s",c1.ad);
			printf("yasi girin: ") ; scanf("%d",&c1.yas);
			printf("maasi girin: "); scanf("%f",&c1.maas);
			
			fwrite(&c1,sizeof(struct calisan),1,ptr); 
		}
		fclose(ptr);
		printf("kayit tamam\n");
	}	
	
	struct calisan c2;

	ptr=fopen("kayit2.dat","rb");
	
	if(ptr!=NULL){
		
		while(fread(&c2,sizeof(struct calisan),1,ptr) !=NULL){
			
			printf("%-20s\t%d\t%.2f\n",c2.ad,c2.yas,c2.maas);
		}
		fclose(ptr);
	}
	
	return 0;
}
