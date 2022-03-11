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
  bool led3 = 0;
  /*Para generar el numero 1 se utiliza el siquinte if en donde se prenden solamente el primer led*/
  if(led1 == 0 && led2 == 0 && led3 ==0){
    digitalWrite(11,HIGH);
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    delay(1000);
    /*Preparamos las variables booleanas para el siguiente numero*/
    led1 = 1;
    led2 = 0;
    led3 = 0;
  }
    /*Para generar el numero 2 se utiliza el siquinte if en donde se prenden solamente el segundo led*/
    if(led1 == 1 && led2 == 0 && led3 == 0){
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    delay(1000);
    /*Preparamos las variables booleanas para el siguiente numero*/
    led1 = 0;
    led2 = 1;
    led3 = 0;
  }
    /*Para generar el numero 3 se utiliza el siquinte if en donde se prenden solamente el primer led y  el segundo*/
      if(led1 == 0 && led2 == 1 && led3 == 0){
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    delay(1000);
    /*Preparamos las variables booleanas para el siguiente numero*/
    led1 = 1;
    led2 = 1;
    led3 = 0;
  }
/*      if(led1 == 1 && led2 == 1 && led3 == 0){
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    delay(1000);
    led1 = 0;
    led2 = 0;
    led3 = 1;
  }*/
    /*Para generar el numero 4 se utiliza el siquinte if en donde se prenden solamente el tercer led*/
        if(led1 == 1 && led2 == 1 && led3 == 0){
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    delay(1000);
    /*Preparamos las variables booleanas para el siguiente numero*/
    led1 = 1;
    led2 = 0;
    led3 = 1;
  }
    /*Para generar el numero 5 se utiliza el siquinte if en donde se prenden solamente el tercer y el priemer led*/
        if(led1 == 1 && led2 == 0 && led3 == 1){
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    delay(1000);
    /*Preparamos las variables booleanas para el siguiente numero*/
    led1 = 0;
    led2 = 1;
    led3 = 1;
  }
      /*Para generar el numero 6 se utiliza el siquinte if en donde se prenden solamente el tercer y el segundo led led*/
        if(led1 == 0 && led2 == 1 && led3 == 1){
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(1000);
    /*Preparamos las variables booleanas para el siguiente numero*/
    led1 = 1;
    led2 = 1;
    led3 = 1;
  }
  /*Para generar el numero 7 se utiliza el siquinte if en donde se prenden todos los leds led*/
        if(led1 == 1 && led2 == 1 && led3 == 1){
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(1000);
    /*Preparamos las variables booleanas para el siguiente numero*/
    led1 = 0;
    led2 = 0;
    led3 = 0;
  }
  /* apagamos todo los leds*/
        if(led1 == 0 && led2 == 0 && led3 == 0){
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(1000);
    /*Preparamos las variables booleanas para el siguiente numero*/
    led1 = 1;
    led2 = 0;
    led3 = 0;
  }
}
