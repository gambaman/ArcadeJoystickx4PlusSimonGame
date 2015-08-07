#define SIMON

#ifndef SOUND
#include "sound.h"
#endif

uint16_t tones[5];
void configure_simon(void);
#define play_tone(x) beep(tones[x])
uint8_t simon_game(uint8_t skill_level);
extern volatile uint8_t random_value;
uint8_t wrong_button(uint8_t button);
