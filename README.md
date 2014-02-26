Scada-Espol
===========

Sistema Scada Aires acondicionado Espol

Ejecutar el archivo server_bbb.js en consola:
1) ir a la ruta del archivo
2) ejecutar node server_bbb.js
Nota debe tener instalado node.js

Posterior a eso revisar el archivo mask1_slots.h, se ha creado una función que obtiene los datos del server_bbb
la cual se la llama en la línea 122 e imprime las temperaturas en el scada
