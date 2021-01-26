#include <stdio.h>

int main() {
	int i, j, n, m, k;
	int arr1[50], arr2[50], merged[100];
	
		
	printf("Please enter length of first sorted array\n");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
		scanf("%d", &arr1[i]);
	
	printf("Please enter length of second sorted array\n");
	scanf("%d", &m);
	
	for (i = 0; i < m; i++)
		scanf("%d", &arr2[i]);
	
	i = 0;
	j = 0;
	k = 0;
	
	while (i < n && j < m) {
		if (arr1[i] < arr2[j]) {
			merged[k] = arr1[i];
			i++;
		} else {
			merged[k] = arr2[j];
			j++;
		}
		k++;
	}
	
	if (j < m) {
		for (i = j; i < m; i++)
		 {
		 	merged[k] = arr2[i];
		 	k++;
		 }
	} else if (i < n) {
		for (j = i; j < n; j++)
		 {
		 	merged[k] = arr1[j];
		 	k++;
		 }
	}
	
	for(i = 0; i < k; i++) {
		printf("%d, ", merged[i]);
	}
	
	return 0;
}
