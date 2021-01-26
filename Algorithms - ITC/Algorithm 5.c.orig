#include <stdio.h>

/*
* Algortima 5: Kenar uzunluklari verilen bir ucgenin turunu ekrana yazdiran algoritmanin akis diyagramini ciziniz.
* Not: Dik ucgen ise farkli kontroller yapilmayacak, kullanicinin dogru degerler girdigi varsayilacak.
*/

int main() {
	float k1, k2, k3, enbuyuk, d1, d2;
	
	printf("Lutfen ... k1, k2, k3 ...");
	scanf("%f", &k1);
	scanf("%f", &k2);
	scanf("%f", &k3);
	
	if (k1 > k2) {
		enbuyuk = k1;
		d1 = k2;
		d2 = k3;
	} else {
		enbuyuk = k2;
		d1 = k1;
		d2 = k3;
	}
	
	if (k3 > k2 && k3 > k1) {
		enbuyuk = k3;
		d1 = k1;
		d2 = k2;
	}
	
	if (k1 == k2) {
		if (k2 == k3) {
			printf("Cesit kenar");
		} else if ((enbuyuk * enbuyuk) - ((d1 * d1) + (d2 * d2)) <= 0.00001) { // Yuvarlama yapmak zorundayiz
				printf("Dik ucgen");
		} else {
			printf("Ikizkenar");	
		}
		
	} else {
		if ((enbuyuk * enbuyuk) - ((d1 * d1) + (d2 * d2)) <= 0.00001) { // a^2 ?=? b^2 + c^2
				printf("Dik ucgen");
		} else {
			if (k2 == k3) {
				printf("Ikizkenar");
			} else {
				printf("Cesitkenar");
			}
		}	
	}
	
	printf("\n");
	printf("%f %f %f", k1, k2, k3);
	
	return 0;
}
