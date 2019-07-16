#include <stdio.h>
#include <stdlib.h>

void main()
{
    char fname[30]="vinay",lname[30]="gowda";
    printf("the length of the frame is:%d\n",strlen(fname));
    printf("lower case name is:%s\n",strlwr(fname));
    printf("upper case name is:%s\n",strupr(fname));
    printf("the reverse of the string is:%s\n",strrev(fname));
    strrev(fname);
    printf("full name is:%s\n",strcat(fname,lname));
    printf("the length of the frame is:%d\n",strlen(fname));
    printf("\n%d\n",strcmp("dbc" , "abc"));

}
