#include <Adafruit_GFX.h> 
#include <MCUFRIEND_kbv.h>
MCUFRIEND_kbv tft;

#define  BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

#define LCD_RESET 2
char kw;
uint16_t g_identifier;

void setup() {
  // put your setup code here, to run once:
pinMode(LCD_RESET, OUTPUT);
 digitalWrite(LCD_RESET,HIGH);
 delay(100);
  digitalWrite(LCD_RESET,LOW);     //reset the TFT LCD
  delay(200);
  digitalWrite(LCD_RESET,HIGH);
 Serial.begin(115200);
 Serial.setTimeout(10);
 g_identifier = tft.readID();
 tft.begin(g_identifier);
  tft.fillScreen(BLACK);
}

void loop() {
  // put your main code here, to run repeatedly:
  char j;
for(int k = 1; k<=4; k++)
        {
         switch(k)
         {
          case 1:
          tft.setCursor(100,0);
          break;
          
          case 2:
          tft.setCursor(200,0);
          break;
          
          case 3:
          tft.setCursor(100,100);
          break;
          
          case 4:
          tft.setCursor(200,100);
          break;
          }
            for(int i = 1; i<=3; i++)
     {
      switch(i)
      {
        case 1:
        j = '4';
        break;

        case 2:
        j = '3';
        break;
        
        case 3:
        j = '2';
        break;
        
        }
           tft.println(j);
         }
   
      }   
}
