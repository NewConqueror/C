#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci{
	char ad   [20];
	char soyad[20];
	int numara;
	int vize;
};

int main() {
	
  struct ogrenci *ogrptr= malloc (5 * sizeof(struct ogrenci));// 5 adet ��renci kayd� i�in bellekte yer ay�rd�k
  // zaten ba�taki de�eri tutuyor
  struct ogrenci *ptr=ogrptr ;  //ilerletti�imiz zaman ba�takini kaybetmeyelim diye gecici ptr olu�turduk  
  printf("bellekte 5 ogrenci icin yer ayrildi\n\n");
  
    // kullan�c�dan ald���m�z bilgileri direkt atam�yoruz strcpy fonk ile kaydedicez 
    
  int i=0;
  char ad[20];
  char soyad[20];
  int numara;
  int vize;
	
  while(i<5){
        
        printf("%d. ogrencinin bilgilerini giriniz: \n",i+1);
  	    printf("ad: ");      scanf("%s",&ad);
  	    printf("soyad: ");   scanf("%s",&soyad);
  	    printf("numara: ");  scanf("%d",&numara);
  	    printf("vize: ");    scanf("%d",&vize);
  	    printf("\n");
  	    strcpy(ptr->ad, ad);          // buras� �ok �nemli dikkat et
  	    strcpy(ptr->soyad, soyad); 
  	    ptr->numara=numara;
  	    ptr->vize=vize;
  	    
  	i++;
  	ptr++;
  }
     
     //ptr=ogrptr;  // tekrar en ba�taki de�eri ald�k
     //i=0;        // d�ng� i�in i yi tekrar 0 a e�itledik ki d�ns�n
    system("cls");
	printf("ogrenci kayit islemi tamamlandi kayitli ogrencilerin bilgileri: \n\n");
	ptr=ogrptr;
	i=0;
	
    while(i<5){
        
        printf("%d.numarali ogrenci bilgileri: \n",ptr->numara);
        
  	    printf("ad: %s\n",ptr->ad);                
  	    printf("soyad: %s\n",ptr->soyad);  
  	    printf("numara: %d\n",ptr->numara);
  	    printf("vize: %d\n",ptr->vize);    
  	    printf("**********************\n");
  	 
  	i++;
  	ptr++;
  }	
	
      ogrptr= realloc (ogrptr, 8 * sizeof(struct ogrenci));// 5 adet ��renci kayd� i�in bellekte ayr�lan yeri
                                                           // 8 ��renci olacak �ekilde g�ncelledik
	
	ptr= ogrptr +5 ;
	i=5;
	
	while(i<8){
        
        printf("%d. ogrencinin bilgilerini giriniz: \n",i+1);
  	    printf("ad: ");      scanf("%s",&ad);
  	    printf("soyad: ");   scanf("%s",&soyad);
  	    printf("numara: ");  scanf("%d",&numara);
  	    printf("vize: ");    scanf("%d",&vize);
  	    printf("\n");
  	    strcpy(ptr->ad, ad);
  	    strcpy(ptr->soyad, soyad);
  	    ptr->numara=numara;
  	    ptr->vize=vize;
  	    
  	i++;
  	ptr++;
  }
	i=0;
	ptr=ogrptr;
	system("cls");
		printf("ogrenci kayit islemi tamamlandi kayitli ogrencilerin bilgileri iceren son durum : \n\n");
	while(i<8){
        
        printf("%d.numarali ogrenci bilgileri: \n",ptr->numara);
        
  	    printf("ad: %s\n",ptr->ad);                
  	    printf("soyad: %s\n",ptr->soyad);  
  	    printf("numara: %d\n",ptr->numara);
  	    printf("vize: %d\n",ptr->vize);    
  	    printf("**********************\n");
  	 
  	i++;
  	ptr++;
  }	
	
	
	return 0;
}
