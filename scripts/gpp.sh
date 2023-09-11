#!/bin/bash

for x in $@
do
	echo $x
	name=$(echo $x | rev | cut -d '.' -f 2- | rev)
	gpp -o $name.out -v -ggdb -Wall -Werror -Wextra -pedantic -std=c++0x $x
done
