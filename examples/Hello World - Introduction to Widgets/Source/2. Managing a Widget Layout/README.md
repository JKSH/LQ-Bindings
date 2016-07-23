2. Managing a Widget Layout
===========================

Prerequisite knowledge/experience
---------------------------------
- Example _[1. Constructing and Using a Widget]
  (../1. Constructing and Using a Widget)_


Description
-----------
Layouts provide a way to intelligently allocate space to multiple widgets
within the same window. This space allocation is dynamic: When you resize the
window, all widgets in it get resized accordingly.

This example shows two widgets in a vertical QBoxLayout, one above the other.
Other available layouts are QGridLayout and QFormLayout.


Instructions
------------
1. Run _2. Main.vi_ and watch the widgets.
2. Use your mouse to resize the top-level widget. (Notice that the LCD resizes
   both horizontally and vertically, while the slider only resizes horizontally)
3. Click "Stop".


Showcase
--------
- Dynamically resizing layouts
