/******************************************************************
**                                                               **
**                             TITOL: 002                        **      
**                                                               **
**                                                               ** 
**  BALTES MARIUS                                DATA:  /  /20   **            
*******************************************************************/
//**************************** INCLUDE ****************************


//*************************** VARIABLES ***************************
long DNI = 7412781;
int residu;

//***************************** SETUP *****************************
            // run once, when the sketch starts

   void setup() {
  {Serial.begin(9600); 
  Serial.print("El DNI es: ");
  Serial.print(DNI);
  residu = DNI%23;
  
  if (residu == 0)
 
    Serial.print("-T");
      
  if (residu == 1)
  
    Serial.print("-R");
  
  if (residu == 2)
 
    Serial.print("-W");
   
  if (residu == 3)
  
    Serial.print("-A");
     
  if (residu == 4)
  
    Serial.print("-G");
    
  if (residu == 5)
  
    Serial.print("-M");
   
  if (residu == 6)
  
    Serial.print("-Y");
       
  if (residu == 7)
  
    Serial.print("-F");
       
  if (residu == 8)
 
    Serial.print("-P");
    
  if (residu == 9)
  
    Serial.print("-D");
    
  if (residu == 10)

    Serial.print("-X");
                 
  if (residu == 11)
  
    Serial.print("-B");
      
  if (residu == 12)
  
    Serial.print("-N");
    
  if (residu == 13)
  
    Serial.print("-J");
       
  if (residu == 14)
  
    Serial.print("-Z");
      
  if (residu == 15)
  
    Serial.print("-S");
     
  if (residu == 16)
  
    Serial.print("-Q");
      
  if (residu == 17)
  
    Serial.print("-V");
    
  if (residu == 18)
  
    Serial.print("-H");
      
  if (residu == 19)
  
    Serial.print("-L");
     
  if (residu == 20)
  
    Serial.print("-C");
    
  if (residu == 21)
  
    Serial.print("-K");
    
  if (residu == 22)
  
    Serial.print("-E");
  }   } 
//******************************* LOOP ****************************
void loop()  // we need this to be here even though its empty
{
}

  

//******************************FUNCIONS***************************
