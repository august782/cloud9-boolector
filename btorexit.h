/*  Boolector: Satisfiablity Modulo Theories (SMT) solver.
 *  Copyright (C) 2010  Robert Daniel Brummayer, Armin Biere
 *
 *  This file is part of Boolector.
 *
 *  Boolector is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Boolector is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef BTOREXIT_H_INCLUDED
#define BTOREXIT_H_INCLUDED

enum BtorExitCode {
  BTOR_SUCC_EXIT = 0,
  BTOR_ERR_EXIT = 1,
  BTOR_SAT_EXIT = 2,
  BTOR_UNSAT_EXIT = 3,
  BTOR_UNKNOWN_EXIT = 4
};

typedef enum BtorExitCode BtorExitCode;

#endif

