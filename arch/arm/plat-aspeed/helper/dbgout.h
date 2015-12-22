#ifndef __DBGOUT__H
#define __DBGOUT__H

#define TWARN(x...)
//printk(x)
#define TCRIT(x...)
// printk(x)
#define TEMERG(x...) panic(x)

#define TDBG_DECLARE_DBGVAR_EXTERN(x)
#define TDBG_DECLARE_DBGVAR(x)
#define TDBG_IS_DBGFLAG_SET(x, fl) (0)

#define TDBG_FLAGGED(x, y, z...)
// printk(z)

#define TDBG_FORM_VAR_NAME(x) ""

#endif
