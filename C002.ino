/****************************
   Arduino 1.8.19
   Márcio Pascoal Perini
   2022-02-21
*****************************/

#define led1 13
#define led2 12

#define analog1 A0
#define analog2 A1

#define digital1 9
#define digital2 10
#define digital3 11

int a1 = 0, a2 = 0, result = 0;
byte d1 = LOW, d2 = LOW, d3 = LOW;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  pinMode(analog1, INPUT);
  pinMode(analog2, INPUT);

  pinMode(digital1, INPUT);
  pinMode(digital2, INPUT);
  pinMode(digital3, INPUT);
}

void loop() {
  a1 = analogRead(analog1);
  a2 = analogRead(analog2);
  d1 = digitalRead(digital1);
  d2 = digitalRead(digital2);
  d3 = digitalRead(digital3);
  delay(50);
  result = check_correspondence(a1, a2, d1, d2, d3);
  delay(50);
  switch (result)
  {
    case -1:
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      break;
    case 0:
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      break;
    case 1:
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      break;
  }
}

int check_correspondence(int question, int answer, byte switch1, byte switch2, byte switch3) {
  int matrix[10][2], result = 0, button_question = 0, button_answer = 0;
  if (question <= 0 || answer <= 0)
  {
    return -1;
  }
  if (0 <= question && question <= 102) {
    button_question = 1;
  } else if (102 < question && question <= 205) {
    button_question = 2;
  } else if (205 < question && question <= 307) {
    button_question = 3;
  } else if (307 < question && question <= 409) {
    button_question = 4;
  } else if (409 < question && question <= 511) {
    button_question = 5;
  } else if (511 < question && question <= 614) {
    button_question = 6;
  } else if (614 < question && question <= 716) {
    button_question = 7;
  } else if (716 < question && question <= 818) {
    button_question = 8;
  } else if (818 < question && question <= 921) {
    button_question = 9;
  } else if (921 < question && question <= 1023) {
    button_question = 10;
  }
  if (0 <= answer && answer <= 102) {
    button_answer = 11;
  } else if (102 < answer && answer <= 205) {
    button_answer = 12;
  } else if (205 < answer && answer <= 307) {
    button_answer = 13;
  } else if (307 < answer && answer <= 409) {
    button_answer = 14;
  } else if (409 < answer && answer <= 511) {
    button_answer = 15;
  } else if (511 < answer && answer <= 614) {
    button_answer = 16;
  } else if (614 < answer && answer <= 716) {
    button_answer = 17;
  } else if (716 < answer && answer <= 818) {
    button_answer = 18;
  } else if (818 < answer && answer <= 921) {
    button_answer = 19;
  } else if (921 < answer && answer <= 1023) {
    button_answer = 20;
  }
  if (switch1 == LOW && switch2 == LOW && switch3 == LOW) {
    matrix[0][0] = 1;
    matrix[0][1] = 19;
    matrix[1][0] = 2;
    matrix[1][1] = 18;
    matrix[2][0] = 3;
    matrix[2][1] = 16;
    matrix[3][0] = 4;
    matrix[3][1] = 13;
    matrix[4][0] = 5;
    matrix[4][1] = 11;
    matrix[5][0] = 6;
    matrix[5][1] = 20;
    matrix[6][0] = 7;
    matrix[6][1] = 14;
    matrix[7][0] = 8;
    matrix[7][1] = 15;
    matrix[8][0] = 9;
    matrix[8][1] = 12;
    matrix[9][0] = 10;
    matrix[9][1] = 17;
    for (int i = 0; i < 10; i++)
    {
      if (matrix[i][0] == button_question && matrix[i][1] == button_answer)
      {
        result = 1;
        break;
      }
    }
  }
  if (switch1 == LOW && switch2 == HIGH && switch3 == LOW)
  {
    matrix[0][0] = 1;
    matrix[0][1] = 15;
    matrix[1][0] = 2;
    matrix[1][1] = 12;
    matrix[2][0] = 3;
    matrix[2][1] = 20;
    matrix[3][0] = 4;
    matrix[3][1] = 19;
    matrix[4][0] = 5;
    matrix[4][1] = 16;
    matrix[5][0] = 6;
    matrix[5][1] = 11;
    matrix[6][0] = 7;
    matrix[6][1] = 13;
    matrix[7][0] = 8;
    matrix[7][1] = 17;
    matrix[8][0] = 9;
    matrix[8][1] = 14;
    matrix[9][0] = 10;
    matrix[9][1] = 18;
    for (int i = 0; i < 10; i++)
    {
      if (matrix[i][0] == button_question && matrix[i][1] == button_answer)
      {
        result = 1;
        break;
      }
    }
  }
  if (switch1 == HIGH && switch2 == LOW && switch3 == LOW)
  {
    matrix[0][0] = 1;
    matrix[0][1] = 17;
    matrix[1][0] = 2;
    matrix[1][1] = 12;
    matrix[2][0] = 3;
    matrix[2][1] = 15;
    matrix[3][0] = 4;
    matrix[3][1] = 14;
    matrix[4][0] = 5;
    matrix[4][1] = 20;
    matrix[5][0] = 6;
    matrix[5][1] = 11;
    matrix[6][0] = 7;
    matrix[6][1] = 13;
    matrix[7][0] = 8;
    matrix[7][1] = 16;
    matrix[8][0] = 9;
    matrix[8][1] = 18;
    matrix[9][0] = 10;
    matrix[9][1] = 19;
    for (int i = 0; i < 10; i++)
    {
      if (matrix[i][0] == button_question && matrix[i][1] == button_answer)
      {
        result = 1;
        break;
      }
    }
  }
  if (switch1 == HIGH && switch2 == HIGH && switch3 == LOW)
  {
    matrix[0][0] = 1;
    matrix[0][1] = 19;
    matrix[1][0] = 2;
    matrix[1][1] = 18;
    matrix[2][0] = 3;
    matrix[2][1] = 16;
    matrix[3][0] = 4;
    matrix[3][1] = 13;
    matrix[4][0] = 5;
    matrix[4][1] = 11;
    matrix[5][0] = 6;
    matrix[5][1] = 20;
    matrix[6][0] = 7;
    matrix[6][1] = 14;
    matrix[7][0] = 8;
    matrix[7][1] = 15;
    matrix[8][0] = 9;
    matrix[8][1] = 12;
    matrix[9][0] = 10;
    matrix[9][1] = 17;
    for (int i = 0; i < 10; i++)
    {
      if (matrix[i][0] == button_question && matrix[i][1] == button_answer)
      {
        result = 1;
        break;
      }
    }
  }
  if (switch1 == LOW && switch2 == LOW && switch3 == HIGH)
  {
    matrix[0][0] = 1;
    matrix[0][1] = 12;
    matrix[1][0] = 2;
    matrix[1][1] = 11;
    matrix[2][0] = 3;
    matrix[2][1] = 20;
    matrix[3][0] = 4;
    matrix[3][1] = 17;
    matrix[4][0] = 5;
    matrix[4][1] = 14;
    matrix[5][0] = 6;
    matrix[5][1] = 16;
    matrix[6][0] = 7;
    matrix[6][1] = 15;
    matrix[7][0] = 8;
    matrix[7][1] = 18;
    matrix[8][0] = 9;
    matrix[8][1] = 13;
    matrix[9][0] = 10;
    matrix[9][1] = 19;
    for (int i = 0; i < 10; i++)
    {
      if (matrix[i][0] == button_question && matrix[i][1] == button_answer)
      {
        result = 1;
        break;
      }
    }
  }
  if (switch1 == LOW && switch2 == HIGH && switch3 == HIGH)
  {
    matrix[0][0] = 1;
    matrix[0][1] = 19;
    matrix[1][0] = 2;
    matrix[1][1] = 13;
    matrix[2][0] = 3;
    matrix[2][1] = 16;
    matrix[3][0] = 4;
    matrix[3][1] = 12;
    matrix[4][0] = 5;
    matrix[4][1] = 18;
    matrix[5][0] = 6;
    matrix[5][1] = 15;
    matrix[6][0] = 7;
    matrix[6][1] = 14;
    matrix[7][0] = 8;
    matrix[7][1] = 11;
    matrix[8][0] = 9;
    matrix[8][1] = 20;
    matrix[9][0] = 10;
    matrix[9][1] = 17;
    for (int i = 0; i < 10; i++)
    {
      if (matrix[i][0] == button_question && matrix[i][1] == button_answer)
      {
        result = 1;
        break;
      }
    }
  }
  if (switch1 == HIGH && switch2 == LOW && switch3 == HIGH)
  {
    matrix[0][0] = 1;
    matrix[0][1] = 20;
    matrix[1][0] = 2;
    matrix[1][1] = 19;
    matrix[2][0] = 3;
    matrix[2][1] = 11;
    matrix[3][0] = 4;
    matrix[3][1] = 15;
    matrix[4][0] = 5;
    matrix[4][1] = 13;
    matrix[5][0] = 6;
    matrix[5][1] = 14;
    matrix[6][0] = 7;
    matrix[6][1] = 12;
    matrix[7][0] = 8;
    matrix[7][1] = 17;
    matrix[8][0] = 9;
    matrix[8][1] = 16;
    matrix[9][0] = 10;
    matrix[9][1] = 18;
    for (int i = 0; i < 10; i++)
    {
      if (matrix[i][0] == button_question && matrix[i][1] == button_answer)
      {
        result = 1;
        break;
      }
    }
  }
  if (switch1 == HIGH && switch2 == HIGH && switch3 == HIGH)
  {
    matrix[0][0] = 1;
    matrix[0][1] = 15;
    matrix[1][0] = 2;
    matrix[1][1] = 11;
    matrix[2][0] = 3;
    matrix[2][1] = 17;
    matrix[3][0] = 4;
    matrix[3][1] = 14;
    matrix[4][0] = 5;
    matrix[4][1] = 13;
    matrix[5][0] = 6;
    matrix[5][1] = 12;
    matrix[6][0] = 7;
    matrix[6][1] = 16;
    matrix[7][0] = 8;
    matrix[7][1] = 20;
    matrix[8][0] = 9;
    matrix[8][1] = 19;
    matrix[9][0] = 10;
    matrix[9][1] = 18;
    for (int i = 0; i < 10; i++)
    {
      if (matrix[i][0] == button_question && matrix[i][1] == button_answer)
      {
        result = 1;
        break;
      }
    }
  }
  return result;
}

// 102  = 1   = 11
// 204  = 2   = 12
// 306  = 3   = 13
// 408  = 4   = 14
// 511  = 5   = 15
// 613  = 6   = 16
// 715  = 7   = 17
// 818  = 8   = 18
// 920  = 9   = 19
// 1022 = 10  = 20
