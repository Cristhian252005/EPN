String msg1 = "Ingresa la masa que esta sobre el plano (g):";
String msg4 = "Ingresa la masa colgada:";
String msg2 = "Ingrese el grado de inclinación del plano:";
String msg3 = "Ingrese el coeficiente de fricción plano:";

void setup() {
  Serial.begin(9600);
}

void loop() {
    Serial.println("Bienvenido al módulo de dinámica, en el cual podrás realizar algunos ejercicios. By C.C");
    delay(100);
    Serial.println("Escoge el módelo del ejercio");
    delay(100);
    Serial.println("1 Plano inclinado sin polea");
    delay(200);
    Serial.println("2 Plano inclinado con polea en movimiento");
    while (!Serial.available());
    char tipo = Serial.read();
    