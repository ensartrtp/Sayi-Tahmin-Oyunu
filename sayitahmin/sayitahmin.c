#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
int main()
{
	int oyuncunun_sayilari[6] = { 1,2,3,4,5,6 };
	srand(time(NULL));
	int bilgisayarin_sayilari[6];

	for (int i = 0; i < 6; i++)
	{

		int pc_RandSayi = rand() % 10;
		bilgisayarin_sayilari[i] = pc_RandSayi;

	}

	bool open = true;
	while (open)
	{
		system("color 2F");

		printf("\n\n				SAYI TAHMIN OYUNUNA\n");
		printf("				HOSGELDINIZ\n\n");
		printf("				6 adet sayi tahmin ediniz\n");
		printf("				Devam etmek icin D veya d tusuna basiniz\n\n\n");
		printf("				CIKIS icin ESC tusuna basiniz\n\n\n");

		char karakter;
		karakter = _getch();

		if (karakter == 27)
		{

			printf("				Cikmak istediginizden emin misiniz ? Evet icin 'E', hayir icin 'H'\n");
			karakter = _getch();

			if (karakter == 69 || karakter == 101)
			{

				open = false;

			}



		}




		if (karakter == 68 || karakter == 100)
		{

			system("color 5F");
			for (int i = 0; i < 6; i++)

			{
				int girilen_sayi;
				system("CLS");
				printf("\n\n				Sayi Tahmin Oyunu\n\n");
				printf("				1 - 10 arasinda sayilar giriniz\n\n");
				printf("				%i. sayiyi giriniz  ;  ", i + 1);
				scanf_s("  %i", &girilen_sayi);


				oyuncunun_sayilari[i] = girilen_sayi;


			}

			int bilinen_sayi = 0;

			for (int i = 0; i < 6; i++)
			{

				if (oyuncunun_sayilari[i] == bilgisayarin_sayilari[i])
				{

					bilinen_sayi++;

				}

			}


			int kullanicinin_skoru = pow(10, bilinen_sayi);





			printf("				Girilen	Sayilar : ");
			for (int i = 0; i < 6; i++)
			{

				printf(" %i ", oyuncunun_sayilari[i]);

			}
			printf("\n");
			printf("				Uretilen Sayilar : ");
			for (int i = 0; i < 6; i++)
			{

				printf(" %i ", bilgisayarin_sayilari[i]);

			}

			if (bilinen_sayi > 0)
			{

				printf("\n				Tebrikler %i sayi bildiniz. Skorunuz: %i \n", bilinen_sayi, kullanicinin_skoru);

			}

			if (bilinen_sayi == 0)
			{

				printf("\n				Maalesef hicbir sayi bilemediniz\n");

			}

			printf("				Yeniden denemek icin herhangi bir tusa basiniz\n");

			karakter = _getch();
		}


		system("CLS");
	}




	return 0;
}