#include <stdio.h>
#include <stdlib.h>
#include "fda.h"
//#include "fda.c"

int main(int argc, char* argv[]) {
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
    char *token = strtok(buffer,",");

    while( token != NULL ) {
      counter++;
      printf( " %s\n",token);
      token = strtok(NULL,",");
    }

  }
  printf(*argv[2]);
  if (*argv[2]=='-count')
    {
      printf("%d /n", counter);

    }
  if(*argv[2]=='-print') {
      //print the record
      	
  }
  if(*argv[2]=='help') {
	printf("help\n");
	printf("count\n");
	printf("quit\n");
	printf("print\n)";
  }
  if(*argv[2]=='quit') {
        printf("quiting");
	return 0;
  }
  return 0;
}
                    
