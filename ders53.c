#include <stdio.h>
#include <stdlib.h>

#define maksimum(s1,s2) (s1>s2)  ?  s1 : s2 
// birinci kýsým deðikenler ikinci kýsým þart üçüncüyse doðruysa bunu deðilse bunu yaz kýsmý
int main() {
	
	printf("%d",maksimum(52,61));
	
	return 0;
}
