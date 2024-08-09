#include <stdio.h>
#include <stdlib.h>

// girilen parolayý * ile gizleme

int main() {
	
	char kullanici[20];
	char parola[20];
	int i=0;
	
	char ch;      // kullanýcý adýný veya parolayý atayacaðýmýz deðiþkenler 
	printf("kullanici adi: ");
	
	ch=getch();   // bu þekilde alýrsak gözükmez scanf ile alýrsak gözükür
	
	while(ch!=13){   // 13=enter demek kullanýcý enter a basana kadar demek
		
		kullanici[i]=ch; 
		printf("* ");
		ch=getch(); 
		i++;
	}
	kullanici[i]='\0';
	
	i=0;
	printf("\nparola       : ");
	ch=getch();
	while(ch!=13){   // 13=enter demek kullanýcý enter a basana kadar demek
		
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
