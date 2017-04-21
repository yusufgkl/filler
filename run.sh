!#/bin/sh
cp ygokol.filler resources/players/
cd resources
./filler_vm -f maps/map00 -p2 players/hcao.filler -p1 players/ygokol.filler ; ./winner filler.trace
