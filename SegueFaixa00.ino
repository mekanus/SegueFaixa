/* MEKANUS ROBÓTICA EDUCACIONAL
 *  Atualizado em 25/03/2020
 *  
 * ROBÔ SEGUIDOR DE LINHA 
 * 
 * Sketch utilizado com os seguintes componentes:
 * 
 * PONTE H 9110S - P0206
 * Sensor Segue Faixa Linha Obstáculo 4 Vias Canais - P0185
 * 
 */

void setup() {
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(16,OUTPUT);
pinMode(17,OUTPUT);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(16,LOW);
digitalWrite(17,LOW);
//================
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);

}

void loop() {

/* analogRead indica quantos canais/sensores estão sendo utilizados para detecção da linha

*/
if ((analogRead(A0) > 100)&&(analogRead(A0) > analogRead(A1))){
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);

//============== Teste - trecho utilizado para acender um led que exibe visualmente no carrinho qual sensor esta captando a linha
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(16,LOW);
digitalWrite(17,HIGH);
//==============

delay(10);
}
if ((analogRead(A1) > 100)&&(analogRead(A1) > analogRead(A0))){
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);

//================== Teste - trecho utilizado para acender um led que exibe visualmente no carrinho qual sensor está captando a linha. Pode ser comentado se não for usado.
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(16,LOW);
digitalWrite(17,LOW);
//=================
delay(10);

}
if ((analogRead(A1) < 100)&&(analogRead(A0) < 100)){
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);

//================= Teste - trecho utilizado para acender um led que exibe visualmente no carrinho qual sensor está captando a linha. Pode ser comentado se não for usado.
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(16,LOW);
digitalWrite(17,LOW);
//================
delay(10);
}

//=============

//TODO - criar versao para 5v

Serial.print(analogRead(0));
Serial.print(" - ");
Serial.println(analogRead(1));
delay(10);
}
