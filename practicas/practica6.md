# OBJETIVO:
Investigar y practicar hilos.

# HERRAMIENTAS
gcc
git

# CONCEPTOS
+ HILOS
  + Proceso ligero.
  + Solo tiene un stack y, el código y el heap lo comparte con el proceso principal.
  + Si el proceso principal termina, los hilos terminan.
  
 + Lock:
  + Mecanismo de sincronización 
  + Variable global que soporta dos operaciones:
    + lock, el primer hilo que hace lock se adueña del lock, el resto queda esperando.
    + unlock, el hilo dueño del lock lo libera.
  + Ayuda para resolver el problema de la sección crítica.
  
+ Semáforos:
  + Mecanismo de sincronización
  + Variable global que tiene un valor inicial >= 0. Soporta dos operaciones.
    + wait/decrease. Si es mayor a 0 decrementa y continua. Si es igual a 0 se suspende.
    + port/increase. Incrementa el valor del semaforo en uno. 
  + Para asignar recursos.
  
 + Problemas de sincronización.
  + Condición de carrera. Ocuren cuando el resultado depende del orden en que se ejecutan los hilos.
  + Deadlock: Cuando dos o mas hilos están esperando por un recurso que no se libera.
  + Productor/Consumidor: Ocurre cuando los datos se puede sobre-escribir.
  

# URL DEL COMMIT

# ¿QUÉ APRENDÍ?
