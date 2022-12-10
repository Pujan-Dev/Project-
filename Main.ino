char Ic_v = 2;
                
void setup() 
{
  Serial.begin(9600);         
  pinMode(13, OUTPUT);       
  pinMode(12,OUTPUT);
}

void loop()
{
  if(Serial.available() > 0)  
  {
    Ic_v = Serial.read();      
    Serial.print(Ic_v);        
    Serial.print("\n");        
    if(Ic_v == '1')             
      digitalWrite(13, HIGH); // fan on 
    else if(Ic_v == '0')    // fan off   
      digitalWrite(13, LOW);   
    else if (Ic_v == '2')
        digitalWrite(12,HIGH);// light on
    else if (Ic_v == '3')
        digitalWrite(12,LOW);// light off
  }                          
     
} 
