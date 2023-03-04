## Purpose

* Create objects into a tree based structure and work with those as if they were independent

## Issue

* Can your business logic be presented as a tree?

* You could either try directly to go to one by one and do something, but its too complicated and error prone

## Reasoning

* Work through a common interface that declares a method that does something to all of those

* The product returns a value, the leaf returns an applied operation to all of those

* You dont care about the concrete classes

## When to use

* When you need a tree based structure

* Treat all objects the same

## Pros

* Polymorphism is your friend, both simple and more complex types become agnostic

* __Open/Closed Principle__, new types without breaking the client code

## Cons

* Quite too complex to provide a common interface for classes that differ too much

## Things to consider

* Use with a builder, the builders can build various leaves

* Chain of responsibility is used in conjunction with composite often, when a component gets a request, it passes it thorugh the chain

* Implement leaf nodes as flyweights to save up memory

* Can also implement leaves as as flyweights to reduce ram usage

* Use prototype to clone, avoid the extra overhead of re constructing