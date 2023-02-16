## Purpose

* Hide all the underlying implementation details eg stack, vector etc with a business logic based container and expose it's functionality via member functions

## Issue

* You need to implement a lot of access/edit/delete operations based on your needs eg advance by two per iteration

## Reasoning

* Implement an iterator and a container that wraps all this logic and provide it as the data structure you want to use

## When to use

* Complex data structure and complex operations, hide its complexity

* Reduce duplication

* Alot of similar data types to process but should be container agnostic operations

## Pros

* __Single Responsibility Principle__, extract bulk operations in one place

* __Open/Closed Principle__, client code wont break

* Thread safe, each instance returns a state and not a pointer directly

## Cons 

* Overkill if the strcture is simple (as in the code example)

* Definitely gives overhead

## Things to consider

* Use iterators to traverse composite trees

* Use in conjunction with factories to let subclasses return compatible iterators