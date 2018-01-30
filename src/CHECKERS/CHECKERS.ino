
byte[][] field = new byte[8][8];

void setup() 
{
  Serial.begin(9600);
  CREATE_FIELD();                 //Генерируем клетчатое поле для игры
  SHOW_FIELD();                   //Выводим поле в последовательный порт
}

void loop() 
{
  
}

void CREATE_FIELD()
{
  for(int i = 0; i < 8; i++)
  {
    for(int j = 0; j < 8; j++)
    {
      if((j+i)%2 == 0)
      {
        field[i][j] = 1;
      }
    }
  }
}

void SET_FIGURES()
{
  loop();
}

void SHOW_FIELD()
{
  for(int i = 0; i < 8; i++)
  {
    for(int j = 0; j < 8; j++)
    {
      Serial.print(String(field[i][j]) + "\t");
    }
    Serial.println();
  }
}

