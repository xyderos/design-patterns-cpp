## Purpose

* Change the state of an object when its internal state changes

## Issue

* You need to implement an application that behaves based on a state machine

## Reasoning

* Make as many classes as the expected states and encapsulate their metadata there, dont store anything as is, store a reference to the context class

## When to use

* When there are a lot of states, they change frequently and there is dependence from state to state

* When you see a lot of conditionals, make sure to implement it as states

* A lot of duplicate code between states and their transitioning phase

## Pros

* __Single Responsibility Principle__, organize the states per class

* __Open/Closed Principle__, new states, the program wont break

* Simplify transitions based on context

## Cons

* Overkill for a few states

## Things to consider

* Similar structure to adapter and bridge, delegating work to other objects

* An extension of strategy, strategy makes them completely independent and unaware of ech other, state letting them change the state of the context at will