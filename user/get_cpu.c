#include "kernel/types.h"
#include "kernel/fcntl.h"
#include "kernel/stat.h"
#include "kernel/fs.h"
#include "user/user.h"

int
main(int argc, char **argv)
{
  get_cpu(0);

  exit(0);
}
