##¿Que son los registros de estado?##
El registro de estado es un registro que contiene información sobre el estado actual del procesador, dependiendo de la arquitectura este será un registro de 64 bits o un registro de 32 bits (en arquitecturas actuales).

Actualmente solo se utiliza la parte baja del registro, exactamente los 32 bits de menos peso del registro (desde 0 a 31).

Cada bit representa a una bandera o flag que expresa en qué estado se encuentra el procesador.

En programación en lenguaje ensamblador consultamos el registro de estado a través del valor de un solo bit y dependiendo del valor de ese bit interpretaremos una cosa u otra.


![Texto alternativo](http://ocw.uc3m.es/ingenieria-telematica/arquitectura-de-ordenadores/lecturas/html/images/arc/psw.png "Registro de estado")