#include <stdio.h>

/*
* Algoirtma 7: Bir arabanin benzin tuketimi her saniye bilgi olarak verilmektedir. "-1" degeri verildiginde araba surusunu tamamlamis demektir. Her saniye
* icin yakit tuketimini ve surus ortalamasini ekrana yazdiran programi kodlayiniz.
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
