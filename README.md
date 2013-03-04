VAL3Socket
==========

Staubli Val3 Socket communication with C++

Files
=========

1. siotest VAL3 application -------Val3 application to send and receive data via ethernet 

2. staubli socket CPP -----------C++ application and source to send and receive data Robot

Usage
=========

1. Copy the folder named siotest in the folder siotest VAL3 application to VAL3 SRS cell, normally the folder is `C:\Documents and Settings\Your username \MyDocuments\Staubli\CS8\your Cell name\usr\usrapp`.

2. Create a socket connection in CS8 emulator. 
`PS:In the Demo application, Port 2000 is used to connect CS8C and C++ application running PC, you can also use another way to connect CS8C controller with a connection port and IP address.`

3. Run siotest in Cs8 emulator

4. Run Staubli socket.exe and choose 1, and then can connect to the cs8 emulator, receive
and send data via Ethernet.


License
==========

**VAL3Socket** is licensed under very liberal BSD license.

Copyright (c) 2008, QIAN Yong All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

- Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

- Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

- Neither the name of the OLIVIDA nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.