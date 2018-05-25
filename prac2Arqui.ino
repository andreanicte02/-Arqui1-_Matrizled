int columnas[] = {36, 37, 38, 39, 40, 41, 42, 43};
int filas[] = {22, 23, 24, 25, 26, 27, 28, 29};
int DipSwith1 = 32;
int DipSwith2 = 33;
int pinvel = 8;
int Disp1 = 10;
int Disp2 = 11;
int Disp3 = 12;
int valor = 0;
int valor2 = 0;
int matriz[8][8];
int velociraptor;
int matriz2[5][8];
int letra = 0;
int velocidad = 50;

int motor1[4] = {2, 3, 4, 5};
int motor2[4] = {6, 7, 8, 9};
int buzzer = 21;
int movimiento[2][99];
int anterior[2] = {0, 0};
int pote = 8, pote2 = 9;
int paso1 = 0, paso2 = 0;
int cantmov = 0;
int btnA = 12, btnB = 13;
int guardar = 0;
int reinicio [2][99];

int uno[8][8] = {
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 1, 1, 1, 0, 0, 0},
  {0, 1, 0, 1, 1, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 1, 1, 1, 1}
};
int seis[8][8] = {
  {1, 1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 1, 1, 1, 1},
  {1, 1, 0, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 1, 1, 1, 1},
  {1, 1, 0, 0, 0, 0, 1, 1},
  {1, 1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 1, 1, 1, 1}
};
int A[8][8] = {
  {0, 1, 1, 1, 1, 1, 1, 0},
  {1, 1, 1, 1, 1, 1, 1, 1},
  {1, 1, 0, 0, 0, 0, 1, 1},
  {1, 1, 0, 0, 0, 0, 1, 1},
  {1, 1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 1, 1, 1, 1},
  {1, 1, 0, 0, 0, 0, 1, 1},
  {1, 1, 1, 0, 0, 0, 1, 1}
};
int cero_izq[8][8] = {
  {1, 1, 1, 1, 0, 0, 0, 0},
  {1, 0, 0, 1, 0, 0, 0, 0},
  {1, 0, 0, 1, 0, 0, 0, 0},
  {1, 0, 0, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int uno_izq[8][8] = {
  {0, 1, 1, 0, 0, 0, 0, 0},
  {1, 1, 1, 0, 0, 0, 0, 0},
  {0, 1, 1, 0, 0, 0, 0, 0},
  {0, 1, 1, 0, 0, 0, 0, 0},
  {0, 1, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int dos_izq[8][8] = {
  {0, 1, 1, 0, 0, 0, 0, 0},
  {1, 0, 1, 0, 0, 0, 0, 0},
  {0, 1, 0, 0, 0, 0, 0, 0},
  {1, 0, 0, 0, 0, 0, 0, 0},
  {1, 1, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int cuatro_izq[8][8] = {
  {1, 0, 0, 1, 0, 0, 0, 0},
  {1, 0, 0, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int cinco_izq[8][8] = {
  {1, 1, 1, 1, 0, 0, 0, 0},
  {1, 0, 0, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int seis_izq[8][8] = {
  {1, 1, 1, 1, 0, 0, 0, 0},
  {1, 0, 0, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 0, 0, 0, 0},
  {1, 0, 0, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int siete_izq[8][8] = {
  {1, 1, 1, 1, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 1, 0, 0, 0, 0, 0},
  {0, 1, 0, 0, 0, 0, 0, 0},
  {1, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int ocho_izq[8][8] = {
  {1, 1, 1, 1, 0, 0, 0, 0},
  {1, 0, 0, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 0, 0, 0, 0},
  {1, 0, 0, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int nueve_izq[8][8] = {
  {1, 1, 1, 1, 0, 0, 0, 0},
  {1, 0, 0, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int cero_der[8][8] = {
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 1, 0, 0, 1},
  {0, 0, 0, 0, 1, 0, 0, 1},
  {0, 0, 0, 0, 1, 0, 0, 1},
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int uno_der[8][8] = {
  {0, 0, 0, 0, 0, 0, 1, 1},
  {0, 0, 0, 0, 0, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 1, 1},
  {0, 0, 0, 0, 0, 0, 1, 1},
  {0, 0, 0, 0, 0, 0, 1, 1},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int dos_der[8][8] = {
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0, 1},
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int tres_der[8][8] = {
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0, 1},
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0, 1},
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int cuatro_der[8][8] = {
  {0, 0, 0, 0, 1, 0, 0, 1},
  {0, 0, 0, 0, 1, 0, 0, 1},
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0, 1},
  {0, 0, 0, 0, 0, 0, 0, 1},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int cinco_der[8][8] = {
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0, 1},
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int seis_der[8][8] = {
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 1, 0, 0, 1},
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int siete_der[8][8] = {
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0, 1},
  {0, 0, 0, 0, 0, 0, 1, 0},
  {0, 0, 0, 0, 0, 1, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int ocho_der[8][8] = {
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 1, 0, 0, 1},
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 1, 0, 0, 1},
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int nueve_der[8][8] = {
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 1, 0, 0, 1},
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0, 1},
  {0, 0, 0, 0, 0, 0, 0, 1},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int tres_izq[8][8] = {
  {1, 1, 1, 1, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 0},
  {0, 1, 1, 1, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
int flechas_izq_izq[8][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 1, 0, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 0, 0, 0, 0},
  {0, 1, 0, 0, 0, 0, 0, 0}
};
int flechas_der_izq[8][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 1, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 0, 0, 0, 0},
  {0, 0, 1, 0, 0, 0, 0, 0}
};
int flechas_izq_der[8][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 1, 0, 0},
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 1, 0, 0}
};
int flechas_der_der[8][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 1, 0},
  {0, 0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 1, 0}
};

void setup() {
  int i;
  Serial.begin(9600);
  pinMode(DipSwith1, INPUT);
  pinMode(DipSwith2, INPUT);
  pinMode(34, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(45, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(47, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(Disp2, OUTPUT);
  pinMode(Disp1, OUTPUT);
  pinMode(Disp3, OUTPUT);
  for (i = 0; i < 8; i++) {
    pinMode(columnas[i], OUTPUT);
    pinMode(filas[i], OUTPUT);
    digitalWrite(columnas[i], HIGH);
    if (i < 4) {
      pinMode(motor1[i], OUTPUT);
      pinMode(motor2[i], OUTPUT);
    }
  }
  //digitalWrite(buzzer, LOW);
  velocidad = 100;
}

void loop() {
  int i, j, pos, desp;
  if (guardar == 1) {

    delay(1500);
    almacenar();
    //delay(200);
    if (digitalRead(btnA) == 1) {
      guardar = 0;
      voltear();
      recrear(reinicio, cantmov);
    }
    //delay(400);
  } else if (digitalRead(btnA) == 1) {
    guardar = 1;
  } else if (digitalRead(btnB) == 1) {
    pintarmatriz(cantmov);
    recrear(movimiento, cantmov);
    cantmov = 0;
  } else {
    switch (letra) {
      case 0:
        for (i = 0; i < 8; i++)
          for (j = 0; j < 8; j++)
            matriz[i][j] = uno[i][j];
        letra++;
        break;
      case 1:
        for (i = 0; i < 8; i++)
          for (j = 0; j < 8; j++)
            matriz[i][j] = seis[i][j];
        letra++;
        break;
      case 2:
        for (i = 0; i < 8; i++)
          for (j = 0; j < 8; j++)
            matriz[i][j] = A[i][j];
        letra = 0;
        break;
    }
    for (pos = 0; pos <= 16; pos++)
      for (desp = 0; desp <= velocidad; desp++)
        for (i = 0; i < 8; i++)
          for (j = 0; j < 8; j++)
            if (matriz[j][i] == 1) {
              digitalWrite(filas[j], HIGH);
              digitalWrite(columnas[i], LOW);
              //delay(100);
              digitalWrite(filas[j], LOW);
              digitalWrite(columnas[i], HIGH);
            }
  }
}

void almacenar() {

  valor = analogRead(pote);
  valor2 = analogRead(pote2);
  Serial.println(valor2);
  Serial.println(999999);
  Serial.println(valor);
  if (cantmov < 99) {
    movimiento[0][cantmov] = valor;
    movimiento[1][cantmov] = valor2;
    digitalWrite(buzzer, HIGH);
   // Serial.println(valor);
    delay(500);
    digitalWrite(buzzer, LOW);
    cantmov ++;
  }
 
  
}

void voltear() {
  int i = 0;
  for (i = 0; i < cantmov; i++) {
    reinicio[0][i] = movimiento[0][cantmov - 1 - i];
    reinicio[1][i] = movimiento[1][cantmov - 1 - i];
  }
}

void recrear(int arreglo[2][99], int limite) {
  ///AUTOMATICO
  int i = 0;
  int mov = 0;
  int aux = 0;
  for (i = 0; i < limite; i++) {
    pintardisplay(i + 1);
    mov = arreglo[0][i];
    Serial.println(mov);
    if (anterior[0] > mov - 28) {
      aux = mov;
      pintarderecha1();
      //delay(50);
      while (anterior[0] > mov - 28) {

        
        arriba(motor1, paso1);
        
        mov = mov - 28;
      }
      //delay(50);
      
      anterior[0] = aux;
    }
    else if (anterior[0] < mov + 28) {
      aux = mov;
      pintarizq1();
      //delay(50);
      while (anterior[0] < mov + 28) {
        abajo(motor1, paso1);
        mov = mov + 28;
      }
      //delay(50);
      anterior[0] = aux;
    }
    mov = arreglo[1][i];
    if (anterior[1] > mov - 67) {
      aux = mov;
      pintarderecha2();
      //elay(50);
      while (anterior[1] > mov - 67) {
        arriba(motor2, paso2);
        mov = mov - 67;
      }
      //delay(50);
      anterior[1] = aux;
    }
    else if (anterior[1] < mov + 67) {
      aux = mov;
      pintarizq2();
      //delay(50);
      while (anterior[1] < mov + 67) {
        abajo(motor2, paso2);
        mov = mov + 67;
        //Serial.println()
      }
      //delay(50);
      anterior[1] = aux;
    }
  }
}

void arriba(int motor[], int &paso) {
  switch (paso) {
    case 1:
      
      digitalWrite (motor[0], LOW);
      digitalWrite (motor[1], LOW);
      digitalWrite (motor[2], LOW);
      digitalWrite (motor[3], HIGH);
      //delay(50);
      paso++;
      break;
    case 2:
      digitalWrite (motor[0], LOW);
      digitalWrite (motor[1], LOW);
      digitalWrite (motor[2], HIGH);
      digitalWrite (motor[3], LOW);
      //delay(50);
      paso++;
      
      break;
    case 3:
      digitalWrite (motor[0], LOW);
      digitalWrite (motor[1], HIGH);
      digitalWrite (motor[2], LOW);
      digitalWrite (motor[3], LOW);
      paso++;
      break;
    case 4:
      digitalWrite (motor[0], HIGH);
      digitalWrite (motor[1], LOW);
      digitalWrite (motor[2], LOW);
      digitalWrite (motor[3], LOW);
      //delay(50);
      paso = 1;
      break;
    default:
      digitalWrite (motor[0], HIGH);
      digitalWrite (motor[1], LOW);
      digitalWrite (motor[2], LOW);
      digitalWrite (motor[3], LOW);
      //delay(50);
      paso++;
      break;
  }
}

void abajo(int motor[], int &paso) {
  switch (paso) {
    case 1:
      digitalWrite (motor[0], LOW);
      digitalWrite (motor[1], LOW);
      digitalWrite (motor[2], LOW);
      digitalWrite (motor[3], HIGH);
      paso = 4;
      break;
    case 2:
      digitalWrite (motor[0], LOW);
      digitalWrite (motor[1], LOW);
      digitalWrite (motor[2], HIGH);
      digitalWrite (motor[3], LOW);
      paso--;
      break;
    case 3:
      digitalWrite (motor[0], LOW);
      digitalWrite (motor[1], HIGH);
      digitalWrite (motor[2], LOW);
      digitalWrite (motor[3], LOW);
      paso--;
      break;
    case 4:
      digitalWrite (motor[0], HIGH);
      digitalWrite (motor[1], LOW);
      digitalWrite (motor[2], LOW);
      digitalWrite (motor[3], LOW);
      paso--;
      break;
    default:
      digitalWrite (motor[0], LOW);
      digitalWrite (motor[1], LOW);
      digitalWrite (motor[2], LOW);
      digitalWrite (motor[3], HIGH);
      paso = 4;
      break;
  }
}

void pintarmatriz(int numero) { //pintarmatriz

  int digito2;
  int digito1;
  int fil, col;

  if (numero < 10) {

    digito2 = numero;
    llenar2(digito2);

    for (fil = 0; fil < 5 ; fil++)
      for (col = 0; col < 4; col++)
        matriz[fil][col] = cero_izq[fil][col];





  }

  else if (numero < 20) {
    digito2 = numero - 10;
    llenar2(digito2);

    for (fil = 0; fil < 5 ; fil++)
      for (col = 0; col < 4; col++)
        matriz[fil][col] = uno_izq[fil][col];


  }

  else if (numero < 30) {

    digito2 = numero - 20;
    llenar2(digito2);

    for (fil = 0; fil < 5 ; fil++)
      for (col = 0; col < 4; col++)
        matriz[fil][col] = dos_izq[fil][col];

  }
  else if (numero < 40) {

    digito2 = numero - 30;
    llenar2(digito2);

    for (fil = 0; fil < 5 ; fil++)
      for (col = 0; col < 4; col++)
        matriz[fil][col] = tres_izq[fil][col];
  }

  else if (numero < 50)

  {
    digito2 = numero - 40;
    llenar2(digito2);

    for (fil = 0; fil < 5 ; fil++)
      for (col = 0; col < 4; col++)
        matriz[fil][col] = cuatro_izq[fil][col];

  }

  else if (numero < 60)
  {
    digito2 = numero - 50;
    llenar2(digito2);

    for (fil = 0; fil < 5 ; fil++)
      for (col = 0; col < 4; col++)
        matriz[fil][col] = cinco_izq[fil][col];


  }

  else if (numero < 70)

  {
    digito2 = numero - 60;
    llenar2(digito2);


    for (fil = 0; fil < 5 ; fil++)
      for (col = 0; col < 4; col++)
        matriz[fil][col] = seis_izq[fil][col];



  }


  else if (numero < 80)

  {

    digito2 = numero - 70;
    llenar2(digito2);

    for (fil = 0; fil < 5 ; fil++)
      for (col = 0; col < 4; col++)
        matriz[fil][col] = siete_izq[fil][col];


  }


  else if (numero < 90)

  {

    digito2 = numero - 80;
    llenar2(digito2);

    for (fil = 0; fil < 5 ; fil++)
      for (col = 0; col < 4; col++)
        matriz[fil][col] = ocho_izq[fil][col];


  }


  else if (numero < 100)

  {

    digito2 = numero - 90;
    llenar2(digito2);


    for (fil = 0; fil < 5 ; fil++)
      for (col = 0; col < 4; col++)
        matriz[fil][col] = nueve_izq[fil][col];




  }


  izquierda_est();


}


void llenar2(int numero1) {

  int i, j;
  switch (numero1) {
    case 0:

      for (i = 0; i < 5; i++)
        for (j = 4; j < 8; j++)
          matriz[i][j] = cero_der[i][j];
      letra++;
      break;

    case 1:
      for (i = 0; i < 5; i++)
        for (j = 4; j < 8; j++)
          matriz[i][j] = uno_der[i][j];
      letra++;
      break;
    case 2:
      for (i = 0; i < 5; i++)
        for (j = 4; j < 8; j++)
          matriz[i][j] = dos_der[i][j];
      letra++;
      break;
    case 3:
      for (i = 0; i < 5; i++)
        for (j = 4; j < 8; j++)
          matriz[i][j] = tres_der[i][j];
      letra++;
      break;
    case 4:
      for (i = 0; i < 5; i++)
        for (j = 4; j < 8; j++)
          matriz[i][j] = cuatro_der[i][j];
      letra++;
      break;
    case 5:
      for (i = 0; i < 5; i++)
        for (j = 4; j < 8; j++)
          matriz[i][j] = cinco_der[i][j];
      letra++;
      break;
    case 6:
      for (i = 0; i < 5; i++)
        for (j = 4; j < 8; j++)
          matriz[i][j] = siete_der[i][j];
      letra++;
      break;
    case 7:
      for (i = 0; i < 5; i++)
        for (j = 4; j < 8; j++)
          matriz[i][j] = seis_der[i][j];
      letra++;
      break;
    case 8:
      for (i = 0; i < 5; i++)
        for (j = 4; j < 8; j++)
          matriz[i][j] = ocho_der[i][j];
      letra++;
      break;
    case 9:
      for (i = 0; i < 5; i++)
        for (j = 4; j < 8; j++)
          matriz[i][j] = nueve_der[i][j];
      letra++;
      break;

  }

}

//del lado derecho
void pintarderecha1() { //lado derecho que va a la derecha
  int i, j;

  for (i = 5; i < 8; i++)
    for (j = 4; j < 8; j++)
      matriz[i][j] = flechas_der_der[i][j];


  izquierda_est();


}


void pintarizq1() {
  int i, j;

  for (i = 5; i < 8; i++)
    for (j = 4; j < 8; j++)
      matriz[i][j] = flechas_izq_der[i][j];


  izquierda_est();



}
//de lado izq
void pintarderecha2() { //lado derecho que va a la derecha
  int i, j;

  for (i = 5; i < 8; i++)
    for (j = 0; j < 4; j++)
      matriz[i][j] = flechas_der_izq[i][j];

  izquierda_est();

}


void pintarizq2() {
  int i, j;

  for (i = 5; i < 8; i++)
    for (j = 0; j < 4; j++)
      matriz[i][j] = flechas_izq_izq[i][j];

  izquierda_est();

}


void izquierda_est() {
  int pos, desp, i, j;


  for (pos = 0; pos <= 16; pos++)
    for (desp = 0; desp <= velocidad; desp++)
      for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
          if (matriz[j][i] == 1) {
            digitalWrite(filas[j], HIGH);
            digitalWrite(columnas[i], LOW);
            //delay(1);
            digitalWrite(filas[j], LOW);
            digitalWrite(columnas[i], HIGH);
          }
}

//---------display


void pintardisplay(int numero) {
  int digito2;

  if (numero < 10) {

    digito2 = numero;//izq del 34 al 37
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);

    llenard(digito2);

  }

  else if (numero < 20) {
    digito2 = numero - 10;
    digitalWrite(32, HIGH);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);


    llenard(digito2);


  }

  else if (numero < 30) {

    digito2 = numero - 20;
    digitalWrite(32, LOW);
    digitalWrite(33, HIGH);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);

    llenard(digito2);

  }
  else if (numero < 40) {

    digito2 = numero - 30;
    digitalWrite(32, HIGH);
    digitalWrite(33, HIGH);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);
    llenard(digito2);

  }

  else if (numero < 50)

  {
    digito2 = numero - 40;
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, HIGH);
    digitalWrite(35, LOW);

    llenard(digito2);

  }

  else if (numero < 60)
  {
    digito2 = numero - 50;
    digitalWrite(32, HIGH);
    digitalWrite(33, LOW);
    digitalWrite(34, HIGH);
    digitalWrite(35, LOW);

    llenard(digito2);

  }

  else if (numero < 70)

  {
    digito2 = numero - 60;
    digitalWrite(32, LOW);
    digitalWrite(33, HIGH);
    digitalWrite(34, HIGH);
    digitalWrite(35, LOW);

    llenard(digito2);


  }


  else if (numero < 80)

  {

    digito2 = numero - 70;
    digitalWrite(32, HIGH);
    digitalWrite(33, HIGH);
    digitalWrite(34, HIGH);
    digitalWrite(35, LOW);
    llenard(digito2);


  }


  else if (numero < 90)

  {

    digito2 = numero - 80;
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, HIGH);


    llenard(digito2);

  }


  else if (numero < 100)

  {

    digito2 = numero - 90;
    digitalWrite(32, HIGH);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, HIGH);
    llenard(digito2);

  }






}

void llenard(int numero1) {

  int i, j;
  switch (numero1) {
    case 0:
      digitalWrite(44, LOW);
      digitalWrite(45, LOW);
      digitalWrite(46, LOW);
      digitalWrite(47, LOW);



      break;

    case 1:
      digitalWrite(44, HIGH);
      digitalWrite(45, LOW);
      digitalWrite(46, LOW);
      digitalWrite(47, LOW);


      break;
    case 2:
      digitalWrite(44, LOW);
      digitalWrite(45, HIGH);
      digitalWrite(46, LOW);
      digitalWrite(47, LOW);



      break;
    case 3:
      digitalWrite(44, HIGH);
      digitalWrite(45, HIGH);
      digitalWrite(46, LOW);
      digitalWrite(47, LOW);


      break;
    case 4:
      digitalWrite(44, LOW);
      digitalWrite(45, LOW);
      digitalWrite(46, HIGH);
      digitalWrite(47, LOW);


      break;
    case 5:
      digitalWrite(44, HIGH);
      digitalWrite(45, LOW);
      digitalWrite(46, HIGH);
      digitalWrite(47, LOW);


      break;
    case 6:
      digitalWrite(44, LOW);
      digitalWrite(45, HIGH);
      digitalWrite(46, HIGH);
      digitalWrite(47, LOW);


      break;
    case 7:

      digitalWrite(44, HIGH);
      digitalWrite(45, HIGH);
      digitalWrite(46, HIGH);
      digitalWrite(47, LOW);


      break;
    case 8:
      digitalWrite(44, LOW);
      digitalWrite(45, LOW);
      digitalWrite(46, LOW);
      digitalWrite(47, HIGH);

      break;
    case 9:
      digitalWrite(44, HIGH);
      digitalWrite(45, LOW);
      digitalWrite(46, LOW);
      digitalWrite(47, HIGH);


      break;

  }

}



