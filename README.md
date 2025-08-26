# SOLID

## [S]ingle responsability
Un objeto solo debería tener una única razon para cambiar, es decir, cada clase debe contener únicamente
métodos cuya responsabilidad de modificación caigan sobre un único reponsable/departamento.
Puede existir una clase principal cuya función sea coordinar las acciones del otras clases.

## [O]pened/closed
Las entidades de software deben estar abiertas para su extensión, pero cerradas para su modificación.
Ejemplo: Sobreescritura de funciones de clase padre en clase derivada. De esta forma podrás modificar 
el comportamiento de la función creando nuevas clases derivadas y no cambiarás la función en la clase padre.

## [L]iskov substitution
Los objetos de un programa deberían ser reemplazables por instancias de sus subtipos sin alterar el correcto funcionamineto del programa.
No puede ocurrir que una clase derivada deje sin implementar un método sobreescrito de la clase padre y lanze una excepción si se le llama.

## [I]nterface segregation
Muchas interfaces cliente específicas son mejores que una interfaz de proposito general.
Una clase no debe depender de métodos que no usan.

## [D]epenency inversion
Depender de abstracciones, no de implementaciones. Por ejemplo indicar en el constructor de una clase interfaces como parametros y al construir
los objetos especificar la implementación concreta de la interfaz que se va a usar.
Las clases de alto nivel no deberían depender de clases de bajo nivel, ambas deberían depender de abstracciones. Las abstracciones no deberían depender de los detalles, sino los detalles deberían depender de las abstracciones.
Módulos de alto nivel (personalización del sistema). Modulos de bajo nivel (herramientas).