/****************************************************************
 ****************************************************************
 **                                                            **
 **    (C)Copyright 2006-2009, American Megatrends Inc.        **
 **                                                            **
 **            All Rights Reserved.                            **
 **                                                            **
 **        5555 Oakbrook Pkwy Suite 200, Norcross              **
 **                                                            **
 **        Georgia - 30093, USA. Phone-(770)-246-8600.         **
 **                                                            **
 ****************************************************************
 ****************************************************************/

#ifndef __AST_PROC_FUNCTIONS_H__
#define __AST_PROC_FUNCTIONS_H__

#include <linux/interrupt.h>
#include <linux/fs.h>
#include <linux/proc_fs.h>
#include <linux/sysctl.h>

/* Function prototypes for proc and sysctl entry addition and removal */
struct proc_dir_entry *AddProcEntry(struct proc_dir_entry *moduledir,char *KeyName,
		read_proc_t *read_proc, write_proc_t *write_proc,void *PrivateData);
struct ctl_table_header *AddSysctlTable(char *ModuleName,struct ctl_table* ModuleTable);

extern struct proc_dir_entry *rootdir;

void RemoveProcEntry(struct proc_dir_entry *moduledir, char *KeyName);
void RemoveSysctlTable(struct ctl_table_header *table_header);

#endif /* !__AST_PROC_FUNCTIONS_H__ */
