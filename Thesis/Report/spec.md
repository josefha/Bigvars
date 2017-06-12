# Implementation of Bigvars for Encore
### Specification

**Student:** Josef Karakoca, **Advisor:** Dave Clarke, **Reviewer:** Tobias Wrigstad

## 1. Background
The Programming Languages Group at Uppsala University is developing a programming language called Encore. Encore is a object oriented language with the actor model and a focus on parallelism. The compiler is written in Haskell and translates Encore code to C code, which can then be compiled with a C compiler. The project assignment is to extend the features of Encore and implement a library for Bigvars.

## 2. Problem Description and Approach
Arrays in Encore are stored in one actor resulting in operations on arrays being executed sequentially. Encore is also lacking syntactic support for easy programming of data structures distributed across actors.

Bigvars will be a data type with a collection of values that are distributed among many actors. Operations on Bigvars could therefor be executed in parallel. Bigvars would also make it easier syntactically for the programer to programming with big collections of data. For example if you have an Bigvar of customer objects, then doing `.account` would automatically apply the `.account` method to all customers.

One possible implementation of Bigvars in Encore would be to split the data between many actors and have all those actors report to other actors that act like supervisors. The supervisors would coordinate all workers and hold meta information about specific parts of the Bigvar.

I will start the project with researching similar implementation in other languages, like Julias distributed arrays and Java 8 parallel streams. I will then decide how to best implement Bigvars in Encore. Most of the time will be spent on the actually implementation, Bigvars will be implemented as a library written in Encore.

The first step of the implementation part will be to provide support for distributed arrays with basic array functionality and with a fixed number of underlying actors. The second step will be to have a dynamic number of underlaying actors and add some advanced functionality like object method calls and math functions. The third step will be to provide similar support as for distributed arrays to distributed Hash-tables. Lastly research if syntactical support from the encore compiler is needed and if it is devise a syntax, a compilation scheme and implement it. Also investigate and possible implement support for more datatypes such as distributed Sets. Tests and measurements of my implementation is also a priority. 

### Limitation
I will limit the project by not implement support for to many different data structure. I will also not focus on super
efficient implementation, because nice syntax and programmer level operations are more important for the project.
I will only implement syntactical support from the encore compiler if the first three steps takes less time than expected.

### 4. Relevant courses
* Low-Level Parallel Programming
* Operating Systems and Process-Oriented Programming
* Imperative and Object-Oriented Programming Methodology
* Computer Architecture

### 5. Time plan
The project will start at the beginning of period four (late Mars) and continue to the end of that period (early June). The thesis presentation will be presented mid may. Before writing the first lines of code of the implementation some time will be spent on researching related work and getting to know the features of Encore.
