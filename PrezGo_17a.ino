                        
const int ledPin = 13;     
const int meetPin = 2;   
const int flashPin = 7;    

int meet = LOW;             

void setup() {                      
pinMode(ledPin, OUTPUT);    
digitalWrite(flashPin, LOW);  
digitalWrite(meetPin, HIGH);   
digitalWrite(ledPin, LOW);       
}

void loop()                              
{
meet = digitalRead(meetPin);       

if (meet == LOW){                      
delay(100);                              // delay between sound and flash
digitalWrite(flashPin, HIGH);       // flash goes off
digitalWrite(flashPin, LOW);       
digitalWrite(ledPin, HIGH);         // LED during 'dead time'
delay(4000);                            //to make sure I only get one flash
digitalWrite(ledPin, LOW);         
 }

}
