### Results:
Big arrays and Big hash maps implementation for the Encore programming language. Embracing the core features of Encore such as active objects, message passing and futures. This work was done as part of my batchelor thesis, for more info take a look at my thesis. 

Link to the Encore Language repo: https://github.com/parapluu/encore

### Big hash map method list:
def init(f: k -> uint) : unit   
def copy() : Bighash[k,v]  
def hashFunction() : k -> uint  
def put(key:k,value:v) : unit  
def putManyAndBatch(pairs:[(k,v)]) : unit  
def get(key:k) : v  
def getMany(keys:[k]) : [v]  
def elements() : [v]  
def removeMany(keys:[k]) : unit  
def keys() : [k]  
def clear() : unit  
def rehash() : unit  
def hasKey(key:k) : bool  
def contains(value:v) : bool  
def changeNodeDistribution(num: int,size:int) : unit  
def getInfo() : unit  
def getSizing() : (int,int)  
### Used in MapReduce
def extend(key:k, value:v) : unit  
def extendAll(key:k, values:[v]) : unit  
def getValues(key:k) : [v]  
def sortedExtend(pairs:[LinkedList[(k,v,uint)]]) : unit  
def mapper[k2,v2](m:(k,v)->[(k2,v2)],r:(k2,[v2]) -> (k2,v2),b:Bighash[k2,v2]) : unit  
def reducer(r:(k,[v]) -> (k,v),b:Bighash[k,v]) : unit  

### Big Array method list:  
def init(array:[t]) : unit  
def size() : int  
def supr() : Supr[t]  
def array() : [t]  
def update(f : t -> t) : unit  
def filter(f: t->bool) : Bigvar[t]  
def print(f: t->String) : unit  
def insert(index: int, value: t): unit  
def push(value: t) : unit  
def at(index: int) : t  
def owner(index: int) : Supr[t]  
def applyto(index:int, f : t -> t) : unit  
def getstringdata(f: t -> String) : Bigvar[String]  
def printinfo() : unit  
def abortIfOutOfBounds(i: int) : unit  

fun randombigvar(size:int, max: int) : Bigvar[int]  
fun zerobigvar(size:int) : Bigvar[int]  
fun onesbigvar(size:int) : Bigvar[int]  
fun rangebigvar(l1:int, l2:int) : Bigvar[int]  

### MapReduce
Two example programs are implemented, see Programs/  
* word counting and Parallel breadth-first search 
