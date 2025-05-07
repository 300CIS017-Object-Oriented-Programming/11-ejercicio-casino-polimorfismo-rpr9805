PREGUNTAS
CLASES ABSTRACTAS (6 pts) 
La clase Juego es una clase abstracta. Explique qué cosas del código fuente indican que la clase es una clase abstracta

¿Qué implicaciones tiene esa decisión de diseño para este programa?. Explique


R1// Notamos qie juego es una clase abstracta incialmente ya que es la clase padre/base de todos los juegos del Casino,
ademas de que incialmente todos los metodos de los juegos son sobreescrituras de Juego, donde todos sus metodos son virtual
que en cada juego seran modificados dependiendo de su propia necesidad. 

R2// La que identifico como mas clara es que gracias al polimorfismo es mas facil manejar los juegos en Casino, ya que
debido a este todos como deriban de Juego se les trate como clase Juego y se guarden en el mismo vector en Casino. Ademas de
esto es mucho mas facil añadir juegos ya que no se terminan modificando cada juego en este caso lo que generaria problemas en
todo el programa.
