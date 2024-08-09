#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// TC K�ML�K NO DO�RULAMA 
// 1. kural: ilk 10 rakam�n toplam�n�n mod10 u 11. rakam� verecek
// 2. kural: 1,3,5,7,9.  rakamlar�n�n toplam�n�n 7 kat� ile 2,4,6,8. rakamlar�n�n 9 kat�n�n toplam�n�n mod10 u 10. rakam� verecek
// 3. kural: 1,3,5,7,9.   rakamlar�n�n toplam�n�n 8 kat�n�n mod10 u 11. rakam� verecek 
// Mucit Yaz�l�m

int TcKimlikKontrol ( char * ptr  ) 
{
	// 1. kural 
	int ilkOnRakamToplami= 0; 
	int i=0; 
	while( i< 10   )
	{
		ilkOnRakamToplami += ptr[i] - 48; 		
		i++; 
	}
	ilkOnRakamToplami = ilkOnRakamToplami %10; 
	int onbirinciRakam= ptr[10] -48; 
	
	if( ilkOnRakamToplami != onbirinciRakam ) 
	return 0; 
	
	// ikinci kural 
	int tekRakamToplami= 0; 
	i=0; 
	while( i<9 )
	{
		tekRakamToplami += ptr[i] - 48 ; 
		i+=2; 
	}
	int temp= tekRakamToplami; 
	
	tekRakamToplami = tekRakamToplami *7; 
	
	int ciftRakamToplami= 0; 
	i=1; 
	while( i<8 )
	{
		ciftRakamToplami += ptr[i] - 48 ; 
		i+=2; 
	}
	ciftRakamToplami = ciftRakamToplami * 9; 
	
	int ikinciKural =  ( tekRakamToplami + ciftRakamToplami ) %10; 
	int onuncuRakam= ptr[9] - 48; 
	if( ikinciKural != onuncuRakam  ) 
	return 0; 
	
	// ucunc� kural 
	
	int ucuncuKuralTekRakamToplami=  ( temp * 8 ) % 10 ;
	
	 if( onbirinciRakam != ucuncuKuralTekRakamToplami )
	 return 0; 
	 
	 return 1; 
}


int main() 
{
	printf("KIMLIK DOGRULAMA UYGULAMASI \n\n"); 
	char tcNo[11]; 
	printf("TC Kimlok No : "); scanf(" %[^\n]s", tcNo ); 
	
	int sonuc= TcKimlikKontrol(tcNo) ; 
	
	if( sonuc== 1)
	printf("Kimlik Numarasi dogrulandi \n"); 
	else
	printf("Kimlik Numarasi Hatali \n"); 
	
	
	
	
	
	return 0; 
}
