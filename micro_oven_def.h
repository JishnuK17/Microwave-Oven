

#ifndef MICRO_OVEN_DEF_H
#define	MICRO_OVEN_DEF_H

void power_up(void);
void menu_screen(void);
unsigned char micro(unsigned char key, unsigned char reset_flag);
unsigned char grill(unsigned char key, unsigned char reset_flag);
unsigned char convection(unsigned char key, unsigned char reset_flag);
unsigned char start(unsigned char key, unsigned char reset_flag);

#endif