#ifndef ExcepcionErrorSuma_H
#define ExcepcionErrorSuma_H
#include <exception>

class ExcepcionErrorSuma : public std::exception
{
    public:
    ExcepcionErrorSuma() noexcept = default;
    ~ExcepcionErrorSuma() = default;

    virtual const char* what() const noexcept {
        return "Error en datos de entrada";
    }

};
#endif