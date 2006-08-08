/*!
 * \file 
 * \brief Array class test program
 * \author Adam Piatyszek
 *
 * $Date$
 * $Revision$
 *
 * -------------------------------------------------------------------------
 *
 * IT++ - C++ library of mathematical, signal processing, speech processing,
 *        and communications classes and functions
 *
 * Copyright (C) 1995-2006  (see AUTHORS file for a list of contributors)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 *
 * -------------------------------------------------------------------------
 */

#include <itpp/itbase.h>

using namespace std;
using namespace itpp;

int main()
{
  Array<int> A1(10), A2(15);

  A1 = 1;
  A1(2) = 42;
  A2 = 5;

  cout << "Testing simple Arrays of integers:" << endl 
       << "A1 = " << A1 << endl
       << "A2 = " << A2 << endl << endl;

  // Test of Array initialisation by string:
  Array<bvec> A3 = "{[1 1] [1 0 1 0] [0 0 1]}";
  cout << "Testing Array initialisation with: \"{[1 1] [1 0 1 0] [0 0 1]}\":" 
       << endl << "A3 = " << A3 << endl << endl;

  Array<Array<imat> > A4 = "{{[5 3; 020 4] [1 0; 3 9]} {[0 -3; 1 0xa]}}";
  cout << "Testing Array initialisation with: \"{{[5 3; 020 4] [1 0; 3 9]} {[0 -3; 1 0xa]}}\":" 
       << endl << "A4 = " << A4 << endl << endl;

  // Test of operator()
  cout << "Testing Array::operator():" << endl
       << "A4(1) = " << A4(1) << endl
       << "A4(0)(1) = " << A4(0)(1) << endl << endl; 
	
  // Test of swap function
  A4.swap(0, 1);
  cout << "Testing A4.swap(0, 1):" << endl
       << A4 << endl;

  return 0;
}
