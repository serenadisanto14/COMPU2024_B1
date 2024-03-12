#include <stdio.h>

//////////////////////////////////////
// This program computes....
// The inputs it uses are ....
// The outputs it produces are ....
// remember to use comments
// remember to give meaningful names to variables

///////////////////////////////////////

int main()
{
   //initialize variables
    int i,j,k;
    double x,y,z,w;

    //initialize Files
    FILE *f1;
    f1=fopen("myoutputfile.txt","w");

    //read input
    x=1.0;
    y=5.0;
    
    //compute
    z=x+1.4;

    //ghusdfhu
    //write output
    fprintf(f1,"%.lf",z);
    fclose(f1);
    //observation on the file .gitignore
}