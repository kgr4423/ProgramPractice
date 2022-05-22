#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *fp;

  fp=fopen("hoge.txt","w");
  fputs("hogehoge\n",fp);
  fclose(fp);

  return 0;
}
