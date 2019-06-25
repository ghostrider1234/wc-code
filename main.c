/**
* Author: Divyesh Srivastava
* Org: Ekagga Technology and Services Pvt. Ltd.
* Institute: National Institute of Technology, Meghalaya
**/

#include<stdio.h>
#include<string.h>
#include<dirent.h>
#include "ls.h"
#include "file_count.h"
#include "check.h"

   int main( int argc , char **argv)
{
	if(argc==1)
	{
		printf("\n Invalid Command");
		return 0;
	}

           if(argc==3 && strcmp(argv[1],"wc")==0 && strcmp(argv[2],"*")==0)
         {
             ls_working();
             return 0;
         }

	int tlines = 0, tchars = 0, tbytes = 0, twords = 0, count = 0,tmax;

         
                int i, fl=0, fw=0, fc=0, fb=0, fm=0;


	  if (strcmp(argv[1], "wc") == 0)
	{
               int i;

                   for(i=2;i<argc;i++)
                {


                      check_char( &fw, &fc, &fl, &fb, &fm, argv[i]);
		 } 
	}


		for(i=1;i<argc;i++)

		{
			char s[200];

			strcpy(s,argv[i]);

			int check=strlen(s);

			if(s[check-1]=='t' && s[check-2]=='x' && s[check-3]=='t' && s[check-4]=='.' && check>4)
			{
				count++;


				   char file_name[100];

                                        strcpy(file_name,argv[i]);

                                            int words=0,characters=0,lines=0,bytes=0,maxlen=0, len=0;



                                        file_count_work(&lines,&words, &characters, &bytes, &len, &maxlen, &tlines, &twords, &tchars, &tbytes, &tmax, file_name);

				if(fl!=0 || fw!=0 || fc!=0 || fb!=0 || fm!=0)
				{
					if(fl==1)
						printf("%d ",lines);

					if(fw==1)
						printf("%d ",words);

					if(fc==1)
						printf("%d ",characters);

					if(fb==1)
						printf("%d ",bytes);

					if(fm==1)
						printf("%d ",maxlen);

					printf("%s\n",argv[i]);
				}

				else
					printf("\n%d %d %d %s",lines,words,characters,argv[i]);

			}
		}

	

	if(count>1 && fm==0 && fl==0 && fc==0 && fw==0 && fb==0)
	{
		printf("%d %d %d %s",tlines,twords,tchars,"total");
	}
        
         else
        {
                if(count>1)
          {
             if(fl==1)
            {
                 printf("%d ",tlines);
            }

             if(fw==1)
                printf("%d ",twords);

              if(fc==1)
                  printf("%d ",tchars);

               if(fb==1)
                  printf("%d ",tbytes);

                 if(fm==1)
                    printf("%d ",tmax);

                     printf("total");
           }
        }
}        















































