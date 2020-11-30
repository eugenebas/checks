#ifndef _CHECKS_H_
#define _CHECKS_H_

#define CHECK_DO(CONDITION, EXPRESSION) do{ if(!CONDITION) EXPRESSION; }while(0)

#define CHECK_RETURN(CONDITION, VALUE) CHECK_DO(CONDITION, return VALUE)

#endif // _CHECKS_H_