// By Felipe/Tiodevs

  // Cria as variaveis dos pinos (mais explicação sobre os pinos abaixo :D)
  const int azul = 9;
  const int verde = 10;
  const int vermelho = 11;
  
void setup()
{
  // Você tem que colocar nos determinados pinos:
  // pino 11 no vermelho
  // pino 10 no verde
  // pino 9 no verde
  // A junção das 3 cores formão o RGB
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}
void loop()
{
  // Vermelho
  digitalWrite(azul, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, HIGH);
  delay(1000);

  // Azul
  digitalWrite(azul, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, LOW);
  delay(1000);

  // Verde
  digitalWrite(azul, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);
  delay(1000);

  // Amarelo
  analogWrite(azul, 0);
  analogWrite(verde, 50);
  analogWrite(vermelho, 255);
  delay(1000);

  // Roxo
  analogWrite(azul, 207);
  analogWrite(verde, 0);
  analogWrite(vermelho, 255);
  delay(1000);

  // Branco
  digitalWrite(azul, HIGH);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, HIGH);
  delay(1000);
}
