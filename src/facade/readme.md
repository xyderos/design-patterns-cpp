## Purpose

* Provide a simplified library

## Issue

* Too many objects need to work together and the code shouldnt be coupled

## Reasoning

* Make an interface that provides access to several subsystems

* Limited in operations but include whatever the client code might request

## When to use

* When you want limited but straight forward interface to a complex object

* structure your subsystems into layers

## Pros

* Isolate code from the complexity of the sub system

## Cons

* Can become super bloated with all the classes of the program

## Things to consider

* Defines a new interface for the object, adapter makes the existing interface usable

* Factory can be an alternative to facade when you want to hide the implementation

* Flyweight makes a lot of small objects, facade makes an object that represents a whole sub system

* Mediator centralizes the comms between components of a sub system, they only know about the mediator and nothing else

* Can be converted to singleton since one facade is usually enough

* Similar to proxy, but proxy has the same interface so it makes them interchangeable