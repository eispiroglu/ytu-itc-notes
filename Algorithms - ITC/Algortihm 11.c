#include <stdio.h>

// Algorithm 11: N rakamdan olusan bir karakter dizisindeki degeri tek bir tam sayi degerine donusturen algoritmanin kodunu yaziniz.
int main () {
	int i, n;
	int number, tempNum, exponentValue;
	
	char arr[20];
	
	printf("Please enter length of array\n");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		printf("Enter a character\n");
		scanf(" %c", &arr[i]);
	}
	
	number = 0;
	exponentValue = 1;
	
	for (i = n - 1; i >= 0; i--) {
		tempNum = arr[i] - '0';
		number += exponentValue * tempNum;
		exponentValue *= 10;
	}
	
	printf("The number is: %d\n", number);
	return 0;
}
