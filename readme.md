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