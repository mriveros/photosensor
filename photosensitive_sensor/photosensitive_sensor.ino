/*
 * Fecha: 28-08-2019
 * AUTOR: Marcos A. Riveros Coronel
 * Descripción: Conexion de Fotosensor Con Arduino nano
 * para el calculo de emision de luz.
 * Este algoritmo utiliza la entrada de datos analogica
 * para un valor numerico donde el umbral de valores de [100,800].
 * Los valores [100, 700] bajos representa el estado de LUZ y el umbral de
 * valores numericos elevados [701,800] corresponde a un estado
 * de oscuridad.
*/

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  unsigned int AnalogValue; 
  
  if (analogRead(A0) < 700) 
    {
    
      Serial.println("Luz");
      
      AnalogValue = analogRead(A0);
      
      Serial.println(AnalogValue);
    
    }
else {
    
    Serial.println("Oscuridad");delay(100);
    
    AnalogValue = analogRead(A0);
    
    Serial.println(AnalogValue);
    
    }
    
  }

  
