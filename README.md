# bigvar implementation in Encore

### Notes:
   * future chaining
   * mapreduce framework
   * Gustavs master thesis:

### List of methods:
* printinfo() : unit
* toarray() : [t]
* atindex(int) : t
* applyto(int,f:t->t) : unit
* print(f: t->s) : unit
* insert(index: int, value: t) : unit
* delete(index: int): unit
* push(value: t) : unit
* getstringdata(f: t -> String) : Bigvar[String]
* map(f: t->t) : unit
* filter(f: t->Bool) -> Bigvar[t]

### init functions
* randombigvar(size:int, max: int) : Bigvar[int]
* zerobigvar(size:int) : Bigvar[int]
* rangebigvar(l1:int, l2:int) : Bigvar[int]

## Todo:
* atindexes([int]) -> [t]
* getintdata(f: t -> int) : Bigvar[int]
* fold(f:): t

## functionality
* automate redistribution
* different number of actors depending on size

### for Bigvar[int]
* sort() : Bigvar[int]
