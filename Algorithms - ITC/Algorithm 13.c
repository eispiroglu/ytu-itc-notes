#include <stdio.h>

// Algorithm 13: Verilen bir kelimenin polindrom kelime olup olmadigini bulan algoritmanin kodunu yaziniz.
// Ornek palindrom: kabak, ses, baab
int main () {
	int i, j, n, cursor1, cursor2;
	char arr[20];
	
	printf("Please enter length of array\n");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		printf("Enter a character\n");
		scanf(" %c", &arr[i]);
	}
	
	cursor1 = 0;
	cursor2 = n - 1;
	
	while(cursor1 < cursor2 && arr[cursor1] == arr[cursor2]) {
		cursor1++;
		cursor2--;
	}
	
	if (cursor1 >= cursor2) {
		printf("Palindrome.\n");
	} else {
		printf("Not a Palindrome.\n");
	}
	
	return 0;
}
