## Purpose

Generate objects from a superclass via an interface in order to provide flexibility

## Issue

* You want to add extensibility but you are coupled with the class code

## Reasoning

Replace direct construction via the **use_the_generator** member function (src/factory.h).
The generator (either orange or fruit) will inherit the parent member function and will call its overriden **fruit_generator** member function.

## When to use

* Unknown beforehand what kind of objects needed. Usability remains the same since we generate stuff via a member function and is code independent of the actual object (in our case, oranges and apples). If you want to create an avocado, make a new creator subclass and override the factory method (and obviously implement the corresponding fruit :) )

* Extend the internal components by inheritance.

* Save resources by resusing extisting objects instead of creating new ones

## Pros

* No tight coupling

* __Single Responsibility Principle__, move the code creation to one place

* __Open/Closed Principle__, introduce new types of products without breaking the existing client code

## Cons

* Might become too complicated since you might need to introduce too many sub classes

## Things to consider

* You often start with a factory, then you usually end up with abstract factory, prototype or builders

* Abstract factory often encapsulates factory methods

* Prototype requires complex initialization step since it doesnt involve inheritance, whereas we are dependent on inheritance but not coupled to initialization
