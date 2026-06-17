// Definição dos pinos
const int trigPin = 9;
const int echoPin = 10;

const int ledVermelho = 4;
const int ledVerde = 5;

long duracao;
float distancia;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Envia pulso ultrassônico
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Recebe o eco
  duracao = pulseIn(echoPin, HIGH);

  // Calcula a distância (cm)
  distancia = duracao * 0.034 / 2;

  Serial.print("Distancia: ");
  Serial.println(distancia);

  // Lógica dos LEDs
  if (distancia <= 5) {
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
  } else {
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
  }

  delay(200);
}
