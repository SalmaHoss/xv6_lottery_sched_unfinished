#include   "types.h"
#include   "stat.h"
#include   "user.h"
#include   "fcntl.h"

int main (int argc,char *argv[]){

 int pid,slice;

 if(argc < 3){
  printf(2,"usage : st pid\n");
  exit();
  }

 pid = atoi(argv[1]);
 slice = atoi (argv[2]);

if(slice < 0||slice>20)
  printf(2,"Invalid num of ticks");

printf(1,"pid=%d, sl=%d\n",pid,slice);
settickets(pid,slice);
exit();
}
