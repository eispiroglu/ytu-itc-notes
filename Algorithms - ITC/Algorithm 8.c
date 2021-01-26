#include <stdio.h>

/*
* Algoritma 8: N ki�iden olu�an bir s�n�fta final notlar� a��klanm��t�r. Ortalaman�n alt�nda kalan ��renciler BA�ARISIZ, e�it ve
* �st�nde olan ��renciler BA�ARILI kabul edilmektedir. BA�ARILI ��rencilerin ka��nc� s�rada oldu�u bilgisin ibulan algoritman�n kodunu yaz�n�z.
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
