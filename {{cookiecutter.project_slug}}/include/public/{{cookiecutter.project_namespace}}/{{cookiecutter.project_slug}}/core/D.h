/*
 * Copyright (c) {% now 'local', '%Y' %}, {% if cookiecutter.organization %}{{ cookiecutter.organization }}{% else %}{{ cookiecutter.author }} <{{ cookiecutter.email.split('@')[0] }} at {{ cookiecutter.email.split('@')[1]|replace('.', ' dot ') }}>{% endif %}
 */

#ifndef {{cookiecutter.org_namespace | upper }}_{{cookiecutter.project_namespace | upper }}_D_H
#define {{cookiecutter.org_namespace | upper }}_{{cookiecutter.project_namespace | upper }}_D_H

#include <{{cookiecutter.project_namespace}}/{{cookiecutter.project_slug}}/core/A.h>

namespace {{ cookiecutter.org_namespace }} {
namespace {{ cookiecutter.project_namespace }} {
namespace core {

class D : public A {
    std::string m_name;

  public:
    // constructors
    D();
    D(std::string name);

    // getter, extended from base class
    const std::string get_name() const;

    bool is_derived();

    const std::string get_class_name() const;

    const std::string process_private_class() const;
};

} // namespace core
} // namespace {{cookiecutter.project_namespace}}
} // namespace {{cookiecutter.org_namespace}}

#endif // {{cookiecutter.org_namespace | upper }}_{{cookiecutter.project_namespace | upper }}_D_H
