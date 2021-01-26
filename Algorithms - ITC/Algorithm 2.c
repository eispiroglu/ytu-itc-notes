#include <stdio.h>

/*
* Algoritma 2: 4 islem yapan algoritmayi kodla.
* Ilgili algoritmanin akis diyagraminda bolme isleminde DIV yerine bolme operatoru kullanildigi icin giren ve cikan
* sayilarin tipi float olarak belirlendi.
*/
int main() {
	float sayi1, sayi2, sonuc;
	char islem;
	
	printf("Lutfen, uzerinde islem yapmak istediginiz iki sayiydan birincisini giriniz.");
	scanf("%f", &sayi1);
	printf("Lutfen ilgili iki sayidan ikincisini giriniz.");
	scanf("%f", &sayi2);
	
	printf("Lutfen bu iki sayinin uzerinde hangi islemi yapmak istediginizi tek karakter seklinde giriniz.");
	
	scanf(" %c", &islem);
	
	if (islem == '+') {
		sonuc = sayi1 + sayi2;
	} else if (islem == '-') {
		sonuc = sayi1 - sayi2;
	} else if (islem == '*') {
		sonuc = sayi1 * sayi2;
	} else if (islem == '/') {
		sonuc = sayi1 / sayi2;
	} else {
		printf("Hatali bir islem operatoru girdiniz.");
		return 1;
	}
	
	printf("Sonuc: %f", sonuc);
	
	return 0;
}
