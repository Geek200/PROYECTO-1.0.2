Integrantes del equipo
Jose J. Hernández Ortega
Janluis Lebrón Rivera
Ángel Hernández

Este proyecto es un Detector de BPM (Beats Per Minute) escrito en C++ para el curso COMP2120 – Lógica de Programación.
El programa permite:
Ingresar la ruta de un archivo de audio (.wav o .mp3)
Detectar el BPM (manualmente por ahora)
Validar entradas del usuario
Mostrar un menú interactivo
Preparar la estructura necesaria para en el futuro integrar detección automática real mediante librerías de audio como Aubio

El enfoque principal del proyecto es demostrar:
Lógica de programación
Uso de variables y constantes
Uso de funciones
Validación de entrada
Condiciones (if)
Ciclos (while)
Uso de librerías estándar en C++
Tecnologías y librerías utilizadas

El programa utiliza las siguientes librerías estándar de C++:
Librería	Uso
<iostream>	Entrada y salida en consola
<string>	Manejo de cadenas de texto
<limits>	Control de errores en entrada
<vector>	Reservado para posibles extensiones futuras
<algorithm>	Reservado para uso futuro (ordenamiento, búsqueda)
Funciones principales
leerEnteroEnRango()
Valida que el usuario ingrese un número dentro de un rango específico (en este caso, BPM entre 40 y 240).
Evita errores por letras o números fuera del rango usando:
cin.clear()
cin.ignore()
detectarBPMConAubio()
Simulación de detección automática de BPM.

Actualmente no está implementada, pero está lista para expansión.
detectarBPM()
Gestiona el proceso completo de detección de BPM:
Intenta detección automática
Si falla, solicita BPM manual
Regresa el resultado al programa principal
mostrarMenu()
Imprime el menú del programa.

 main()
 
Controla la ejecución general:

Ciclo principal (while)
Lectura de opciones
Llamado a funciones
Mensajes de salida al usuario
Posibles mejoras (Futuras versiones)
Implementar detección real de BPM usando la librería Aubio
Crear un archivo .txt o .csv para guardar historial de canciones y BPM
Añadir un menú más completo
Implementar una interfaz gráfica (GUI)
Soporte para diferentes formatos de audio
Lectura automática del nombre del archivo sin escribir la ruta completa

Este proyecto está licenciado bajo la MIT License, lo que permite:
Usar el código

Modificarlo

Distribuirlo

Siempre que se mantenga el crédito al autor.
