#include <stdio.h>

int main() {
	
	int tmpLastIndex, lastIndex, nextIndex, tmp, i, n, a[100], map[100];
	
	printf("N giriniz.\n");
	scanf("%d", &n);
	
	printf("Sayý dizisini girin.\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	printf("Map dizisini girin.\n");
	
	for (i = 0; i < n; i++) {
		scanf("%d", &map[i]);
	}
	
	for (i = 0; i < n - 1; i++) {
		printf("i: %d\n", i);
		
		if (map[i] != i) {
			tmp = a[i];
			lastIndex = i;
			nextIndex = map[i];
			
			while (nextIndex != i) {
				a[lastIndex] = a[nextIndex];
				printf("lI: %d, nI: %d, nextVal: %d\n", lastIndex, nextIndex, a[nextIndex]);
				tmpLastIndex = lastIndex;
				lastIndex = nextIndex;
				nextIndex = map[nextIndex];
				map[tmpLastIndex] = tmpLastIndex;
			}
			
			printf("lI: %d, nI: %d, nextVal: %d\n", lastIndex, nextIndex, a[nextIndex]);
			a[lastIndex] = tmp;
			map[nextIndex] = nextIndex;
			map[lastIndex] = lastIndex;
		}
	}
	
	printf("\n");
	for (i = 0; i < n; i++) {
		printf("%d, ", a[i]);
	}
	printf("\n");
	
	return 0;
}
