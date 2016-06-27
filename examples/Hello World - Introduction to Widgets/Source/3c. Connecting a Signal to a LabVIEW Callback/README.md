3c. Connecting a Signal to a LabVIEW Callback
=============================================

Prerequisite knowledge/experience
---------------------------------
- Example _[2. Managing a Widget Layout](../2. Managing a Widget Layout/)_
- Connector pane patterns


Description
-----------
Signals are similar to Events or Notifications. Signals are handled by slots.

Examples 3a, 3b and 3c show different ways of doing the same thing:  They
listen for the signal that is emitted when you drag the slider in _2. Managing a
Widget Layout_, and then they use that signal to update the LCD.

This example uses a callback VI to connect the slider to the LCD.


Showcase
--------
- Event-driven programming for widgets
