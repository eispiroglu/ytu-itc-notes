#include <stdio.h>

/*
* Algoritma 10: Verilen bir dizide tekrar eden eleman olup olmadigini bulan algoritmanin kodunu yaziniz.
*/
int main() {
	int n, i, j, found, nums[50];
	
	printf("Please enter length of the array.\n");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
		scanf("%d", &nums[i]);
	
	i = 0;
	found = 0;
	
	while (i < n && !found) {
		j = i + 1;
		while (j < n && !found) {
			if (nums[i] == nums[j])
				found = 1;
			j++;
		}
		i++;
	}
	
	if (found) {
		printf("Exists!\n");
	} else {
		printf("Doesn't exists.\n");
	}
	return 0;
}
