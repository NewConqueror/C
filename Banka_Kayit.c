#include <stdio.h>
#include <stdlib.h>

struct musteri{
	int no;
	char ad[10];
	char soyad[10];
	double bakiye;
};

struct musteri bosmusteri={0,"","",0.0};
struct musteri kisi;

FILE *ptr;
FILE *yptr;

void liste_olustur(){
	int i;
	if(( ptr=fopen("musteri.dat","w")) !=NULL){
		
		for(i=0;i<100;i++)
		fwrite(&bosmusteri,sizeof(struct musteri),1,ptr);
	}
	fclose(ptr);
	printf("liste olusturuldu.\n");
}

void ekle(){
	int musteriID;
	
	if(( ptr=fopen("musteri.dat","r+")) !=NULL){
		
		printf("musteri numarasini giriniz: "); scanf("%d",&musteriID);
	
	  fseek(ptr, (musteriID-1) * sizeof(struct musteri), SEEK_SET);
	  fread(&kisi,sizeof(struct musteri),1,ptr);
	  if(kisi.no!=0){
	  	printf("%d numarali musteri mevcut !!!\n",musteriID);
	  }
	  else{
	  	printf("ad / soyad / bakiye: "); scanf("%s%s%lf",kisi.ad,kisi.soyad,&kisi.bakiye);
	  	kisi.no=musteriID;
	  	
	  	fseek(ptr, (musteriID-1) * sizeof(struct musteri), SEEK_SET);
	  	fwrite(&kisi,sizeof(struct musteri),1,ptr);
	  	
	  	printf("%d numarali musteri kayit edildi.\n",musteriID);
	  }
		
	}
	fclose(ptr);
	
}

void sil(){
	system("cls");
	int numsil;
	if(( ptr=fopen("musteri.dat","r+")) !=NULL){
		
		printf("silinecek musteri numarasini giriniz: "); scanf("%d",&numsil);
	
	  fseek(ptr, (numsil-1) * sizeof(struct musteri), SEEK_SET);
	  fread(&kisi,sizeof(struct musteri),1,ptr);
	  if(kisi.no==0){
	  	printf("%d numarali musteri yok !!!\n",numsil);
	  }
	  else{
	  	
	  	
	  	fseek(ptr, (numsil-1) * sizeof(struct musteri), SEEK_SET);
	  	fwrite(&bosmusteri,sizeof(struct musteri),1,ptr);
	  	printf("%d numarali musteri silindi.\n",numsil);
	  }
		
	}
	fclose(ptr);
} 

void guncelle(){
	system("cls");
	int numguncelle;
	double miktar;
	if(( ptr=fopen("musteri.dat","r+")) !=NULL){
		
		printf("guncellenecek musteri numarasini giriniz: "); scanf("%d",&numguncelle);
	
	  fseek(ptr, (numguncelle-1) * sizeof(struct musteri), SEEK_SET);
	  fread(&kisi,sizeof(struct musteri),1,ptr);
	  if(kisi.no==0){
	  	printf("%d numarali musteri yok !!!\n",numguncelle);
	  }
	  else{
	  	printf("%d numarali musteri bilgileri: "); 
	  	printf("ad: %s\n",kisi.ad);
	  	printf("soyad: %s\n",kisi.soyad);
	  	printf("bakiye: %lf\n",kisi.bakiye);
	  	
	  	printf("para ekleme(+) veya para eksiltme(-) miktarini giriniz: "); scanf("%lf",&miktar);
	  	kisi.bakiye+=miktar;
	  	
	  	fseek(ptr, (numguncelle-1) * sizeof(struct musteri), SEEK_SET);
	  	fwrite(&kisi,sizeof(struct musteri),1,ptr);
	  	
	  	printf("%d numarali musteri bilgileri son durum.\n"); 
	  	printf("ad: %s\n",kisi.ad);
	  	printf("soyad: %s\n",kisi.soyad);
	  	printf("bakiye: %lf\n",kisi.bakiye);
	  	printf("%d numarali musteri bakiyesi guncellendi.\n",numguncelle);
	  	
	  }
		
	}
	fclose(ptr);
}

void yazdir(){
	system("cls");
	
	if(( ptr=fopen("musteri.dat","r")) !=NULL){
		
		printf("NO\tAD\tSOYAD\tBAKIYE\n"); 
	  while(!feof(ptr)){
	  	
	  	fread(&kisi,sizeof(struct musteri),1,ptr);
	  	if(kisi.no!=0)
	  	printf("%d\t%s\t%s\t%d\n",kisi.no,kisi.ad,kisi.soyad,kisi.bakiye);
	  	
	  }
	 
	fclose(ptr);
}
}

void yedekle(){
	system("cls");
	if((ptr=fopen("musteri.dat","r+"))!=NULL){
		
		if((yptr=fopen("musyedek.dat","a"))!=NULL){
			
			while(!feof(ptr)){
				fread(&kisi,sizeof(struct musteri),1,ptr);
				fprintf(yptr,"%d\t%s\t%s\t%lf\n",kisi.no,kisi.ad,kisi.soyad,kisi.bakiye);
				// sýralý eriþimli dosyaya yazdýk 
			}
			
		}
		
	}
	printf("yedekleme tamamlandi.\n");
	fclose(yptr);
	fclose(ptr);
}

int menu(){
	int secim;
	printf("1-ekle\n");
	printf("2-sil\n");
	printf("3-guncelle\n");
	printf("4-yazdir\n");
	printf("5-liste olustur (resetle)\n");
	printf("6-yedek\n");
	printf("0-cikis\n");
	printf("secim yapiniz: "); scanf("%d",&secim);
	return secim;
}

int main() {
	
	int tercih=-1;
	
	while((tercih=menu()) !=0){
		
		switch(tercih){
			
			case 1: ekle(); break;
			case 2: sil() ;break;
			case 3: guncelle(); break;
			case 4: yazdir(); break;
			case 5: liste_olustur(); break;
			case 6: yedekle(); break;
			case 0: printf("cikis yaptiniz.\n");break;
			default: printf("hatali secim yaptiniz.\n");  break;
		}
		
	}
	
	
	
	return 0;
}
