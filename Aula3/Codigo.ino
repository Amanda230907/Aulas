const int bot1 = 8;
const int bot2 = 9;
const int bot3 = 10;

const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
  
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

int var;
int var2; 
int var3;
void loop(){
       
  var=digitalRead(bot1);
  var2=digitalRead(bot2);               
  var3=digitalRead(bot3);
  
   if(var){
    digitalWrite(led1,HIGH);
}
 if(var2){
  acendeTudo();
}
  
if(var3){
  apagaTudo();
}
}

void acendeTudo(){
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
} 
void apagaTudo(){
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);

} 
