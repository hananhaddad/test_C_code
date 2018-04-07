#include <stdio.h>
#include <stdint.h>
#include "calcul.h"

uint32_t main(void)

{
	uint32_t u32_i = 0, u32_t, u32_d;
	uint8_t u8_tab[] =
	{
		'h', 'e', 'l', 'l', 'o', ' ',
		'h', 'a', 'n', 'a', 'n',
	};
	
	for(u32_i = 0; u32_i < 11; u32_i++)
	{
		printf("%c",u8_tab[u32_i]);
	}
	
	printf("\n");
	
	printf("donner la valeur de la distance : ");	
	scanf("%d",&u32_d);
	
	printf("donner la valeur de temps mis pour parcourir la distance : ");
	scanf("%d",&u32_t);
	
	printf("la vitasse est : %d\n", calcull_vitesse(u32_d, u32_t));
	return 0;
}
