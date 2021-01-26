#include <stdio.h>

/*
* Algoritma 8: N kisiden olusan bir sinifta final notlari aciklanmistir. Ortalamanin altinda kalan ogrenciler BASARISIZ, esit ve
* ustunde olan ogrenciler BASARILI kabul edilmektedir. BASARILI ogrencilerin kacinci sirada (indis) oldugu bilgisin ibulan algoritmanin kodunu yaziniz.
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
