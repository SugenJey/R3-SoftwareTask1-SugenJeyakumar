// C++ code
//
int poten=A0;
int val=0;
int valMap=0;
int d1=2,d2=3,d3=4,d4=5,d5=7,d6=8,d7=9,d8=10;
int tens=0,ones=0;
void setup()
{
  //just for testing
  Serial.begin(9600);
  //data of poteniometer
 pinMode(poten,INPUT);
	//data pins for chip
  pinMode(d1,OUTPUT);
  pinMode(d2,OUTPUT);
  pinMode(d3,OUTPUT);
  pinMode(d4,OUTPUT);
  pinMode(d5,OUTPUT);
  pinMode(d6,OUTPUT);
  pinMode(d7,OUTPUT);
  pinMode(d8,OUTPUT);
  
  
}

void loop()
{
  //read potentiometer
  val=analogRead(poten);
  //map potentiometer values from 1-99
  valMap=map(val,0,1023,0,99);
  //tens digit
  tens=valMap/10;
  //ones digit
  ones=valMap%10;	
  digitalWrite(d1,bitRead(tens,0));
  digitalWrite(d2,bitRead(tens,1));
  digitalWrite(d3,bitRead(tens,2));
  digitalWrite(d4,bitRead(tens,3));
  digitalWrite(d5,bitRead(ones,0));
  digitalWrite(d6,bitRead(ones,1));
  digitalWrite(d7,bitRead(ones,2));
  digitalWrite(d8,bitRead(ones,3));
  
  //just so it doesnt break
  delay(300);
  
}