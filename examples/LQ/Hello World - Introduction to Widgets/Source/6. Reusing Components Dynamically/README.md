6. Reusing Components Dynamically
=================================

Prerequisite knowledge/experience
---------------------------------
- Example _[3c. Connecting a Signal to a LabVIEW Callback]
  (../3c. Connecting a Signal to a LabVIEW Callback)_
- Example _[5. Creating a User-Defined Signal]
  (../5. Creating a User-Defined Signal)_


Description
-----------
We dynamically generate a grid of _Number Widgets_ from example _5. Creating a
User-Defined Signal_. We also dynamically connect the widgets' signals to a
callback such that updating one _Number Widget_ will auto-update all _Number
Widgets_ that come after it.


Instructions
------------
1. Run _6. Main.vi_ and click "Create Grid".
2. Drag the sliders of different _Number Widgets_, and observe the reaction of
   other _Number Widgets_.
3. Enter a different number of rows and columns, and click "Create Grid" again.


Showcase
--------
- Reusing (multiple instances of) a user-defined, subclassed widget
- Dynamically composing a GUI, based on user input
- Dynamically setting up event-driven communications between widgets, without
  (explicitly) creating an Event structure.
