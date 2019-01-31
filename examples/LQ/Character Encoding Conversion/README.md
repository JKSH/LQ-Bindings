Character Encoding Conversion Example
=====================================

Prerequisite knowledge/experience
---------------------------------
- _[Hello World - Multilingual Greetings (UTF-8)]
  (../Hello World - Multilingual Greetings (UTF-8))_, OR
  _[Hello World - Introduction to Widgets]
  (../Hello World - Introduction to Widgets)_
- [Character encoding](https://en.wikipedia.org/wiki/Character_encoding)


Description
-----------
By default, LabVIEW assumes that all textual data is encoded according to your
system locale. As a result, for example, a Japanese version of LabVIEW cannot
properly display Thai text. In contrast, LQ assumes that all textual data is
encoded in UTF-8, which supports most of the languages in use today.

You can use a text codec to convert text from a non-local encoding to UTF-8,
and vice-versa.


Instructions
------------
1. Run _Main.vi_
2. In the "Input Text File" field, select a file from the "Resources" folder of
   this example
3. Select the Codec that matches your selected file
4. Click "Decode!" and watch the "Decoded Text" window


Showcase
--------
- Ability to parse text from a variety of encodings.
