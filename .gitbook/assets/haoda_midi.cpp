#include "HAODA_MIDI.h"

HD_MIDI::HD_MIDI(uint8_t port)
{
    _MIDI_pin=port;
    pinMode(_MIDI_pin,OUTPUT);
    digitalWrite(_MIDI_pin,HIGH);
}

void HD_MIDI::write(uint8_t b)
{
    pinMode(_MIDI_pin,OUTPUT);
    digitalWrite(_MIDI_pin,HIGH);

	uint8_t mask;
    digitalWrite(_MIDI_pin,LOW);
    delayMicroseconds(25);//不同CPU延时时间mega328 (25)  Microbit (24)  M0(28)

    for (mask = 0x01; mask; mask <<= 1) 
    {
        if (b & mask)
        { // choose bit
            digitalWrite(_MIDI_pin,HIGH); // send 1
        }
        else
        {
            digitalWrite(_MIDI_pin,LOW); // send 0
        }
        delayMicroseconds(28);
    }

    digitalWrite(_MIDI_pin, HIGH);
    delayMicroseconds(28);
}

void HD_MIDI::Send(uint8_t a,uint8_t b,uint8_t c)
{
   // __disable_irq();//不同的CPU最好关中断
  write(a);
  write(b);
  write(c);
  //__enable_irq();//不同的CPU开中断
}

