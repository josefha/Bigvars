
Bighash = -I ../Bighash/
MapReduce = -I ../MapReduce/
InputData = -I input-data/
Stdlib = -I ../encorestdlib/

search:
	encorec $(MapReduce) $(Bighash) $(InputData) ShortestPath.enc -o shortestpath
	./shortestpath

triangle:
	encorec $(MapReduce) $(Bighash) $(InputData) TriangleCounting.enc -o triangle

word:
	encorec $(MapReduce) $(Bighash) $(InputData) -o wordcount WordCount.enc

flame:
	sudo python sysflame.py -o FlameGraphOut.svg -f /Users/Josef/FlameGraph/ -c shortestpath -sf 199
