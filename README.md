# StackOverflow
Measuring recursive depth of different programming langauges

#Recursion

> Recursion in computer science is a method where the solution to a problem depends on solutions to smaller instances of the same problem (as opposed to iteration).

Graham, Ronald; Donald Knuth; Oren Patashnik (1990). Concrete Mathematics. Chapter 1: Recurrent Problems.

#Stack Overflow

> A stack overflow is an undesirable condition in which a particular computer program tries to use more memory space than the call stack has available

Margaret Rouse


##How it works 

I use the most simple implementation of recursion and measure the maximum depth the program reaches before crashing. All tests are done in the same computer running Ubuntu with default stack size. 8mb

##Why is this useful?

I don't know it is just an experiment not really much use because if recursion gets to a point where you have a stack overflow you should look at different implementations.

##Results so far

|Language | Max seen | Simple implementation |
|---------|----------|-----------------------|
|Haskell  |16013174(Forced timeout, 60 seconds running)|16013174|
|C        |  261790  |   261790 |
|Rust     |  52315        |   52315                    |
|Node.js  |  17932(Max stack size error)    |  17932(Max stack size error)|
|Java     | 10820    | 10820                |
