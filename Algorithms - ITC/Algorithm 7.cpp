#include <stdio.h>

/*
* Algoirtma 7: Bir arabanýn benzin tüketimi her saniye bilgi olarak verilmektedir. "-1" deðeri verildiðinde araba sürüþünü tamamlamýþ demektir. Her saniye
* için yakýt tüketimini ve sürüþ ortalamasýný ekrana yazdýran programý kodlayýnýz.
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
