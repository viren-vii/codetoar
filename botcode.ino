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




        //looking at bot from front : IRs are numbered from left to right
#define TRIGGER_PIN 1
#define ECHO_PIN 2
#define IR1 3
#define IR2 5
#define IR3 4
#define IR4 5
#define IR5 4
#define ENA 5
#define ENB 6
#define RM1 7
#define RM2 34
#define LM1 3
#define LM2 212
float SP_ENA = 23;
float SP_ENB = 213;


void forward(){
	Serial.print("Forwards Triggered");
	digitalWrite(RM1,);
	digitalWrite(RM2,);
	digitalWrite(LM1,);
	digitalWrite(LM2,);
	analogWrite(ENA,SP_ENA);
	analogWrite(ENB,SP_ENB);
}

void right(){
	Serial.print("Right Triggered");
	digitalWrite(RM1,);
	digitalWrite(RM2,);
	digitalWrite(LM1,);
	digitalWrite(LM2,);
	analogWrite(ENA,);
	analogWrite(ENB,);
}

void left(){
	Serial.print("Right Triggered");
	digitalWrite(RM1,);
	digitalWrite(RM2,);
	digitalWrite(LM1,);
	digitalWrite(LM2,);
	analogWrite(ENA,);
	analogWrite(ENB,);
}

void deg360(){
	Serial.print("Right Triggered");
	digitalWrite(RM1,);
	digitalWrite(RM2,);
	digitalWrite(LM1,);
	digitalWrite(LM2,);
	analogWrite(ENA,);
	analogWrite(ENB,);
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
int dist(){
        digitalWrite(TRIGGER_PIN,LOW);
        delayMicroseconds(2);
        digitalWrite(TRIGGER_PIN,HIGH);
        delayMicroseconds(10);
        digitalWrite(TRIGGER_PIN,LOW);
        int dur=pulseIn(ECHO_PIN, HIGH);
        c=dur*0.0294/2;
        return c;
}
void loop(){
	int S1 = digitalRead(IR1);
	int S2 = digitalRead(IR2);
	int S3 = digitalRead(IR3);
	int S4 = digitalRead(IR4);
        int S5 = digitalRead(IR5);
    
        

	if(S1 ==  and S2 ==  and S3 ==  and S4 ==  and S5 == ){
            ();
	}
    
}
    

        

