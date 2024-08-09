#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// kullanýcý giriþ ekraný yapýmý- c kodu ile 
// Mucit Yazýlým 

struct Kisi {
	char ad[20], soyad[20], tel[20], adres[20], id[20],  parola[20], parolaTekrar[20] ; 
};


void kullaniciGiris() 
{ 
	int sonuc=0  ; 
	static int adet =0; 
	
	printf("\nkullanici giris ekrani \n") ; 
	
	char id[20], parola[20] ; 
	
	printf("kullani adi ( ID ) : "); scanf("%s", id )	 ; 
	
	printf("parola             : "); 
	int i=0; 
	char ch; 
	ch= getch(); 
		
	while( ch!= 13  ) // 13 = enter 
	{
		parola[i] = ch; 
		printf(" * ") ; 
		ch= getch(); 
		i++; 	
	}
	parola[i] = '\0'; 	
	FILE *ptr = fopen( "kullanicilar.dat", "r+b" ) ; 
	struct Kisi k1; 
	
	if( ptr!=NULL  )
	{
		while( (  fread ( &k1, sizeof(struct Kisi), 1, ptr  )  ) !=NULL   ) 
		{
			if(  strcmp( id, k1.id ) ==0 && strcmp( parola, k1.parola ) ==0  ) 
			{
				system("cls") ; 
				printf("\ngiris basarili \n\n ") ; 
				printf("\nhos geldiniz  %s %s \n", k1.ad, strupr( k1.soyad )  ) ; 
				sonuc= 1; 
				fclose(ptr) ; 
				sonuc= 1; 
				break; 				
			}
			
		}
	}
	else
	{
		printf("veritabani erisim hatasi !!! \n") ; 
	}
	
	if( sonuc==0 )
	{
		printf("\nkullanici adi veya parola hatali \n") ; 
		adet ++; 
		if( adet ==3  ) 
		{
			system("cls") ; 
		printf("\ncok fazla deneme yaptiniz, ana menuye yonlendiriliyorsunuz \n\n") ; 
		adet=0; 
		return 0; 	
		}
		
		kullaniciGiris() ; 
	}
	
}

void yeniKayit( )
{
	printf("\nyeni kayit ekrani \n") ; 
	struct Kisi k1; 
	
	printf("ad         : ") ; scanf("%s", k1.ad ) ; 
	printf("soyad      : ") ; scanf("%s", k1.soyad ) ; 
	printf("GSM        : ") ; scanf("%s", k1.tel ) ; 
	printf("adres      : ") ; scanf("%s", k1.adres ) ; 
	printf("ID         : ") ; scanf("%s", k1.id )    ; 
	
	printf("parola (en az 8 karakter uzunlugunda ) : ") ; 
	int i=0; 
	char ch; 
	ch= getch(); 
		
	while( ch!= 13  ) // 13 = enter 
	{
		k1.parola[i] = ch; 
		printf(" * ") ; 
		ch= getch(); 
		i++; 	
	}
	k1.parola[i] = '\0'; 
		
	
	printf("\nparola tekrar                          : ") ;
	
	i=0; 
	 
	ch= getch(); 
		
	while( ch!= 13  ) // 13 = enter 
	{
		k1.parolaTekrar[i] = ch; 
		printf(" * ") ; 
		ch= getch(); 
		i++; 	
	}
	k1.parolaTekrar[i] = '\0'; 
	
	
	int n= strlen( k1.parola ) ; 
	
	
	if( n< 8  ) 
	{
		printf("\nparalo uzunlugu en az 8 karakter olmaliydi \n ") ; 
		yeniKayit() ; 
	}
	else if( strcmp ( k1.parola, k1.parolaTekrar ) !=0  ) 
	{
		printf("\nparolalar eslesmiyor \n ") ; 
		yeniKayit() ; 		
	}
	else
	{
		FILE *ptr = fopen( "kullanicilar.dat", "a+b" ) ; 
		
		if( ptr!= NULL  )
		{
			fwrite ( &k1, sizeof(struct Kisi), 1, ptr ) ; 
			fclose(ptr); 
			printf("\nyeni kayit islemi basarili \n") ; 		
		}
		else
		{
			printf("\nkayit isleminde veritabani hatasi !!! \n") ; 
		} 		
	}		
}


int menu() 
{
	
	int secim; 
	
	printf("\nANA MENU \n\n") ;  
	
	printf("1- kullanici girisi \n") ; 
	printf("2- yeni kayit \n")       ; 
	printf("3- cikis \n") ; 
	printf("seciminiz : ") ; scanf("%d", &secim) ; 	
	
	return secim; 
}


int main() 
{
	int secim; 
	secim= menu(); 
	
	while( secim !=3 )
	{
		switch(secim )
		{
			case 1: kullaniciGiris() ; break; 
			case 2: yeniKayit() ; break; 
			case 3: printf("cikis yaptiniz ") ; break; 
			default : printf("hatali secim yaptiniz [1- 3 ] \n" ) ; 
		}
		
		secim = menu(); 
		system("cls")		 ; 
	}	
	
	return 0; 
}
