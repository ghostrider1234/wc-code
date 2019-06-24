

     void ls_working()
{
           DIR *d;

    struct dirent *dir;

    d = opendir(".");

    if (d)

    {
          int tlines=0, twords=0, tchars=0;

        while ((dir = readdir(d)) != NULL)

        {

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


                                                 }
                    



                                                tchars++;

                                                characters++;
                                        }

                                        fclose(f);
                                }


             printf("%d %d %d %s\n",lines,words,characters,dir->d_name);

        }

        printf("%d %d %d %d\n",tlines,twords,tchars,"total");

        closedir(d);

    }
}













































