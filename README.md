SimpleLog
=========

simple log for c++

```c

#define TAG_A   "Foo"
//#define TAG_B   "Bar"
#define TAG_B   0

Log( TAG_A, "test log %d, %s", 1, "hello" );
// Foo - test log 1, hello
Log( TAG_B, "test2" );
// 

```
