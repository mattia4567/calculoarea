# CALCULOAREA

**Actividad 3 — Laboratorio de Programación**

## Descripción

CALCULOAREA es un proyecto escolar desarrollado en C++ para la asignatura Laboratorio de Programación. Su propósito es aplicar el enfoque de programación modular y la metodología de diseño *Top-Down* mediante el cálculo del área de un círculo.

## Objetivo

Calcular el área de un círculo a partir de un radio ingresado por el usuario, validando que el valor sea positivo y mayor que cero.

## Fórmula utilizada

El cálculo se realiza mediante la siguiente fórmula matemática:

\[
A = \pi \times r^2
\]

Donde:

- **A:** área del círculo.
- **π (PI):** constante matemática aproximada a 3,1415926535.
- **r:** radio del círculo, expresado en centímetros.

El resultado se expresa en centímetros cuadrados (cm²).

## Tecnologías utilizadas

- **Lenguaje:** C++.
- **Biblioteca:** `iostream`.
- **Compilador:** GCC (g++).
- **Control de versiones:** Git.
- **Repositorio:** GitHub.

## Estructura del proyecto

```text
CALCULOAREA/
├── .gitignore
├── LICENSE
├── README.md
├── Docs/
│   └── InformeProyectoCALCULOAREA.pdf
├── src/
│   └── main.cpp
└── Capturas/
    ├── compilacion_area.png
    └── diagrama_flujo.png
```

## Compilación y ejecución

Para compilar y ejecutar el programa en Windows, es necesario tener instalado un compilador de C++ compatible con GCC, como MinGW.

Desde la terminal, ubicada en la raíz del proyecto, ejecutar:

**1. Compilar el programa**

```bash
g++ src/main.cpp -o src/area.exe
```

**2. Ejecutar el programa**

En PowerShell:

```powershell
.\src\area.exe
```

## Funcionamiento

El programa solicita al usuario que ingrese el radio de un círculo o diana, expresado en centímetros.

A continuación:

1. Valida que el radio sea mayor que cero.
2. Si el valor no es válido, muestra un mensaje de error y finaliza la ejecución.
3. Si el valor es válido, llama a la función `calcularAreaCirculo()`.
4. Calcula y muestra el área del círculo.
5. Representa visualmente una diana en la consola según el radio ingresado.

La representación de la diana se clasifica en tres categorías:

- **Diana mini o compacta:** radio menor o igual a 5 cm.
- **Diana estándar de tiro:** radio mayor a 5 cm y menor o igual a 12 cm.
- **Diana gigante de cobertura:** radio mayor a 12 cm.

## Enfoque modular y diseño Top-Down

El proyecto aplica la programación modular mediante la función `calcularAreaCirculo()`, encargada de realizar el cálculo matemático del área.

La función recibe el radio como parámetro de tipo `double`, calcula el resultado utilizando la constante `PI` y devuelve el área calculada.

El diseño *Top-Down* permite organizar la solución a partir del problema principal, separando las responsabilidades y facilitando la lectura, el mantenimiento y la comprensión del código.

## Documentación y capturas

La carpeta `Docs/` contiene el informe del proyecto en formato PDF.

La carpeta `Capturas/` incluye imágenes de referencia de la compilación y del diagrama de flujo del programa.

## Autor

**Federico Mattia**

Proyecto académico realizado para la asignatura Laboratorio de Programación.

## Licencia

Este proyecto se distribuye bajo la licencia MIT. Consultar el archivo `LICENSE` para conocer los términos y condiciones de uso.
