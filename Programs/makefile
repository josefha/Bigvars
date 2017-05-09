
Bighash = -I ../Bighash/
MapReduce = -I ../MapReduce/
InputData = -I input-data/

Search-compile:
	encorec $(MapReduce) $(Bighash) $(InputData) ParallelSearch.enc -o shortestpath

WordCount-run:
	encorec $(MapReduce) $(Bighash) $(InputData) --run WordCount.enc

WordCount-compile:
	encorec $(MapReduce) $(Bighash) $(InputData) -o wordcount WordCount.enc
