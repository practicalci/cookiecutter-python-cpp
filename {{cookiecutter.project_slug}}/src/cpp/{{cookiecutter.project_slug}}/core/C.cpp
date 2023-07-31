/*
 * Copyright (c) {% now 'local', '%Y' %}, {% if cookiecutter.organization %}{{ cookiecutter.organization }}{% else %}{{ cookiecutter.author }} <{{ cookiecutter.email.split('@')[0] }} at {{ cookiecutter.email.split('@')[1]|replace('.', ' dot ') }}>{% endif %}
 */


#include <{{cookiecutter.project_namespace}}/{{cookiecutter.project_slug}}/core/C.h>

namespace {{ cookiecutter.org_namespace }} {
namespace {{ cookiecutter.project_namespace }} {
namespace core {

// constructors
C::C() {}

C::C(bool booly) : m_booly(booly) {}

// copy constructor
C::C(const C &other) : m_booly(other.m_booly) {}

// copy assignment operator
C &C::operator=(const C &other) {
    if (this != &other) {
        m_booly = other.m_booly;
    }

    return *this;
}

// destructor
C::~C() {}

// getter
const bool C::get_booly() const { return m_booly; }

// overloaded functions
std::string C::overload_method(A a) { return "A"; }

std::string C::overload_method(B b) { return "B"; }

std::string C::overload_method(A a, B b) { return "A_B"; }

std::string C::overload_method(A a, C c) { return "A_C"; }

} // namespace core
} // namespace {{cookiecutter.project_slug}}
} // namespace {{cookiecutter.project_namespace}}
