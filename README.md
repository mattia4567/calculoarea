# CALCULOAREA
# Act3
CALCULOAREA

Proyecto escolar de Laboratorio de Programación para aplicar el enfoque modular y el diseño Top-Down en C++.

Objetivo

Calcular el área de un círculo a partir de un radio positivo usando una función modular.

Fórmula utilizada:

Área = PI × radio²

Estructura

/CALCULOAREA/
├── .gitignore

├── LICENSE

├── README.md

├── Docs/

│  └── InformeProyectoCALCULOAREA.pdf

├── src/

│   └── main.cpp

└── Capturas/

    ├── compilacion_area.png

    └── diagrama_flujo.png
**
Compilación en Windows

Desde la raíz del proyecto:

g++ src/main.cpp -o src/area.exe
.\src\area.exe

Enfoque modular

El programa separa el cálculo del área en la función calcularAreaCirculo, que recibe el radio, realiza la operación y devuelve el resultado a main().
