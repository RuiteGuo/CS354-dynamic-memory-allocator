Last login: Mon Sep 18 23:31:57 on ttys000
MBs-MacBook-Pro:~ 352videoquiz$ pwd
/Users/mbpro
MBs-MacBook-Pro:~ 352videoquiz$ cd CLionProjects/537Project0/
MBs-MacBook-Pro:537Project0 352videoquiz$ git init
Initialized empty Git repository in /Users/mbpro/CLionProjects/537Project0/.git/
MBs-MacBook-Pro:537Project0 352videoquiz$ ssh ruite@royal-03.cs.wisc.edu
ruite@royal-03.cs.wisc.edu's password: 
Welcome to Ubuntu 16.04.3 LTS (GNU/Linux 4.4.0-93-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

7 packages can be updated.
6 updates are security updates.


===============================================================================
      This instructional workstation is installed with Ubuntu 16.04 LTS

 If you encounter any issues, please send a problem report to lab@cs.wisc.edu
===============================================================================
      REMINDER: NO FOOD or DRINK IN THE CS INSTRUCTIONAL COMPUTER LABS
            NEVER POWER DOWN WORKSTATIONS IN THE COMPUTER LABS
===============================================================================

Last login: Mon Sep 18 17:13:56 2017 from 10.140.21.12
[ruite@royal-03] (1)$ cd private
[ruite@royal-03] (2)$ ls
cs354/  final\ exam\ review\ material\ printing/
cs537/  final\ exam\ review\ material\ printing.zip
cs564/  midterm\ 2\ -\ 2017\ submision\ Ruite\ Guo.docx
ece340
[ruite@royal-03] (3)$ cd cs354/
[ruite@royal-03] (4)$ ls
0199339139_Microelectronic.pdf  mem.c   p4/            tbcode/
American_Politics_Today.pdf     mem.c~  p5/            tests/
libmem.so*                      mem.h   p6/            Untitled\ Document~
Makefile                        mem.o   qingxukongP5/
[ruite@royal-03] (5)$ gcc mem.c
/usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/crt1.o: In function `_start':
(.text+0x20): undefined reference to `main'
collect2: error: ld returned 1 exit status
[ruite@royal-03] (6)$ vim mem.c
[ruite@royal-03] (7)$ vim mem.c
[ruite@royal-03] (8)$ vim mem.h

#ifndef __mem_h__
#define __mem_h__

int Mem_Init(int sizeOfRegion);
void* Mem_Alloc(int size);
int Mem_Free(void *ptr);
void Mem_Dump();

#endif // __mem_h__


~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
"mem.h" 11L, 161C                                             1,1           All
