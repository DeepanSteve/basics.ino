int readpin=A3;
int readVal;
float V2=0;
int waittime=1000;
void setup() {
  // put your setup code here, to run once:
pinmode(readpin,INPUT);
serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogread(readpin);
V2=(5./1023.)*readVal;
serial.println(V2);
delay(waittime);
}
