#include <stdio.h>

/*
* Algoritma 8: N kiþiden oluþan bir sýnýfta final notlarý açýklanmýþtýr. Ortalamanýn altýnda kalan öðrenciler BAÞARISIZ, eþit ve
* üstünde olan öðrenciler BAÞARILI kabul edilmektedir. BAÞARILI öðrencilerin kaçýncý sýrada olduðu bilgisin ibulan algoritmanýn kodunu yazýnýz.
*/
int main() {
	int i, n, toplam = 0, notlar[100];
	float ort;
	
	printf("N giriniz\n");
	scanf("%d", &n);
	
	printf("%d kadar notu sirayla giriniz.", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &notlar[i]);
		toplam += notlar[i];
	}
	
	ort = (float) toplam / n;
	
	for (i = 0; i < n; i++) {
		if (notlar[i] >= ort) {
			printf("%d\n", i + 1); // to make it start from index
		}
	}
	
	return 0;
}
