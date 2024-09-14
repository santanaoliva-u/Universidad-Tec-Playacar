---
date: 2024-09-08T22:15
tags:
  - Daily
cssclasses:
  - daily
  - page-white
  - pen-black
  - center-images
  - center-titles
autor: Jesus Uriel Santana Oliva
Profesor:
---
![[Pasted image 20240908224924.png]]
### *Sunday, September 8th, 2024*


# FUNDAMENTOS DE COMPUTACIÓN


![[Pasted image 20240908231054.png]]


 Alumno: Jesus Uriel Santana Oliva
 Matricula: 4493
 Grado : 1 B
 Cuatrimestre: 01
 Materia: 1. [215 FUNDAMENTOS DE INGENIERÍA DEL SOFTWARE 25-1](https://moodle.tecplayacar.edu.mx/course/view.php?id=6032 "215 FUNDAMENTOS DE INGENIERÍA DEL SOFTWARE 25-1")


### Fundamentos de Computación
Los **fundamentos de computación** que abarcan el entorno operativo y de desarrollo se refieren a cómo los sistemas de software interactúan con el hardware y cómo este último proporciona el soporte necesario para que el software se ejecute de manera eficiente. Este entorno incluye tanto los sistemas operativos como los lenguajes de programación, el hardware subyacente y las herramientas de desarrollo. Los fundamentos del software se dividen en varias partes. 

[Fundamentos de Computación](https://docs.google.com/presentation/u/0/d/1YTmJw59Nsjyq1kCqpSxyfGqzgNM0zuTURy2JGhk0OJg/htmlpresent?pli=1)

### 1. **Entorno Operativo y Sistemas Operativos**
Un sistema operativo (SO) es el software principal que gestiona el hardware del ordenador y proporciona servicios a otras aplicaciones. Los sistemas operativos crean una capa de abstracción entre el hardware y el software, lo que permite que las aplicaciones se ejecuten sin tener que lidiar directamente con las complejidades del hardware. Algunos de sus componentes claves son:

- **Kernel**: ![[Pasted image 20240908222113.png]] Parte central del SO que gestiona las operaciones básicas del sistema (como la memoria, procesos y la interacción con el hardware). [Referencia kernel](https://salesystems.es/que-es-un-kernel/)

- **Gestión de Procesos**: ![[Pasted image 20240908222149.png]] Controla la ejecución de programas y la asignación de recursos. [Gestión de Procesos](https://openaccess.uoc.edu/bitstream/10609/8179/1/fserranocaTFC0611.pdf)

- **Gestión de Memoria**: ![[Pasted image 20240908222346.png]] Asegura que diferentes procesos no interfieran entre sí y optimiza el uso de la memoria. [Gestión de Memoria](https://www.oposinet.com/temario-de-informatica/tema-17-sistemas-operativos-gestin-de-memoria/)

- **Gestión de Almacenamiento**: ![[Pasted image 20240908222441.png]] Controla el acceso a los dispositivos de almacenamiento, organizando datos en archivos y directorios. [Gestión de Almacenamiento](https://www.dell.com/es-mx/dt/storage/powerstore-storage-appliance.htm)

- **Sistema de Archivos**: ![[Pasted image 20240908222640.png]] Organiza los datos en un formato que el sistema operativo y las aplicaciones puedan entender.

%3E Ejemplos de SO comunes incluyen Linux, Windows y macOS. Son fundamentales para el desarrollo de software, ya que proporcionan un entorno donde se compila, prueba y ejecuta el código. En el caso de un ingeniero, es recomendable usar Linux y empezar desde hoy.

### 2. **Lenguajes de Programación y Herramientas de Desarrollo**
El entorno de desarrollo está compuesto por lenguajes de programación y herramientas que los desarrolladores usan para crear software. Estos entornos permiten que el código se ejecute de manera eficiente sobre el hardware subyacente.

- **Lenguajes de Bajo Nivel (Lenguaje Ensamblador)** ![[Pasted image 20240908230836.png]] Interactúan directamente con el hardware y son más rápidos. Es recomendable usarlos más en el área de ciberseguridad. [Referencia sobre lenguajes](https://desarrollo.espino.info/files/2017/07/niveles-lenguajes-programacion.png)

- **Lenguajes de Alto Nivel (C, C++, Python, Java)** ![[Pasted image 20240908230938.png]] Proporcionan abstracción del hardware, lo que facilita el desarrollo de software complejo. [Referencia](https://desarrollo.espino.info/files/2017/07/niveles-lenguajes-programacion.png)

- **Entornos de Desarrollo Integrados (IDE)**: ![[Captura de pantalla_2024-09-08_22-48-08.png]] Herramientas como Visual Studio, Eclipse o IntelliJ proporcionan utilidades para escribir, depurar y ejecutar código de manera eficiente. 

### 3. **Interacción entre Software y Hardware**
El hardware es la base sobre la que se ejecuta el software. Los desarrolladores deben entender cómo funciona el hardware para optimizar el software, asegurándose de que aproveche los recursos disponibles (procesador, memoria, etc.).

- **Arquitectura de Computadoras**: ![[Pasted image 20240908231301.png]] Define cómo están organizados los componentes principales de un ordenador.

- **Unidades de Procesamiento**: ![[Pasted image 20240908231332.png]] El procesador ejecuta las instrucciones del software. [Referencia CPU](https://www.datacentermarket.es/dcm-xl/cpu-unidad-central-de-procesamiento-guia-completa/)

- **Memoria y Caché**: ![[Pasted image 20240908231422.png]] La memoria RAM y la caché de la CPU almacenan temporalmente los datos. [Referencia Memoria Caché](https://ayudaleyprotecciondatos.es/2020/07/23/memoria-cache/)

### 4. **Virtualización y Contenedores**
Las tecnologías como la virtualización y los contenedores permiten ejecutar varios sistemas operativos o aplicaciones de forma aislada.

- **Máquinas Virtuales (VMs)**: Simulan un entorno de hardware completo para que varios sistemas operativos puedan coexistir en un solo dispositivo físico. [Referencia](https://whitestack.com/es/blog/cloud-computing/)

- **Contenedores (Docker, Kubernetes)**: ![[Pasted image 20240908231807.png]] A diferencia de las VMs, los contenedores comparten el kernel del SO host, haciéndolos más livianos y eficientes. [Referencia Docker](https://whitestack.com/es/blog/cloud-computing/)

### 5. **Hardware: Procesadores y Computación en Paralelo**
Los avances en hardware, como los procesadores multinúcleo y las GPUs, han permitido el desarrollo de software que aprovecha la computación en paralelo.

- **Procesadores Multinúcleo**: ![[Pasted image 20240908233524.png]] Permiten que múltiples hilos de ejecución se ejecuten simultáneamente. [Referencia Procesadores](https://chsos20171914562blog.wordpress.com/2017/02/14/procesador-multinucleo/)

- **Computación en la Nube**: ![[Pasted image 20240908233626.png]] Servicios como **AWS** o **Azure** proporcionan hardware escalable a través de la virtualización. [Referencia Cloud](https://whitestack.com/es/blog/cloud-computing/)

### 6. **Seguridad y Optimización**
![[Pasted image 20240908235323.png]]
Es crucial que tanto el entorno operativo como el hardware proporcionen mecanismos de seguridad para proteger el software y los datos.

- **Seguridad del Sistema Operativo**: Los SO modernos incluyen gestión de permisos, control de acceso y protección de memoria. [Referencia Seguridad](https://aesyc.com/?gad_source=1&gclid=Cj0KCQjwlvW2BhDyARIsADnIe-Ky38YD7Qw0vF0DoT-zly1Hi3OxUQ5ilPa1uL_ZnSSdJ2IzqY5XU-oaAgKLEALw_wcB)

- **Optimización del Rendimiento**: Los desarrolladores pueden ajustar el software para que funcione eficientemente en hardware específico. [Referencia Optimización](https://www.trabajosocial.unlp.edu.ar/uploads/docs/mantenimiento_del_ordenador_y_optimizacion_del_sistema_operativo.pdf)[Referencia de Optimación y Seguridad](https://prezi.com/olpdzrzxvhf8/optimizacion-del-sistema-operativo/)

---

### Bibliografía 

- Alura. (n.d.). *Entienda el código binario*. [Disponible en](https://www.aluracursos.com/blog/assets/entienda-el-codigo-binario/banner.jpg)
- Datacenter Market. (n.d.). *Unidad Central de Procesamiento*. [Disponible en](https://www.datacentermarket.es/dcm-xl/cpu-unidad-central-de-procesamiento-guia-completa/)
- Oposinet. (n.d.). *Gestión de Memoria*. [Disponible en](https://www.oposinet.com/temario-de-informatica/tema-17-sistemas-operativos-gestin-de-memoria/)
- Serrano, F. (2011). *Gestión de Procesos*. UOC. [Disponible en](https://openaccess.uoc.edu/bitstream/10609/8179/1/fserranocaTFC0611.pdf)
- Whitestack. (n.d.). *Cloud Computing*. [Disponible en](https://whitestack.com/es/blog/cloud-computing/)>)