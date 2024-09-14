
Jesus Uriel Santana Oliva

## Tipos de topologías de red
![[Pasted image 20240905153216.png]]

Un administrador de red tiene varias oUntitledpciones a la hora de elegir qué tipo de topología utilizar. La elección dependerá del tamaño y la escala de su organización, sus objetivos comerciales y su presupuesto.

  

### Topologia en Estrella

![](https://static.wixstatic.com/media/e57e4d_1bb832a2630c4ad8a7650e8cf819e0e3~mv2.png/v1/fill/w_49,h_47,al_c,q_85,usm_0.66_1.00_0.01,blur_2,enc_auto/e57e4d_1bb832a2630c4ad8a7650e8cf819e0e3~mv2.png)

Es el tipo de configuración más común. La red está organizada de modo que los nodos estén conectados a un dispositivo central (un hub), que actúa como servidor. El hub gestiona la transmisión de datos a través de la red. Es decir, cualquier dato enviado a través de la red viaja a través del dispositivo central antes de terminar en su destino

  

**Ventajas:**

- Gestión conveniente desde una ubicación central
    
- Si un nodo falla, la red aún funciona
    
- Los dispositivos se pueden agregar o apartaer sin interrumpir la red
    
- Más fácil de identificar y aislar los problemas de rendimiento
    

**Desventajas:**

- Si el dispositivo central falla, toda su red dejará de funcionar.
    
- El rendimiento y el ancho de banda están limitados por el nodo central
    
- Puede ser costoso de operar
    

  

### Topología en Bus

![](https://static.wixstatic.com/media/e57e4d_1035fac5bf37427a854e9b7059598ad3~mv2.png/v1/fill/w_49,h_47,al_c,q_85,usm_0.66_1.00_0.01,blur_2,enc_auto/e57e4d_1035fac5bf37427a854e9b7059598ad3~mv2.png)

También llamada topología de red troncal, bus o línea, guía los dispositivos a lo largo de un solo cable que se extiende desde un extremo de la red hasta el otro. Los datos fluirán a lo largo del cable a medida que viaja a su destino.

  
oUntitledpciones
**Ventajas:**

- Económico para redes más pequeñas
    
- Diseño simple; todos los dispositivos conectados a través de un cable
    
- Se pueden agregar más nodos alargando la línea
    

**Desventajas:**

- La red es vulnerable a fallas de cables.
    
- Cada nodo agregado disminuye la velocidad de transmisión
    
- Los datos solo se pueden enviar en una dirección a la vez.
    

  

### Topología en Anillo

![](https://static.wixstatic.com/media/e57e4d_6d5a93cf703646a8bd6d7fde319522b6~mv2.png/v1/fill/w_350,h_325,al_c,q_85,usm_0.66_1.00_0.01,enc_auto/e57e4d_6d5a93cf703646a8bd6d7fde319522b6~mv2.png)

Los nodos se configuran en un patrón circular. Los datos viajan a través de cada dispositivo a medida que viajan a través del anillo. En una red grande, es posible que se necesiten repetidores para evitar la pérdida de paquetes durante la transmisión. Las topologías de anillo se pueden configurar como anillo único (half-dúplex) o anillo doble (full-dúplex) para permitir que el tráfico fluya en ambas direcciones simultáneamente.

  

**Ventajas:**

- Costo beneficio
    
- Barato de instalar
    
- Problemas de rendimiento fáciles de identificar
    

**Desventajas:**

- Si un nudo cae, puede caer varios nudos con él.
    
- Todos los dispositivos comparten ancho de banda, lo que puede limitar el rendimiento de trasferencias.
    
- Agregar o eliminar nodos significa tiempo de inactividad para toda la red
    

  

### Topología en Árbol

![](https://static.wixstatic.com/media/e57e4d_5ff3b4409c0649529548688dfb7b974a~mv2.png/v1/fill/w_350,h_350,al_c,q_85,usm_0.66_1.00_0.01,enc_auto/e57e4d_5ff3b4409c0649529548688dfb7b974a~mv2.png)

Un nodo central conecta los hub secundarios. Estos hubs tienen una relación de padres-hijos con los dispositivos. O eixo central é como o tronco da árvore.El eje central es como el tronco del árbol. Donde las ramas se conectan son los concentradores secundarios o los nodos de control y luego los dispositivos conectados se conectan a los branches.

  

**Ventajas:**

- Extremadamente flexible y escalable
    
- Facilidad para identificar errores, ya que cada branch de la red puede diagnosticarse individualmente.
    

**Desventajas:**

- Si falla un hub central, los nodos se desconectarán (aunque las ramas pueden seguir funcionando de forma independiente)
    
- La estructura puede ser difícil de gestionar de forma eficaz
    
- Utiliza mucho más cableado que otros métodos
    

  

### Topología de Malla (Mesh)

![](https://static.wixstatic.com/media/e57e4d_d645d6783fda4a089f779bc56d2ab92b~mv2.png/v1/fill/w_350,h_322,al_c,q_85,usm_0.66_1.00_0.01,enc_auto/e57e4d_d645d6783fda4a089f779bc56d2ab92b~mv2.png)

Los nodos están interconectados. Los modos full-mesh conectan todos los dispositivos en la red directamente. En una topología de malla parcial, la mayoría de los dispositivos se conectan directamente. Esto proporciona múltiples rutas para la entrega de datos. Los datos se envían a la distancia más corta disponible para la transmisión.

  

  

**Ventajas:**

- confiable y estable
    
- Ningún fallo de un solo nodo desconecta la red
    

**Desventajas:**

- Grado complejo de interconectividad entre nodos.
    
- Mano de obra intensiva para instalar
    
- Utiliza mucho cableado para conectar todos los dispositivos.
    

  

### Topología Híbrida

  

Utiliza varias estructuras de topología. Esto es más común en organizaciones grandes donde cada departamento puede tener un tipo de topología, como estrella o línea, con el hub del departamento conectando a um hub central.

  

**Ventajas:**

- Flexibilidad
    
- Puede personalizarse según las necesidades del cliente.
    

**Desventajas:**

- La complejidad aumenta
    
- Se requiere experiencia en múltiples topologías
    
- Puede ser más difícil determinar los problemas de rendimiento.
  

Fuente: [The Network Monitor](https://www.whatsupgold.com/blog/what-is-network-topology)

