#include <M5Stack.h>

void setup(){
  //M5Coreの初期化
  M5.begin();
  //電源供給開始
  //バッテリーを使用する場合は、バッテリーの充電電圧と電流を設定し、この関数を呼び出す
  M5.Power.begin();
  //LCDに文字を表示する
  M5.Lcd.print("Hello World");
}
  void loop() {
}
