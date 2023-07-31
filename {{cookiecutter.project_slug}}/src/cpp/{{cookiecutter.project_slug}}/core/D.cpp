/*
 * Copyright (c) {% now 'local', '%Y' %}, {% if cookiecutter.organization %}{{ cookiecutter.organization }}{% else %}{{ cookiecutter.author }} <{{ cookiecutter.email.split('@')[0] }} at {{ cookiecutter.email.split('@')[1]|replace('.', ' dot ') }}>{% endif %}
 */


#include <{{cookiecutter.project_namespace}}/{{cookiecutter.project_slug}}/core/D.h>

// private include
#include "E.h"

namespace {{ cookiecutter.org_namespace }} {
namespace {{ cookiecutter.project_namespace }} {
namespace core {

// constructors
D::D() {}

D::D(std::string name) : m_name(name) {}

bool D::is_derived() { return true; }

// getter
const std::string D::get_name() const { return "derived"; }

const std::string D::process_private_class() const {
    detail::E e("project_private_class");
    return e.get_class_name();
}

const std::string D::get_class_name() const { return "class(D)"; }

} // namespace core
} // namespace {{cookiecutter.project_namespace}}
} // namespace {{cookiecutter.org_namespace}}
