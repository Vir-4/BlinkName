// -----Blink an LED---- //

int led1 = D7; // led 1 = D7 set 

void setup()  //setup - runs once at the beginning of your program
{
  pinMode(led1, OUTPUT);
}

void loop()  // loop for blinking "DHAIRYA" in argon particle
{

    //Morse code for "D"
    
    digitalWrite(led1, HIGH);	   
    delay(1000);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000); 
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000);
    
    //Morse Code for H'
    
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000); 
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000); 
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000); 
    
    //Morse code for "A"
    
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(1000);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    
    //Morse code for "I"
    
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(500);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    
    //Morse code for "R"
    
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(1000);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(500);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    
    //Morse code for "Y"
    
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(500);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(1000);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(1000);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    
    //Morse code for "A"
    
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(1000);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    
    
    //END
    
    digitalWrite(led1,LOW);
    delay(5000);
    
    // And repeat!

}