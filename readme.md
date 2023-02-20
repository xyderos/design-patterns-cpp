## Purpose

* Define a family of algorithms, add them in a class and make them interchangable

## Issue

* Imagine extending a business logic functionality over different implementation methods, instead of extending the main calculation class to catch cases you instead implement different classes with handling of these calculations for your business logic.

## Reasoning

* All different calculations are essentially strategies, you have a context class that holds all the handling and delegates the calculations to the implementing class

* Keep in mind that context just delegates, doesnt select the implementation strategy

## When to use

* When you want to use different variants of calculations an you want this functionality to be able to change at runtime

* When different classes differ in a similar way on how they handle data

* When you want to isolate business logic and the implementation from the client code

## Pros

* __Open/Closed Principle__, introduce new strategies without changing the context

* Swap algorithms at runtime

* Isolate implementation from client code

## Cons

* Too much if there are not a lot of algorithms

* Client code must be aware of the differences between the different strategies

## Things to consider

* State is sort of an extension of strategy, both are based in composition

* Decorator extends, strategy changes