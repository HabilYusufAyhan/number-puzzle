#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int secim, deneme = 0;
	int kalan;

	printf("sayi bulma oyunu(0,100)\n");
	srand(time(NULL));
	int sayi1 = rand() % 100 + 1;

	printf("sayi giriniz ");
a:
	scanf_s("%d", &secim);

	if (secim < sayi1 && 0 < secim)
	{
		printf("daha buyuk\n");
		deneme++;
		if (deneme == 3)
		{
			printf("deneme hakkiniz kalmadi");
			system("pause");
			return 0;
		}
		else if (deneme < 3)
		{
			kalan = 3 - deneme;
			printf("kalan deneme hakkiniz %d dir\n", kalan);
		}
		goto a;

	}
	else if (secim > sayi1 && 100 > secim)
	{
		printf("daha kucuk\n");
		deneme++;
		if (deneme == 3)
		{
			printf("sayi %d idi\n", sayi1);
			printf("deneme hakkiniz kalmadi\n");

			system("pause");
			return 0;
		}
		else if (deneme < 3)
		{
			kalan = 3 - deneme;
			printf("kalan deneme hakkiniz %d dir\n", kalan);
		}
		goto a;
	}
	else if (secim == sayi1)
	{
		deneme++;
		printf("tebrikler %d. denemende bildin\n", deneme);

	}
	else if (secim > 100 || secim < 0)
	{
		printf("lutfen aralik icinde bir sayi giriniz\n");
		goto a;
	}

	system("pause");
}