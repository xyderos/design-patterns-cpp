## Purpose

Reduce memory usage by splitting an entity into two states

* The shared that is shared among a couple of objects

* The unique that essentially distincts the behavior of the other entities

## Issue

Consider a simulation of eg the universe that each entity eg star, planet is an object itself

* Millions of objects means a lot of ram

* Caveat: split the entity into two states, the shared one will be used among a lot

## Reasoning

* By splitting in a neat way, you can optimize a lot of memory to be shared by introducing a client that handles the return on an appropriate entity that corresponds to your needs

## When to use

* When memory is limited

## Pros

1) In case you have a lot of similar objects, this saves a huge amount of RAM

## Cons

1) Might introduce CPU overhead

2) Code is complicated and ugly

## Things to consider

* Implement shared leaf nodes in a composite structure as flyweights, save more memory

* Flyweight returns small objects, facade returns object that represents a subsystem

* Do not mix with singleton, singleton would put all the shared states into a single object, flyweight keeps different instances plus flyweight instances are immutable, whereas singleton is mutable