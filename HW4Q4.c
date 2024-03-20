#include "types.h"
#include "stat.h"
#include "user.h"

#define MAX_LOOP 10

void child_process_main(){
  fork();  // fork here CHILD * 2
  fork();  // fork here CHILD * 2
  fork();  // fork here CHILD * 2
  sleep(800); // keep in sleep
  return;
}

int
main(int argc, char **argv)
{
  int pid = fork();  // fork here
  if (pid < 0) {printf(2, "fork failed\n");exit();} 
  else if (pid == 0) {
    // child
    child_process_main();
    wait();

  } else {
    // parent
    for(int i = 0; i < MAX_LOOP; i++){
      sleep(100); // keep in sleep
      ps();
    }
    wait(); // wait for the child process
  }
  exit();
}
