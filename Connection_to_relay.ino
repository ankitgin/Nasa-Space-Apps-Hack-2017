# define CH3 7
# define CH4 4
# define CH5 5
# define CH6 6

 void setup()  
 {  
  Serial.begin(9600);  
  pinMode(CH3, OUTPUT);
  pinMode(CH4, OUTPUT);
  pinMode(CH5, OUTPUT);
  pinMode(CH6, OUTPUT);
   //Provide power to both LEDs
   
   
   //Turn OFF any power to the Relay channels
   digitalWrite(CH3, HIGH); 
   digitalWrite(CH4, HIGH); 
   digitalWrite(CH5, HIGH); 
   digitalWrite(CH6, HIGH); 
   delay(2000); //Wait 2 seconds before starting sequence
  
 }  
 void loop()  
 {  
       
       
   delay(100);
   
   if(Serial.available())
   {
     
  //Serial.println(sum1);
    
    char c = Serial.read();  
    Serial.print(c);
   if(c=='b')
    {
      //coffee off
    }
   else if(c=='c')//light on
    {digitalWrite(CH4  ,LOW);
       delay(100);}
   else if(c=='d')//fan on
    {digitalWrite(CH6,LOW);
       delay(100);}
   else if(c=='k')//coffee on
    {digitalWrite(CH5,LOW);
       delay(100);}
   else if(c=='g')//coffee off
    {digitalWrite(CH5,HIGH);
       delay(100);}
   else if(c=='e')//light off
    {digitalWrite(CH4,HIGH);
       delay(100);}
     else if(c=='f')//fan off
    {digitalWrite(CH6,HIGH);
       delay(100);}
     else if(c=='z')//goodbye
    {digitalWrite(CH6,HIGH);
     digitalWrite(CH4,HIGH);
     digitalWrite(CH3,HIGH); 
     digitalWrite(CH5,HIGH);
     delay(500);
     digitalWrite(CH5,LOW);
     delay(500);
     digitalWrite(CH5,HIGH);
     delay(500);
     digitalWrite(CH5,LOW);
     delay(500);
     digitalWrite(CH5,HIGH);      
     delay(10000);
     }  
    
  }  
} 
