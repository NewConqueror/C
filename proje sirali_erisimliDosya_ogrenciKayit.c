#include <stdio.h>
#include <stdlib.h>

 int no;
 char ad[10];
 char bolum[20];
	
 FILE *dosya;

void ekle(){
	
	if((dosya=fopen("ogrenci.txt","a")) ==NULL )
	 printf("dosya olusturulamadi");
	 
	 else {
	 	
	 	printf("dosya olusturuldu bilgileri gir\n");
	 	
	 	printf("numara: "); scanf("%d",&no);
	 	printf("ad: ") ;   scanf("%s",ad);
	 	printf("bolum: "); scanf("%s",bolum);
	 	
	 	fprintf(dosya,"%d\t%s\t%s\n",no,ad,bolum);
	 	printf("dosyaya kayit islemi tamam\n");
	 	
	 }
	 fclose(dosya);
}

void listele(){
	system("cls");
	
	if( (dosya=fopen("ogrenci.txt","r"))==NULL )
	 printf("dosya bulunamadi");
	 else{
	 	
	 	printf("kayitli ogrenciler\n");
	 	printf("*******************\n");
	 	printf("numara\tad\tbolum\n");
	 	
	 	while(!feof(dosya)){
	 		fscanf(dosya,"%d\t%s\t%s\n",&no,ad,bolum);
	 		printf("%d\t%s\t%s\n",no,ad,bolum);
	 		
		 }
	 	
	 	printf("*******************\n");
	 	
	 }
	
}


int menu(){
	printf("\n1-ekle\n");	
    printf("2-listele\n");
	printf("3-cikis yap\n");	
	int secim;
	printf("secim yapin: "); scanf("%d",&secim);
	return secim;
}

int main() {
	
	int no;
	char ad[10];
	char bolum[20];
  
	int secim=menu();

		
	while(secim!=3){
		
		if(secim==1){
			
			ekle();
			secim=menu();
		}
	
		
		if(secim==2){
		
		    listele();
		    secim=menu();
		}
	   
	}
	
	return 0;
}
