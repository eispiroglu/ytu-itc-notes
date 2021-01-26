#include <stdio.h>

// SortedDeleteOperation: Deletes a value from array if exists.
int main() {
	int i, j, n, x;
	int nums[50];
	
	printf("Please enter length of current sorted array\n");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
		scanf("%d", &nums[i]);
	
	printf("Please enter the value you want to remove from array\n");
	scanf("%d", &x);
	
	i = 0;
	while(i < n && nums[i] < x)
		i++;
	if (nums[i] == x) {
		for(j = i; j < n - 1; j++)
			nums[j] = nums[j + 1];
		n--;
	} else {
		printf("The value couldn't found in array. Leaving. \n");
	}
	
	for(i = 0; i < n; i++) {
		printf("%d, ", nums[i]);
	}
	
	return 0;
}
