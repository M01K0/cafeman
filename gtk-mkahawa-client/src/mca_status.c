/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 2; tab-width: 2 -*- */
/*
 * mca_status.c
 * Copyright (C) Bernard Owuor 2010 <owuor@unwiretechnologies.net>
 * 
 * gtk-mkahawa-client is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * gtk-mkahawa-client is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "mca_app.h"

#define DEBUG
#include "mca_debug.h"

int
mca_net_status_report (int status, char *status_data)
{
  int retval = 0;
  
  DEBUG_PRINT("mca_net_status_report(): status=%d\n", status);

  return retval;
}


int
mca_panel_status_report (int status, char *status_data)
{
  int retval = 0;
  
  DEBUG_PRINT("mca_panel_status_report(): status=%d\n", status);

  return retval;
}

int
mca_status_report (int status, char *status_data)
{
  int retval = 0;
  
  DEBUG_PRINT("mca_status_report(): status=%d\n", status);

  return retval;
}

