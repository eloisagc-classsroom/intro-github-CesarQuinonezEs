void setup()
{
  /*inicializamos los pins que utilizaremos*/
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  /*Declaramos variables boleanas para los casos de casa led*/
 bool led1 = 0;
  bool led2 = 0;
  /*Para generar el numero 1 se utiliza el siquinte if en donde se prenden solamente el primer led*/
  if(led1 == 0 && led2 == 0){
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    delay(1000);
    /*Preparamos las variables booleanas para el siguiente numero*/
    led1 = 1;
    led2 = 0;
  }
    /*Para generar el numero 2 se utiliza el siquinte if en donde se prenden solamente el segundo led*/
    if(led1 == 1 && led2 == 0){
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    delay(1000);
    /*Preparamos las variables booleanas para el siguiente numero*/
    led1 = 0;
    led2 = 1;
  }
    /*Para generar el numero 3 se utiliza el siquinte if en donde se prenden solamente el primer led y  el segundo*/
      if(led1 == 0 && led2 == 1){
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    delay(1000);
    /*Preparamos las variables booleanas para el siguiente numero*/
    led1 = 1;
    led2 = 1;
  }
        if(led1 == 1 && led2 == 1){
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    delay(1000);
    /*Preparamos las variables booleanas para el siguiente numero*/
    led1 = 1;
    led2 = 0;
  }
}
