 #include <stdio.h>
 
 /*
 * Algoritma 1: 2 sayiyi toplayan algoritmayi kodla.
 *
 */
 int main() {
 	int sayi1, sayi2, toplam;
 	
 	printf("Toplamak istediginiz sayilardan birincisini giriniz: ");
 	scanf("%d", &sayi1);
 	printf("Toplamak istediginiz sayilardan ikincisini giriniz: ");
 	scanf("%d", &sayi2);
 	
 	toplam = sayi1 + sayi2;
 	
 	printf("Toplam: %d", toplam);
 	
 	return 0;
}
