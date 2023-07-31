/*
 * Copyright (c) {% now 'local', '%Y' %}, {% if cookiecutter.organization %}{{ cookiecutter.organization }}{% else %}{{ cookiecutter.author }} <{{ cookiecutter.email.split('@')[0] }} at {{ cookiecutter.email.split('@')[1]|replace('.', ' dot ') }}>{% endif %}
 */

#ifndef {{cookiecutter.org_namespace | upper }}_{{cookiecutter.project_namespace | upper }}_B_H
#define {{cookiecutter.org_namespace | upper }}_{{cookiecutter.project_namespace | upper }}_B_H

namespace {{ cookiecutter.org_namespace }} {
namespace {{ cookiecutter.project_namespace }} {
namespace core {

class B {
    int m_private;

  public:
    // constructors
    B();
    B(int number);

    // copy constructor
    B(const B &other);

    // copy assignment operator
    B &operator=(const B &other);

    // destructor
    ~B();

    // getter
    const int get_private() const;

    // public data member
    int m_public;
};

} // namespace core
} // namespace {{cookiecutter.project_namespace}}
} // namespace {{cookiecutter.org_namespace}}

#endif // {{cookiecutter.org_namespace | upper }}_{{cookiecutter.project_namespace | upper }}_B_H
