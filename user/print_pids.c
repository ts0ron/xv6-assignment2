#include "kernel/types.h"
#include "kernel/fcntl.h"
#include "kernel/stat.h"
#include "kernel/fs.h"
#include "user/user.h"

extern int print_pids(void);

int
main(int argc, char **argv)
{
  print_pids();

  exit(0);
}
