

#ifndef LOGIN_H
#define LOGIN_H

#include <string>

bool registrarUsuario();
// Modificada para recibir la variable donde se guardará el usuario
bool iniciarSesion(std::string& usuarioActual);

#endif // LOGIN_H
