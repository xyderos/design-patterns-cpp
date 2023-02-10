## Purpose

Ensure that there is only one instance of a class while we provide global access.

## Issue

* We want a single instance since we need to control access to some shared resource eg a database connector

A constructor would always create a new instance, we dont need that

* Global access point to the program

Essentially could act as a neat way to access an eg mutex

## Reasoning

* Make the default constructor private

No other objects should be able to create an instance

* Make a static creation method

Under the hood, upon the first creation we should make the object and "cache it", so whenever we request for such object, we return the cached one

## When to use

* Use when you only need a single instance of an object in your program

There is no other way the rest of the program can generate another instance

Much stricter control over global and shared resources

## Pros

* A single instance

* Centralized global access

* Initialized when requested for the first time

## Cons

* Violates the __Single Responsibility Principle__

* Masks bad design, eg other components know too much about other components

* What happens if multiple threads try to create a singleton for the first time?

* Difficult to unit test (check the way I test it, it is implicit that I need a global variable)

## Things to consider

* Facades are usually converted to singletons, a single facade is usually enough

* Factory could be a singleton if there was a notion of inheritance and you would be returning immutable objects instead of a single mutable object

## Things to consider

* Bridge is designed before hand, adaper is usually an "addon"

* Adapter changes the interface, decorator enchances it

* Facade defines a new interface, adapter tries to make it usable