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
- To keep code organized. Notice that the block diagram for _Main.vi_ is simpler
  in Example _4_ than in Example _3a_.
- To inherit the features of existing widgets, without having to rewriting it
  from scratch.
- To make it easy to re-use your custom widget code. See tutorial _6. Reusing
  Components Dynamically_.


Showcase
--------
- Inheritable GUI components
