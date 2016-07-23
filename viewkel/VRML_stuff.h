/*******************************************************

Copyright (C) 1995 Greg Landrum
All rights reserved

This file is part of yaehmop.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

1. Redistributions of source code must retain the above copyright
notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
notice, this list of conditions and the following disclaimer in the
documentation and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

********************************************************************/
/***

 created by gL: July 1998

 ***/

char *VRML_header[] = {
    "#VRML V2.0 utf8", "# Automagically generated by viewkel",
    "PROTO diffball [ field SFFloat MyRadius 0.2",
    "		 field SFColor MyColor .6 .6 .6]", "{Shape {",
    "    geometry Sphere { radius IS MyRadius }", "    appearance Appearance {",
    "	material Material {diffuseColor IS MyColor}", "    }", "}}",
    "PROTO diffcyl [  field SFFloat MyRadius .10",
    "		 field SFFloat MyHeight 1.0",
    "		 field SFColor MyColor .6 .6 .6]", "{", "Shape {",
    "    geometry Cylinder { radius IS MyRadius height IS MyHeight",
    "                          bottom FALSE top FALSE}",
    "    appearance Appearance {",
    "	material Material {diffuseColor IS MyColor}", "    }}}",
    "NavigationInfo { type [\"EXAMINE\", \"ANY\"]}",
    "WorldInfo{ title \"From viewkel!!!\" }", "DEF FarView Viewpoint {",
    "position 0 0 20", "description \"Farther\"", "orientation 0 0 1 0", "}",
    "DEF YView Viewpoint {", "position 0 20 0", "description \"Y-axis\"",
    "orientation 1 0 0 -1.57", "}", "DEF XView Viewpoint {", "position 20 0 0",
    "description \"X-axis\"", "orientation 0 1 0 1.57", "}",
    "DEF CloseView Viewpoint {", "position 0 0 10", "description \"Close!\"",
    "orientation 0 0 1 0", "}", "PROTO arrow [field MFString MyLabel \"y\"",
    "             field SFColor ArrColor 0.6 0.6 0.6]", "{",
    "Group { children[", "Transform {translation 0 1 0 children[",
    "Shape { geometry Cylinder {radius 0.1 height 2",
    "                           top FALSE bottom FALSE}",
    "    appearance Appearance {",
    "	material Material {diffuseColor IS ArrColor}", "    }", "}]}",
    "Transform {", " translation 0 2 0",
    " children [Shape { geometry Cone {bottomRadius 0.2 height 0.4}",
    "    appearance Appearance {",
    "	material Material {diffuseColor IS ArrColor}", "    }}", "]}]}}",
    "PROTO axes [field SFColor MyColor 0.6 0.2 0.6]", "{", "Group{ children[",
    "arrow {MyLabel \"y\" ArrColor IS MyColor}",
    "Transform {translation 0.3 2 0 children [",
    "Billboard{ children [Shape{geometry Text {string \"y\"}}]}]}",
    "Transform{ rotation 1 0 0 1.57",
    "           children [arrow {MyLabel \"z\" ArrColor IS MyColor}]}",
    "Transform {translation 0.3 0 2 children [",
    "Billboard{ children [Shape{geometry Text {string \"z\"}}]}]}",
    "Transform{ rotation 0 0 1 -1.57",
    "           children [arrow {MyLabel \"x\" ArrColor IS MyColor}]}",
    "Transform {translation 2 0.3 0 children [",
    "Billboard{ children [Shape{geometry Text {string \"x\"}}]}]}", "]}}",
    NULL};

char *VRML_trailer[] = {"#END OF FILE", NULL};
