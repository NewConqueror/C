#include <stdio.h>
#include <stdlib.h>

// girilen parolay� * ile gizleme

int main() {
	
	char kullanici[20];
	char parola[20];
	int i=0;
	
	char ch;      // kullan�c� ad�n� veya parolay� atayaca��m�z de�i�kenler 
	printf("kullanici adi: ");
	
	ch=getch();   // bu �ekilde al�rsak g�z�kmez scanf ile al�rsak g�z�k�r
	
	while(ch!=13){   // 13=enter demek kullan�c� enter a basana kadar demek
		
		kullanici[i]=ch; 
		printf("* ");
		ch=getch(); 
		i++;
	}
	kullanici[i]='\0';
	
	i=0;
	printf("\nparola       : ");
	ch=getch();
	while(ch!=13){   // 13=enter demek kullan�c� enter a basana kadar demek
		
		parola[i]=ch; 
		printf("* ");
		ch=getch(); 
		i++;
	}
	parola[i]='\0';
	
	printf("\n\nkullanici adi: %s",kullanici);
	printf("\n parola      : %s",parola);
	
	return 0;
}
