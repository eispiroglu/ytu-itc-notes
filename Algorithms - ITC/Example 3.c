#include <stdio.h>

// Example 3: Verilen bir matrisin simetrik olup olmadigini bulan algoritmanin kodunu yaziniz.
int main() {
	int i, j, n;
	int nums[50][50];
	int symmetric = 1;
	
	printf("Please enter dimension of matrix.\n");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
		printf("You are entering %d. row's %d. column: \n", i + 1, j + 1);
			scanf("%d", &nums[i][j]);
		}
	}
	
	i = 0;
	while(i < n - 1 && symmetric)
	{
		j = i + 1;
		while(j < n && symmetric) {
			if(nums[i][j] != nums[j][i])
				symmetric = 0;
			j++;
		}
		
		i++;
	}
	
	if (symmetric) {
		printf("Symmetric. \n");
	} else {
		printf("Not symmetric. \n");
	}
	
	return 0;
}
