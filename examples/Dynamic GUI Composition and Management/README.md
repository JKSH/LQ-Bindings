Dynamic GUI Composition and Management
======================================

Prerequisite knowledge/experience
---------------------------------
- Example _[6. Reusing Components Dynamically]
  (../Hello World - Introduction to Widgets/Source/6. Reusing Components Dynamically)_
  from the "Hello World - Introduction to Widgets" series

- [Dynamic dispatching for LabVIEW classes]
  (http://zone.ni.com/reference/en-XX/help/371361M-01/lvconcepts/creating_classes/#Dynamic_Dispatch)

- Functional Globals or [Action Engines]
  (http://forums.ni.com/t5/LabVIEW/Community-Nugget-4-08-2007-Action-Engines/td-p/503801)


Description
-----------
You can create an arbitrarily complex hierarchy of widgets. For example, you can
put a Multiple Document Interface (MDI) inside a splitter inside a tab inside
a... (and so on). This ability lets you compose almost any GUI arrangement that
you can think of.

What's more, you can do all this at run-time, and your widgets can auto-resize
themselves in layouts.


Instructions
------------
1. Run _Main.vi_
2. Select "Button Gallery"  from the drop-down menu
3. Enter a label of your choice in the "New widget label" field
4. Click "Add Widget"
5. Repeat steps #2 - #4, selecting different widgets from the drop-down menu


Showcase
--------
- Dynamically composing a GUI, based on user input
- The virtually unlimited ways to nest widgets
- Dynamically resizing layouts
- A variety of widgets (including MDI)


Known Issues
------------
- If you select "Tab Widget", "Tool Box", "Horizontal Splitter", "Vertical
  Splitter, or "MDI Area", LabVIEW will freeze when you transition from Run
  mode back to Edit mode (i.e. when you stop the VI).
    - This is caused by an issue inside LabVIEW; NI is tracking this issue
      under CAR #690115.
