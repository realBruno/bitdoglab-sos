#include "pico/stdlib.h"

#define BLUE 12

void S(void);
void O(void);

int main(void)
{   
    gpio_init(BLUE);
    gpio_set_dir(BLUE, GPIO_OUT);

    while (true)
    {   
        S(); // S
        sleep_ms(250); // intervalo entre S e O
        O(); // O
        sleep_ms(250); // intervalo entre O e S
        S();
        sleep_ms(3000); // delay de três segundos

    }
}

void S(void)
{
    gpio_put(BLUE, true);
    sleep_ms(200);
    gpio_put(BLUE, false);
    sleep_ms(125);

    gpio_put(BLUE, true);
    sleep_ms(200);
    gpio_put(BLUE, false);
    sleep_ms(125);

    gpio_put(BLUE, true);
    sleep_ms(200);
    gpio_put(BLUE, false);
}

void O(void)
{
    gpio_put(BLUE, true);
    sleep_ms(800);
    gpio_put(BLUE, false);
    sleep_ms(125);

    gpio_put(BLUE, true);
    sleep_ms(800);
    gpio_put(BLUE, false);
    sleep_ms(125);

    gpio_put(BLUE, true);
    sleep_ms(800);
    gpio_put(BLUE, false);
}