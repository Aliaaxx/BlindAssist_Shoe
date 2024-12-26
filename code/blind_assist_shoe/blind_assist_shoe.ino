#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

#define trigPin PB2 // pin 10 -> PB2
#define echoPin PB1 // pin 9 -> PB1
#define buzzPin PD2 // pin 2 -> PD2

void init_pins() {
    DDRB |= (1 << trigPin); // output
    DDRB &= ~(1 << echoPin); // input
    DDRD |= (1 << buzzPin); // output
}

// Generate a 10us pulse on trigger pin
void trigger_ultrasonic() {
    PORTB |= (1 << trigPin);
    _delay_us(10);
    PORTB &= ~(1 << trigPin);
}

long measure_echo() {
    long duration = 0;
    while (!(PINB & (1 << echoPin))); // Wait for the echo pin to go HIGH
    while (PINB & (1 << echoPin)) {
        duration++;
        _delay_us(2);  // Delay for 2us to increase resolution
    }
    return duration;
}

double calculate_distance(long duration) {
    // Calculate distance
    double distance = (duration / 2.0) / 29.1;  
    // The '29.1' representing the speed of sound in air at room temperature, in microseconds per centimeter.
    return distance;
}

int main(void) {
    init_pins();
    trigger_ultrasonic();
    long duration = measure_echo();
    double distance = calculate_distance(duration);

    if (distance <= 50.0 && distance >= 0) {
        PORTD |= (1 << buzzPin); // Turn on buzzer
    }
    else {
        PORTD &= ~(1 << buzzPin); // Turn off buzzer  
    }
    _delay_ms(500);
    return 0;
}
