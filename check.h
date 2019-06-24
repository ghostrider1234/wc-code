     void check_char(int *fw,int *fc, int *fl, int *fb, int *fm, char str[])
 {

                        if(strcmp(str,"-w")==0 || strcmp(str,"--words")==0)
                                *fw=1;

                        else if(strcmp(str,"-m")==0 || strcmp(str,"--chars")==0)
                                *fc=1;

                        else if(strcmp(str,"-l")==0 || strcmp(str,"--lines")==0)
                                *fl=1;

                        else if(strcmp(str,"-c")==0 || strcmp(str,"--bytes")==0)
                                *fb=1;

                        else if(strcmp(str,"-L")==0 || strcmp(str,"--max-line-length")==0)
                                *fm=1;

                        else
                      {
                        char s[100];

                               strcpy(s,str);

                                    if(s[0]=='-')
                               {
                                      int i;
 
                                      for(i=1;s[i]!='\0';i++)
                                   {
                                          if(s[i]=='w')
                                               *fw=1;

                                         else if(s[i]=='m')
                                               *fc=1;

                                         else if(s[i]=='l')
                                               *fl=1;

                                         else if(s[i]=='c')
                                               *fb=1;

                                         else if(s[i]=='L')
                                               *fm=1;
                                   }
                               }
                       }
 
 }







































