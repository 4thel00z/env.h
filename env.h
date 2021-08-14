#ifndef __ENV_H__
#define __ENV_H__
#include <stdlib.h>

char *env_get_or(char *name, char *default_val);

char *env_get_or(char *name, char *default_val) {
  char *result = getenv(name);
  if (!result)
    return default_val;
  return result;
}

#endif
