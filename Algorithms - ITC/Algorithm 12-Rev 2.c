#include <stdio.h>

// Algortihm 12: Kucuk harflerden olusan bir kelimeyi BUYUK HARFLERE donsuturen algoritmanin kodunu yaziniz.
// You might decide to remove if controls if you are going to accept the user can NOT enter UPPERCASED letters.
int main (){
	int i, diff, n;
	char character, chars[20], upperChars[20];
	
	// Please type only one string.
	printf("Please type the string\n");
	scanf("%s", chars);
	
	i = 0;
	while(chars[i] != '\0') {
		if (chars[i] > 'Z') {
			diff = chars[i] - 'a';
			character = 'A' + diff;
		} else {
			character = chars[i];
		}
		
		upperChars[i] = character;
		i++;
	}
	
	i = 0;
	while(upperChars[i] != '\0') {
		printf("%c", upperChars[i]);
		i++;
	}
	
	return 0;
}
