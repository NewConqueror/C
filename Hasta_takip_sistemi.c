#include <stdio.h>
#include <stdlib.h>

struct hasta{
	int no;
	char ad[10];
	int yas;
	char hastalik[15];
};

struct hasta boshasta={0,"",0,""};
struct hasta kisi;

FILE *ptr;

void liste_olustur(){
	int i;
	if((ptr=fopen("hasta kayit.dat","w"))!=NULL){
		
	for(i=0;i<100;i++)	
	fwrite(&boshasta,sizeof(struct hasta),1,ptr);	
	}
	printf("100 hasta icin yer ayrildi.\n");
	fclose(ptr);
}

void ekle(){
	int hastaID;
	
	if((ptr=fopen("hasta kayit.dat","r+"))!=NULL){
		
		printf("hasta no: "); scanf("%d",&hastaID);
		
		fseek(ptr,(hastaID-1) * sizeof(struct hasta),SEEK_SET);
	    fread(&kisi,sizeof(struct hasta),1,ptr);
		
		if(kisi.no!=0)
		printf("%d numarasinda hasta mevcut",hastaID);
		else {
			
			printf("ad / yas / hastalik: "); scanf("%s%d%s",kisi.ad,&kisi.yas,kisi.hastalik);
			kisi.no=hastaID;
			
			fseek(ptr,(hastaID-1) * sizeof(struct hasta),SEEK_SET);
	        fwrite(&kisi,sizeof(struct hasta),1,ptr);
			printf("hasta kaydi yapildi.\n");
		}
	}
	
	fclose(ptr);
	
}

void sil(){
	int hastaID;
	
	if((ptr=fopen("hasta kayit.dat","r+"))!=NULL){
		
		printf("silinecek hasta no: "); scanf("%d",&hastaID);
		
		fseek(ptr,(hastaID-1) * sizeof(struct hasta),SEEK_SET);
	    fread(&kisi,sizeof(struct hasta),1,ptr);
		
		if(kisi.no==0)
		printf("%d numarasinda hasta yok!!",hastaID);
		else {
			
			fseek(ptr,(hastaID-1) * sizeof(struct hasta),SEEK_SET);
	        fwrite(&boshasta,sizeof(struct hasta),1,ptr);
			printf("hasta kaydi silindi.\n");
		}
	}
	
	fclose(ptr);
}

void guncelle(){
	int hastaID;
	
	if((ptr=fopen("hasta kayit.dat","r+"))!=NULL){
		
		printf("guncellenecek hasta no: "); scanf("%d",&hastaID);
		
		fseek(ptr,(hastaID-1) * sizeof(struct hasta),SEEK_SET);
	    fread(&kisi,sizeof(struct hasta),1,ptr);
		
		if(kisi.no==0)
		printf("%d numarasinda hasta yok",hastaID);
		else {
			
			
			fseek(ptr,(hastaID-1) * sizeof(struct hasta),SEEK_SET);
	        fread(&kisi,sizeof(struct hasta),1,ptr);
			printf("%d numarali hasta bilgileri\n",hastaID);
			printf("ad: %s",kisi.ad);
			printf("yas: %d",kisi.yas);
			printf("hastalik: %s",kisi.hastalik);
			
			printf("ad / yas / hastalik: "); scanf("%s%d%s",kisi.ad,&kisi.yas,kisi.hastalik);
			kisi.no=hastaID;
			
			fseek(ptr,(hastaID-1) * sizeof(struct hasta),SEEK_SET);
	        fwrite(&kisi,sizeof(struct hasta),1,ptr);
			printf("hasta kaydi guncellendi.\n"); 
		    	
		}
	}

	fclose(ptr);
}

void ara(){
		int hastaID;
	
	if((ptr=fopen("hasta kayit.dat","r+"))!=NULL){
		
		printf("aranacak hasta no: "); scanf("%d",&hastaID);
		
		fseek(ptr,(hastaID-1) * sizeof(struct hasta),SEEK_SET);
	    fread(&kisi,sizeof(struct hasta),1,ptr);
		
		if(kisi.no==0)
		printf("%d numarasinda hasta yok",hastaID);
		else{
		
			fseek(ptr,(hastaID-1) * sizeof(struct hasta),SEEK_SET);
	        fread(&kisi,sizeof(struct hasta),1,ptr);
			printf("%d numarali hasta bilgileri\n",hastaID);
			printf("ad: %s",kisi.ad);
			printf("yas: %d",kisi.yas);
			printf("hastalik: %s",kisi.hastalik);
		
		}
	}

	fclose(ptr);
}

void yazdir(){
	
	if((ptr=fopen("hasta kayit.dat","r+"))!=NULL){
	
	printf("NUMARA\t AD\t YAS\t HASTALIK\n");
	while(!feof(ptr)){
	
	    fread(&kisi,sizeof(struct hasta),1,ptr);
	    
     	printf("%d%s%d%s",kisi.no,kisi.ad,kisi.yas,kisi.hastalik);
		
		}
	}

	fclose(ptr);
}

int menu(){
	int secim;
	printf("\n1-ekle\n");
		printf("2-sil\n");
		printf("3-guncelle\n");
		printf("4-ara\n");
		printf("5-yazdir\n");
		printf("6-liste oluştur\n");
		printf("0-cikis\n");
		printf("seciminiz: "); scanf("%d",&secim);
		return secim;
}

int main() {
	
	int secim=menu();
	
	while(secim!=0){
	
		if(secim==1){
			ekle(); 
			 secim=menu();
		}
		
	    if(secim==2){
			sil();
			 secim=menu();
		}
		 if(secim==3){
			guncelle();
			 secim=menu();
		}
		 if(secim==4){
			ara();
			 secim=menu();
		}
		 if(secim==5){
			yazdir();
			 secim=menu();
		}
		 if(secim==6){
			liste_olustur();
			 secim=menu();
		}
		else{
			printf("hatali secim yaptiniz.\n");
			 secim=menu();
		
		}
	}
	
	return 0;
}
