#include <stdio.h>

// Algortihm 12: Kucuk harflerden olusan bir kelimeyi BUYUK HARFLERE donsuturen algoritmanin kodunu yaziniz.
int main (){
	int i, diff, n;
	char character, chars[20], upperChars[20];
	
	printf("Please enter length of array\n");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		printf("Enter a character\n");
		scanf(" %c", &chars[i]);
	}
	
	for(i = 0; i < n; i++) {
		if (chars[i] > 'Z') {
			diff = chars[i] - 'a';
			character = 'A' + diff;
		} else {
			character = chars[i];
		}
		
		upperChars[i] = character;
	}
	
	for(i = 0; i < n; i++) {
		printf("%c", upperChars[i]);
	}
	
	return 0;
}
