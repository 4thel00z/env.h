# env.h

## Motivation

Utilities to nicely interact with the environment variables.

## Usage

```
#include <env.h>
#include <stdio.h>

int main(){
  printf("Found this val for $HOME: %s\n", env_get_or("HOME", "Kurdistan")); 
  printf("Found this val for $PLAYSTATION: %s\n", env_get_or("PLAYSTATION", "ze truth"));
}
```
## License

This project is licensed under the GPL-3 license.
