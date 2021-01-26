#include <stdio.h>

// Example 2: Verilen bir matrisin kolon degerlerini toplayip yeni bir dizide saklayan algoritmayi kodlayiniz.
int main () {
	int i, j, n, m, sum;
	int nums[20][20], sums[20];
	
	printf("Please enter amount of rows.\n");
	scanf("%d", &n);
	printf("Please enter aomunt of columns.\n");
	scanf("%d", &m);
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
		printf("You are entering %d. row's %d. column: \n", i + 1, j + 1);
			scanf("%d", &nums[i][j]);
		}
	}
	
	for(j = 0; j < m; j++) {
		sum = 0;
		for(i = 0; i < n; i++)
			sum += nums[i][j];
		
		sums[j] = sum;
	}
	
	for(j = 0; j < m; j++) {
		printf("%d,", sums[j]);
	}
	return 0;
}
