Porting from XControls - Dual Mode Thermometer
==============================================

Prerequisite knowledge/experience
---------------------------------
- [XControls](http://www.ni.com/tutorial/3198/en/)


Description
-----------
This example re-implements the official [Dual Mode Thermometer XControl example]
(http://www.ni.com/tutorial/3198/en/) using LQ Widgets.

For the best results, study this project alongside _Simple Dual Mode Thermometer
XControl.lvproj_. Go to "Help" -> "Find Examples..." -> "Search" and enter the
keywords: "Simple Dual Mode Thermometer".


**Similarities with XControls**
* Widgets and XControls are reusable user-created GUI components.
* Widgets and XControls support Property Nodes.


**Differences from XControls**
* You can inherit from a Widget.
* Widgets (and LVOOP) don't support invoke nodes (as of LabVIEW 2015). Call the
  associated VI directly.
* While XControls have separate Data and State abilities, Widgets don't make
  this distinction.
    * While XControls use block diagram terminals, Widgets use Property Nodes or
	  VIs.
* While XControls have separate Facade and Init VIs, Widgets handle both of
  these in their Constructor VI.
