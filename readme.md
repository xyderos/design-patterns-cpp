## Purpose

Construct objects step by step, different types with the same construction code

## Issue

* Imagine initializing a complex object with eg a huge constructor or too many nested objects

* One approach would be to create a lot of sub classes

But this is still complex

* Another approach would be to create a huge constructor to the super class

The constructor is still too big and too ugly 


## Reasoning

* Extract the constructing code into builders, step by step, by creating different steps eg chassis, engine and firmware as mentioned in the code examples

* You dont need to call all those steps, rather whatever you need in order to produce an object with a particular configuration

* In case you need more configuration, you create different builder classes and use them in the construction process

* Furthermore, you can encapsulate all these steps into a director which would define the steps needed for your business logic

Hides a lot of implementation details from the client code

## When to use

* Assume you have an object that could potentially take 10 different optional parameters, it's easier to builder smaller versions or "parts" of it!

* When you want to create different variations of the type that is supposed to be represented

## Pros

* Construct step by step

* Reusable for various representations

* Single Responsibility Principle

## Cons

* The complexity increases as long as we add more classes