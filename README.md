# Bigvars in Encore

## Todo:
* Real tests
* Adding all steps in MapReduce
* correct rehashing - only in workers?
* more supervisors?

### Notes:
   * Mining of massive datasets: book.
   * Language framework Spark.

### BigHash functions:
   * put(k,v) : unit
   * remove(k) : unit
   * get(k) : v
   * getMany([k]) : [v]
   * keys() : [k]
   * elements() : [v]
   * contains(v) : bool
   * rehash() : unit
   * clear() : unit

   * extend(v) : unit
   * extendAll(k, [v]) : unit
   * getValues() : [v]
   * mapper()
   * reducer()

### List of methods for Prototype 1 for Arrays:

* array() : [t]
* at(int) : t
* print(f: t->s) : unit
* insert(index: int, value: t) : unit
* delete(index: int): unit
* push(value: t) : unit
* update(f: t->t) : unit
* filter(f: t->Bool) -> Bigvar[t]
* updateIndex(int,f:t->t) : unit

### init functions
* randombigvar(size:int, max: int) : Bigvar[int]
* zerobigvar(size:int) : Bigvar[int]
* onesbigvar(size:int) : Bigvar[int]
* rangebigvar(l1:int, l2:int) : Bigvar[int]

## functionality todo arrays
* automate redistribution
* different number of actors depending on size
