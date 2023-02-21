## Purpose

* Make incompatible objects to collaborate

## Issue

* You have objects that do not work with each other eg a parser of json and a parser of xml

## Reasoning

* Convert the interface of an object to be comprehensible to another one

Essentially a wrapper that hides complexity and the conversion process

1) The adapter accepts an interface compatible with one of the existing objects

2) By using the interface, we can safely call the adapters methods

3) The adapter passes the request to the second object in a format the second one wants

## When to use

* When the interface is not compatible with your needs

* Reuse several existing subclasses that lack some functionality __when this functionality cant and shouldnt be added to the super class__

## Pros

* __Single Responsibility Principle__, serate conversion from business logic

* __Open/Closed Principle__, new types of adapters without breaking existing client code

## Cons

* Complexity increases upon introducting a new set of interfaces and classes

## Things to consider

* Bridge is designed before singleton to make stuff independent from other stuff in your application, adapter is an extension to make incompatible things work

* Adapter changes the interface, decorator enhances it witout changing the interface

* Compared to the cedorator that enhances the interface or the proxy that provides the same interface, adapter changes the interface

* Facade defines a new interface, adapter tries to make the interface usable

* Delegates the work to other objects