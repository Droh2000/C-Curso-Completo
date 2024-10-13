/*
    Modos de Apertura de un Archivo

    r -> Read para saber si existe un archivo o no
    w -> Write es para crear un nuevo archivo

    Al abrir el archivo con fopen(), se espera como segundo argumento el modo de tratar
    el archivo, Fundamentalmente se establece si el archivo es de lectura, escritura o añadido
    y si es de texto o binario. Los modos basicos se expresan en esta tabla

        Modo  |   Significado
        <<r>>    Abre para lectura
        <<W>>    Abre para crear nuevo archivo (Si ya existe se pierde el contenido)
        <<a>>    Abre para agregar el final (Cuando ya contiene texto)
        <<r+>>   Abre archivo ya existente para modificar (leer/escribir)
        <<W+>>   Crea un archivo para escribir/Leer (Si ya existen se pierden los datos)
        <<a+>>   Abre el archivo para modificar (Escribir/Leer) al final, si no existe es como el W+
    
    Ademas se utiliza la letra "t" para modo de texto y la "b" para modo binario como utlima letra del parametro
    donde se especifica el modo en la funcion fopen(), (Tambien se puede escribir como caracter intermedio). 
    Por consiguiente los modod de abrir un archivo de texto es:

        <<rt>>, <<wt>>, <<at>>, <<r+t>>, <<w+t>>, <<a+t>>
    
    y los modos de abrir un archivo binario es:

        <<rb>>, <<wb>>, <<ab>>, <<r+b>>, <<w+b>>, <<a+b>>
    
*/