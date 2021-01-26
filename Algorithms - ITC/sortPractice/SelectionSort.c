#include <stdio.h>

int main() {
	int i, j, n, minIndex, tmp, from;
	int nums[50];
	
	printf("Please enter length of unsorted array\n");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
		scanf("%d", &nums[i]);
	
	for(i = 0; i < n - 1; i++) {
		minIndex = i;
		from = i + 1;
		
		for(j = from; j < n; j++) {
			if (nums[minIndex] > nums[j])
				minIndex = j;
		}
		
		tmp = nums[i];
		nums[i] = nums[minIndex];
		nums[minIndex] = tmp;
	}
	
	for(i = 0; i < n; i++) {
		printf("%d, ", nums[i]);
	}
	
	
	return 0;
}
