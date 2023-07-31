/*
 * Copyright (c) {% now 'local', '%Y' %}, {% if cookiecutter.organization %}{{ cookiecutter.organization }}{% else %}{{ cookiecutter.author }} <{{ cookiecutter.email.split('@')[0] }} at {{ cookiecutter.email.split('@')[1]|replace('.', ' dot ') }}>{% endif %}
 */

#ifndef {{cookiecutter.org_namespace | upper }}_{{cookiecutter.project_namespace | upper }}_C_H
#define {{cookiecutter.org_namespace | upper }}_{{cookiecutter.project_namespace | upper }}_C_H

#include <string>

#include <{{cookiecutter.project_namespace}}/{{cookiecutter.project_slug}}/core/A.h>
#include <{{cookiecutter.project_namespace}}/{{cookiecutter.project_slug}}/core/B.h>

namespace {{ cookiecutter.org_namespace }} {
namespace {{ cookiecutter.project_namespace }} {
namespace core {

class C {
    bool m_booly;

  public:
    // constructors
    C();
    C(bool booly);

    // copy constructor
    C(const C &other);

    // copy assignment operator
    C &operator=(const C &other);

    // destructor
    ~C();

    // getter
    const bool get_booly() const;

    // overloaded functions
    std::string overload_method(A a);
    std::string overload_method(B b);
    std::string overload_method(A a, B b);
    std::string overload_method(A a, C c);
};

} // namespace core
} // namespace {{cookiecutter.project_namespace}}
} // namespace {{cookiecutter.org_namespace}}

#endif // {{cookiecutter.org_namespace | upper }}_{{cookiecutter.project_namespace | upper }}_C_H
