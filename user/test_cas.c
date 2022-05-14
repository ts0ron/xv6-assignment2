#include "kernel/types.h"
#include "kernel/fcntl.h"
#include "kernel/stat.h"
#include "kernel/fs.h"
#include "user/user.h"

extern int print_pids(void);

int
main(int argc, char **argv)
{
  fork();
  fork();
  fork();
  int pid = fork();

  if (pid == 0)
    print_pids();

  int waiting_time = 2;
  wait(&waiting_time);


  exit(0);
}
