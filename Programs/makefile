
Bighash = -I ../Bighash/
MapReduce = -I ../MapReduce/
InputData = -I input-data/

triangle:
	encorec $(MapReduce) $(Bighash) $(InputData) TriangleCounting.enc -o triangle

search:
	encorec $(MapReduce) $(Bighash) $(InputData) ShortestPath.enc -o shortestpath

WordCount-compile:
	encorec $(MapReduce) $(Bighash) $(InputData) -o wordcount WordCount.enc
