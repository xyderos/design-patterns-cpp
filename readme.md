## Purpose

* Find a way to keep the state of an ob object with abstraction from the implementation

## Issue

* There are a lot of cases where you need to undo an action, eg something failed and you need a backup, share the state of an object or even have a snapshot of all the states that have occured within an application

## Reasoning

* Implement the desired metadata functionalities you want to utilize eg restore, save, print, whatever and inject the object into the caretaker, the caretaker can then be responsible to restore a state, save it upon need, and of course be able to restore it (either with a simple undo or a more complicated mechanism)

## When to use

* When you need to be able to restore a state

* When direct access to the object violates the encapsulation, eg only the coordinator should be able to use it

## Pros

* Produce snapshots without breaking encapsulation

* Simplify originators code by letting the caretaker utilize the snapshot functionalities

## Cons

* Might consume too much memory

* Should be able to keep track of lifetime and state in order to delete unused/broken snapshots

* Dynamic languages does not guarantee that the state will be untouched

## When to use

* Implement it in conjunction with command to have a cleaner interface

* Implement it with an iterator in order to be able to perform business logic resotres/saves easier

