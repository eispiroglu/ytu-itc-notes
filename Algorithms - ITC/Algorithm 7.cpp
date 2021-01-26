#include <stdio.h>

/*
* Algoirtma 7: Bir araban�n benzin t�ketimi her saniye bilgi olarak verilmektedir. "-1" de�eri verildi�inde araba s�r���n� tamamlam�� demektir. Her saniye
* i�in yak�t t�ketimini ve s�r�� ortalamas�n� ekrana yazd�ran program� kodlay�n�z.
*/

int main () {
	int time = 0;
	float okunandeger, total = 0, ortalama;
	
	printf("deger girin: \n");
	scanf("%f", &okunandeger);
	
	while (okunandeger > 0) {
		total = total + okunandeger;
		
		time++;
		ortalama = total / time;
		printf("Yakit tuketimi: %f\n", total);
		printf("deger girin: \n");
		scanf("%f", &okunandeger);
	}
	
	printf("%d zaman icin ortalama: %f", time, ortalama);
	return 0;
}
