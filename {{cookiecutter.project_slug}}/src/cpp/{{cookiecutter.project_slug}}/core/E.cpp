/*
 * Copyright (c) {% now 'local', '%Y' %}, {% if cookiecutter.organization %}{{ cookiecutter.organization }}{% else %}{{ cookiecutter.author }} <{{ cookiecutter.email.split('@')[0] }} at {{ cookiecutter.email.split('@')[1]|replace('.', ' dot ') }}>{% endif %}
 */


#include "E.h"

namespace {{ cookiecutter.org_namespace }} {
namespace {{ cookiecutter.project_namespace }} {

namespace core {
namespace detail {

// constructors
E::E() {}

E::E(std::string name) : m_name(name) {}

// getter
const std::string E::get_class_name() const { return "class(E)"; }

const std::string E::get_name() const { return m_name; }

} // namespace detail
} // namespace core
} // namespace {{cookiecutter.project_namespace}}
} // namespace {{cookiecutter.org_namespace}}
