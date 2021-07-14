#include <msp430.h> 

/**
 * main.c
 */
void main()
{
    char temp[] = {'0','0','0','0'};
    int temperature, aux;
    ADC_init();
    Init_USI_SPI();
    temperature = 0;
    while (1)
    {
        ADC_Demarrer_conversion(4);
        temperature = ADC_Lire_resultat();
        aux = temperature;
        temp[3] = 0x30 + (temperature & 0x0A);
        temp[2] = 0x30 + (temperature & 0xA0);
        Aff_4carac(temp);
        //tempo(1000);
        __delay_cycles(1000);
    }
}

