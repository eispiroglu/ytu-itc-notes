#include <stdio.h>

int main() {s
	int l, i, j, n, m, a1[100], a2[100], sorted[200];
	
	printf("Ilk sirali dizinin uzunlugunu giriniz.\n");
	scanf("%d", &n);
	
	printf("Ilk sirali dizinin elemanlarini giriniz.\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &a1[i]);
	}
	
	printf("Ikinci sirali dizinin uzunlugunu giriniz.\n");
	scanf("%d", &m);
	
	printf("Ikinci sirali dizinin elemanlarini giriniz.\n");
	for (i = 0; i < m; i++) {
		scanf("%d", &a2[i]);
	}
	
	i = 0;
	j = 0;
	
	while (j < m && i < n) {
		if (a1[i] < a2[j]) {
			sorted[i + j] = a1[i];
			i++;
		} else {
			sorted[i + j] = a2[j];
			j++;
		}
	}
	
	
	
	if (j < m) {
		for (l = j; l < m; l++) {
			sorted[l + i] = a2[l];
		}
	} else  if (i < n) {
		for (l = i; l < n; l++) {
			sorted[j + l] = a1[l];
		}
	}
	
	
	printf("Siralanarak eklendi: \n");
	for (i = 0; i < m + n; i++) {
		printf("%d", sorted[i]);
		
		if (i != m + n - 1) {
			printf(", ");
		}
	}
	
	
	
	return 0;
}
