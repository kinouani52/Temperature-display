#ifndef _ADC10_H_
#define _ADC10_H_

/*
 * ***  DEFINE ***
 */
typedef            void        CPU_VOID;
typedef            char        CPU_CHAR;                        /*  8-bit character                                     */
typedef  unsigned  char        CPU_BOOLEAN;                     /*  8-bit boolean or logical                            */
typedef  unsigned  char        CPU_INT08U;                      /*  8-bit unsigned integer                              */
typedef    signed  char        CPU_INT08S;                      /*  8-bit   signed integer                              */
typedef  unsigned  short       CPU_INT16U;                      /* 16-bit unsigned integer                              */
typedef    signed  short       CPU_INT16S;                      /* 16-bit   signed integer                              */
typedef  unsigned  long        CPU_INT32U;                      /* 32-bit unsigned integer                              */
typedef    signed  long        CPU_INT32S;                      /* 32-bit   signed integer                              */
typedef  unsigned  long  long  CPU_INT64U;                      /* 64-bit unsigned integer                              */
typedef    signed  long  long  CPU_INT64S;                      /* 64-bit   signed integer                              */
/*
 * *** functions prototype ***
 */


CPU_VOID ADC_init();
CPU_VOID ADC_Demarrer_conversion(CPU_INT08U voie);
CPU_INT16U ADC_Lire_resultat ();

#endif
