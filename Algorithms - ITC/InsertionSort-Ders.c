#include <stdio.h>

/*
* Derste akýþ diyagramýný çizdiðimiz Insertion Sort'un C ile kodlanmýþ hali.
*/
int main () {
	int i, j, tmp, n, dizi[100];
	
	printf("Dizi uzunlugunu giriniz.\n");
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &dizi[i]);
	}	
	
	for (i = 1; i < n; i++) {
		j = i;
		tmp = dizi[j - 1];
		
		while (j > 0 && tmp < dizi[j - 1]) {
			dizi[j] = dizi[j - 1];
			j--;
		}
		
		dizi[j] = tmp;
	}
	
	printf("Siralandi: \n");
	for (i = 0; i < n; i++) {
		printf("%d", dizi[i]);
		
		if (i != n - 1) {
			printf(", ");
		}
	}
	
	return 0;
}
