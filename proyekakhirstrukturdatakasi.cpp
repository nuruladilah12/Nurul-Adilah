#include <stdio.h>
#include <stdlib.h>


int main (void)
{
	int menu, pilih, jumlah, grandtotal = 0, bayar = 0;
	char konfirmasi;
	up:
	printf("===== WARKOP =====\n");
	printf("No.\tMenu\t\tHarga\n");
	printf("1.\tEspresso\t\tRp.20.000\n");
	printf("2.\tMacchiato\t\tRp.13.000\n");
	printf("3.\tCappucino\t\tRp.15.000\n");
	printf("4.\tAffogato\t\tRp.15.000\n");
	printf("5.\tAmericano\t\tRp.15.000\n");
	printf("6.\tLatte\t\tRp.15.000\n");
	printf("7.\tMocha\t\tRp.15.000\n");
	printf("==================\n");
	printf("Silahkan masukan total menu yang ingin di pesan : "); scanf("%d", &menu);
	
	for (int i = 0; i < menu; i ++)
	{
		menu:
		printf("\nPilih pesanan : "); scanf("%d", &pilih);
		printf("\n==============\n");
		switch(pilih)
		{
			case 1 : 
			printf("Anda memilih Espresso \n\n");
			printf("Masukan jumlah : "); scanf("%d", &jumlah);
			printf("\n==============\n");
			printf("Qty\t: %d\n", jumlah);
			printf("Harga\t: %d\n", jumlah * 20000);
			printf("\n==============\n");
			grandtotal += jumlah * 20000;
			break;
			case 2 : 
			printf("Anda memilih Macchiato\n\n");
			printf("Masukan jumlah : "); scanf("%d", &jumlah);
			printf("\n==============\n");
			printf("Qty\t: %d\n", jumlah);
			printf("Harga\t: %d\n", jumlah * 13000);
			printf("\n==============\n");
			grandtotal += jumlah * 13000;
			break;
			case 3 : 
			printf("Anda memilih Cappucino \n\n");
			printf("Masukan jumlah : "); scanf("%d", &jumlah);
			printf("\n==============\n");
			printf("Qty\t: %d\n", jumlah);
			printf("Harga\t: %d\n", jumlah * 15000 );
			printf("\n==============\n");
			grandtotal += jumlah * 15000 ;
			break;
			case 4 : 
			printf("Anda memilih Affogato  \n\n");
			printf("Masukan jumlah : "); scanf("%d", &jumlah);
			printf("\n==============\n");
			printf("Qty\t: %d\n", jumlah);
			printf("Harga\t: %d\n", jumlah * 15000 );
			printf("\n==============\n");
			grandtotal += jumlah * 15000 ;
			break;
			case 5 : 
			printf("Anda memilih Americano  \n\n");
			printf("Masukan jumlah : "); scanf("%d", &jumlah);
			printf("\n==============\n");
			printf("Qty\t: %d\n", jumlah);
			printf("Harga\t: %d\n", jumlah * 15000 );
			printf("\n==============\n");
			grandtotal += jumlah * 15000  ;
			break;
			case 6 : 
			printf("Anda memilih Latte  \n\n");
			printf("Masukan jumlah : "); scanf("%d", &jumlah);
			printf("\n==============\n");
			printf("Qty\t: %d\n", jumlah);
			printf("Harga\t: %d\n", jumlah * 15000 );
			printf("\n==============\n");
			grandtotal += jumlah * 15000  ;
			break;
			case 7 : 
			printf("Anda memilih Mocha \n\n");
			printf("Masukan jumlah : "); scanf("%d", &jumlah);
			printf("\n==============\n");
			printf("Qty\t: %d\n", jumlah);
			printf("Harga\t: %d\n", jumlah * 15000 );
			printf("\n==============\n");
			grandtotal += jumlah * 15000  ;
			break;
			default:
			printf("Menu tidak ditemukan...\n");
			printf("==================\n");
			goto menu;
		}
		
		}
		printf("Total harga : %d\n", grandtotal);
		
		repet:
		if(bayar == 0 || bayar < grandtotal)
		{
			printf("Nominal pembayaran : "); scanf ("%d", &bayar);
			}
			printf("==============\n");
			if(bayar != 0 && bayar >= grandtotal)
			{
				printf("Tunai : Rp.%d\n", bayar);
				printf("kembali : Rp%d\n", bayar - grandtotal);
				} 
				else if(bayar != 0 && bayar < grandtotal)
				{
					printf("Uang anda kurang Rp.%d!\n",  grandtotal - bayar);
					goto repet;
					}
					printf("==================\n");
					
					printf("Apakah anda ingin menghakhiri program ? [Y/N] : "); scanf("%s", &konfirmasi);
					
					switch(konfirmasi){
						case 'y':
						case 'Y':
						return 0;
						break;
						
						case 'n':
						case 'N':
						menu = pilih = jumlah = grandtotal = bayar = 0;
						system("cls");
						goto up;
						break;
						
						}
} 
