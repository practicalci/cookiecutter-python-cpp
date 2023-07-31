/*
 * Copyright (c) {% now 'local', '%Y' %}, {% if cookiecutter.organization %}{{ cookiecutter.organization }}{% else %}{{ cookiecutter.author }} <{{ cookiecutter.email.split('@')[0] }} at {{ cookiecutter.email.split('@')[1]|replace('.', ' dot ') }}>{% endif %}
 */

#ifndef {{cookiecutter.org_namespace | upper }}_{{cookiecutter.project_namespace | upper }}_E_H
#define {{cookiecutter.org_namespace | upper }}_{{cookiecutter.project_namespace | upper }}_E_H

#include <string>

// This is a private class, it is not exposed to the public API of the project.

namespace {{ cookiecutter.org_namespace }} {
namespace {{ cookiecutter.project_namespace }} {
namespace core {
namespace detail {

class E {
    std::string m_name;

  public:
    // constructors
    E();
    E(std::string name);

    // getter, extended from base class
    const std::string get_name() const;

    const std::string get_class_name() const;
};

} // namespace detail
} // namespace core
} // namespace {{cookiecutter.project_namespace}}
} // namespace {{cookiecutter.org_namespace}}

#endif // {{cookiecutter.org_namespace | upper }}_{{cookiecutter.project_namespace | upper }}_E_H
