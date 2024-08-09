#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// C de TARÝH ZAMAN ÝÞLEMLERÝ 

// time_t = deðiþken tipimiz 
// ctime(&tarih) = tarihin formatýný  BURAYI DOLDUR
// struct time *ptr = Tarih bilgisi üzerinde dolaþmamýzý saðlar
// localtime (&tarih) = tarih bilgisini karakter dizisine dönüþtürmemize yarýyor
// difftime ( bitiþ tarihi, baþlama tarihi ) = iki tarih arasýndaki farký bulur (saniye cinsinden)

int main() {
	
	time_t tarih1 = time(0) ;
	printf("tarih1: %s",ctime(&tarih1));
	
	sleep(2);
	
	time_t tarih2 = time(0) ;
	printf("tarih2: %s",ctime(&tarih2));
	
	float saniye,dakika,saat,gun;
	 
	 saniye= difftime(tarih2,tarih1);  // bitis,baþlangýç  default olarak saniye cinsinden verir
	 dakika=saniye/60;
	 saat=dakika/60;
	 gun=saat/24 ;
	 
	printf("saniye farki: %f \n",saniye);
	printf("dakika farki: %f \n",dakika);
	printf("saat   farki: %f \n",saat  );
	printf("gun    farki: %f \n",gun   );
	
	
	/*
	time_t bugun = time(0) ;
	
	struct time *tarihbilgileri = localtime(&bugun) ;
	// artýk bu tarih bilgileri üzerinde karakter olarak iþlem yapabilirim diziye aktarabilirim ilk iki karakteri alma vs gibi
	
	char tarih [12];
	char zaman [12];  
	char saat  [3];  
	char dakika[3];  
	char saniye[3];    // +1 tane de boþluk için yer ayýrmamýz lazým onun için 3 
	char gun   [3];
	char ay    [3];
	char yil   [5];  
	strftime(tarih, sizeof(tarih), "%d.%m.%Y",tarihbilgileri);
	 // burda bize format soruyor sadece gün ay yýl þeklinde yazýcak d=day m=month Y=year
	 // nokta koyarsan nokta koyar / koyarsan / koyar
	
	strftime(zaman, sizeof(zaman), "%H.%M.%S",tarihbilgileri);// saat dakika saniye
	strftime(saat,  sizeof(saat),  "%H",tarihbilgileri); 
	strftime(dakika,sizeof(dakika),"%M",tarihbilgileri);
	strftime(saniye,sizeof(saniye),"%S",tarihbilgileri);
	strftime(gun,   sizeof(gun),   "%d",tarihbilgileri); 
	strftime(ay,    sizeof(ay),    "%m",tarihbilgileri); 
	strftime(yil,   sizeof(yil),   "%Y",tarihbilgileri); 
	 
	printf("Tamami: %s \n",ctime(&bugun) );
	printf("Tarih  : %s \n",tarih);
	printf("zaman  : %s \n",zaman);
	printf("saat   : %s \n",saat);
	printf("dakika : %s \n",dakika);
	printf("saniye : %s \n",saniye);
	printf("gun    : %s \n",gun);
	printf("ay     : %s \n",ay);
	printf("yil    : %s \n",yil);
	*/
	
	/*time_t tarih1 = time(0);
	printf("tarih1: %s",ctime(&tarih1));
	
	sleep(2);
	
	time_t tarih2 = time(0);
	printf("tarih2: %s",ctime(&tarih2)); */
	
	
	
  /* time_t tarih/*; = time(0); // bu halde býrakýrsak 1970 yýlýný tutar günümüzü tutmasý için time(0) yapmamýz lazým
	
   printf("bugunku tarih saat bilgileri: %s",ctime(&tarih) );
    // tarih deðiþkeninin içerisindeki þeyleri  ctime ile alýyoruz */ 
	
	return 0;
}
