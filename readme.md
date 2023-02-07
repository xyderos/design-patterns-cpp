## Purpose

Create groups of objects without explicitly specifying the type.


## Issue

* You might have a lot of different products with a lot of different variations

* You want to create concrete combinations

* You do not want to touch the client code
## Reasoning

Explicitly declare interfaces **for each product and group**. Then declare **the abstract factory interface and its corresponding sub-factories**. Keep in mind that we need to return **abstract types**, eg a **car** or a **truck**, not a scania or a saab.

## When to use

* When you need to work with various kinds of groups and do not need dependency upon specific objects.

* When you have a class with a set of factory methods that hide its primary responsibility

## Pros

* The products you get are compatible with each other

* No tight coupling

* __Single Responsibility Principle__, extract the code at one place

* __Open/Closed Principle__, new variants without breaking the code

## Cons

* Might become too complicated since we might need to introduce too many interface for a specific pattern