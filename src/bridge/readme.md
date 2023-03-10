## Purpose

* Split a large class or a set of classes into two separate entities, __abstraction__ and __implementation__

## Issue

* Difficult to extend in order to include firther functionality

## Reasoning

* You want to extend in multiple dimensions eg name, age etc

* Switch from interface to object composition so you keep one entity and the new objects will reference the original with the new entity, instead of keeping all the original states

## When to use

* Divide and organize a monolith when you have a lot of variants for functionality

Since the bigger it becomes, the more difficult to control, you might have to update client code

* Split the monolith onto multiple entities as hierarchies

* Extend a class into multiple independent dimensions

* Switch implementations at runtime

## Pros

* platform independent classes

* Client code works with abstractions

* __Open/Closed Principle__, introduce new abstractions and implementations independent from each other

* __Single Responsibility Principle__, focus on high level logic

## Cons

* More complicated code if a class is dependent to a lot of other classes

## Things to consider

* Bridge is designed beforehand to make stuff of the application independent from each other, adapter makes incompatible stuff work together

* Is based on composition, delegates work to other objects

* Combine with an abstract factory, abstractions are defined b the bridge, implementations reside in the factory

* Combine with builder, the director is the abstraction, the builders are the implementations