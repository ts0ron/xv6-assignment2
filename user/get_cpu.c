#include "kernel/types.h"
#include "kernel/fcntl.h"
#include "kernel/stat.h"
#include "kernel/fs.h"
#include "user/user.h"

int
main(int argc, char **argv)
{
// TODO: add the argv to the get_cpu(argv)
  printf("argc is : %d\n", argc);
  get_cpu(0);

  exit(0);
}
