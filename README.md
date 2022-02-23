### Projeto didático: Cérebro Eletrônico 2.0. Trata-se do aprimoramento do jogo de mesmo nome dos anos 1960 / 1970 criado e comercializado pela empresa: Brinquedos Guaporé. Soluções: Um circuito utilizando portas lógicas, outro com o Arduino Uno e por último um utilizando o microcontrolador PIC16F877A.

![](imagens/I000.jpg?raw=true "O Cérebro Eletrônico")

### Melhoramentos: No jogo original, apenas uma lâmpada indicava se as correspondências, entre as questões e as respostas, estavam corretas ou não. Na versão 2.0 temos dois LEDs, um que indica correspondências corretas e outra para as não corretas. No jogo original as correspondências erram feitas com pontas de provas. Na versão 2.0 são utilizados botões para as questões e para as respostas. No jogo original as correspondências entre as questões e respostas eram fixas. Na versão 2.0 é possível até oito combinações diferentes de correspondências através de três chaves.

![](imagens/I002.png?raw=true "Esquema original")

### Links:
| Ferramenta | Link |
| :--- | :---- |
| SimulIDE | https://www.simulide.com/p/home.html |
| Arduino | https://www.arduino.cc |
| mikroC PRO for PIC | https://www.mikroe.com/mikroc-pic |

### Arquivos:
| Arquivo | Descrição |
| :--- | :---- |
| C000.simu   | Circuito baseado na versão original com um LED e com botões no lugar das pontas de provas. |
| C001.simu   | Circuito com portas logicas (Eletrônica Digital). Com dois LED's indicadores de correspondências certas ou não. |
| C002.ino    | Código para o circuito C002.simu (Arduino Uno). |
| C002.simu   | Circuito com o Arduino Uno. Com dois LED's indicadores de correspondências certas ou não. |
| C003.c      | Código para o circuito C003.simu (PIC16F877A). |
| C003.simu   | Circuito com o microcontrolador PIC16F877A. Com dois LED's indicadores de correspondências certas ou não. |

### Correspondências:
| Chaves 1, 2 e 3 | Questão | Resposta | Chaves 1, 2 e 3 | Questão | Resposta |
| :--- | :----: | :----: | :--- | :----: | :----: |
| LOW LOW LOW | A | S | LOW LOW HIGH | A | L |
| LOW LOW LOW | B | R | LOW LOW HIGH | B | K | 
| LOW LOW LOW | C | P | LOW LOW HIGH | C | T |
| LOW LOW LOW | D | M | LOW LOW HIGH | D | Q |
| LOW LOW LOW | E | K | LOW LOW HIGH | E | N |
| LOW LOW LOW | F | T | LOW LOW HIGH | F | P |
| LOW LOW LOW | G | N | LOW LOW HIGH | G | O |
| LOW LOW LOW | H | O | LOW LOW HIGH | H | R |
| LOW LOW LOW | I | L | LOW LOW HIGH | I | M |
| LOW LOW LOW | J | Q | LOW LOW HIGH | J | S |

| Chaves 1, 2 e 3 | Questão | Resposta | Chaves 1, 2 e 3 | Questão | Resposta |
| :--- | :----: | :----: | :--- | :----: | :----: |
| LOW HIGH HIGH | A | S | HIGH HIGH HIGH | A | O |
| LOW HIGH HIGH | B | M | HIGH HIGH HIGH | B | K | 
| LOW HIGH HIGH | C | P | HIGH HIGH HIGH | C | Q |
| LOW HIGH HIGH | D | L | HIGH HIGH HIGH | D | N |
| LOW HIGH HIGH | E | R | HIGH HIGH HIGH | E | M |
| LOW HIGH HIGH | F | O | HIGH HIGH HIGH | F | L |
| LOW HIGH HIGH | G | N | HIGH HIGH HIGH | G | P |
| LOW HIGH HIGH | H | K | HIGH HIGH HIGH | H | T |
| LOW HIGH HIGH | I | T | HIGH HIGH HIGH | I | S |
| LOW HIGH HIGH | J | Q | HIGH HIGH HIGH | J | R |

| Chaves 1, 2 e 3 | Questão | Resposta | Chaves 1, 2 e 3 | Questão | Resposta |
| :--- | :----: | :----: | :--- | :----: | :----: |
| LOW HIGH LOW | A | O | HIGH LOW HIGH | A | T |
| LOW HIGH LOW | B | L | HIGH LOW HIGH | B | S | 
| LOW HIGH LOW | C | T | HIGH LOW HIGH | C | K |
| LOW HIGH LOW | D | S | HIGH LOW HIGH | D | O |
| LOW HIGH LOW | E | P | HIGH LOW HIGH | E | M |
| LOW HIGH LOW | F | K | HIGH LOW HIGH | F | N |
| LOW HIGH LOW | G | M | HIGH LOW HIGH | G | L |
| LOW HIGH LOW | H | Q | HIGH LOW HIGH | H | Q |
| LOW HIGH LOW | I | N | HIGH LOW HIGH | I | P |
| LOW HIGH LOW | J | R | HIGH LOW HIGH | J | R |

| Chaves 1, 2 e 3 | Questão | Resposta | Chaves 1, 2 e 3 | Questão | Resposta |
| :--- | :----: | :----: | :--- | :----: | :----: |
| HIGH LOW LOW | A | Q | HIGH HIGH LOW | A | S |
| HIGH LOW LOW | B | L | HIGH HIGH LOW | B | R | 
| HIGH LOW LOW | C | O | HIGH HIGH LOW | C | P |
| HIGH LOW LOW | D | N | HIGH HIGH LOW | D | M |
| HIGH LOW LOW | E | T | HIGH HIGH LOW | E | K |
| HIGH LOW LOW | F | K | HIGH HIGH LOW | F | T |
| HIGH LOW LOW | G | M | HIGH HIGH LOW | G | N |
| HIGH LOW LOW | H | P | HIGH HIGH LOW | H | O |
| HIGH LOW LOW | I | R | HIGH HIGH LOW | I | L |
| HIGH LOW LOW | J | S | HIGH HIGH LOW | J | Q |
