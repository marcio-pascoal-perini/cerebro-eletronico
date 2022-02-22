/****************************
   mikroC PRO Arduino 7.6.0
   Márcio Pascoal Perini
   2022-02-21
*****************************/

#define led1 RB0_bit
#define led2 RB1_bit

#define switch1 RC0_bit
#define switch2 RC1_bit
#define switch3 RC2_bit

int result1 = 0, result2 = 0, result3 = 0;

int check_correspondence(int question, int answer);

int check_correspondence(int question, int answer)
{
  int matrix[10][2] = {
      {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
      {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}
  };
  int i = 0, result = 0;
  int button_question = 0, button_answer = 0;
  if (question <= 0 || answer <= 0)
  {
    return -1;
  }
  if (0 <= question && question <= 102)
  {
    button_question = 1;
  }
  else if (102 < question && question <= 205)
  {
    button_question = 2;
  }
  else if (205 < question && question <= 307)
  {
    button_question = 3;
  }
  else if (307 < question && question <= 409)
  {
    button_question = 4;
  }
  else if (409 < question && question <= 511)
  {
    button_question = 5;
  }
  else if (511 < question && question <= 614)
  {
    button_question = 6;
  }
  else if (614 < question && question <= 716)
  {
    button_question = 7;
  }
  else if (716 < question && question <= 818)
  {
    button_question = 8;
  }
  else if (818 < question && question <= 921)
  {
    button_question = 9;
  }
  else if (921 < question && question <= 1023)
  {
    button_question = 10;
  }
  if (0 <= answer && answer <= 102)
  {
    button_answer = 11;
  }
  else if (102 < answer && answer <= 205)
  {
    button_answer = 12;
  }
  else if (205 < answer && answer <= 307)
  {
    button_answer = 13;
  }
  else if (307 < answer && answer <= 409)
  {
    button_answer = 14;
  }
  else if (409 < answer && answer <= 511)
  {
    button_answer = 15;
  }
  else if (511 < answer && answer <= 614)
  {
    button_answer = 16;
  }
  else if (614 < answer && answer <= 716)
  {
    button_answer = 17;
  }
  else if (716 < answer && answer <= 818)
  {
    button_answer = 18;
  }
  else if (818 < answer && answer <= 921)
  {
    button_answer = 19;
  }
  else if (921 < answer && answer <= 1023)
  {
    button_answer = 20;
  }
  if (switch1 == 0 && switch2 == 0 && switch3 == 0)
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
    for (i = 0; i < 10; i++)
    {
      if (matrix[i][0] == button_question && matrix[i][1] == button_answer)
      {
        result = 1;
        break;
      }
    }
  }
  if (switch1 == 0 && switch2 == 1 && switch3 == 0)
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
    for (i = 0; i < 10; i++)
    {
      if (matrix[i][0] == button_question && matrix[i][1] == button_answer)
      {
        result = 1;
        break;
      }
    }
  }
  if (switch1 == 1 && switch2 == 0 && switch3 == 0)
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
    for (i = 0; i < 10; i++)
    {
      if (matrix[i][0] == button_question && matrix[i][1] == button_answer)
      {
        result = 1;
        break;
      }
    }
  }
  if (switch1 == 1 && switch2 == 1 && switch3 == 0)
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
    for (i = 0; i < 10; i++)
    {
      if (matrix[i][0] == button_question && matrix[i][1] == button_answer)
      {
        result = 1;
        break;
      }
    }
  }
  if (switch1 == 0 && switch2 == 0 && switch3 == 1)
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
    for (i = 0; i < 10; i++)
    {
      if (matrix[i][0] == button_question && matrix[i][1] == button_answer)
      {
        result = 1;
        break;
      }
    }
  }
  if (switch1 == 0 && switch2 == 1 && switch3 == 1)
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
    for (i = 0; i < 10; i++)
    {
      if (matrix[i][0] == button_question && matrix[i][1] == button_answer)
      {
        result = 1;
        break;
      }
    }
  }
  if (switch1 == 1 && switch2 == 0 && switch3 == 1)
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
    for (i = 0; i < 10; i++)
    {
      if (matrix[i][0] == button_question && matrix[i][1] == button_answer)
      {
        result = 1;
        break;
      }
    }
  }
  if (switch1 == 1 && switch2 == 1 && switch3 == 1)
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
    for (i = 0; i < 10; i++)
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

void main()
{
  TRISA = 0xFF;
  TRISB = 0x00;
  TRISC = 0xFF;

  ADCON0.ADCS0 = 0;
  ADCON0.ADCS1 = 0;
  ADCON1.ADCS0 = 0;

  ADCON0.CHS0 = 0;
  ADCON0.CHS1 = 0;
  ADCON0.CHS2 = 0;

  ADCON0.ADON = 1;

  ADCON1.ADFM = 0;

  ADCON1.PCFG0 = 0;
  ADCON1.PCFG1 = 0;
  ADCON1.PCFG2 = 1;
  ADCON1.PCFG3 = 1;

  CMCON.CM0 = 1;
  CMCON.CM1 = 1;
  CMCON.CM2 = 1;

  ADC_Init();

  PORTB = 0x00;
  PORTC = 0x00;

  while (1)
  {
    result1 = ADC_Read(0);
    result2 = ADC_Read(1);
    delay_ms(50);
    result3 = check_correspondence(result1, result2);
    delay_ms(50);
    switch (result3)
    {
    case -1:
      led1 = 0x00;
      led2 = 0x00;
      break;
    case 0:
      led1 = 0x01;
      led2 = 0x00;
      break;
    case 1:
      led1 = 0x00;
      led2 = 0x01;
      break;
    }
  }
}

// 102  = 1   = 11
// 205  = 2   = 12
// 307  = 3   = 13
// 409  = 4   = 14
// 511  = 5   = 15
// 614  = 6   = 16
// 716  = 7   = 17
// 818  = 8   = 18
// 921  = 9   = 19
// 1023 = 10  = 20