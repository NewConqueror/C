#include <stdio.h>
#include <stdlib.h>

enum sehirler{
		baslangic,adana,adiyaman,afyon,agri,amasya,angara,antalya
	};

int main() {
	
	enum sehirler il;
	il=angara;
	printf("%d",il);
	
	return 0;
}
