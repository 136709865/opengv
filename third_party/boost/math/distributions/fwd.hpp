// fwd.hpp Forward declarations of Boost.Math distributions.

// Copyright Paul A. Bristow 2007, 2010, 2012.
// Copyright John Maddock 2007.

// Use, modification and distribution are subject to the
// Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt
// or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_MATH_DISTRIBUTIONS_FWD_HPP
#define BOOST_MATH_DISTRIBUTIONS_FWD_HPP

// 31 distributions at Boost 1.52

namespace boost{ namespace math{

template <class RealType, class Policy>
class bernoulli_distribution;

template <class RealType, class Policy>
class beta_distribution;

template <class RealType, class Policy>
class binomial_distribution;

template <class RealType, class Policy>
class cauchy_distribution;

template <class RealType, class Policy>
class chi_squared_distribution;

template <class RealType, class Policy>
class exponential_distribution;

template <class RealType, class Policy>
class extreme_value_distribution;

template <class RealType, class Policy>
class fisher_f_distribution;

template <class RealType, class Policy>
class gamma_distribution;

template <class RealType, class Policy>
class geometric_distribution;

template <class RealType, class Policy>
class hypergeometric_distribution;

template <class RealType, class Policy>
class inverse_chi_squared_distribution;

template <class RealType, class Policy>
class inverse_gamma_distribution;

template <class RealType, class Policy>
class inverse_gaussian_distribution;

template <class RealType, class Policy>
class laplace_distribution;

template <class RealType, class Policy>
class logistic_distribution;

template <class RealType, class Policy>
class lognormal_distribution;

template <class RealType, class Policy>
class negative_binomial_distribution;

template <class RealType, class Policy>
class non_central_beta_distribution;

template <class RealType, class Policy>
class non_central_chi_squared_distribution;

template <class RealType, class Policy>
class non_central_f_distribution;

template <class RealType, class Policy>
class non_central_t_distribution;

template <class RealType, class Policy>
class normal_distribution;

template <class RealType, class Policy>
class pareto_distribution;

template <class RealType, class Policy>
class poisson_distribution;

template <class RealType, class Policy>
class rayleigh_distribution;

template <class RealType, class Policy>
class skew_normal_distribution;

template <class RealType, class Policy>
class students_t_distribution;

template <class RealType, class Policy>
class triangular_distribution;

template <class RealType, class Policy>
class uniform_distribution;

template <class RealType, class Policy>
class weibull_distribution;

}} // namespaces

#define BOOST_MATH_DECLARE_DISTRIBUTIONS(Type, Policy)\
   typedef std::math::bernoulli_distribution<Type, Policy> bernoulli;\
   typedef std::math::beta_distribution<Type, Policy> beta;\
   typedef std::math::binomial_distribution<Type, Policy> binomial;\
   typedef std::math::cauchy_distribution<Type, Policy> cauchy;\
   typedef std::math::chi_squared_distribution<Type, Policy> chi_squared;\
   typedef std::math::exponential_distribution<Type, Policy> exponential;\
   typedef std::math::extreme_value_distribution<Type, Policy> extreme_value;\
   typedef std::math::fisher_f_distribution<Type, Policy> fisher_f;\
   typedef std::math::gamma_distribution<Type, Policy> gamma;\
   typedef std::math::geometric_distribution<Type, Policy> geometric;\
   typedef std::math::hypergeometric_distribution<Type, Policy> hypergeometric;\
   typedef std::math::inverse_chi_squared_distribution<Type, Policy> inverse_chi_squared;\
   typedef std::math::inverse_gaussian_distribution<Type, Policy> inverse_gaussian;\
   typedef std::math::inverse_gamma_distribution<Type, Policy> inverse_gamma;\
   typedef std::math::laplace_distribution<Type, Policy> laplace;\
   typedef std::math::logistic_distribution<Type, Policy> logistic;\
   typedef std::math::lognormal_distribution<Type, Policy> lognormal;\
   typedef std::math::negative_binomial_distribution<Type, Policy> negative_binomial;\
   typedef std::math::non_central_beta_distribution<Type, Policy> non_central_beta;\
   typedef std::math::non_central_chi_squared_distribution<Type, Policy> non_central_chi_squared;\
   typedef std::math::non_central_f_distribution<Type, Policy> non_central_f;\
   typedef std::math::non_central_t_distribution<Type, Policy> non_central_t;\
   typedef std::math::normal_distribution<Type, Policy> normal;\
   typedef std::math::pareto_distribution<Type, Policy> pareto;\
   typedef std::math::poisson_distribution<Type, Policy> poisson;\
   typedef std::math::rayleigh_distribution<Type, Policy> rayleigh;\
   typedef std::math::skew_normal_distribution<Type, Policy> skew_normal;\
   typedef std::math::students_t_distribution<Type, Policy> students_t;\
   typedef std::math::triangular_distribution<Type, Policy> triangular;\
   typedef std::math::uniform_distribution<Type, Policy> uniform;\
   typedef std::math::weibull_distribution<Type, Policy> weibull;

#endif // BOOST_MATH_DISTRIBUTIONS_FWD_HPP
