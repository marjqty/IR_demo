/*========================================
             IR_demo

==========================================
Description:



Programmer:
  Yuzon, Maria Rebekah J.
  Manicang, Joshua G.

 Date:
  14 Oct 2026 
----------------------------------------*/
// GPIO pins
const byte IR = 36;

int ir_cnt = 0;
int ir_in = 0;

void setup() {
  // ADC pin
  pinMode(IR, INPUT);

  Serial.begin(9600); 

}

void loop() {
  ir_in = digitalRead(IR);

  if(ir_in == 0) {
    ir_cnt++;
  }

  Serial.printf("Objects Detected: %d\n", ir_cnt);
  delay(1000);

}