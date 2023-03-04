## Purpose

* Define a subscription mechanism to nofity multiple objects about events

## Issue

* Imagine you want to be notified about something, you would either continiously ask for information or would you subscribe to a notifier?

## Reasoning

* There is the subject, which essentially acts as a publisher, and there is the observer, which essentially is the subscriber

## When to use

* When one change should affect other objects

* When you need to observe something for a while or with specific parameters

## Pros

* __Open/Closed Principle__, new subscribers without breaking client code, and vice versa

* Establish relations at runtime

## Cons

* Need to implement a lot of stuff for specific operations eg priority

## Things to consider

* Essentially, it allows dynamic subscribing and receiving requests

* Mediator vs observers, the first one eliminates mutual dependencies in a single object, while observer is dynamic, one way