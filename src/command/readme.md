## Purpose

* Turn a request into a standalone object that contains all info about a request

* Be able to pass requests as arguments, delay or queue an execution

## Issue

* You have to implement a lot of subclasses for a similar functionality

## Reasoning

* Separation of concerns, leads to breaking up the app into layers

* Serves as a link between something and business logic

## When to use

* Parametrize objects with operations eg pass a command as an argument

* Queue an operation, make a schedule etc

* Implement something reversible

## Pros

* __Single Responsibility Principle__, decouple classes that invoke operations

* __Open/Closed Principle__, introduce new commands without breaking existing client code

* Implement undo/redo

* Mix simple commands into complex ones

## Cons

* Code might becode super complicated since you are introducing a new layer between senders and receivers

## Things to consider

* Undirectional connection

* Handlers in chain or responsibility can be commands, execute a lot of operations over the same context

* Command and snapshot can work together to impement undo, commands do give orders and work on objects while snapshots change the state of the object

* Command converts any operation into an object, parameters become fields, strategy describes different ways of doing a thing, swapping methods based on context

* Prototype can be used to store state or history

* Combine with an iterator to work over multiple objects