#include <stdio.h>
#include <stdlib.h>


int main() {
	FILE *ptr;
	
	char ad[20];
	int yas,i;
	float maas;
	
	ptr=fopen("kayit.txt","w");
	
	if(ptr!=NULL){
		
		for(i=0;i<3;i++){
			printf("adi girin:   "); scanf(" %[^\n]s",ad); // 1 tane boþluk býrakman lazým yoksa almýyor
			printf("yasi girin:  "); scanf("%d",&yas);
			printf("maasi girin: "); scanf("%f",&maas);
			
			fprintf(ptr,"%-20s\t%d\t%f\n",ad,yas,maas);
		}
		printf("kayit tamam\n");
		fclose(ptr);
	}
	char ad2[20];
	int yas2;
	float maas2;
	
	ptr=fopen("kayit.txt","r");
	
	if(ptr!=NULL){
		
		while(fgets(ad2,20,ptr)!=NULL){
			fscanf(ptr,"%d\t%f\n",&yas2,&maas2);
			printf("%s\t%d\t%.2f\n",ad2,yas2,maas2);	
		}
		
		
	}
	
	return 0;
}
