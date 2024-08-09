#include <stdio.h>
#include <stdlib.h>

// rastgele eri�imli dosya i�lemleri
// fwrite() ve  fread()

struct ogrenci{
	int no;           // eklemeyi bu yap�y� kullanarak ger�ekle�tiricez
	char ad[10];
};


int main() {
	// DOSYA OLU�TURMA
	
	struct ogrenci o1={	0,""};	
	int i;
	FILE *dosya;
	
	if((dosya=fopen("C:\\Users\\Halime\\OneDrive\\Masa�st�\\yeni2.txt","w"))==NULL)
	printf("dosya olusturulamadi");
	else
	{
       for(i=1;i<=100;i++)
       	fwrite(&o1,sizeof(struct ogrenci),1,dosya); // bellekte yer ay�rd�k
       	
       	printf("dosya olusturma islemi tamamlandi..\n");
       	fclose(dosya);
	}
	
	// DOSYAYA VER� YAZMA
	
	if((dosya=fopen("C:\\Users\\Halime\\OneDrive\\Masa�st�\\yeni2.txt","r+"))==NULL)
	printf("dosya bulunamadi");
	else
	{
		printf("cikis icin 0 a bas�n\n");
		printf("numara: "); 
		scanf("%d",&o1.no);
	
	    while(o1.no!=0){
	    	
	    	printf("ad: ");
	    	scanf("%s",&o1.ad);
	    	
			fseek(dosya, (o1.no -1) * sizeof(struct ogrenci), SEEK_SET );
			
// pointer� set yaparak ilk yap�n�n ba��na konumland�rd�k end deseydik sonuna konumlan�cakt�
// fwrite tan �nce konum belirlememiz gerekiyor belirleyece�imiz yeri b�yle ayarl�yoruz

	    	fwrite(&o1,sizeof(struct ogrenci),1,dosya); 
// bu komutla kayd� ger�ekle�tiriyoruz	

			printf("numara: "); 
			scanf("%d",&o1.no);  
		}
		printf("dosyaya yazma islemi tamam..\n");
		fclose(dosya);
	}
	
	// DOSYAYI OKUMA
	
	if((dosya=fopen("C:\\Users\\Halime\\OneDrive\\Masa�st�\\yeni2.txt","r"))==NULL)
	printf("dosya bulunamadi");
	else
	{
	    printf("NUMARA  -  AD \n");
	    
	    while(!feof(dosya)){
	    	
	    	fread(&o1,sizeof(struct ogrenci),1,dosya);  
	    	if(o1.no!=0)
	    		printf("%d\t%s\n",o1.no,o1.ad );
	    		 
		}
	   
		printf("dosya okuma islemi tamam..");
		fclose(dosya);
	}
	 	
	return 0;
}
