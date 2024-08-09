#include <stdio.h>
#include <stdlib.h>

struct veri{
	int ogrNo;
	int * ogrNoadres;
	int dersKodu;
	int puan;
};

struct index{
	int ogrNo;
	int * ogrNoadres; 
};

FILE *vptr,*iptr,*yptr;

void indexSirala(){
	system("cls");
	iptr=fopen("index.txt","r+");
	
	struct index index;
	
	int n=0, i=0,j;
	int *adres;
	int *no;
	if(iptr!=NULL ){

        while(fscanf(iptr,"%d\t%x\n",&index.ogrNo,&index.ogrNoadres)!=EOF){
        	n++;
		}

        adres=(int *) malloc(n * sizeof(int));
        no=(int *) malloc(n * sizeof(int));
        
        rewind(iptr);
        while(fscanf(iptr,"%d\t%x\n",&index.ogrNo,&index.ogrNoadres)!=EOF){
        	
        	no[i]=index.ogrNo;
        	adres[i]=index.ogrNoadres;
        	i++;
		}
        no[i]='\0';
        adres[i]='\0';
        i=0;
        for(i=0;i<n;i++){
        	for(j=0;j<n-1;j++){
        		
        		if(no[j]>no[j+1]){
        			
        			int temp=no[j];
        			no[j]=no[j+1];
        			no[j+1]=temp; 
        			
        			temp=adres[j];
        			adres[j]=adres[j+1];
        			adres[j+1]=temp;
				}
        		
			}
		}
		i=0;
		rewind(iptr);
		while(i<n){
			fprintf(iptr,"%d\t%x\n",no[i], adres[i]);
			i++;
		}
		

		fclose(iptr);
	}
	
	
	
	
}

void indexEkle(int no,int adres){
	
	iptr=fopen("index.txt","a+");
	
	if(iptr!=NULL ){

		fprintf(iptr,"%d\t%x\n",no,adres);
       
		fclose(iptr);
		indexSirala();
	}
	
	
}

void veriEkle(){
	// oluþturma
	struct veri * ogr= (struct veri *) malloc( sizeof(struct veri) ); 
	
	vptr=fopen("veri.dat","a+b");
	
	if(vptr!=NULL){
		
		printf("ogrenci no: "); scanf("%d",&ogr->ogrNo);
		ogr->ogrNoadres= &ogr->ogrNo; // adresi binary dosyaya yazýyoruz
		
		printf("ders kodu : "); scanf("%d",&ogr->dersKodu);
		printf("puani     : "); scanf("%d",&ogr->puan);
		
		fwrite( ogr, sizeof(struct veri), 1, vptr);
		printf("kayit islemi tamam\n\n");
		
		indexEkle(ogr->ogrNo,ogr->ogrNoadres);
		
	}
	fclose(vptr);
	
}

void indexOlustur(){
	
	struct veri ogr;
	
	iptr=fopen("index.txt","w");
	vptr=fopen("veri.dat","r+b");
	
	if(iptr!=NULL && vptr!=NULL){
		
		while(fread(&ogr, sizeof(struct veri), 1, vptr)!=NULL){
			
		   fprintf(iptr,"%d\t%x\n",ogr.ogrNo, ogr.ogrNoadres);
			
		}
		fclose(vptr);
		fclose(iptr);
	}
	
}

void indexYazdir(){
	system("cls");
	struct index index;
	
	iptr=fopen("index.txt","r+");
	
	if(iptr!=NULL){
		printf("%s\t%s\n","NO","nADRES");
		while( fscanf(iptr,"%d\t%x\n",&index.ogrNo,	&index.ogrNoadres) !=EOF){
			
		   printf("%d\t%x\n",index.ogrNo, index.ogrNoadres);
		   //printf(iptr,"%d\t%x\n",index.ogrNo, index.ogrNoadres);
		/* ya hataya bak amk þunu yazdým diye 15 dk aradým durdum nerde hata yaptým diye
		 fatih Allah için düzgün yaz usta*/
		}
		printf("\n"); 
		fclose(iptr);
	}
}

void veriYazdir(){
	system("cls");
	struct veri ogr;
	
	vptr=fopen("veri.dat","rb");
	// okuma
	if(vptr!=NULL){
		  
		printf("%s\t%s\t%s\t%s\n\n","NO","nADRES","dKODU","PUAN");
		
		 while( fread(&ogr, sizeof(struct veri), 1, vptr)!=NULL){
		 	
		 	printf("%d\t%x\t%d\t%d\n",ogr.ogrNo, ogr.ogrNoadres, ogr.dersKodu, ogr.puan);
		 
		 }
		printf("\n");
		fclose(vptr); 
		// ÇOK ÖNEMLÝ NOT 
		// ALLAH AÞKINA DOSYAYI FCLOSE ÝLE KAPATMAYI UNUTMA 
		// KAPATMADIÐIM ÝÇÝN 30 DK MAL GÝBÝ UÐRAÞTIM LÜTFEN BÝR DAHA YAPMA
		
	}
	
}

void ayrintiGoster(int adres){
	
	struct veri ogr;
	int sonuc=0;
	vptr=fopen("veri.dat","rb");
   // adresi binary dosyaya yazmýþtýk bu yüzden binary þeklinde okumamýz gerekiyor
	if(vptr!=NULL){
		  
		printf("%s\t%s\t%s\t%s\n\n","NO","nADRES","dKODU","PUAN");
		
		 while( fread(&ogr, sizeof(struct veri), 1, vptr)!=NULL){
		 	
		 	if(adres==ogr.ogrNoadres){
		 		
		 		printf("%d\t%x\t%d\t%d\n",ogr.ogrNo, ogr.ogrNoadres, ogr.dersKodu, ogr.puan);
		 		sonuc=1;
		 		break;
			 }
		 	
		 
		 }
		printf("\n");
		fclose(vptr); 
		if(sonuc==0){
			printf("%x hatali adres girisi\n",adres);
		}
	}
	
}

void kayitbul(){
	system("cls");
	iptr=fopen("index.txt","r+");
	
	struct index index;
    int numara,adres;
    int sonuc=0;
    
	if(iptr!=NULL ){
        
        printf("bulmak istediginiz ogrencinin no: "); scanf("%d",&numara);
        
        printf("%s\t%s\n","NO","nADRES");
        while(fscanf(iptr,"%d\t%x\n",&index.ogrNo,&index.ogrNoadres)!=EOF){
        	
        	if(numara==index.ogrNo){
        		printf("%d\t%x\n",index.ogrNo,index.ogrNoadres);
        		sonuc=1;
			}
        	
		}
		printf("\n");
		if(sonuc==0){
			printf("%d numarali ogrenci listede yok\n\n",numara);
		}
		else{
			printf("adres: "); scanf("%x",&adres);
			ayrintiGoster(adres);
			
		}
		fclose(iptr);
	}
	
}

void degisiklikYap(int adres){
	system("cls");
	struct veri ogr;
	int sonuc=0;
	int sayac=0;
	int yenipuan;
	vptr=fopen("veri.dat","r+b");
   // adresi binary dosyaya yazmýþtýk bu yüzden binary þeklinde okumamýz gerekiyor
	if(vptr!=NULL){
		  
		printf("%s\t%s\t%s\t%s\n\n","NO","nADRES","dKODU","PUAN");
		
		 while( fread(&ogr, sizeof(struct veri), 1, vptr)!=NULL){
		 	sayac++;
		 	if(adres==ogr.ogrNoadres){
		 		
		 		printf("%d\t%x\t%d\t%d\n",ogr.ogrNo, ogr.ogrNoadres, ogr.dersKodu, ogr.puan);
		 		
		 		printf("yeni puan: "); scanf("%d",&yenipuan);
		 		
		 		fseek(vptr, (sayac-1)* sizeof(struct veri),SEEK_SET);
		 		ogr.puan=yenipuan;
		 		
		 		fwrite(&ogr, sizeof(struct veri), 1, vptr);
		 		sonuc=1;
		 		printf("puan guncellendi.\n");
		 	    break;
			 }
			 
		 }
		printf("\n");
		fclose(vptr); 
		if(sonuc==0){
			printf("%x hatali adres girisi\n",adres);
		}
	}
	
}

void kayitGuncelle(){
	system("cls");
	iptr=fopen("index.txt","r+");
	
	struct index index;
    int numara,adres;
    int sonuc=0;
    
	if(iptr!=NULL ){
        
        printf("guncellemek istediginiz ogrencinin no: "); scanf("%d",&numara);
        
        printf("%s\t%s\n","NO","nADRES");
        while(fscanf(iptr,"%d\t%x\n",&index.ogrNo,&index.ogrNoadres)!=EOF){
        	
        	if(numara==index.ogrNo){
        		printf("%d\t%x\n",index.ogrNo,index.ogrNoadres);
        		sonuc=1;
			}
        	
		}
		printf("\n");
		if(sonuc==0){
			printf("%d numarali ogrenci listede yok\n\n",numara);
		}
		else{
			printf("adres: "); scanf("%x",&adres);
			degisiklikYap(adres);
			
		}
		fclose(iptr);
	}
	
}

void verisil(int adres){
	
		system("cls");
	struct veri ogr;
	int sonuc=0;

	
	vptr=fopen("veri.dat","r+b");
   // adresi binary dosyaya yazmýþtýk bu yüzden binary þeklinde okumamýz gerekiyor
    yptr=fopen("veriyedek.dat","wb");
    
	if(vptr!=NULL && yptr!=NULL){
		  
		 while( fread(&ogr, sizeof(struct veri), 1, vptr)!=NULL){
		 
		 	if(adres!=ogr.ogrNoadres){
		
		 		fwrite(&ogr, sizeof(struct veri), 1, yptr);
		 		sonuc=1;
		 		
			 }
			 
		 }
		printf("\n");
		fclose(vptr);
		fclose(yptr); 
		if(sonuc==0){
			printf("%x hatali adres girisi\n",adres);
		}
		else{
			remove("veri.dat");
			rename("veriyedek.dat","veri.dat");
			printf("silme islemi tamamlandi.\n");
			indexOlustur();
		}
	}
	
	
}

void kayitsil(){
	system("cls");
	iptr=fopen("index.txt","r+");
	
	struct index index;
    int numara,adres;
    int sonuc=0;
    
	if(iptr!=NULL ){
        
        printf("silmek istediginiz ogrencinin no: "); scanf("%d",&numara);
        
        printf("%s\t%s\n","NO","nADRES");
        while(fscanf(iptr,"%d\t%x\n",&index.ogrNo,&index.ogrNoadres)!=EOF){
        	
        	if(numara==index.ogrNo){
        		printf("%d\t%x\n",index.ogrNo,index.ogrNoadres);
        		sonuc=1;
			}
        	
		}
		printf("\n");
		if(sonuc==0){
			printf("%d numarali ogrenci listede yok\n\n",numara);
		}
		else{
			printf("adres: "); scanf("%x",&adres);
			verisil(adres);
			
		}
		fclose(iptr);
	}
}

// menu
int menu(){
	int secim;
	printf("1-veri ekle\n");
	printf("2-veri yazdir\n");
	printf("3-index yazdir\n");
	printf("4-kayit bul \n");
	printf("5-kayit guncelle(puan) \n");
	printf("6-kayit sil \n");
	printf("0-cikis\n");
	printf("seciminiz: "); scanf("%d",&secim);
	printf("\n");
	return secim;
}
int main() {
	
	indexOlustur();
	int secim=-1;
	
	while( (secim=menu()) !=0){
		
		switch(secim){
			
			case 1: veriEkle();   break;	
			case 2: veriYazdir(); break;
			case 3: indexYazdir(); break;
			case 4: kayitbul(); break;
			case 5: kayitGuncelle(); break;
			case 6: kayitsil(); break;
			case 0: printf("cikis yaptiniz."); break;
			default: printf("hatali secim\n"); break;
		}
		
	}
	
	
	
	
	
	return 0;
}
