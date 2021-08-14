#include <env.h>
#include <stdio.h>

int main(){

  printf("Found this val for $HOME: %s\n", env_get_or("HOME", "Kurdistan")); 
  printf("Found this val for $PLAYSTATION: %s\n", env_get_or("PLAYSTATION", "ze truth"));

}
