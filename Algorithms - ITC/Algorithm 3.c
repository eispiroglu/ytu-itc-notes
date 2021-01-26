#include <stdio.h>

/* Algoritma 3: Verilen bir sayýnýn Armstrong Sayýsý olup olmadýðýný bulan algoritmanýn akýþ diyagramýný çiziniz.
* Basamak sýnýrý yok (pozitif basamaklar)
*/
int main() {
	int sayi, kalan, basamaksayisi;
	basamaksayisi = 0;
	
	printf("Lutfen Armstrong sayisi olup olmadigini kontrol etmek istediginiz sayiyi giriniz.");
	scanf("%d", &sayi);
	
	if (sayi < 0) {
		printf("Lutfen pozitif bir sayi giriniz!");
		return 1;
	}
	kalan = sayi;
	do {
		kalan = kalan / 10;
		basamaksayisi++;
	} while (kalan > 0);
	int basamaklar[basamaksayisi];
	
	int basamak;
	int i;
	for (i = 1; i <= basamaksayisi; i++) {
		kalan = sayi;
		int bolmesayisi = i - 1;
		
		int j;
		for (j = 1; j <= bolmesayisi; j++) {
			kalan = kalan / 10;
		}
		
		basamak = kalan % 10;
		
		basamaklar[basamaksayisi - i] = basamak;
	}
	
	int toplam = 0;
	for (i = 0; i < basamaksayisi; i++) {
		basamak = basamaklar[i];
		toplam = toplam + basamak * basamak * basamak;
	}
	
	if (toplam == sayi) 
		printf("Yazdiginiz sayi bir armstrong sayisi!");
	else
		printf("Yazdiginiz sayi bir armstrong sayisi degil.");
	
	return 0;
}
