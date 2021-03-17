// ------------
// Blink an LED
// ------------


int led1 = D7; // Instead of writing D7 over and over again, we'll write led1, representing the built-in LED.
int led2 = D6; // Instead of writing D7 over and over again, we'll write led2, representing the additional red LED.
int dot = 500; // A dot is a 0.5 second blink.
int dash = 1500; // A dash is a 1.5 second blink
int end = 3500; // The end of a word is seperated by a 3.5 second blink.

void setup() {

	// We are going to tell our device that D7 & D6(which we named led1 & led2) are going to be output.
	// (That means that we will be sending voltage to them, rather than monitoring voltage that comes from them)

	// It's important you do this here, inside the setup() function rather than outside it or in the loop function.

	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);

}


// Function for turning light and off for specific lengths.
void light(int on, int off) {
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);


	delay(on); // Length light is left on.


	digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);



	delay(off); // Length light is left off.
}

// All following letter functions take int 'off' as a parameter, this allows for the distinction between the continuation and end of a word.

// Function for letter R in morse.
void morse_r(int off){
    light(dot, dot);
    light(dash, dot);
    light(dot, off);
}

// Function for letter Y in morse.
void morse_y(int off){
    light(dash, dot);
    light(dot, dot);
    light(dash, dot);
    light(dash, off);
}

// Function for letter A in morse.
void morse_a(int off){
    light(dot, dot);
    light(dash, off);
}

// Function for letter N in morse.
void morse_n(int off){
    light(dash, dot);
    light(dot, off);
}

// Function for letter W in morse.
void morse_w(int off){
    light(dot, dot);
    light(dash, dot);
    light(dash, off);
}

// Function for letter I in morse.
void morse_i(int off){
    light(dot, dot);
    light(dot, off);
}

// Function for letter T in morse.
void morse_t(int off){
    light(dash, off);
}

// Function for letter E in morse.
void morse_e(int off){
    light(dot, off);
}

// Function for letter S in morse.
void morse_s(int off){
    light(dot, dot);
    light(dot, dot);
    light(dot, off);
}

void loop() {
    
    morse_r(dash);
    morse_y(dash);
    morse_a(dash);
    morse_n(end);
    
}
