MARCAS
EQ DE LABORATORIO
ENERGÍA
TARJETAS DE DESARROLLO
SENSORES
MÓDULOS
OPTOELECTRÓNICA
ROBÓTICA
INICIO / OPTOELECTRÓNICA / DISPLAY

 AÑADIR A LA LISTA DE DESEOS
TFT Display LCD 1.3″ SPI HD 65K Colores ST7739
$120.00

100 disponibles

TFT Display LCD 1.3" SPI HD 65K Colores ST7739 cantidad
1
 AÑADIR AL CARRITO
Tabla de Precios
CANTIDAD	PRECIO
1 - 9	$120.00
10 - 24	$107.60
25 - 34	$98.08
35+	$90.10
Existencia de productos en tienda
SUCURSAL	CANTIDAD
CENTRO	9
ZACATENCO	4
COPILCO	4
 AÑADIR A LA LISTA DE DESEOS
SKU: AR1717
Categoría: Display
Etiquetas: 1.3, 1.3 pulgadas, 65K, AR1717, color, colores, display, full, hd, lcd, pantalla, SPI, ST7735, ST7739, TFT
NUESTRAS OFERTAS
Capacitor Electrolítico 47uF 50V SMDCapacitor Electrolítico 47uF ±20% 50V SMD
$4.00 $1.00
Resistencia de 47KΩ 12w 1%Resistencia de 47KΩ 1/2w 1%
$0.70 $0.16
LM2576T Regulador de VoltajeLM2576T Regulador de Voltaje ADJ 3A TO-220
$70.00 $39.00
BYG21K Diodo Rectificador de Avalancha Rápida SMABYG21K Diodo Rectificador de Avalancha Rápida SMA
$15.00 $5.81
Conector Dupont Dual 2x7Conector Dupont 2x7 Pin
$5.00 $1.15
Resistencia SMD 0603 1% 1 ohm - 10M ohm
$0.18 – $0.80
IR2110S Controlador de Alta y Baja Tensión 2A SMDIR2110S Controlador de Alta y Baja Tensión 2A SMD SOP-16
$28.00 $12.96
DESCRIPCIÓN
INFORMACIÓN ADICIONAL
VALORACIONES (0)
INFORMACIÓN
TFT Display LCD 1.3″ ST7789 es una pantalla a color de 1.3 Pulgadas de 240×240 puntos con controlador ST7789 y tablero de conexiones, calidad de visualización superior, ángulo de visión completo, ángulo de visión súper amplio y fácil de controlar mediante MCU como 8051, PIC, AVR, ARDUINO, ARM y Raspberry PI. El controlador TFT (ST7789) puede mostrar color completo de 16 bits utilizando el código de la biblioteca Adafruit GFX.

Esta pantalla es ideal para sus proyectos con Arduino o cualquier microcontrolador. Tiene una excelente resolución, 240 x 240 puntos con 65K niveles de color. Solo 1.3 pulgadas en diagonal y está repleta de píxeles RGB, para hacer pantallas muy pequeñas de alta densidad. La pantalla es una excelente manera de agregar una pantalla pequeña, colorida y brillante a cualquier proyecto. Dado que la pantalla utiliza SPI de 4 cables para comunicarse y tiene su propio búfer de cuadros direccionable por píxeles, se puede utilizar con todo tipo de microcontroladores.

ESPECIFICACIONES Y CARACTERÍSTICAS
Modelo: GMT130-V1.0
Chip: ST7789
Voltaje de funcionamiento: 5 VDC
Tipo de Visualización: IPS
Pantalla: 1.3 pulgadas
Corriente: 25 mA
Interfaz: SPI
Pines: 8
Resolución: 128 x 64
Matriz de puntos: 240 x 240
Color de pantalla: 65K a todo color
Temperatura: -20 a 70 °C
Tamaño de pantalla: 23.4x 23.4mm
Tamaño: 27.5 x 39 mm
Peso: 5.35g
DOCUMENTACIÓN Y RECURSOS
Datasheet
Dimensiones
Pinout
Librería Arduino ST7789 Fast_master
INFORMACIÓN ADICIONAL 
¿Cómo conectar el TFT Display 0.96″ ST7735 con Arduino Uno?
Para utilizar con la placa de Arduino Uno las conexiones son las siguientes:

Arduino Uno	
Display TFT 1.3”

5V

VCC

GND

GND

13

SCK

11

SDA

9

REST

8

DC

 

Diagrama de conexión:



 

¿Cómo programar el TFT Display 1.3″ ST7789 con Arduino IDE?
Para programar este display es muy sencillo hay que utilizar dos librerías que podrás descargar a continuación:

Adafruit GFX graphics
Librería Arduino ST7789 Fast_master
Y a continuación realizar el siguiente código:



#define SCR_WD   240
#define SCR_HT   240
#include <SPI.h>
#include <Adafruit_GFX.h> 

#if (__STM32F1__) // bluepill
#define TFT_DC  PA1
#define TFT_RST PA0

#else
#define TFT_DC  8
#define TFT_RST 9
#include <Arduino_ST7789_Fast.h> 
#endif

Arduino_ST7789 tft = Arduino_ST7789(TFT_DC, TFT_RST);

unsigned long FillScreenTest()
{
  unsigned long start = millis();
  for(int i=0;i<5;i++) {
    tft.fillScreen(RED);
    tft.fillScreen(GREEN);
    tft.fillScreen(BLUE);
    tft.fillScreen(YELLOW);
  }
  return millis()-start;
}

unsigned long ClearScreenTest()
{
  unsigned long start = millis();
  for(int i=0;i<5*4;i++) 
    tft.fillScreen(BLACK);
  return millis()-start;
}

const uint16_t imgF[] PROGMEM = {0xF800,0xF840,0xF8A0,0xF900,0xF960,0xF9C0,0xFA20,0xFA80,0xFAE0,0xFB40,0xFBA0,0xFC00,0xFC60,0xFCC0,0xFD20,0xFD80,0xFDE0,0xFE40,0xFEA0,0xFF00,0xFF60,0xFFC0,0xFFE0,0xEFE0,0xE7E0,0xD7E0,0xCFE0,0xBFE0,0xB7E0,0xA7E0,0x9FE0,0x8FE0,0x87E0,0x77E0,0x6FE0,0x5FE0,0x57E0,0x47E0,0x3FE0,0x2FE0,0x27E0,0x17E0,0xFE0,0x7E0,0x7E1,0x7E3,0x7E4,0x7E6,0x7E7,0x7E9,0x7EA,0x7EC,0x7ED,0x7EF,0x7F0,0x7F2,0x7F3,0x7F5,0x7F6,0x7F8,0x7F9,0x7FB,0x7FC,0x7FE,0x7FF,0x79F,0x73F,0x6DF,0x67F,0x61F,0x5BF,0x55F,0x4FF,0x49F,0x43F,0x3DF,0x37F,0x31F,0x2BF,0x25F,0x1FF,0x19F,0x13F,0xDF,0x7F,0x1F,0x81F,0x101F,0x201F,0x281F,0x381F,0x401F,0x501F,0x581F,0x681F,0x701F,0x801F,0x881F,0x981F,0xA01F,0xB01F,0xB81F,0xC81F,0xD01F,0xE01F,0xE81F,0xF81F,0xF81F,0xF81D,0xF81C,0xF81A,0xF819,0xF817,0xF816,0xF814,0xF813,0xF811,0xF810,0xF80E,0xF80D,0xF80B,0xF80A,0xF808,0xF807,0xF805,0xF804,0xF802,0xF801,
                                 0xF800,0xF840,0xF8A0,0xF900,0xF960,0xF9C0,0xFA20,0xFA80,0xFAE0,0xFB40,0xFBA0,0xFC00,0xFC60,0xFCC0,0xFD20,0xFD80,0xFDE0,0xFE40,0xFEA0,0xFF00,0xFF60,0xFFC0,0xFFE0,0xEFE0,0xE7E0,0xD7E0,0xCFE0,0xBFE0,0xB7E0,0xA7E0,0x9FE0,0x8FE0,0x87E0,0x77E0,0x6FE0,0x5FE0,0x57E0,0x47E0,0x3FE0,0x2FE0,0x27E0,0x17E0,0xFE0,0x7E0,0x7E1,0x7E3,0x7E4,0x7E6,0x7E7,0x7E9,0x7EA,0x7EC,0x7ED,0x7EF,0x7F0,0x7F2,0x7F3,0x7F5,0x7F6,0x7F8,0x7F9,0x7FB,0x7FC,0x7FE,0x7FF,0x79F,0x73F,0x6DF,0x67F,0x61F,0x5BF,0x55F,0x4FF,0x49F,0x43F,0x3DF,0x37F,0x31F,0x2BF,0x25F,0x1FF,0x19F,0x13F,0xDF,0x7F,0x1F,0x81F,0x101F,0x201F,0x281F,0x381F,0x401F,0x501F,0x581F,0x681F,0x701F,0x801F,0x881F,0x981F,0xA01F,0xB01F,0xB81F,0xC81F,0xD01F,0xE01F,0xE81F,0xF81F,0xF81F,0xF81D,0xF81C,0xF81A,0xF819,0xF817,0xF816,0xF814,0xF813,0xF811,0xF810,0xF80E,0xF80D,0xF80B,0xF80A,0xF808,0xF807,0xF805,0xF804,0xF802,0xF801};
uint16_t img[SCR_WD+16];
unsigned long DrawImageTest()
{
  for(int i=0;i<SCR_WD+16;i++) img[i] = tft.rgbWheel(500L*i/SCR_WD);
  unsigned long start = millis();
  for(int i=0;i<5*4;i++) 
  for(int y=0;y<SCR_HT;y++) tft.drawImage(0,y,SCR_WD,1,img+(((y>>2)+i)&0xf));
  return millis()-start;
}

unsigned long DrawImageFTest()
{
  unsigned long start = millis();
  for(int i=0;i<5*4;i++) 
  for(int y=0;y<SCR_HT;y++) tft.drawImageF(0,y,SCR_WD,1,imgF+(((y>>2)+i)&0xf));
  return millis()-start;
}
unsigned long orig[14]={ 5872, 5872, 1468292,394696,2938532,132952,121996,4068208,925276,1319512, 1278096,1930524,602080,4649200 };
unsigned long res[14];
void result(int i)
{
  Serial.print(res[i]);
  if(res[i]<1000000) Serial.print("t");
  Serial.print("ttt");
  Serial.print(100*orig[i]/res[i]);
  Serial.println("%");
}

void setup(void) 
{
  Serial.begin(9600);
  Serial.println(F("IPS 240x240 ST7789"));
  tft.begin();
  tft.fillScreen(BLACK);
  tft.setCursor(0, 0);
  tft.setTextColor(WHITE);  
  tft.setTextSize(2);
  tft.println("IPS 240x240 ST7789");
  tft.println("Library Benchmark");
  tft.println("starts in 3s ...");
  delay(3000);

  Serial.println(F("Benchmark                Time (microseconds)"));

  res[0]=FillScreenTest();
  Serial.print(F("FillScreen Mbps          "));
  Serial.println(String(res[0])+"ms  "+String(1000*20.0/res[0])+"fps  "+String(20.0*SCR_WD*SCR_HT*16/res[0]/1000.0)+" Mbpst"+100*orig[0]/res[0]+"%");

  res[1]=ClearScreenTest();
  Serial.print(F("ClearScreen Mbps         "));
  Serial.println(String(res[1])+"ms  "+String(1000*20.0/res[1])+"fps  "+String(20.0*SCR_WD*SCR_HT*16/res[1]/1000.0)+" Mbpst"+100*orig[1]/res[1]+"%");

  res[1]=DrawImageTest();
  Serial.print(F("DrawImage Mbps           "));
  Serial.println(String(res[1])+"ms  "+String(1000*20.0/res[1])+"fps  "+String(20.0*SCR_WD*SCR_HT*16/res[1]/1000.0)+" Mbpst"+100*orig[1]/res[1]+"%"); 

  res[1]=DrawImageFTest();
  Serial.print(F("DrawImageF Mbps          "));
  Serial.println(String(res[1])+"ms  "+String(1000*20.0/res[1])+"fps  "+String(20.0*SCR_WD*SCR_HT*16/res[1]/1000.0)+" Mbpst"+100*orig[1]/res[1]+"%"); 

  res[2]=testFillScreen();
  Serial.print(F("Screen fill              "));
  result(2);
  delay(500);

  res[3]=testText();
  Serial.print(F("Text                     "));
  result(3);
  delay(3000);

  res[4]=testLines(CYAN);
  Serial.print(F("Lines                    "));
  result(4);
  delay(500);

  res[5]=testFastLines(RED, BLUE);
  Serial.print(F("Horiz/Vert Lines         "));
  result(5);
  delay(500);

  res[6]=testRects(GREEN);
  Serial.print(F("Rectangles (outline)     "));
  result(6);
  delay(500);

  res[7]=testFilledRects(YELLOW, MAGENTA);
  Serial.print(F("Rectangles (filled)      "));
  result(7);
  delay(500);

  res[8]=testFilledCircles(10, MAGENTA);
  Serial.print(F("Circles (filled)         "));
  result(8);

  res[9]=testCircles(10, WHITE);
  Serial.print(F("Circles (outline)        "));
  result(9);
  delay(500);

  res[10]=testTriangles();
  Serial.print(F("Triangles (outline)      "));
  result(10);
  delay(500);

  res[11]=testFilledTriangles();
  Serial.print(F("Triangles (filled)       "));
  result(11);
  delay(500);

  res[12]=testRoundRects();
  Serial.print(F("Rounded rects (outline)  "));
  result(12);
  delay(500);

  res[13]=testFilledRoundRects();
  Serial.print(F("Rounded rects (filled)   "));
  result(13);
  delay(500);

  Serial.println(F("Done!"));
  Serial.println(F("Results:"));
  for(int i=0;i<14;i++) { Serial.print(res[i]); Serial.print(","); }
  Serial.println();

  int c1=YELLOW, c2=WHITE;
  tft.fillScreen(BLACK);
  tft.setCursor(0, 0);
  tft.setTextSize(2);
  tft.setTextColor(CYAN);
  tft.println("RESULTS:");

  tft.setTextSize(1);
  tft.println();
  tft.setTextColor(GREEN);
  tft.println(F("Benchmark               Time (us)"));
  tft.setTextColor(c1); tft.print(F("FillScreen Mbps         "));
  tft.setTextColor(c2); tft.println(String(res[0])+"ms "+String(20.0*SCR_WD*SCR_HT*16/res[0]/1000.0)+" Mbps");
   tft.setTextColor(c1); tft.print(F("DrawImageF Mbps         "));
  tft.setTextColor(c2); tft.println(String(res[1])+"ms "+String(20.0*SCR_WD*SCR_HT*16/res[1]/1000.0)+" Mbps");

  tft.setTextColor(c1); tft.print(F("Screen fill             "));
  tft.setTextColor(c2); tft.println(res[3]);
  tft.setTextColor(c1); tft.print(F("Text                    "));
  tft.setTextColor(c2); tft.println(res[4]);
  tft.setTextColor(c1); tft.print(F("Lines                   "));
  tft.setTextColor(c2); tft.println(res[5]);
  tft.setTextColor(c1); tft.print(F("Horiz/Vert Lines        "));
  tft.setTextColor(c2); tft.println(res[6]);
  tft.setTextColor(c1); tft.print(F("Rectangles (outline)    "));
  tft.setTextColor(c2); tft.println(res[8]);
  tft.setTextColor(c1); tft.print(F("Rectangles (filled)     "));
  tft.setTextColor(c2); tft.println(res[9]);
  tft.setTextColor(c1); tft.print(F("Circles (filled)        "));
  tft.setTextColor(c2); tft.println(res[10]);
  tft.setTextColor(c1); tft.print(F("Circles (outline)       "));
  tft.setTextColor(c2); tft.println(res[11]);
  tft.setTextColor(c1); tft.print(F("Triangles (outline)     "));
  tft.setTextColor(c2); tft.println(res[12]);
  tft.setTextColor(c1); tft.print(F("Triangles (filled)      "));
  tft.setTextColor(c2); tft.println(res[13]);
  tft.setTextColor(c1); tft.print(F("Rounded rects (outline) "));
  tft.setTextColor(c2); tft.println(res[14]);
  tft.setTextColor(c1); tft.print(F("Rounded rects (filled)  "));
  tft.setTextColor(c2); tft.println(res[15]);
  tft.setTextColor(RED); tft.println(F("Done!"));
}
