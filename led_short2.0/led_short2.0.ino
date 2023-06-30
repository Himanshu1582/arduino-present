                            int led1=7;
                            int led2=8;
                            int led3=9;
                            int led4=10;
                            
                            void setup()
                            {
                              pinMode(7,OUTPUT);
                              pinMode(8,OUTPUT);
                              pinMode(9,OUTPUT);
                              pinMode(10,OUTPUT);
                            }
                            
                            void loop()
                            {
                              for(int i=0;i<=150;i+=30)
                              {
                                digitalWrite(led1,HIGH);
                                delay(i+20);
                                digitalWrite(led1,LOW);
                                digitalWrite(led2,HIGH);
                                delay(i+20);
                                digitalWrite(led2,LOW);
                                digitalWrite(led3,HIGH);
                                delay(i+20);
                                digitalWrite(led3,LOW);
                                digitalWrite(led4,HIGH);
                                delay(i+20);
                                digitalWrite(led3,HIGH);
                                delay(i+20);
                                digitalWrite(led2,HIGH);
                                delay(i+20);
                                digitalWrite(led1,HIGH);
                                delay(i+20);
                                digitalWrite(led4,LOW);
                                delay(i+20);
                                digitalWrite(led3,LOW);
                                delay(i+20);
                                digitalWrite(led2,LOW);
                                delay(i+20);
                                digitalWrite(led1,LOW);
                              }
                              for(int j=0; j<=200;j+=5)
                              {
                                digitalWrite(led1,HIGH);
                                digitalWrite(led3,HIGH);
                                delay(50);
                                digitalWrite(led1,LOW);
                                digitalWrite(led3,LOW);
                                delay(50);
                                digitalWrite(led2,HIGH);
                                digitalWrite(led4,HIGH);
                                delay(50);
                                digitalWrite(led2,LOW);
                                digitalWrite(led4,LOW);
                                delay(50);
                              }
                              for(int k=0; k<=200;k+=5)
                              {
                                digitalWrite(led1,HIGH);
                                digitalWrite(led2,HIGH);
                                digitalWrite(led3,HIGH);
                                digitalWrite(led4,HIGH);
                                delay(50);
                                digitalWrite(led1,LOW);
                                digitalWrite(led3,LOW);
                                digitalWrite(led2,LOW);
                                digitalWrite(led4,LOW);
                                delay(50);
                              }
                              for(int l=0;l<=10;l++)
                              {
                                for(int m=0;m<=5;m++)
                                {
                                    digitalWrite(led1,HIGH);
                                    digitalWrite(led2,HIGH);
                                    delay(50);
                                    digitalWrite(led1,LOW);
                                    digitalWrite(led2,LOW);
                                    delay(50);
                                }
                                for(int n=0;n<=5;n++)
                                {
                                  digitalWrite(led3,HIGH);
                                  digitalWrite(led4,HIGH);
                                  delay(50);
                                  digitalWrite(led3,LOW);
                                  digitalWrite(led4,LOW);
                                  delay(50);
                                }
                                
                              }
                            }
