#include <stdio.h>

// Search-Unsorted: Search an value in given array
int main() {
	int i, n, x;
	int unsortedArray[50];
	
	printf("Please enter length of unsorted array\n");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
		scanf("%d", &unsortedArray[i]);
	
	printf("Please enter the value you want to search\n");
	scanf("%d", &x);
	
	i = 0;
	while (i < n && unsortedArray[i] != x)
		i++;
		
	if (i < n)
		printf("Found at %d\n", i + 1);
	else
		printf("Not found\n");
	
	return 0;
}
