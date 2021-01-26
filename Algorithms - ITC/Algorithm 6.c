#include <stdio.h>

/*
* Algoritma 6: 3 basamakli Armstrong sayilarini ve bunlarin adedini bulan algoritmanin akis diyagramini ciziniz.
*/

int main () {
	int i, count, basamak1, basamak2, basamak3, kup1, kup2, kup3, sayilar[999];
	
	
	count = 0;
	
	for (i = 1; i <= 999; i++) {
		basamak1 = i % 10;
		basamak2 = (i / 10) % 10;
		basamak3 = i / 100;
		
		kup1 = basamak1 * basamak1 * basamak1;
		kup2 = basamak2 * basamak2 * basamak2;
		kup3 = basamak3 * basamak3 * basamak3;
		
		if (i == kup1 + kup2 + kup3) {
			sayilar[count] = i;
			count = count + 1;
			printf("%d\n", i);
		}
	}
	
	printf("%d tane", count);
	return 0;
}
