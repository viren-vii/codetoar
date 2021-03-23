#define TRIGGER_PIN  42  
#define ECHO_PIN 43
#define D1 46
#define D2 47
#define D3 48
#define D4 49
#define D5 50
#define D6 51
#define D7 52
#define D8 53

#define ENA 8
#define ENB 13
#define LM1 9
#define LM2 10
#define RM1 11
#define RM2 12

int spena=109;
float spenb=125.5;
int spenc=102;
int spend=49;
int spt=90;
int t=40;
int d=110; //for delay
int jun=0;
int coun=0;
float c;

void forward()
{
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,HIGH);
  digitalWrite(LM1,LOW);
  digitalWrite(LM2,HIGH);
  analogWrite(ENA,spena);
  analogWrite(ENB,spenb);
}

void right()
{
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,LOW);
  digitalWrite(LM1,LOW);
  digitalWrite(LM2,HIGH);
  analogWrite(ENA,40);
  analogWrite(ENB,0);
 }
 void left()
{
  digitalWrite(LM1,LOW);
  digitalWrite(LM2,LOW);
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,HIGH);
  analogWrite(ENA,0);
  analogWrite(ENB,60);
 }
 void deg360(){
  
  digitalWrite(LM1,HIGH);
  digitalWrite(LM2,LOW);
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,HIGH);
  analogWrite(ENA,50);
  analogWrite(ENB,42);
}

void stop_bot(){
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,LOW);
  digitalWrite(LM1,LOW);
  digitalWrite(LM2,LOW);
  analogWrite(ENA,0);
  analogWrite(ENB,0);
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
void ir(){
  if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==1&&digitalRead(D5)==1&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      forward();  
    }
    else if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==1&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      forward();  
    }
    else if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==1&&digitalRead(D5)==0&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      forward();  
    }
  
  
    /* ------------ LEFT ------------*/
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==1&&digitalRead(D5)==1&&digitalRead(D6)==1&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==1&&digitalRead(D5)==1&&digitalRead(D6)==1&&digitalRead(D7)==1&&digitalRead(D8)==0){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==1&&digitalRead(D5)==1&&digitalRead(D6)==1&&digitalRead(D7)==1&&digitalRead(D8)==1){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
  
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==1&&digitalRead(D6)==1&&digitalRead(D7)==1&&digitalRead(D8)==1){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==1&&digitalRead(D4)==1&&digitalRead(D5)==1&&digitalRead(D6)==1&&digitalRead(D7)==1&&digitalRead(D8)==1){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==1&&digitalRead(D6)==1&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==1&&digitalRead(D6)==1&&digitalRead(D7)==1&&digitalRead(D8)==0){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==1&&digitalRead(D6)==1&&digitalRead(D7)==1&&digitalRead(D8)==1){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;
    
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==0&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==1){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;

    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==0&&digitalRead(D6)==0&&digitalRead(D7)==1&&digitalRead(D8)==0){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;

    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==0&&digitalRead(D6)==1&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;

    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==1&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==0&&digitalRead(D6)==0&&digitalRead(D7)==1&&digitalRead(D8)==1){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==0&&digitalRead(D6)==1&&digitalRead(D7)==1&&digitalRead(D8)==1){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;
    
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==1&&digitalRead(D6)==1&&digitalRead(D7)==1&&digitalRead(D8)==1){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;

    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==0&&digitalRead(D6)==1&&digitalRead(D7)==1&&digitalRead(D8)==0){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;

    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==1&&digitalRead(D6)==1&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;
    
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==1&&digitalRead(D5)==1&&digitalRead(D6)==1&&digitalRead(D7)==1&&digitalRead(D8)==1){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==1&&digitalRead(D4)==1&&digitalRead(D5)==1&&digitalRead(D6)==1&&digitalRead(D7)==1&&digitalRead(D8)==1){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==0&&digitalRead(D2)==1&&digitalRead(D3)==1&&digitalRead(D4)==1&&digitalRead(D5)==1&&digitalRead(D6)==1&&digitalRead(D7)==1&&digitalRead(D8)==1){
      coun=1;
      left();
      delay(5);
    }
    while(coun){
      left();
      coun=0;
    }
    /* ---------------- RIGHT ------------------ */
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==1&&digitalRead(D4)==1&&digitalRead(D5)==1&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==1&&digitalRead(D4)==1&&digitalRead(D5)==0&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
    coun=0;

    if(digitalRead(D1)==0&&digitalRead(D2)==1&&digitalRead(D3)==1&&digitalRead(D4)==0&&digitalRead(D5)==0&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
    coun=0;

    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==1&&digitalRead(D4)==1&&digitalRead(D5)==1&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
    coun=0;
    
    if(digitalRead(D1)==0&&digitalRead(D2)==1&&digitalRead(D3)==1&&digitalRead(D4)==1&&digitalRead(D5)==1&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==1&&digitalRead(D2)==1&&digitalRead(D3)==1&&digitalRead(D4)==1&&digitalRead(D5)==1&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==1&&digitalRead(D4)==1&&digitalRead(D5)==0&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==0&&digitalRead(D2)==1&&digitalRead(D3)==1&&digitalRead(D4)==1&&digitalRead(D5)==0&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==1&&digitalRead(D2)==1&&digitalRead(D3)==1&&digitalRead(D4)==1&&digitalRead(D5)==0&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==1&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==0&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
    coun=0;

    if(digitalRead(D1)==0&&digitalRead(D2)==1&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==0&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
    coun=0;

    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==1&&digitalRead(D4)==0&&digitalRead(D5)==0&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==1&&digitalRead(D2)==1&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==0&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==1&&digitalRead(D2)==1&&digitalRead(D3)==1&&digitalRead(D4)==0&&digitalRead(D5)==0&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
    coun=0;
  
    if(digitalRead(D1)==1&&digitalRead(D2)==1&&digitalRead(D3)==1&&digitalRead(D4)==1&&digitalRead(D5)==0&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
    if(digitalRead(D1)==1&&digitalRead(D2)==1&&digitalRead(D3)==1&&digitalRead(D4)==1&&digitalRead(D5)==1&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
  
    if(digitalRead(D1)==1&&digitalRead(D2)==1&&digitalRead(D3)==1&&digitalRead(D4)==1&&digitalRead(D5)==1&&digitalRead(D6)==1&&digitalRead(D7)==0&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
  
    if(digitalRead(D1)==1&&digitalRead(D2)==1&&digitalRead(D3)==1&&digitalRead(D4)==1&&digitalRead(D5)==1&&digitalRead(D6)==1&&digitalRead(D7)==1&&digitalRead(D8)==0){
      coun=1;
      right();
      delay(5);
    }
    while(coun){
      right();
      coun=0;
    }
    /* ------------ + OR T shape ------------ */
    if(digitalRead(D1)==1&&digitalRead(D2)==1&&digitalRead(D3)==1&&digitalRead(D4)==1&&digitalRead(D5)==1&&digitalRead(D6)==1&&digitalRead(D7)==1&&digitalRead(D8)==1){
      forward();
      delay(5);
    }
    
     /* ---------- 360 CONDITION ------------- */
    if(digitalRead(D1)==0&&digitalRead(D2)==0&&digitalRead(D3)==0&&digitalRead(D4)==0&&digitalRead(D5)==0&&digitalRead(D6)==0&&digitalRead(D7)==0&&digitalRead(D8)==0){
      deg360();
    } 
}
void setup(){
  Serial.begin(9600);
  pinMode(D1,INPUT);
  pinMode(D2,INPUT);
  pinMode(D3,INPUT);
  pinMode(D4,INPUT);
  pinMode(D5,INPUT);
  pinMode(D6,INPUT);
  pinMode(D7,INPUT);
  pinMode(D8,INPUT);

  pinMode(RM1,OUTPUT);
  pinMode(RM2,OUTPUT);
  pinMode(LM1,OUTPUT);
  pinMode(LM2,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB ,OUTPUT);
  
  pinMode(ECHO_PIN,INPUT);
  pinMode(TRIGGER_PIN,OUTPUT);
 
}
void loop() {

//  Serial.print("D1 - ");
//  Serial.println(digitalRead(D1));
//  Serial.print("D2 - ");
//  Serial.println(digitalRead(D2));
//  Serial.print("D3 - ");
//  Serial.println(digitalRead(D3));
//  Serial.print("D4 - ");
//  Serial.println(digitalRead(D4));
//  Serial.print("D6 - ");
//  Serial.println(digitalRead(D6));
//  Serial.print("D8 - ");
//  Serial.println(digitalRead(D8));

   //Serial.println(dist());
  if(dist()<10){
    stop_bot();
    delay(10);
  }
  else{
    ir();  
  }
  
}
