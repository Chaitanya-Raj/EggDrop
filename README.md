# Egg Drop Puzzle

### Problem Statement

Given a building with k floors and n eggs, find the minimum number of drops needed to find a floor from which it is safe to drop an egg without breaking it.


### Description


_The following is a description of the instance of this famous puzzle involving n=2 eggs and a building with k=36 floors._

_Suppose that we wish to know which stories in a 36-story building are safe to drop eggs from, and which will cause the eggs to break on landing._ __We make a few assumptions:__

__…..An egg that survives a fall can be used again.__

__…..A broken egg must be discarded.__

__…..The effect of a fall is the same for all eggs.__

__…..If an egg breaks when dropped, then it would break if dropped from a higher floor.__

__…..If an egg survives a fall then it would survive a shorter fall.__

__…..It is not ruled out that the first-floor windows break eggs, nor is it ruled out that the 36th-floor do not cause an egg to break.__

_If only one egg is available and we wish to be sure of obtaining the right result, the experiment can be carried out in only one way. Drop the egg from the first-floor window; if it survives, drop it from the second floor window. Continue upward until it breaks. In the worst case, this method may require 36 droppings. Suppose 2 eggs are available. What is the least number of egg-droppings that is guaranteed to work in all cases?_

_The problem is not actually to find the critical floor, but merely to decide floors from which eggs should be dropped so that total number of trials are minimized._
