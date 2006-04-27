/*!
 * \file
 * \brief Help functions to make functions with vec and mat as arguments
 * \author Tony Ottosson and Adam Piatyszek
 * 
 * $Date$
 * $Revision$
 *
 * -------------------------------------------------------------------------
 *
 * IT++ - C++ library of mathematical, signal processing, speech processing,
 *        and communications classes and functions
 *
 * Copyright (C) 1995-2005  (see AUTHORS file for a list of contributors)
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

#ifndef HELP_FUNCTIONS_H
#define HELP_FUNCTIONS_H

#include <itpp/base/mat.h>


namespace itpp {

  //! \addtogroup miscfunc
  //!@{

  //! Help function to call for a function: Vec<T> function(Vec<T>)
  template<typename T>
  inline Vec<T> apply_function(T (*f)(T), const Vec<T>& v)
  {
    Vec<T> out(v.length());
    for (int i = 0; i < v.length(); i++) {
      out(i) = f(v(i));
    }
    return out;
  }

  //! Help function to call for a function: Vec<T> function(const Vec<T>&)
  template<typename T>
  inline Vec<T> apply_function(T (*f)(const T&), const Vec<T>& v)
  {
    Vec<T> out(v.length());
    for (int i = 0; i < v.length(); i++) {
      out(i) = f(v(i));
    }
    return out;
  }

  //! Help function to call for a function: Mat<T> function(Mat<T>&)
  template<typename T>
  inline Mat<T> apply_function(T (*f)(T), const Mat<T>& m)
  {
    Mat<T> out(m.rows(), m.cols());
    for (int i = 0; i < m.rows(); i++) {
      for (int j = 0; j < m.cols(); j++) {
	out(i, j) = f(m(i, j));
      }
    }
    return out;
  }

  //! Help function to call for a function: Mat<T> function(const Mat<T>&)
  template<typename T>
  inline Mat<T> apply_function(T (*f)(const T&), const Mat<T>& m)
  {
    Mat<T> out(m.rows(), m.cols());
    for (int i = 0; i < m.rows(); i++) {
      for (int j = 0; j < m.cols(); j++) {
	out(i, j) = f(m(i, j));
      }
    }
    return out;
  }


  //! Help function to call for a function: Vec<T> function(T, Vec<T>)
  template<typename T>
  inline Vec<T> apply_function(T (*f)(T, T), const T& x, const Vec<T>& v)
  {
    Vec<T> out(v.length());
    for (int i = 0; i < v.length(); i++) {
      out(i) = f(x, v(i));
    }
    return out;
  }

  //! \brief Help function to call for a function: 
  //!        Vec<T> function(const T&, const Vec<T>&)
  template<typename T>
  inline Vec<T> apply_function(T (*f)(const T&, const T&), const T& x, 
			       const Vec<T>& v)
  {
    Vec<T> out(v.length());
    for (int i = 0; i < v.length(); i++) {
      out(i) = f(x, v(i));
    }
    return out;
  }

  //! Help function to call for a function: Mat<T> function(T, Mat<T>)
  template<typename T>
  inline Mat<T> apply_function(T (*f)(T, T), const T& x, const Mat<T>& m)
  {
    Mat<T> out(m.rows(), m.cols());
    for (int i = 0; i < m.rows(); i++) {
      for (int j = 0; j < m.cols(); j++) {
	out(i, j) = f(x, m(i, j));
      }
    }
    return out;
  }

  //! \brief Help function to call for a function: 
  //!        Mat<T> function(const T&, const Mat<T>&)
  template<typename T>
  inline Mat<T> apply_function(T (*f)(const T&, const T&), const T& x, 
			       const Mat<T>& m)
  {
    Mat<T> out(m.rows(), m.cols());
    for (int i = 0; i < m.rows(); i++) {
      for (int j = 0; j < m.cols(); j++) {
	out(i, j) = f(x, m(i, j));
      }
    }
    return out;
  }

  //! Help function to call for a function: Vec<T> function(Vec<T>, T)
  template<typename T>
  inline Vec<T> apply_function(T (*f)(T, T), const Vec<T>& v, const T& x)
  {
    Vec<T> out(v.length());
    for (int i = 0; i < v.length(); i++) {
      out(i) = f(v(i), x);
    }
    return out;
  }

  //! \brief Help function to call for a function: 
  //!        Vec<T> function(const Vec<T>&, const T&)
  template<typename T>
  inline Vec<T> apply_function(T (*f)(const T&, const T&), const Vec<T>& v, 
			       const T& x)
  {
    Vec<T> out(v.length());
    for (int i = 0; i < v.length(); i++) {
      out(i) = f(v(i), x);
    }
    return out;
  }

  //! Help function to call for a function: Mat<T> function(Mat<T>, T)
  template<typename T>
  inline Mat<T> apply_function(T (*f)(T, T), const Mat<T>& m, const T& x)
  {
    Mat<T> out(m.rows(), m.cols());
    for (int i = 0; i < m.rows(); i++) {
      for (int j = 0; j < m.cols(); j++) {
	out(i, j) = f(m(i, j), x);
      }
    }
    return out;
  }

  //! \brief Help function to call for a function: 
  //!        Mat<T> function(const Mat<T>&, const T&)
  template<typename T>
  inline Mat<T> apply_function(T (*f)(const T&, const T&), const Mat<T>& m, 
			       const T& x)
  {
    Mat<T> out(m.rows(), m.cols());
    for (int i = 0; i < m.rows(); i++) {
      for (int j = 0; j < m.cols(); j++) {
	out(i, j) = f(m(i, j), x);
      }
    }
    return out;
  }

  //!@}

  // ---------------------- Instantiations ------------------------------------
#ifndef _MSC_VER

  //! Extern Template instantiation of apply_function
  extern template vec apply_function(double (*f)(double), const vec &v);
  //! Extern Template instantiation of apply_function
  extern template cvec apply_function(std::complex<double> (*f)(const std::complex<double> &),
				      const cvec &v);
  //! Extern Template instantiation of apply_function
  extern template svec apply_function(short (*f)(short), const svec &v);
  //! Extern Template instantiation of apply_function
  extern template ivec apply_function(int (*f)(int), const ivec &v);
  //! Extern Template instantiation of apply_function
  extern template bvec apply_function(bin (*f)(bin), const bvec &v);

  //! Extern Template instantiation of apply_function
  extern template mat apply_function(double (*f)(double), const mat &m);
  //! Extern Template instantiation of apply_function
  extern template cmat apply_function(std::complex<double> (*f)(const std::complex<double> &),
				      const cmat &m);
  //! Extern Template instantiation of apply_function
  extern template smat apply_function(short (*f)(short), const smat &m);
  //! Extern Template instantiation of apply_function
  extern template imat apply_function(int (*f)(int), const imat &m);
  //! Extern Template instantiation of apply_function
  extern template bmat apply_function(bin (*f)(bin), const bmat &m);

  //! Extern Template instantiation of apply_function
  extern template vec apply_function(double (*f)(double, double), const double& x, const vec &v);
  //! Extern Template instantiation of apply_function
  extern template cvec apply_function(std::complex<double> (*f)(const std::complex<double> &, 
								const std::complex<double> &), 
				      const std::complex<double>& x, const cvec &v);
  //! Extern Template instantiation of apply_function
  extern template svec apply_function(short (*f)(short, short), const short& x, const svec &v);
  //! Extern Template instantiation of apply_function
  extern template ivec apply_function(int (*f)(int, int), const int& x, const ivec &v);
  //! Extern Template instantiation of apply_function
  extern template bvec apply_function(bin (*f)(bin, bin), const bin& x, const bvec &v);

  //! Extern Template instantiation of apply_function
  extern template mat apply_function(double (*f)(double, double), const double& x, const mat &m);
  //! Extern Template instantiation of apply_function
  extern template cmat apply_function(std::complex<double> (*f)(const std::complex<double> &, 
								const std::complex<double> &), 
				      const std::complex<double>& x, const cmat &m);
  //! Extern Template instantiation of apply_function
  extern template smat apply_function(short (*f)(short, short), const short& x, const smat &m);
  //! Extern Template instantiation of apply_function
  extern template imat apply_function(int (*f)(int, int), const int& x, const imat &m);
  //! Extern Template instantiation of apply_function
  extern template bmat apply_function(bin (*f)(bin, bin), const bin& x, const bmat &m);

  //! Extern Template instantiation of apply_function
  extern template vec apply_function(double (*f)(double, double), const vec &v, const double& x);
  //! Extern Template instantiation of apply_function
  extern template cvec apply_function(std::complex<double> (*f)(const std::complex<double> &,
								const std::complex<double> &),
				      const cvec &v, const std::complex<double>& x);
  //! Extern Template instantiation of apply_function
  extern template svec apply_function(short (*f)(short, short), const svec &v, const short& x);
  //! Extern Template instantiation of apply_function
  extern template ivec apply_function(int (*f)(int, int), const ivec &v, const int& x);
  //! Extern Template instantiation of apply_function
  extern template bvec apply_function(bin (*f)(bin, bin), const bvec &v, const bin& x);

  //! Extern Template instantiation of apply_function
  extern template mat apply_function(double (*f)(double, double), const mat &m, const double& x);
  //! Extern Template instantiation of apply_function
  extern template cmat apply_function(std::complex<double> (*f)(const std::complex<double> &, 
								const std::complex<double> &), 
				      const cmat &m, const std::complex<double>& x);
  //! Extern Template instantiation of apply_function
  extern template smat apply_function(short (*f)(short, short), const smat &m, const short& x);
  //! Extern Template instantiation of apply_function
  extern template imat apply_function(int (*f)(int, int), const imat &m, const int& x);
  //! Extern Template instantiation of apply_function
  extern template bmat apply_function(bin (*f)(bin, bin), const bmat &m, const bin& x);

#endif // #ifndef _MSC_VER

} // namespace itpp

#endif // #ifndef HELP_FUNCTIONS_H

