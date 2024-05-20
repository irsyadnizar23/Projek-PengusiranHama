int PinAlarm = 3;  
    int PinGetar = 2;
    int Pinled = 5; 
    int Button = 4;
    void setup()
    {     
      Serial.begin(9600);     
      pinMode(PinAlarm, OUTPUT);    
      pinMode(Pinled, OUTPUT);
      pinMode(PinGetar, INPUT);
      pinMode(Button, INPUT_PULLUP);
    }
      
    void loop() 
    {     
     
        long nilaigetar =nilai();    
        Serial.print(nilaigetar); 
        if(nilaigetar > 50){
           Serial.println(nilaigetar); 
           Serial.println("Hama terdeteksi");
           digitalWrite(Pinled, HIGH);
           if(digitalRead(Button) == LOW )
        { 
          tone(PinAlarm, 1000);
        }
        else
        {
          noTone(PinAlarm);
        }
        }else {
           Serial.println(nilaigetar); 
           Serial.println("tidak terdeteksi"); 
           digitalWrite(Pinled, LOW);
        }

        delay(100); 
        Serial.println(""); 
    }

 long nilai(){
     delay(100);
     long nilaigetar= pulseIn(PinGetar,HIGH);
     return nilaigetar; 
 }// put your setup code here, to run once