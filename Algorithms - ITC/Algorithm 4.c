#include <stdio.h>

/*
* Algoritma 4: Ba�lang�� ve biti� koordinatlar� verilen e�rinin denklemini hesaplayan algoritmay� kodlay�n�z.
*/
int main () {
	float x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	
	float egim, sabit;
	
	printf("Birazdan yazacaginiz iki noktadan gecen do�runun denklemini bulacagim. \n");
	printf("Koordinatlari su sekilde girin: (x1,y1);(x2,y2) �r: (1,2);(2,4): \n");
	
	scanf("(%f,%f);(%f,%f)", &x1, &y1, &x2, &y2);
	
	if (x1 == x2 && y1 == y2) {
		printf("Girdiginiz iki nokta farkli olmali...");
		return 1;
	}
	
	if (x1 == x2) { // E�im tan�ms�z
		printf("x = %f", x1);
		return 0;
	}
	
	egim = (y2 - y1) / (x2 - x1);
	
	sabit = y1 - (egim * x1);
	
	printf("y = ");
	if (egim != 0)
		printf("%fx ", egim);
	if (sabit != 0 && egim != 0)
		printf("+ %f", sabit);
	else if (sabit != 0) // egim == 0
		printf("%f", sabit);
	
	
	return 0;
}
