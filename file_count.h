
          void file_count_work(int *lines, int *words, int *characters, int *bytes, int *len, int *maxlen, int *tlines, int *twords, int *tchars, int *tbytes, int *tmax, char file_name[])


                     {
                              int i;
                        
                                  FILE *f;

                                  f=fopen(file_name,"r");

                                   char c;

                                     if(f==NULL)
                                {
                                        printf("\n %s No such file or directory",file_name);
                                }

                                else
                                {
                                        while ((c=getc(f))!=EOF)
                                        {
                                                *len=*len+1;

                                                if(c==' ' || c=='.' || c=='\0' || c=='\n' || c=='\t')
                                                {
                                                        *words=*words+1;
                                                          
                                                        *twords=*twords+1;

                                                        if(*len>*maxlen)
                                                                {
                                                                   *maxlen=*len;
                                                                   *tmax=*len;
                                                                }

                                                        *len=0;
                                                }


                                                if( c=='\n' || c=='\0')
                                                {
                                                        *lines=*lines+1;
                                                        *tlines=*tlines+1;
                                                }

                                                if( c!='\n' || c!='.' || c!='\n' || c!='\t' || c!='\0')
                                                {
                                                        *bytes=*bytes+1;
                                                        *tbytes=*tbytes+1;
                                                }

                                                 *tchars=*tchars+1;

                                                *characters=*characters+1;
                                        }

                                        fclose(f);
                                }
                             }























