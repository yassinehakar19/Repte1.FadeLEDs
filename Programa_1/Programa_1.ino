/************************************************************************
**                                                                     **
**                             TITOL:Programa_1                        **
**                                                                     **
**                                                                     **
**   Nom : Yassine hakar                             DATA: 02/03/2017  **
************************************************************************/
//********** Includes ***************************************************

//********** Variables **************************************************


const int led0 = 3;          
const int led1 = 5;         
const int led2 = 6;          
const int led3 = 9;        
const int led4 = 10;         
const int led5 = 11;         
int velocitat = 500;         

//********** Setup *******************************************************
void setup()
{
  pinMode(led0, OUTPUT);    
  pinMode(led1, OUTPUT);    
  pinMode(led2, OUTPUT);    
  pinMode(led3, OUTPUT);    
  pinMode(led4, OUTPUT);     
  pinMode(led5, OUTPUT);     
}

//********** Loop *********************************************************
void loop()
{
  analogWrite(led0, 0);    
  analogWrite(led1, 0);    
  analogWrite(led2, 0);    
  analogWrite(led3, 0);     
  analogWrite(led4, 0);     
  analogWrite(led5, 0);    
  
  delay(velocitat);          
  
  analogWrite(led0, 40);   
  analogWrite(led1, 0);   
  analogWrite(led2, 0);    
  analogWrite(led3, 0);    
  analogWrite(led4, 0);    
  analogWrite(led5, 0);    
  
  delay(velocitat); 


  analogWrite(led0, 80);   
  analogWrite(led1, 40);   
  analogWrite(led2, 0);    
  analogWrite(led3, 0);    
  analogWrite(led4, 0);    
  analogWrite(led5, 0);    
  
  delay(velocitat);

  analogWrite(led0, 120);   
  analogWrite(led1, 80);   
  analogWrite(led2, 40);    
  analogWrite(led3, 0);    
  analogWrite(led4, 0);    
  analogWrite(led5, 0);    
  
  delay(velocitat);

   analogWrite(led0,160);   
  analogWrite(led1, 120);   
  analogWrite(led2, 80);    
  analogWrite(led3, 40);    
  analogWrite(led4, 0);    
  analogWrite(led5, 0);    
  
  delay(velocitat);

  analogWrite(led0, 200);   
  analogWrite(led1, 160);   
  analogWrite(led2, 120);    
  analogWrite(led3, 80);    
  analogWrite(led4, 40);    
  analogWrite(led5, 0);    
  
  delay(velocitat);


  analogWrite(led0, 255);   
  analogWrite(led1, 200);   
  analogWrite(led2, 160);    
  analogWrite(led3, 120);    
  analogWrite(led4, 80);    
  analogWrite(led5, 40);    
  
  delay(velocitat);

  analogWrite(led0, 255);   
  analogWrite(led1, 255);   
  analogWrite(led2, 160);    
  analogWrite(led3, 120);    
  analogWrite(led4, 80);    
  analogWrite(led5, 40);    
  
  delay(velocitat);

  analogWrite(led0, 255);   
  analogWrite(led1, 255);   
  analogWrite(led2, 255);    
  analogWrite(led3, 120);    
  analogWrite(led4, 80);    
  analogWrite(led5, 40);    
  
  delay(velocitat);

  analogWrite(led0, 255);   
  analogWrite(led1, 255);   
  analogWrite(led2, 255);    
  analogWrite(led3, 255);    
  analogWrite(led4, 80);    
  analogWrite(led5, 40);    
  
  delay(velocitat);

  analogWrite(led0, 255);   
  analogWrite(led1, 255);   
  analogWrite(led2, 255);    
  analogWrite(led3, 255);    
  analogWrite(led4, 255);    
  analogWrite(led5, 40);    
  
  delay(velocitat);


  analogWrite(led0, 255);   
  analogWrite(led1, 255);   
  analogWrite(led2, 255);    
  analogWrite(led3, 255);    
  analogWrite(led4, 255);    
  analogWrite(led5, 255);    
  
  delay(velocitat);

  }

************************************************************************
  
