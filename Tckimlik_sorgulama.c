#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// TC KÝMLÝK NO DOÐRULAMA 
// 1. kural: ilk 10 rakamýn toplamýnýn mod10 u 11. rakamý verecek
// 2. kural: 1,3,5,7,9.  rakamlarýnýn toplamýnýn 7 katý ile 2,4,6,8. rakamlarýnýn 9 katýnýn toplamýnýn mod10 u 10. rakamý verecek
// 3. kural: 1,3,5,7,9.   rakamlarýnýn toplamýnýn 8 katýnýn mod10 u 11. rakamý verecek 
// Mucit Yazýlým

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
	
	// ucuncü kural 
	
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
