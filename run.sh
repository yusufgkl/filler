#!/bin/sh
cp ygokol.filler resources/players/
cd resources
./filler_vm -f $3 -p2 $1 -p1 $2 ; ./winner filler.trace | 
	while IFS= read -r line
	do
		echo "\033[0m$line"
	done
