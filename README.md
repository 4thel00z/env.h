<!-- START doctoc generated TOC please keep comment here to allow auto update -->
<!-- DON'T EDIT THIS SECTION, INSTEAD RE-RUN doctoc TO UPDATE -->
**Table of Contents**  *generated with [DocToc](https://github.com/thlorenz/doctoc)*

- [env.h](#envh)
  - [Motivation](#motivation)
  - [Installation](#installation)
  - [Usage](#usage)
  - [License](#license)

<!-- END doctoc generated TOC please keep comment here to allow auto update -->

# env.h

## Motivation

Utilities to nicely interact with the environment variables.

## Installation

```
clib install 4thel00z/env.h
```

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
