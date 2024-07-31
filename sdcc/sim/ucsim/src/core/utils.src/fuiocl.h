/*
 * Simulator of microcontrollers (fuiocl.h)
 *
 * Copyright (C) 1997 Drotos Daniel
 * 
 * To contact author send email to dr.dkdb@gmail.com
 *
 */

/* This file is part of microcontroller simulator: ucsim.

UCSIM is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

UCSIM is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with UCSIM; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA. */
/*@1@*/

#ifndef FUIOCL_HEADER
#define FUIOCL_HEADER


#include <termios.h>
#include <unistd.h>

#include "fiocl.h"

class cl_io: public cl_f
{
 public:
  cl_io();
  cl_io(chars fn, chars mode);
  cl_io(int the_server_port);
  virtual ~cl_io(void);
 protected:
  struct termios saved_attributes;
 public:
  virtual enum file_type determine_type(void);
  virtual int close(void);
  virtual void changed(void);
  virtual int check_dev(void);
  virtual bool writable(void);

  virtual void prepare_terminal();
  virtual void save_attributes();
  virtual void restore_attributes();
};


#endif

/* End of utils.src/fuiocl.h */
