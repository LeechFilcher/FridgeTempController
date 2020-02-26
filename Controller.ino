/* How to use the DHT-22 sensor with Arduino uno
   Temperature and humidity sensor
   More info: http://www.ardumotive.com/how-to-use-dht-22-sensor-en.html
   Dev: Michalis Vasilakis // Date: 1/7/2015 // www.ardumotive.com */

//Libraries
#include <DHT.h>;

//Constants
#define DHTPIN D7     // what pin we're connected to
#define DHTTYPE DHT22   // DHT 22  (AM2302)
DHT dht(DHTPIN, DHTTYPE); //// Initialize DHT sensor for normal 16mhz Arduino
int piezoPin = D8;
int pretemp = 0;
int rns = 0;
//Variables
int chk;
float hum;  //Stores humidity value
float temp; //Stores temperature value

void setup()
{
  
  Serial.begin(9600);
  dht.begin();
}

void loop()
{
    
    //Read data and store it to variables hum and temp
    hum = dht.readHumidity();
    temp= dht.readTemperature();
    //Print temp and humidity values to serial monitor
    Serial.print("Humidity: ");
    Serial.print(hum);
    Serial.print(" %, Temp: ");
    Serial.print(temp);
    Serial.println(" Celsius");
    if (temp > pretemp || temp > -5){
      Serial.print("Detected Temperature Rise\n");
     if (temp > -10){
        tone(piezoPin, 1100, 500);
      }      
    }
    if (rns >= 3){
      Serial.print("Set new Control Temperature\n");
      rns = 0;
      pretemp = temp;
    }

    
    rns++;
    
    delay(5000); //Delay 2 sec.
}
