#include <stdio.h>

int main() {
	int i, j, n, x;
	int sortedArray[50];
	
	printf("Please enter length of sorted array.\n");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
		scanf("%d", &sortedArray[i]);
	
	printf("Please enter the value you want to insert.\n");
	scanf("%d", &x);
	
	i = 0;
	while (i < n && sortedArray[i] < x)
		i++;
	
	for(j = n - 1; j >= i; j--)
		sortedArray[j + 1] = sortedArray[j];
		
	sortedArray[i] = x;
	n++;
	
	for(i = 0; i < n; i++)
		printf("%d, ", sortedArray[i]);
	
	return 0;
}
