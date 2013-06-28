int i=0;
int d=60;




void setup() {               

  // initialize the digital pins for output.
  // Pin 13 has an LED connected on most Arduino boards


  int i=2;

  while(i<=13)
  {
    pinMode(i, OUTPUT);
    i++;
  }
}

void loop() {
  // ------------------------------ loop around, clockwise, full column stack  

  digitalWrite(4, HIGH);
  delay(d);
  digitalWrite(4, LOW);

  digitalWrite(3, HIGH);
  delay(d);
  digitalWrite(3, LOW);

  digitalWrite(2, HIGH);
  delay(d);
  digitalWrite(2, LOW);

  digitalWrite(5, HIGH);
  delay(d);
  digitalWrite(5, LOW);

  digitalWrite(8, HIGH);
  delay(d);
  digitalWrite(8, LOW);

  digitalWrite(7, HIGH);
  delay(d);
  digitalWrite(7, LOW);

  digitalWrite(10, HIGH);
  delay(d);
  digitalWrite(10, LOW);

  digitalWrite(9, HIGH);
  delay(d);
  digitalWrite(9, LOW);

  digitalWrite(6, HIGH);
  delay(d);

  digitalWrite(13, HIGH);
  delay(d);
  digitalWrite(12, HIGH);
  delay(d);
  digitalWrite(11, HIGH);
  delay(d);
  //digitalWrite(6, LOW);
  //delay(d);
  fullreset();


  // ------------------------------ loop around, clockwise, full column stack  

  digitalWrite(4, HIGH);
  delay(d);
  digitalWrite(4, LOW);

  digitalWrite(3, HIGH);
  delay(d);
  digitalWrite(3, LOW);

  digitalWrite(2, HIGH);
  delay(d);
  digitalWrite(2, LOW);

  digitalWrite(5, HIGH);
  delay(d);
  digitalWrite(5, LOW);

  digitalWrite(8, HIGH);
  delay(d);
  digitalWrite(8, LOW);

  digitalWrite(7, HIGH);
  delay(d);
  digitalWrite(7, LOW);

  digitalWrite(10, HIGH);
  delay(d);
  digitalWrite(10, LOW);

  digitalWrite(9, HIGH);
  delay(d);
  digitalWrite(9, LOW);

  digitalWrite(6, HIGH);
  delay(d);

  digitalWrite(13, HIGH);
  delay(d);
  digitalWrite(12, HIGH);
  delay(d);
  digitalWrite(11, HIGH);
  delay(d);
  //digitalWrite(6, LOW);
  //delay(d);
  fullreset();


  // ------------------------------ loop around, clockwise, full column stack  

  digitalWrite(4, HIGH);
  delay(d);
  digitalWrite(4, LOW);

  digitalWrite(3, HIGH);
  delay(d);
  digitalWrite(3, LOW);

  digitalWrite(2, HIGH);
  delay(d);
  digitalWrite(2, LOW);

  digitalWrite(5, HIGH);
  delay(d);
  digitalWrite(5, LOW);

  digitalWrite(8, HIGH);
  delay(d);
  digitalWrite(8, LOW);

  digitalWrite(7, HIGH);
  delay(d);
  digitalWrite(7, LOW);

  digitalWrite(10, HIGH);
  delay(d);
  digitalWrite(10, LOW);

  digitalWrite(9, HIGH);
  delay(d);
  digitalWrite(9, LOW);

  digitalWrite(6, HIGH);
  delay(d);

  digitalWrite(13, HIGH);
  delay(d);
  digitalWrite(12, HIGH);
  delay(d);
  digitalWrite(11, HIGH);
  delay(d);
  //digitalWrite(6, LOW);
  //delay(d);
  fullreset();  



  // ------------------------------ loop around, clockwise, full column stack  

  digitalWrite(4, HIGH);
  delay(d);
  digitalWrite(4, LOW);

  digitalWrite(3, HIGH);
  delay(d);
  digitalWrite(3, LOW);

  digitalWrite(2, HIGH);
  delay(d);
  digitalWrite(2, LOW);

  digitalWrite(5, HIGH);
  delay(d);
  digitalWrite(5, LOW);

  digitalWrite(8, HIGH);
  delay(d);
  digitalWrite(8, LOW);

  digitalWrite(7, HIGH);
  delay(d);
  digitalWrite(7, LOW);

  digitalWrite(10, HIGH);
  delay(d);
  digitalWrite(10, LOW);

  digitalWrite(9, HIGH);
  delay(d);
  digitalWrite(9, LOW);

  digitalWrite(6, HIGH);
  delay(d);

  digitalWrite(13, HIGH);
  delay(d);
  digitalWrite(12, HIGH);
  delay(d);
  digitalWrite(11, HIGH);
  delay(d);
  //digitalWrite(6, LOW);
  //delay(d);
  fullreset();


  //----------------------------------------- kill floor by floor starting from the top
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);

  digitalWrite(2, HIGH);    // E1 on
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);

  digitalWrite(5, HIGH);    // E2 on
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);

  digitalWrite(8, HIGH);    // E3 on
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);

  //digitalWrite(13, HIGH);   // S1 on

  delay(d);
  fullreset();

  //digitalWrite(11, HIGH);

  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  delay(600);

  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(11, HIGH);
  delay(300);

  //------------------------------------------- reset needed before we can go to another loop iteration
  fullreset();


  //--------------------------------------------level A solid
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  delay(300);

  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  delay(300);
  //-------------------------------------------- reset
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);


  //--------------------------------------------level B solid
  digitalWrite(11, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(300);

  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  delay(300);

  //----------------------------------------------reset  
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);


  //--------------------------------------------level C solid 
  digitalWrite(11, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(300);

  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  delay(300);

  fullreset();

  //---------------------------------------------- BSDboot-spinner
  // select centermost pixel and blink it a few times

  blinkcenter(120);

  fullreset();

  // fire up centermost column first, then all other involved columns
  digitalWrite(6, HIGH);  
  delay(120);

  digitalWrite(9, HIGH);
  delay(120);
  digitalWrite(5, HIGH);
  delay(120);
  digitalWrite(7, HIGH);
  delay(120);
  digitalWrite(3, HIGH);
  delay(120);
  digitalWrite(10, HIGH);
  delay(120);
  digitalWrite(2, HIGH);
  delay(120);
  digitalWrite(4, HIGH);
  delay(120);
  digitalWrite(8, HIGH);
  delay(180);

  fullreset();

  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(8, HIGH);

  delay(120);  

  fullreset();

  // ------------------------------ bsd bootloader spin
  d = 180;

  bsdspin(120);
  fullreset(); 

  bsdspin(100);
  fullreset(); 

  bsdspin(80);
  fullreset(); 

  bsdspin(60);
  fullreset(); 

  bsdspin(50);
  fullreset(); 

  bsdspin(40);
  fullreset(); 

  bsdspin(30);
  fullreset(); 

  bsdspin(20);
  fullreset(); 

  bsdspin(15);
  fullreset(); 

  bsdspin(10);
  fullreset();

  bsdspin(10);
  fullreset();  

  bsdspin(5);
  fullreset();  

  bsdspin(2);
  fullreset();  

  bsdspin(2);
  fullreset();  

  bsdspin(5);
  fullreset();  

  bsdspin(10);
  fullreset();  

  bsdspin(10);
  fullreset();  

  bsdspin(15);
  fullreset();  

  bsdspin(20);
  fullreset(); 

  bsdspin(25);
  fullreset();  

  bsdspin(40);
  fullreset();  

  bsdspin(60);
  fullreset();  

  bsdspin(80);
  fullreset();  

  bsdspin(100);
  fullreset();  

  bsdspin(110);
  fullreset();  

  blinkcenter(80);
  blinkcenter(90); 
  blinkcenter(100);
  blinkcenter(120);
  blinkcenter(140);
  blinkcenter(160);
  blinkcenter(180);
  blinkcenter(200);

  // column, off floor1, off floor2, delay
  //blinksingle(int col, int excl_floor1, int excl_floor2, int del)

  blinksingle(6, 13, 12, 180);
  blinksingle(6, 13, 11, 180);
  blinksingle(6, 12, 11, 180);
  delay(60);

  blinksingle(6, 13, 12, 180);
  blinksingle(6, 13, 11, 180);
  blinksingle(6, 12, 11, 180);
  delay(60);

  blinksingle(6, 13, 12, 180);
  blinksingle(6, 13, 11, 180);
  blinksingle(6, 12, 11, 180);
  delay(160);



  // bottom to top single column rolls 
  blinksingle(7, 13, 12, 180);
  blinksingle(7, 13, 11, 180);
  blinksingle(7, 12, 11, 180);
  delay(10);

  blinksingle(9, 13, 12, 180);
  blinksingle(9, 13, 11, 180);
  blinksingle(9, 12, 11, 180);
  delay(10);

  blinksingle(5, 13, 12, 180);
  blinksingle(5, 13, 11, 180);
  blinksingle(5, 12, 11, 180);
  delay(10);


  blinksingle(3, 13, 12, 180);
  blinksingle(3, 13, 11, 180);
  blinksingle(3, 12, 11, 180);
  delay(10);

  blinksingle(10, 13, 12, 180);
  blinksingle(10, 13, 11, 180);
  blinksingle(10, 12, 11, 180);
  delay(10);

  blinksingle(2, 13, 12, 180);
  blinksingle(2, 13, 11, 180);
  blinksingle(2, 12, 11, 180);
  delay(10);


  blinksingle(4, 13, 12, 180);
  blinksingle(4, 13, 11, 180);
  blinksingle(4, 12, 11, 180);
  delay(10);


  blinksingle(8, 12, 13, 180);
  blinksingle(8, 11, 12, 180);
  blinksingle(8, 11, 13, 180);
  delay(10);



  blinksingle(6, 12, 13, 180);
  blinksingle(6, 11, 12, 180);
  blinksingle(6, 11, 13, 180);
  delay(50);

}

void fullreset() {
  //----------------------------------------------reset  
  for (i=2; i<=13;i++) {
    digitalWrite(i,LOW);
  }
} 

int bsdspin(int del) {

  digitalWrite(6, HIGH);  

  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  delay(del);
  digitalWrite(9, LOW);
  digitalWrite(5, LOW);

  digitalWrite(4, HIGH);
  digitalWrite(8, HIGH);
  delay(del);
  digitalWrite(4, LOW);
  digitalWrite(8, LOW);

  digitalWrite(7, HIGH);
  digitalWrite(3, HIGH);
  delay(del);
  digitalWrite(7, LOW);
  digitalWrite(3, LOW);

  digitalWrite(10, HIGH);
  digitalWrite(2, HIGH);
  delay(del);
  digitalWrite(10, LOW);
  digitalWrite(2, LOW);

}  

void blinkcenter(int del) {

  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);

  digitalWrite(6, HIGH);  
  delay(del);
  digitalWrite(6, LOW);  
  delay(del);
  digitalWrite(6, HIGH);  
  delay(del);
  digitalWrite(6, LOW);  
  delay(del);
  digitalWrite(6, HIGH);  
  delay(del);
  digitalWrite(6, LOW);  
  delay(del);

}

void blinksingle(int col, int excl_floor1, int excl_floor2, int del) {

  fullreset();

  digitalWrite(excl_floor1, HIGH);
  digitalWrite(excl_floor2, HIGH);
  digitalWrite(col, HIGH);
  delay(del);


}

