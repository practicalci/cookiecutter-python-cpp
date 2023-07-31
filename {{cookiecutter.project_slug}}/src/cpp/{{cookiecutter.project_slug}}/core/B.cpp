/*
 * Copyright (c) {% now 'local', '%Y' %}, {% if cookiecutter.organization %}{{ cookiecutter.organization }}{% else %}{{ cookiecutter.author }} <{{ cookiecutter.email.split('@')[0] }} at {{ cookiecutter.email.split('@')[1]|replace('.', ' dot ') }}>{% endif %}
 */


#include <{{cookiecutter.project_namespace}}/{{cookiecutter.project_slug}}/core/B.h>

namespace {{ cookiecutter.org_namespace }} {
namespace {{ cookiecutter.project_namespace }} {
namespace core {

// constructors
B::B() {}

B::B(int number) : m_private(number) {}

// copy constructor
B::B(const B &other) : m_private(other.m_private) {}

// copy assignment operator
B &B::operator=(const B &other) {
    if (this != &other) {
        m_private = other.m_private;
    }

    return *this;
}

// destructor
B::~B() {}

// getter
const int B::get_private() const { return m_private; }

} // namespace core
} // namespace {{cookiecutter.project_namespace}}
} // namespace {{cookiecutter.org_namespace}}
