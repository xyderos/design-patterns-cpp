## Purpose

* Make a substitute of an object, control it and do stuff either before or after a request

## Issue

* You want to use something that is inconvenient to be used right now

## Reasoning

* Make a class with the same interface, then update the app to pass your proxy object around instead of the original one

## When to use

* Virtual proxy aka lazy initialization, eg heavyweight service that consumes system resources, instead of making the object on demand, make a proxy that will initialize that when needed

* Protection proxy aka access control, eg let specific services use your code, pass the object directly if it meets some criteria

* Remote proxy aka local execution of a remote, the proxy will pass the request to a specific service

* Logging proxy aka logging request eg keep history

* Caching proxy, chache results in the proxy of the client

* Smart references, eg dispose something when it is no longer used

## Pros

* Control the service object without letting the clients know

* Manage the lifecycle

* Works even if the service is not available

* __Open/Closed Principle__, new proxies without the client knowing it

## Cons

* Complicated code due to new classes

* Delayed repsonse

## Things to consider

* Adapter provides different interface, proxy keeps the interface, decorator extends it

* Facade and proxy are interchangable

* Proxy manages the lifecycle, decorator lets it control by the client