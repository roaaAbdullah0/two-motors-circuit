int own = 11 ;
int two = 12 ;
int out1 = 4 ;
int out2 = 7; 
int out3 = 8 ; 
int out4 = 12 ; 

void setup() {
pinMode(out1 , OUTPUT) ;
pinMode(out2 , OUTPUT) ;
pinMode(out3 , OUTPUT) ;
pinMode(out4 , OUTPUT) ;
}

void loop() {
analogWrite(own , 500 ) ;
analogWrite(two , 500 ) ;
digitalWrite(out1 , HIGH); 
digitalWrite(out2 , LOW); 

digitalWrite(out3 , HIGH); 
digitalWrite(out4 , LOW); 
delay(2000) ; 

analogWrite(own , 500 ) ;
analogWrite(two , 500 ) ;
digitalWrite(out1 , LOW); 
digitalWrite(out2 , HIGH); 

digitalWrite(out3 , LOW); 
digitalWrite(out4 , HIGH); 
delay(1000) ;


}
  