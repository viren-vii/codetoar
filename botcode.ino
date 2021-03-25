//looking at bot from front : IRs are numbered from left to right
#define IR1 
#define IR2 
#define IR3 
#define IR4 
#define IR5 

#define ENA
#define ENB
#define RM1
#define RM2
#define LM1
#define LM2

float SP_ENA = 0;
float SP_ENB = 0;

void forward(){
	Serial.print("Forwards Triggered");
	digitalWrite(RM1,LOW);
	digitalWrite(RM2,HIGH);
	digitalWrite(LM1,LOW);
	digitalWrite(LM2,HIGH);
	analogWrite(ENA,SP_ENA);
	analogWrite(ENB,SP_ENB);
}

void right(){
	Serial.print("Right Triggered");
	digitalWrite(RM1,LOW);
	digitalWrite(RM2,LOW);
	digitalWrite(LM1,LOW);
	digitalWrite(LM2,HIGH);
	analogWrite(ENA,__);
	analogWrite(ENB,__);
}
void left(){
	Serial.print("Right Triggered");
	digitalWrite(LM1,LOW);
	digitalWrite(LM2,LOW);
	digitalWrite(RM1,LOW);
	digitalWrite(RM2,HIGH);
	analogWrite(ENA,__);
	analogWrite(ENB,__);
}
void deg360(){
	Serial.print("Right Triggered");
	digitalWrite(LM1,HIGH);
	digitalWrite(LM2,LOW);
	digitalWrite(RM1,LOW);
	digitalWrite(RM2,HIGH);
	analogWrite(ENA,__);
	analogWrite(ENB,__);
}

void stop(){
	Serial.print("Right Triggered");
	digitalWrite(RM1,LOW);
	digitalWrite(RM2,LOW);
	digitalWrite(LM1,LOW);
	digitalWrite(LM2,LOW);
	analogWrite(ENA,0);
	analogWrite(ENB,0);
}


void setup(){
	Serial.begin(9600);
	// MOTOR AND ENABLES
	pinMode (RM1, OUTPUT);
	pinMode (RM2, OUTPUT);
	pinMode (LM1, OUTPUT);
	pinMode (LM2, OUTPUT);
	pinMode (ENA, OUTPUT);
	pinMode (ENB, OUTPUT);
	// IR ARRAY
	pinMode (IR1, INPUT);
	pinMode (IR2, INPUT);
	pinMode (IR3, INPUT);
	pinMode (IR4, INPUT);
	pinMode (IR5, INPUT);
}
void loop(){
	int S1 = digitalRead(IR1);
	int S2 = digitalRead(IR2);
	int S3 = digitalRead(IR3);
	int S4 = digitalRead(IR4);
	int S5 = digitalRead(IR5);

	if(S1 == 0 and S2 == 0 and S3 == 1 and S4 == 0 and S5 == 0){
		forward();
	}

}

/*

A1-A5 line sensor
D0-D1(tx rx) bluetooth 

Md
En1 3
In1  4
In2  5
En2 6
In3  7
In4  8

Ultrasonic
Echo d10
Trig d9

En1 lefylt
En2 right
in1 in2 left
in3  in4 right

*/
/*updated
D6 en1
D7 in1
D8 in2
D3 en2
D4 in3
D5 in4
*/