#ifndef _CHECKS_H_
#define _CHECKS_H_

#define CHECK_DO(CONDITION, EXPRESSION) do{ if(!(bool)CONDITION) EXPRESSION; }while(0)

#define CHECK_RET_VAL(CONDITION, VALUE) CHECK_DO(CONDITION, return VALUE)

#define CHECK_RET(CONDITION) CHECK_DO(CONDITION, return)

#endif // _CHECKS_H_
