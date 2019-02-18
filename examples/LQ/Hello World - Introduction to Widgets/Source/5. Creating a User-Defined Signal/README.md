5. Creating a User-Defined Signal 
=================================

Prerequisite knowledge/experience
---------------------------------
- Example _[3b. Connecting a Signal to a LabVIEW Event]
  (../3b. Connecting a Signal to a LabVIEW Event)_
- Example _[4. Inheriting from a Widget](../4. Inheriting from a Widget)_


Description
-----------
In the previous example, _4. Inheriting from a Widget_, we encapsulated the
slider inside the _Number Widget_. As a result, the outside world no longer has
access to the signals emitted by the slider.

To compensate, this example adds a user-defined signal to the _Number Widget_.
We make connections in such a way that our newly-defined signal lets us respond
to changes in the encapsulated slider.


Showcase
--------
- Creating user-defined signals
- Connecting one signal to another signal (a.k.a. Relaying)
