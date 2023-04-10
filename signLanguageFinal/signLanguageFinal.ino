const int flexPin1 = A0;		// Pin connected to voltage divider output
const int flexPin2 = A1;	
const int flexPin3 = A2;	
const int flexPin4 = A3;	
const int flexPin5 = A4;	

char temp = '0';


// Change these constants according to your project's design
const float VCC = 5;			// voltage at Ardunio 5V line
const float R_DIV = 10000.0;	// resistor used to create a voltage divider
const float flatResistance = 25000.0;	// resistance when flat
const float bendResistance = 100000.0;	// resistance at 90 deg

void setup() {
	Serial.begin(9600);
	pinMode(flexPin1, INPUT);
  pinMode(flexPin2, INPUT);
  pinMode(flexPin3, INPUT);
  pinMode(flexPin4, INPUT);
  pinMode(flexPin5, INPUT);
}

void printVal(char x){
  while(x!=temp)
  {
    Serial.println(x);
    temp = x;
  }
}

void loop() {
	// Read the ADC, and calculate voltage and resistance from it
	int ADCflex1 = analogRead(flexPin1);
  int ADCflex2 = analogRead(flexPin2);
  int ADCflex3 = analogRead(flexPin3);
  int ADCflex4 = analogRead(flexPin4);
  int ADCflex5 = analogRead(flexPin5);

	float Vflex1 = ADCflex1 * VCC / 1023.0;
	float Rflex1 = R_DIV * (VCC / Vflex1 - 1.0);
  float Vflex2 = ADCflex2 * VCC / 1023.0;
	float Rflex2 = R_DIV * (VCC / Vflex2 - 1.0);
  float Vflex3 = ADCflex3 * VCC / 1023.0;
	float Rflex3 = R_DIV * (VCC / Vflex3 - 1.0);
  float Vflex4 = ADCflex4 * VCC / 1023.0;
	float Rflex4 = R_DIV * (VCC / Vflex4 - 1.0);
  float Vflex5 = ADCflex5 * VCC / 1023.0;
	float Rflex5 = R_DIV * (VCC / Vflex5 - 1.0);
	

	// Use the calculated resistance to estimate the sensor's bend angle:
	float angle1 = map(Rflex1, flatResistance, bendResistance, 0, 90.0);
  float angle2 = map(Rflex2, flatResistance, bendResistance, 0, 90.0);
  float angle3 = map(Rflex3, flatResistance, bendResistance, 0, 90.0);
  float angle4 = map(Rflex4, flatResistance, bendResistance, 0, 90.0);
  float angle5 = map(Rflex5, flatResistance, bendResistance, 0, 90.0);

	Serial.print("angle1: " + String(angle1) + " degrees");
  Serial.print("angle2: " + String(angle2) + " degrees");
  Serial.print("angle3: " + String(angle3) + " degrees");
  Serial.print("angle4: " + String(angle4) + " degrees");
  Serial.print("angle5: " + String(angle5) + " degrees");

	Serial.println();

  if ((angle1<=41&&angle1>=28)&&(angle2<=27&&angle2>=25)&&(angle3<=21&&angle3>=19)&&(angle4<=26&&angle4>=23)&&(angle5<=31&&angle5>=27)){
    printVal('A');
  }
  else if ((angle1<=28&&angle1>=25)&&(angle2<=24&&angle2>=22)&&(angle3<19&&angle3>=17)&&(angle4<=24&&angle4>=21)&&(angle5<=38&&angle5>=27)){
    printVal('B');
  }
  else if ((angle1<=28&&angle1>=25)&&(angle2<=25&&angle2>=22)&&(angle3<=20&&angle3>=17)&&(angle4<=26&&angle4>=22)&&(angle5<=31&&angle5>=27)){
    printVal('C');
  }
  else if ((angle1<=31&&angle1>=27)&&(angle2<=26&&angle2>=24)&&(angle3<=20&&angle3>=18)&&(angle4<=24&&angle4>=20)&&(angle5<=31&&angle5>=28)){
    printVal('D');
  }
  else if ((angle1<=30&&angle1>=27)&&(angle2<=26&&angle2>=23)&&(angle3<=20&&angle3>=18)&&(angle4<=27&&angle4>=23)&&(angle5<=33&&angle5>=28)){
    printVal('E');
  }
  else if ((angle1<=27&&angle1>=25)&&(angle2<=24&&angle2>=21)&&(angle3<=18&&angle3>=17)&&(angle4<=26&&angle4>=23)&&(angle5<=32&&angle5>=27)){
    printVal('F');
  }
  else if ((angle1<=30&&angle1>=27)&&(angle2<=27&&angle2>=24)&&(angle3<=20&&angle3>=18)&&(angle4<=23&&angle4>=19)&&(angle5<=34&&angle5>=26)){
    printVal('G');
  }
  else if ((angle1<=32&&angle1>=27)&&(angle2<=27&&angle2>=23)&&(angle3<=18&&angle3>=16)&&(angle4<=23&&angle4>=21)&&(angle5<=42&&angle5>=27)){
    printVal('H');
  }
  else if ((angle1<=29&&angle1>=26)&&(angle2<=27&&angle2>=23)&&(angle3<=21&&angle3>=18)&&(angle4<=26&&angle4>=23)&&(angle5<=38&&angle5>=27)){
    printVal('I');
  }
  else if ((angle1<=27&&angle1>=25)&&(angle2<=26&&angle2>=22)&&(angle3<=20&&angle3>=17)&&(angle4<=26&&angle4>=22)&&(angle5<=35&&angle5>=28)){
    printVal('J');
  }
  else if ((angle1<=30&&angle1>=25)&&(angle2<=25&&angle2>=21)&&(angle3<=18&&angle3>=17)&&(angle4<=24&&angle4>=20)&&(angle5<=36&&angle5>=25)){
    printVal('K');
  }
  else if ((angle1<=31&&angle1>=27)&&(angle2<=27&&angle2>=23)&&(angle3<=20&&angle3>=18)&&(angle4<=24&&angle4>=20)&&(angle5<=30&&angle5>=26)){
    printVal('L');
  }
  else if ((angle1<=31&&angle1>=28)&&(angle2<=25&&angle2>=22)&&(angle3<=20&&angle3>=17)&&(angle4<=25&&angle4>=21)&&(angle5<=37&&angle5>=29)){
    printVal('M');
  }
  else if ((angle1<=30&&angle1>=26)&&(angle2<=29&&angle2>=23)&&(angle3<=20&&angle3>=17)&&(angle4<=25&&angle4>=20)&&(angle5<=38&&angle5>=28)){
    printVal('N');
  }
  else if ((angle1<=28&&angle1>=25)&&(angle2<=25&&angle2>=23)&&(angle3<=19&&angle3>=17)&&(angle4<=25&&angle4>=20)&&(angle5<=34&&angle5>=25)){
    printVal('O');
  }
  else if ((angle1<=28&&angle1>=25)&&(angle2<=26&&angle2>=21)&&(angle3<=19&&angle3>=17)&&(angle4<=24&&angle4>=18)&&(angle5<=38&&angle5>=25)){
    printVal('P');
  }
  else if ((angle1<=29&&angle1>=27)&&(angle2<=25&&angle2>=23)&&(angle3<=19&&angle3>=17)&&(angle4<=22&&angle4>=19)&&(angle5<=31&&angle5>=26)){
    printVal('Q');
  }
  else if ((angle1<=30&&angle1>=26)&&(angle2<=26&&angle2>=22)&&(angle3<=19&&angle3>=17)&&(angle4<=24&&angle4>=19)&&(angle5<=33&&angle5>=25)){
    printVal('R');
  }
  else if ((angle1<=31&&angle1>=28)&&(angle2<=29&&angle2>=24)&&(angle3<=21&&angle3>=17)&&(angle4<=28&&angle4>=22)&&(angle5<=56&&angle5>=27)){
    printVal('S');
  }
  else if ((angle1<=32&&angle1>=25)&&(angle2<=26&&angle2>=22)&&(angle3<=20&&angle3>=17)&&(angle4<=26&&angle4>=19)&&(angle5<=33&&angle5>=26)){
    printVal('T');
  }
  else if ((angle1<=30&&angle1>=27)&&(angle2<=38&&angle2>=24)&&(angle3<=19&&angle3>=17)&&(angle4<=24&&angle4>=20)&&(angle5<=45&&angle5>=17)){
    printVal('U');
  }
  else if ((angle1<=30&&angle1>=26)&&(angle2<=28&&angle2>=23)&&(angle3<=18&&angle3>=16)&&(angle4<=23&&angle4>=19)&&(angle5<=33&&angle5>=26)){
    printVal('V');
  }
  else if ((angle1<=32&&angle1>=27)&&(angle2<=25&&angle2>=21)&&(angle3<=19&&angle3>=16)&&(angle4<=25&&angle4>=19)&&(angle5<=32&&angle5>=26)){
    printVal('W');
  }
  else if ((angle1<=29&&angle1>=25)&&(angle2<=27&&angle2>=22)&&(angle3<=19&&angle3>=16)&&(angle4<=23&&angle4>=21)&&(angle5<=34&&angle5>=25)){
    printVal('X');
  }
  else if ((angle1<=29&&angle1>=25)&&(angle2<=25&&angle2>=22)&&(angle3<=19&&angle3>=17)&&(angle4<=25&&angle4>=21)&&(angle5<=30&&angle5>=26)){
    printVal('Y');
  }
  else if ((angle1<=29&&angle1>=25)&&(angle2<=23&&angle2>=21)&&(angle3<=20&&angle3>=17)&&(angle4<=26&&angle4>=21)&&(angle5<=31&&angle5>=26)){
    printVal('Z');
  }
  else{
    Serial.println("not detected");
  }

  


	delay(3000);
}
