#include <stdio.h>
#include <avr/io.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"
int main (void)
{
    TCNT1 = 0;
    OCR1A = 7;            // (F_CPU / (prescaler * F_timer)) - 1
    TCCR1A = (1<<COM1A0); // Toggle pin OC1A (DDB1) on compare match
    TCCR1B = (1<<CS10);   // Prescaler to 1
    TCCR1B |= (1<<WGM12); // CTC Mode
    DDRB |= _BV(DDB1);    // DDB1 as output

    while (1) {
    }
    return 0;
}
#pragma clang diagnostic pop
