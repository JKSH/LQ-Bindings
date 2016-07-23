4. Inheriting from a Widget
===========================

Prerequisite knowledge/experience
---------------------------------
- Examples 1-3 in this series
- [LabVIEW object-oriented programming](http://www.ni.com/white-paper/3573/en/)


Description
-----------
This example takes the widget code from 3a. Connecting a Signal to a Qt Slot
and encapsulates it in a dedicated LVClass called _Number Widget_.

There are a few reasons to do this:
- To keep code organized. Notice that the block diagram for _4. Main.vi_ is
  simpler than _3a. Main.vi_.
- To inherit the features of existing widgets, without having to rewriting it
  from scratch.
- To make it easy to re-use your custom widget code. See tutorial _6. Reusing
  Components Dynamically_.

(Note: Because tutorials 4 - 6 each have their own copy of _Number Widget_, they
are prefixed with their tutorial numbers to avoid a naming conflict. This is
generally not required, however.)


Showcase
--------
- Inheritable GUI components
