Windows Taskbar Integration
===========================

Prerequisite knowledge/experience
---------------------------------
- _[Hello World - Multilingual Greetings (UTF-8)]
  (../Hello World - Multilingual Greetings (UTF-8))_, OR
  _[Hello World - Introduction to Widgets]
  (../Hello World - Introduction to Widgets)_

- LabVIEW [Queued State Machine Architecture]
  (https://decibel.ni.com/content/docs/DOC-32964)


Instructions
------------
1. Run _Main.vi_
2. Hover your mouse cursor over the taskbar icon
3. Click on the "Play", "Pause", "Stop", and "Reset" buttons in the taskbar


Showcase
--------
- API for manipulating the Windows task bar


Known issues
------------
- After starting and stopping _Main.vi_(or any other VI that uses LQ), you must
  fully unload and reload the DLLs first in order to run this example again
  (e.g. by restarting LabVIEW)
