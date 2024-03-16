#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv)
{
  if(argc > 1){
    printf(2, "usage: ps \n");
    exit();
  }

  int pid = fork();  // fork here
  if (pid < 0) {
    printf(2, "fork failed\n");
    exit();
  } else if (pid == 0) {
    // child
    sleep(10); // keep in sleep
    exit();
  } else {
    // parent
    ps();
    wait(); // wait for the child process
  }
  
  exit();
}
