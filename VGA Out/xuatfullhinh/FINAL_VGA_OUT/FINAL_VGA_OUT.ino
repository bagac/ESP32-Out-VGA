#include "fabgl.h"
#include "fabutils.h"
#include "font0-9.h"
#include "font0-9small.h"
#include "fontA-Z.h"
#include "chuky.h"
#define COLOR_GREEN  RGB888(0x00, 0xff, 0x00)
#define COLOR_YELLOW RGB888(0xff, 0xff, 0x00)
#define COLOR_PURPLE RGB888(162, 0, 124)
#define COLOR_WHITE    RGB888(255, 255, 255)
fabgl::VGAController DisplayController;
fabgl::Canvas        canvas(&DisplayController);
const uint8_t enemy[] = {
  0x0f, 0x00, 0x7f, 0xe0, 0xff, 0xf0, 0xe6, 0x70, 0xff,
  0xf0, 0x39, 0xc0, 0x66, 0x60, 0x30, 0xc0,

};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  DisplayController.begin();
  DisplayController.setResolution(VGA_512x192_60Hz  , 640, 480);
  canvas.setBrushColor(COLOR_WHITE);
  canvas.clear();
  canvas.setGlyphOptions(GlyphOptions().FillBackground(true));
  canvas.setPixel(0,0,Color::Red);
  canvas.setPixel(500,0,Color::Red);
  canvas.setPixel(0,190,Color::Red);
  canvas.setPixel(500,190,Color::Red);
  canvas.setBrushColor (COLOR_PURPLE); 
  canvas.fillRectangle (0, 20, 300, 70); 

  PosPrint('C', '0', '0', '9', '6');


}
String chuoi = "";
int state = 0;
void loop() {
  //Nếu có tín hiệu vào từ Serial
  if (Serial.available()>0){
    state = 1;
    //Đọc tín hiệu đó vào buffer
    chuoi = Serial.readString();
    //Xuất ngược ra Serial
    Serial.print(chuoi);

  }
if((chuoi.charAt(0) == '$') && (chuoi.charAt(6) == '#') && (state == 1))
  {
  PosPrint(chuoi.charAt(1), chuoi.charAt(2), chuoi.charAt(3), chuoi.charAt(4), chuoi.charAt(5));
  state = 0;
  }
  
}
void PosPrint(char Key, char Num1, char Num2, char Num3, char Num4)
{
    canvas.setBrushColor(COLOR_WHITE);
    canvas.clear();
    canvas.setGlyphOptions(GlyphOptions().FillBackground(true));
    canvas.setPixel(0,0,Color::Red);
    canvas.setPixel(500,0,Color::Red);
    canvas.setPixel(0,190,Color::Red);
    canvas.setPixel(500,190,Color::Red);
    canvas.setBrushColor (COLOR_PURPLE); 
    canvas.fillRectangle (0, 20, 300, 70); 
    
    canvas.drawBitmap( 10, 15, &ChuQuay );
    canvas.drawBitmap( 200, 15, &So1s );
    canvas.drawBitmap( 240, 15, &So2s );
  switch(Key)
  {
    case 'A':
    {
      canvas.drawBitmap( 100, 50, &chuA ); 
      break;
    }
        case 'B':
    {
      canvas.drawBitmap( 100, 50, &chuB ); 
      break;
    }
        case 'C':
    {
      canvas.drawBitmap( 100, 50, &chuC ); 
      break;
    }
        case 'D':
    {
      canvas.drawBitmap( 100, 50, &chuD ); 
      break;
    }
    
  }
  switch(Num1)
  {
    case '0':
    {
      canvas.drawBitmap( 170, 50, &So0 );
      break;
    }
        case '1':
    {
      canvas.drawBitmap( 170, 50, &So1 );
      break;
    }
        case '2':
    {
      canvas.drawBitmap( 170, 50, &So2 );
      break;
    }
        case '3':
    {
      canvas.drawBitmap( 170, 50, &So3 );
      break;
    }
        case '4':
    {
      canvas.drawBitmap( 170, 50, &So4 );
      break;
    }
        case '5':
    {
      canvas.drawBitmap( 170, 50, &So5 );
      break;
    }
        case '6':
    {
      canvas.drawBitmap( 170, 50, &So6 );
      break;
    }
        case '7':
    {
      canvas.drawBitmap( 170, 50, &So7 );
      break;
    }
        case '8':
    {
      canvas.drawBitmap( 170, 50, &So8 );
      break;
    }
        case '9':
    {
      canvas.drawBitmap( 170, 50, &So9 );
      break;
    }
  }
 switch(Num2)
  {
    case '0':
    {
      canvas.drawBitmap( 240, 50, &So0 );
      break;
    }
        case '1':
    {
      canvas.drawBitmap( 240, 50, &So1 );
      break;
    }
        case '2':
    {
      canvas.drawBitmap( 240, 50, &So2 );
      break;
    }
        case '3':
    {
      canvas.drawBitmap( 240, 50, &So3 );
      break;
    }
        case '4':
    {
      canvas.drawBitmap( 240, 50, &So4 );
      break;
    }
        case '5':
    {
      canvas.drawBitmap( 240, 50, &So5 );
      break;
    }
        case '6':
    {
      canvas.drawBitmap( 240, 50, &So6 );
      break;
    }
        case '7':
    {
      canvas.drawBitmap( 240, 50, &So7 );
      break;
    }
        case '8':
    {
      canvas.drawBitmap( 240, 50, &So8 );
      break;
    }
        case '9':
    {
      canvas.drawBitmap( 240, 50, &So9 );
      break;
    }
  }
  switch(Num3)
  {
    case '0':
    {
      canvas.drawBitmap( 310, 50, &So0 );
      break;
    }
        case '1':
    {
      canvas.drawBitmap( 310, 50, &So1 );
      break;
    }
        case '2':
    {
      canvas.drawBitmap( 310, 50, &So2 );
      break;
    }
        case '3':
    {
      canvas.drawBitmap( 310, 50, &So3 );
      break;
    }
        case '4':
    {
      canvas.drawBitmap( 310, 50, &So4 );
      break;
    }
        case '5':
    {
      canvas.drawBitmap( 310, 50, &So5 );
      break;
    }
        case '6':
    {
      canvas.drawBitmap( 310, 50, &So6 );
      break;
    }
        case '7':
    {
      canvas.drawBitmap( 310, 50, &So7 );
      break;
    }
        case '8':
    {
      canvas.drawBitmap( 310, 50, &So8 );
      break;
    }
        case '9':
    {
      canvas.drawBitmap( 310, 50, &So9 );
      break;
    }
  }
 switch(Num4)
  {
    case '0':
    {
      canvas.drawBitmap( 380, 50, &So0 );
      break;
    }
        case '1':
    {
      canvas.drawBitmap( 380, 50, &So1 );
      break;
    }
        case '2':
    {
      canvas.drawBitmap( 380, 50, &So2 );
      break;
    }
        case '3':
    {
      canvas.drawBitmap( 380, 50, &So3 );
      break;
    }
        case '4':
    {
      canvas.drawBitmap( 380, 50, &So4 );
      break;
    }
        case '5':
    {
      canvas.drawBitmap( 380, 50, &So5 );
      break;
    }
        case '6':
    {
      canvas.drawBitmap( 380, 50, &So6 );
      break;
    }
        case '7':
    {
      canvas.drawBitmap( 380, 50, &So7 );
      break;
    }
        case '8':
    {
      canvas.drawBitmap( 380, 50, &So8 );
      break;
    }
        case '9':
    {
      canvas.drawBitmap( 380, 50, &So9 );
      break;
    }
  }
}
