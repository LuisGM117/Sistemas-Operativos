#OBJETIVO
Modificar al programa init para que muestre un programa de bienvenida

#HERRAMIENTAS
gcc
make
git

#CONCEPTOS

1)Proceso

+ Instancia de un programa
+ Tiene tres partes:
++ Stack: variables
++ Heap: memoria dinamica (malloc o new)
++ Codigo

+ Se crea mediante dos llamadas a sistema
++ Fork Clona
++ Exec Cambia el codigo


+ Tiene un estado:
++ Corriendo
++ Durmiendo
++ Espera
++ Completado
++ Zombie

2)Programa Init

+ Es el programa encargado de inicializar el so para dejarlo listo para usarse
+ Es el unico proceso que creal el SO


#QUE APRENDÍ
Porceso Init y modificarlo en qemu para que muestre un mensaje de bienvenida.
#COMMIT
