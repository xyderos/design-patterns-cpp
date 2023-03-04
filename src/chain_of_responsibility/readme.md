## Purpose

Pass a message along a set of handlers, each handler decides whether or not no handle the request or pass it to the next one

## Issue

Imagine you are building a library where you want to start by authenticating, authorizing, checking location and finally handling a request

Keep independent business logic in each step

## Reasoning

Transform each part of the handling process into a series of steps called handlers

* Each one either handles the request, which could either return the desired result or some sort of exception
* Based on the original sequence defined in the client code, you decide the order, or can simply create a wrapper based on eg facade

## When to use

* Use it when you need to process different kinds of requests in various ways by linking them in the way you want

* Execute several steps in a particular order

* The order should or would be able to change at runtime

## Pros

* Control the order of handling

* __Single Chain Responsibility__, each class does one thing, process something specific

* __Open/Closed Principle__, introduce as many handlers as you want without breaking the client code

## Cons

* Some stuff might end up unhandled, there is a default callback that should handle this case

## Things to consider

* Pass the request dynamically along

* Can be used in conjunction with composite, upon entering a leaf, pass along the request to the root

* Handlers can be implemented as commands, execute multiple operations over a complex object

* Kind of similar to the decorator, but one can break up things and extend it whereas the other one extends the functionality while keeping the same interface