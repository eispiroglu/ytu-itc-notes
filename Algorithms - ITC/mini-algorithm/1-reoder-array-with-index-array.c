#include <stdio.h>

int main() {
	int tmpin, tmp, i, n, a[100], index[100];
	
	printf("N giriniz.\n");
	scanf("%d", &n);
	
	printf("Sayý dizisini girin.\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	printf("Order dizisini girin.\n");
	
	for (i = 0; i < n; i++) {
		scanf("%d", &index[i]);
	}
	
	
	for (i = 0; i < n - 1; i++) {
		while (index[i] != i) {
			tmpin = index[index[i]];
			tmp = a[index[i]];
			
			a[index[i]] = a[i];
			index[index[i]] = index[i];
			
			a[i] = tmp;
			index[i] = tmpin;
		}
	}
	
	
	printf(".");
		
	for (i = 0; i < n; i++) {
		printf("%d, ", a[i]);
	}
	
	return 0;
}
