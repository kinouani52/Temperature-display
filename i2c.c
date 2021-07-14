/*
 * i2c.c
 *
 *  Created on: 16 juin 2020
 *      Author: kinou
 */


#include "msp430.h"
#include "i2c.h"


void Init_USI_SPI()
{
  #if defined __MSP430G2452__
  //  P1DIR |= BIT4; // CS output
 //   P1OUT |= BIT4; // CS high
    USICTL0 = 0;
    USICTL0 |= (0 | USIOE | USIGE | USIPE5 | USIPE6);
    USICTL1 |= (0 );
    USICTL1 |= (0|USICKPH|USII2C| );

    USICKCTL |= (0 | USISSEL1 | USIDIV1 | USIDIV0);
#endif
}
void Send_char_SPI(unsigned char carac)
{
  #if defined __MSP430G2452__
 //   P1OUT &= ~BIT4;
    USISRL = carac;
    USICNT = 8;
    while ((USICTL1 & USIIFG) == 0);
  //  P1OUT |= BIT4;
#endif
}
