#include <stdio.h>

int main () {
	int i, j, index, tmp, n, a[100];
	
	printf("Uzunlugu giriniz.\n");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	for (i = 1; i < n; i++) {
		j = i - 1;
		tmp = a[i];
		
		while (j >= 0 && tmp < a[j]) {
			a[j + 1] = a[j];
			j--;
		}
		
		a[j + 1] = tmp;
	}
	
	
	printf("Siralandi: \n");
	for (i = 0; i < n; i++) {
		printf("%d", a[i]);
		
		if (i != n - 1) {
			printf(", ");
		}
	}
	
	return 0;
}
