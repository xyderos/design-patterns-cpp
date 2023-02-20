## Purpose

* Define the skeleton of a process that can subclasses override specific parts

## Issue

* Too much similar code for a lot of similar classes that implement a process

## Reasoning

* Break down a process into steps and make abstract functions for the customisable parts

## When to use

* When client code should extend the functionality of a process

* A lot of classes have alot of similar steps and minor differences

## Pros

* Client overrides the custom implementation part

* Pull duplicate code into the superclass

## Cons

* Might be limitign in a sense of extendability

* Might override a default step on a subclass

* The more steps, the harder to maintain

## Things to consider

* Template is based on inheritance, strategy is based on composition 