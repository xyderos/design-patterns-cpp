## Purpose

Generate objects from a superclass via an interface in order to provide flexibility

## Reasoning

Replace direct construction via the **use_the_generator** member function (src/factory.h).
The generator (either orange or fruit) will inherit the parent member function and will call its overriden **fruit_generator** member function.

## When to use

* Unknown beforehand what kind of objects needed. Usability remains the same since we generate stuff via a member function and is code independent of the actual object (in our case, oranges and apples). If you want to create an avocado, make a new creator subclass and override the factory method (and obviously implement the corresponding fruit :) )

* Extend the internal components by inheritance.


