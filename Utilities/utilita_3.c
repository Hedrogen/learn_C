#include <stdio.h>
#include <stdib.h>
#include <string.h>

int main ()
{
    char line[80];
    FILE *in    = fopen("base_0.txt",r);
    FILE *file1 = fopen("ufoss.txt", w );
    FILE *file2 = fopen("disps.txt", w );
    FILE *file3 = fopen("other.txt", w );
    while (fscanf(in,"%79[^\n]\n",line)==1)
    {
        if(strstr(line,"UFO"))
          fprintf(file1,"%s\n",line);
        else if (strstr(line,"Lost"))
          fprintf(file2,"%s\n",line);
        else
           fprintf(file3,"%s\n",line);
    }

    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}
