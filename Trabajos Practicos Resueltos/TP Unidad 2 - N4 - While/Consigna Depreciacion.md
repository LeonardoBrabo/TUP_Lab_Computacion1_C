# Consigna:

**Laboratorio de Computación I** 

**Trabajo Práctico - Unidad 2 –Sentencias Repetitivas- Estructura WHILE** 

Consideremos cómo calcular la depreciación anual para algunos objetos susceptibles a ello, tales como un edificio, una máquina, etc. Hay tres métodos comúnmente usados para el cálculo de la depreciación, que se suelen llamar método de línea recta, método de balance doblemente declinante, y el método de la suma de los dígitos de los años.  

Deseamos escribir un programa en C que nos permita seleccionar algunos de estos métodos para cada conjunto de cálculos. 

El proceso comenzará leyendo el valor original (sin depreciar) del objeto, la vida del objeto (el número de años en los que se depreciará) y un entero que indique qué método se utilizará. 

A continuación se calculará la depreciación anual y el valor remanente (no depreciado) del objeto, y se escribirá para cada año.  El **método de línea recta** es el más fácil de utilizar. En este método el valor original del objeto se divide por su vida (número total de años). El cociente resultante será la cantidad en que el objeto se deprecia anualmente. Por ejemplo, si un objeto de 8000 pesos se deprecia en diez años, entonces la depreciación anual será 8 OOO/10 = 8 OO  pesos. Por tanto, el valor del objeto habrá disminuido en 800 pesos cada año. Nótese que la depreciación anual es la misma cada año cuando se utiliza este método.  Cuando  se  utiliza  **el  método  de balance  doblemente  declinante**,  el  valor  del  objeto  disminuye  cada  año  en  un porcentaje constante. Por tanto, la verdadera cantidad depreciada, en  pesos, variará de un año al siguiente. Para obtener el factor de depreciación, dividimos dos por la vida del objeto. Este factor se multiplica por el valor del objeto al comienzo de cada año (y no el valor original del objeto) para obtener la depreciación anual. Supongamos, por ejemplo, que deseamos depreciar un objeto de 8000 pesos en diez años, utilizando el método. del balance doblemente declinante. El factor de depreciación será 2/10 = 0.2. Por tanto, la depreciación el primer año será O. 2 O x 8 OOO = 16OOpesos. La depreciación del segundo año será O. 2 O x ( 8 OOO 16 OO) = O. 2 O x 640 O = 1280 pesos; la depreciación del tercer año será O.20 x 5120 = 1024 pesos, y asi sucesivamente. 

En el **método de la suma de los dígitos de los años**, el valor del objeto irá disminuyendo en un porcentaje que es diferente cada año. El factor de depreciación será una fracción cuyo denominador es la suma de los dígitos de 1 a n, en donde n representa la vida del objeto. Si, por ejemplo, consideramos un tiempo de vida de diez años, el denominador será 1 + 2 + 3 + + 10 = 55. Para el primer año el numerador será n, para el segundo año será (n - 1), para el tercer año (n - 2), y así sucesivamente. La depreciación anual se obtiene multiplicando el factor de depreciación por el valor original del objeto. Para ver cómo funciona el método de la suma de los dígitos de los años, depreciemos de nuevo un objeto de 8000 pesos en diez años. La depreciación del primer año será (10 /55) x 8 OOO = 1454. 55 pesos; el segundo año será (9 / 55 ) \* 8 OOO = 13 O9 . O9 pesos, y así sucesivamente.  

Definamos ahora los siguientes símbolos, que nos permitirán escribir el programa.  

- val = el valor en curso del objeto  
- aux = el valor original del objeto (el valor original de val)  
- deprec = la depreciación anual 
- n = el número de años por los que se depreciará el objeto  
- anual = un contador que tomará valores de 1 a n  
- eleccion = un entero que indica qué método se ha de utilizar 

Presentamos a continuación el guión del programa en C.  

1. Declarar todas las variables e inicializar la variable entera eleccion a 0 (en realidad, podemos asignar cualquier valor distinto de 4 a eleccion). 
2. Repetir todos los pasos siguientes si el valor de eleccion no es igual a 4. 
    1. Leer el valor de eleccion, que indica el tipo de cálculo que se llevará a cabo. Este valor sólo puede ser 1, 2, 3 o 4. (Cualquier otro valor se considerará un error.)  
    2. Si eleccion tiene asignado el valor de 1, 2 o 3, leer los valores de val y n. 
    3. Dependiendo del valor asiguado a eleccion, saltar a la parte adecuada del programa y realizar los cálculos indicados. En particular, 

        - Si eleccion tiene asignado el valor de 1, 2 o 3, calcular la depreciación anual y el nuevo valor del objeto año a año, utilizando el método apropiado según indique el valor de eleccion. Escribir los resultados según se vayan calculando, año a año.

---

