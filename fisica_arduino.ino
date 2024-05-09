
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
}