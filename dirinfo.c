#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(){
  DIR *stream = opendir("test");
  struct dirent *dewan = (struct dirent*)malloc(sizeof(struct dirent));
  while(dewan = readdir(stream)){
    printf("%s\n",dewan->d_name);
    }
  close(stream);
  free(dewan);
  return 0;
}
