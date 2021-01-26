#include <stdio.h>

int main() {
	int i, n, x;
	int sortedArray[50];
	
	printf("Please enter length of unsorted array\n");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
		scanf("%d", &sortedArray[i]);
	
	printf("Please enter the value you want to search\n");
	scanf("%d", &x);
	
	i = 0;
	while (i < n && sortedArray[i] < x)
		i++;
	
	if(i < n && sortedArray[i] == x)
		printf("Found at %d.\n", i + 1);
	else
		printf("Not found. Number of tries: %d\n", i + 1);
	return 0;
}
