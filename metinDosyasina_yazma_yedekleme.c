#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

FILE *ptr,*ptr2,*ptr3,*ptr4,*ptr5,*ptr6;
char isim[10];
int yas;
float ucret;



int main() {
	ptr=fopen("metin1.txt","w");
	ptr2=fopen("metin1.txt","r");
	ptr3=fopen("metiny.txt","w+");
	ptr4=fopen("isimler.txt","w+");
	ptr5=fopen("yaslar.txt","w+");
	ptr6=fopen("ucretler.txt","w+");
	if(ptr!=NULL){
		
		printf("isim: "); scanf("%s",isim);
		printf("yas: "); scanf("%d",&yas);
		printf("ucret: "); scanf("%f",&ucret);
		
		fprintf(ptr,"%s\t%d\t%f\n",isim,yas,ucret);
    	printf("kayit islei tamam\n"); 
		fclose(ptr);
	}
   	
   	if(ptr2!=NULL && ptr3!=NULL && ptr4!=NULL && ptr5!=NULL && ptr6!=NULL){
   		
   			while(fscanf(ptr2,"%s\t%d\t%f\n",isim,&yas,&ucret)!=EOF){
   			
   			printf("%s\t%d\t%f\n ",isim,yas,ucret); 
   			fprintf(ptr3,"%s\t%d\t%f\n",isim,yas,ucret);
   			fprintf(ptr4,"%s\n",isim);
   			fprintf(ptr5,"%d\n",yas);
   			fprintf(ptr6,"%f\n",ucret*2);
		   }
		   printf("yedekleme de tamam\n");
	   }
	fclose(ptr2);
	fclose(ptr3);
	fclose(ptr4);
	fclose(ptr5);
	fclose(ptr6);
	return 0;
}
