
Bighash = -I ../Bighash/
MapReduce = -I ../MapReduce/
InputData = -I input-data/

triangle:
	encorec $(MapReduce) $(Bighash) $(InputData) TriangleCounting.enc -o triangle

search:
	encorec $(MapReduce) $(Bighash) $(InputData) -pg ShortestPath.enc -o shortestpath

word:
	encorec $(MapReduce) $(Bighash) $(InputData) -o wordcount WordCount.enc

test:
	mkdir Test
	encorec $(MapReduce) $(Bighash) $(InputData) -pg ShortestPath.enc -o shortestpath
	time ./shortestpath > testinfo.md
	sudo python sysflame.py -o FlameGraphOut.svg -f /Users/Josef/FlameGraph/ -c shortestpath -sf 100
