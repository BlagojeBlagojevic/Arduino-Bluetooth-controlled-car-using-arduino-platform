char t;
 
void setup() {
pinMode(13,OUTPUT);   //LIJVI NAPRIJED 
pinMode(12,OUTPUT);   //LIJVI NAZAD
pinMode(11,OUTPUT);   //DESNI NAPRIJED 
pinMode(10,OUTPUT);   //DESNI NAZAD
pinMode(9,OUTPUT);   //LED
Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == 'F'){            //NAPRIJED
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
}
 
else if(t == 'B'){      //NAZAD
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
}
 
else if(t == 'L'){      //DESNO
  digitalWrite(11,HIGH);
}

else if(t == 'R'){      //LIJEVO
  digitalWrite(13,HIGH);
}

else if(t == 'W'){    //lED oN/off
  digitalWrite(9,HIGH);
}
else if(t == 'w'){
  digitalWrite(9,LOW);
}
 
else if(t == 'S'){      //stop
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
delay(100);
}
