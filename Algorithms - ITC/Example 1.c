#include <stdio.h>

// Example 1: Verilen 2 kumenin kesisimini veren algoritmanin kodunu yaziniz.
int main() {
	int i, j, n, m, intersectionCount;
	int inSecSet[50], set1[50], set2[50];
	
	printf("Please enter length of first set\n");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &set1[i]);
	}
	
	printf("Please enter length of second set\n");
	scanf("%d", &m);
	
	for (i = 0; i < m; i++) {
		scanf("%d", &set2[i]);
	}
	
	intersectionCount = 0;
	for (i = 0; i < n; i++) {
		j = 0;
		
		while (j < m && set1[i] != set2[j])
			j++;
		
		if(j < m)
			inSecSet[intersectionCount++] = set1[i];
	}
	
	
	for (i = 0; i < intersectionCount; i++) {
		printf("%d,", inSecSet[i]);	
	}
	
	return 0;
}
