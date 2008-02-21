/* The vmstk object.
 *
 * Copyright 2008 Rainer Gerhards and Adiscon GmbH.
 *
 * This file is part of rsyslog.
 *
 * Rsyslog is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Rsyslog is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Rsyslog.  If not, see <http://www.gnu.org/licenses/>.
 *
 * A copy of the GPL can be found in the file "COPYING" in this distribution.
 */
#ifndef INCLUDED_VMSTK_H
#define INCLUDED_VMSTK_H

/* the vmstk object */
typedef struct vmstk_s {
	BEGINobjInstance;	/* Data to implement generic object - MUST be the first data element! */
} vmstk_t;


/* interfaces */
BEGINinterface(vmstk) /* name must also be changed in ENDinterface macro! */
	INTERFACEObjDebugPrint(vmstk);
	rsRetVal (*Construct)(vmstk_t **ppThis);
	rsRetVal (*ConstructFinalize)(vmstk_t __attribute__((unused)) *pThis);
	rsRetVal (*Destruct)(vmstk_t **ppThis);
ENDinterface(vmstk)
#define vmstkCURR_IF_VERSION 1 /* increment whenever you change the interface structure! */


/* prototypes */
PROTOTYPEObj(vmstk);

#endif /* #ifndef INCLUDED_VMSTK_H */
