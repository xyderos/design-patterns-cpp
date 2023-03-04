## Purpose

* Separate algorithms from the objects they operate

## Issue

* Adding a feature that is not based on the actual objects seems alien to the class code

## Reasoning

* Add the functionality into the visitor class that goes and operates into the objects

## When to use

* When you want to perform an operation on all objects of an object structure

* When you want to clean up business logic of auxiliary behavior

* When some sort of functionality makes sense in some classes but not all of them

## Pros

* __Open/Closed Principle__, new behavior without breaking client code

* __Single Responsibility Principle__, multiple versions of the same behavior into the same class

* Accumulate info when working on various objects

## Cons

* Update all the visitors when a class is added

* There might not be access to private fields that you might have to work with

## Things to consider

* Visitor is more powerful from command, you can execute various operations over various objects of different classes

* Use it to execute an operation over a composite tree

* Use it along with an iterator to traverse complex data and execute an operation over its elements, even if they are different classes