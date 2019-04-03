## PROYECTO: LLAMADAS A SISTEMA
  +Luis Ángel García Méndez A01633335
  +Diseño de programas de software
  +Grupo 2
  +02/04/2019
   
## OBJETIVO

# Primera parte 

Modifica el kernel de xv6 para que imprima cada vez que una llamada a sistema se emplee se imprima una línea con el nombre de la llamada a 
sistema y su número.
Al terminar observa las llamadas al sistema que ocurren cuando arranca el sistema. Explica lo que pasa. El sistema oerativo al arrancar
utiliza las mismas llamadas a sistema para escribir el mensaje de bienvenida, arranca procesos, mata procesos, crea copias de si mismo
autoriza la escritura o remueve los permisos de escritura.
Pistas:
Modificar la función syscall() en syscall.c para antes de ejecutar la función imprimir, tener un arreglo con los nombres de las funciones.

# Segunda Parte

Agregar otra llamada a sistema (date) a xv6 que consulte el reloj de la computadora y devuelva el tiempo en formato UTC.
Desde el punto de vista del usuario la función sería:
date(struct rtcdate *r);
Pistas:
Utilizar la función cmostime() (definida en lapic.c) para obtener el valor de la hora actual. En el archivo date.h está definida
la estructura usada por esa función.


# Conceptos aplicados
Un programa esta compuesto de un codigo fuente. Un sistema operativo esta compuesto de un kernel y de aplicaciones del sistema. Llamadas
a sistema Creacion de aplicaciones accesibles por el usuario

# Herramientas
  +GCC
  +QEMU
  +MAKE
  
 #¿Qué aprendí?
Aprendimos a imprimir nuestras llamas a sistema y regrese la hora, todo esto aplicando los conceptos que
aprendimos durante el parcial, modificando los archivos make, sysproc,suscall, etc.
MUCHAS GRACIAS A MI COMPAÑERO: ANDRÉS SALAS VILLARREAL QUE ME ASESORO PARA LA REALIZACIÓN DEL PROYECTO.

# Link del commit
https://github.com/LuisGM117/Sistemas-Operativos/commit/04287449a42b550b7e2614fe942cd718d5972893
