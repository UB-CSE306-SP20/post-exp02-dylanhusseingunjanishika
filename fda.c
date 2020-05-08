#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fda.h"

int count (char * filename){
  char buffer[1024] ;
  char *record,*line;
  int i=0,j=0;
  int arr[10][200];
  int counter=0;

  FILE *fstream = fopen("2018Recalls.xml","r");
  if(fstream == NULL) {
    printf("\n file opening failed ");
    return -1 ;
  }
  while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL) {
    char *token = strtok(buffer,"<Brand>");

    while( token != NULL ) {
      counter++;
      printf( " %s\n",token);
      token = strtok(NULL,",");
    }

  }
  return counter;
}


