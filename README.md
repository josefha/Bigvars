### Results:
An Implantation of distributed arrays and hash tables have been implemented with the Encore programming language. It was done by embracing the core features of Encore such as active objects, message passing and futures. To evaluate the usability of the distributed data types a version of the big data framework MapReduce was introduced. We are happy with the result thus the MapReduce framework works as expected and was relative easy to implement with the distributed hash tables as under laying structure. There have and will be other ways to achieve parallelism with collections of data in Encore, still future development for distributed data types will provide the future Encore programmer with a larger tool box. As shown some applications is easier be implement by using the functionality distributed data types provide. With more optimization the implemented distributed would possible be able to compete with other ways to achieve parallelism when dealing with big amounts of data collections.

### Distributed hash table method list:
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

### Distributed array table method list:
* array() : [t]
* at(int) : t
* print(f: t->s) : unit
* insert(index: int, value: t) : unit
* delete(index: int): unit
* push(value: t) : unit
* update(f: t->t) : unit
* filter(f: t->Bool) -> Bigvar[t]
* updateIndex(int,f:t->t) : unit
