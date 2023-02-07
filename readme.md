## Purpose

* Extend the behavior of an object by wrapping it up in anopther object that acts differently

## Issue

* You want to extend the existing functionality of an object to do something extra or acti differently

* Making a lot of subclasses is unorthodox

* Inheritance is also static, cant chnage the behavior at runtime

* Most languages (forget cpp) do not allow multiple inheritance also

## Reasoning

* Use this kind of composition.

One object has a reference to another and it delegates the work

* Managed to link the previous object to another, the one that does your work

## When to use

* When you want to assign extra behaviors to objects at runtime without breaking the client code

* When it feels akward to use inheritance

## Pros
¨
* Extend behavior without making a subclass

* modify responsibilities at runtime

* combine several behaviors into multiple decorators

* __Single Responsibility Principle__, divide a monolithic class into more that implement more variants

## Cons

* Difficult to remove specific wrapper

* Depends on the order of the decorators stack

* Initial configuration is ugly