char serialData;
int buzzer = 2;
// the buzzer is connected to the pin 11 of the arduino board


void setup() {
  // put your setup code here, to run once:
  DDRD = 0XFF;  // giving output to all arduino pins
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)
     Serial.println("The data is being received by the arduino");
     serialData = Serial.read();
     Serial.print(serialData);

     if(serialData == '1') {
       PORTD = 0X80;
     _delay_ms(500);
     }
     
     if(serialData == '2') {
      PORTD = 0x40;
      tone(buzzer, 450); 
     _delay_ms(500);
     noTone(buzzer);
     
     
}
     }
     
  
