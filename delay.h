/*
 * delay.h
 *
 *  Created on: Apr 10, 2020
 *      Author: neekanikfar
 */

#ifndef DELAY_H_
#define DELAY_H_

#include "msp.h"
#include <stdint.h>

int main(void) {

#define FREQ_1_5_MHZ 1500000
#define FREQ_3_MHZ 3000000
#define FREQ_6_MHZ 6000000
#define FREQ_12_MHZ 12000000
#define FREQ_24_MHZ 24000000

#define CPU_FREQ 3000000
#define __delay_us(t_us) (__delay_cycles(((t_us)*CPU_FREQ) / 1000000))

    void set_DCO(int freq);

    void delay_us(int us, int freq);

    }

#endif /* DELAY_H_ */
