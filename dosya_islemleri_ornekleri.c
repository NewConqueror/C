#include <stdio.h>
#include <stdlib.h>
// dense index ( yo�un index ) yap�s�na haz�rl�k 

// c programlamada veri dosyalar� iki t�rde kay�t olur
// 1- text ( metin ) t�r�nde   fprintf, fscanf, modlar� =w,r,a
// 2- binary ( ikili ) t�r�nde fread , fwrite  modlar� = wb, rb, a+b
// rastgele eri�imli dosya i�lemleri  fseek

int main() {
	
	int s1,s2,s3,s4;
	
	s1=10;
	s2=20;
	s3=30;
	s4=40;
	int sayi2=100;
	FILE *ptr;
	
	ptr=fopen("sayilar.dat","wb");
	
	if(ptr!=NULL){
		
	   fwrite(&s1,sizeof(int),1,ptr);
	   printf("kayit islemi tamam");
	   fwrite(&s2,sizeof(int),1,ptr);
	   printf("kayit islemi tamam");
	   fwrite(&s3,sizeof(int),1,ptr);
	   printf("kayit islemi tamam");
	   fwrite(&s4,sizeof(int),1,ptr);
	   printf("kayit islemi tamam");
	   // kaydedece�i yazaca�� de�i�kenin adresi &s1,hangi tipte int ka�ar 1 nereye ptr 
	   // nin g�sterdi�i dosyaya
	   fseek(ptr,(3) * sizeof(int),SEEK_SET);
	   fwrite(&sayi2,sizeof(int),1,ptr);
	   
	   fclose(ptr) ;
	   	
	}
	
	ptr=fopen("sayilar.dat","rb");
	int sayi;
	if(ptr!=NULL){
		
	   
	   while(fread(&sayi,sizeof(int),1,ptr)!=NULL){
	   	printf("sayimiz: %d\n",sayi);
	   }
	   fread(&sayi,sizeof(int),1,ptr);
	   fread(&sayi,sizeof(int),1,ptr);
	   fread(&sayi,sizeof(int),1,ptr);
	   
	   	
	   
	   
	   printf("kayit islemi tamam");
	   fclose(ptr) ;
	   	
	}
	
	
	
	void text_sirali(){	/*
	
	ptr=fopen("sayilar.txt","w");  // yazma modunda write
	
	if(ptr!=NULL){
		
	   fprintf(ptr,"%d\n",s1);	
	   fprintf(ptr,"%d\n",s2);
	   fprintf(ptr,"%d\n",s3);
	   fprintf(ptr,"%d\n",s4);	
		
	   fclose(ptr) ;
	   printf("kayit islemi tamam");	
	}
	
	ptr=fopen("sayilar.txt","r");  // read okuma modunda
	
	int sayi;
	
	if(ptr!=NULL){
		
		while(fscanf(ptr,"%d", &sayi) !=NULL){ 
  // ptr nin g�sterdi�i dosyay� okuduk %d format�nda okuduk sayi de�i�keninin i�erisine att�k
  
			printf("sayimiz: %d\n",sayi);
		}
		
	
	   fclose(ptr);
	}
	*/
}

	return 0;
}
