void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  pinMode(10,OUTPUT);
}
int a;
void loop() {
  // put your main code here, to run repeatedly:
a=digitalRead(7);
if(a==HIGH){
  digitalWrite(10, HIGH);
}else{
  digitalWrite(10, LOW);
}
}
