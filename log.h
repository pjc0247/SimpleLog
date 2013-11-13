/*
  SimpleLog
  
  http://github.com/pjc0247/SimpleLog/
*/

#ifndef _LOG_H
#define _LOG_H


#define TAG_1           "TestTag1"
#define TAG_2           "TestTag2"
#define TAG_3           0           // log disabled

#define TAG_NETWORK     "Network"
#define TAG_File        "FileIO"


#define LOG_FUNC        printf

/*
  Log
  
  a : tag
  b : log message
*/
#define Log(a,b,...)    a!=0?LOG_FUNC("%s - "b"\n",a,__VA_ARGS__):0

#endif //_LOG_H
