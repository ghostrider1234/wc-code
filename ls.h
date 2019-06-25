

     void ls_working()
{
           DIR *d;

    struct dirent *dir;

    d = opendir(".");

    if (d)

    {
          int tlines=0, twords=0, tchars=0, count=0;

             while ((dir = readdir(d)) != NULL)

       {

              int co=0,i;

                char s[500];
                 strcpy(s,dir->d_name);


                 for(i=0;s[i]!='\0';i++)
                 {
                    if(( (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')))
                      {
                        co++;
                         break;
                     }
                 }

                    if(co==1)
              {
                       
                    
                count++;
 
                int lines=0, words=0, characters=0;

                 char c;

               FILE *f;

                  f=fopen(dir->d_name,"r");

                                              if(f==NULL)
                                {
                                        printf("\n %s No such file or directory");
                                }

                                else
                                {
                                        while ((c=getc(f))!=EOF)
                                        {


                                                  if(c=='\b' || c=='\n' || c=='\t')
                                                {
                                                        words++;
                                                        twords++;

                                                }


                                                if( c=='\n' || c=='\0')
                                                {
                                                        lines++;
                                                            tlines++;

                                                 }
                    



                                                tchars++;

                                                characters++;
                                        }

                                        fclose(f);
                                }


             printf("%10d %10d %10d %s\n",lines,words,characters,dir->d_name);
          }        
}


        printf("%10d %10d %10d %s\n",tlines,twords,tchars,"total");

        closedir(d);

    }
}













































