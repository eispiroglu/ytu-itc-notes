#include <stdio.h>

int main() {
	int i, j, tmp, n;
	int upTo, nums[50];
	
	printf("Please enter length of unsorted array\n");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
		scanf("%d", &nums[i]);
	
	for(i = 0; i < n - 1; i++) {
		upTo = n - i - 1;
		for(j = 0; j < upTo; j++) {
			if (nums[j] > nums[j + 1]) {
				tmp = nums[j + 1];
				nums[j + 1] = nums[j];
				nums[j] = tmp;
			}
		}
	}
	
	for(i = 0; i < n; i++) {
		printf("%d, ", nums[i]);
	}
	
	
	
	return 0;
}
