#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	
	/* Rastgele Sayi Uretme */

	int sayi, sayi2;
	srand(time(0));
	sayi = rand() % 100; // 0 ile 99 araliginde bir sayi uretir (0, 99)

	/* eger (1, 100) araliginde uretmek istersek rand() % 100 + 1 yazmaliyiz */

	for (;;){
		
		printf("Sayi Giriniz: ");
		scanf("%d", &sayi2);

		if(sayi2 == sayi){

			printf("TEBRIKLER! Dogru sayiyi buldunuz.");

			break;

		}else{

			if(sayi < sayi2){

				printf("YANLIŞ TAHMİN!\nDaha kucuk bir sayi giriniz.\n\n");

			}else{

				printf("YANLIŞ TAHMİN!\nDaha buyuk bir sayi giriniz.\n\n");

			}

		}

	}

	return 0;
}	