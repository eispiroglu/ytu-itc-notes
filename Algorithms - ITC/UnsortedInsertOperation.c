#include <stdio.h>

// InsertOperation: Inserts an element to unsorted array.
int main() {
	int i, x, indexToInsert, n;
	int arr[50];
	
	printf("Please enter length of current array\n");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	printf("Please enter the number you want to insert to array\n");
	scanf("%d", &x);
	printf("Please enter the index you want to insert to array in\n");
	scanf("%d", &indexToInsert);
	indexToInsert--; // Rearrange it (1-...) to (0-...)
	
	for(i = n - 1; i >= indexToInsert; i--)
		arr[i + 1] = arr[i];
	
	arr[indexToInsert] = x;
	n++;
	
	for(i = 0; i < n; i++)
		printf("%d,", arr[i]);
	
	return 0;
}
