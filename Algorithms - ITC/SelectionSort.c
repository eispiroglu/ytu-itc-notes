#include <stdio.h>

int main () {
	int tmp, min, i, j, n, dizi[100];
	
	printf("Dizi uzunlugunu girin.\n");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &dizi[i]);
	}
	
	for (i = 0; i < n - 1; i++) {
		min = i;
		
		for (j = i + 1; j < n; j++) {
			if (dizi[j] < dizi[min]) {
				min = j;
			}
		}
		
		tmp = dizi[i];
		dizi[i] = dizi[min];
		dizi[min] = tmp;
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
