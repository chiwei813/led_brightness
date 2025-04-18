const int potPin = A0;    // 可變電阻接在 A0
const int ledPin = 10;    // LED 接在 pin 10

void setup() {
  pinMode(ledPin, OUTPUT);    // 設定 LED 腳位為輸出
  Serial.begin(9600);         // 啟動序列通訊，用於除錯
}

void loop() {
  // 讀取可變電阻值（0-1023）
  int potValue = analogRead(potPin);
  
  // 將可變電阻值（0-1023）映射到 LED 亮度值（0-255）
  int brightness = map(potValue, 0, 1023, 0, 255);
  
  // 設定 LED 亮度
  analogWrite(ledPin, brightness);
  
  // 輸出數值到序列監視器（用於除錯）
  Serial.print("可變電阻值: ");
  Serial.print(potValue);
  Serial.print("\t LED 亮度: ");
  Serial.println(brightness);
  

}