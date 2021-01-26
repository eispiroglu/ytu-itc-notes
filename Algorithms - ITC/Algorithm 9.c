#include <stdio.h>

/*
* Algoritma 9: Bir sehrin 365 gunluk sicaklik bilgisi verilmektedir.
* yilin en soguk ve en sicak gunlerini bulup sicaklik degerleri ile birlikte
* ekrana yazdiran algoritmanin kodunu yaziniz.
*/

// Not: Analiz yapmak icin uygun bir yontem henuz bulamadigim icin bu programin
// analizi yapilmadi.
int main () {
	int i, sicakliklar[365], ensoguk, ensicak;
	printf("Lutfen 365 gunun her sicakligini teker teker giriniz. \n");
	
	for (i = 0; i < 365; i++) {
		scanf("%d", &sicakliklar[i]);
	}
	
	ensoguk = sicakliklar[0];
	ensicak = sicakliklar[1];
	
	for (i = 1; i < 365; i++) {
		if (ensicak < sicakliklar[i]){
			ensicak = sicakliklar[i];
		} else if (ensoguk > sicakliklar[i]) {
			ensoguk = sicakliklar[i];
		}
	}
	
	printf("En sicak: %d\nEn soguk: %d", ensicak, ensoguk);
	
	return 0;
}
