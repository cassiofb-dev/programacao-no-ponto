# [Programação no Ponto](https://www.youtube.com/channel/UC-bXJKzyZB_b5NCIvXpFX6g)

<p align="center">
  <a href="https://www.youtube.com/channel/UC-bXJKzyZB_b5NCIvXpFX6g">
    <img src="https://i.imgur.com/jM2i9BD.png" alt="logo" width="256" />
  </a>
</p>

## Sumário
- [Programação no Ponto](#programação-no-ponto)
  - [Sumário](#sumário)
  - [Sobre](#sobre)
  - [Planejamento](#planejamento)
    - [Configurando o ambiente no windows](#configurando-o-ambiente-no-windows)
    - [Resumo da Configuração](#resumo-da-configuração)
    - [Introdução](#introdução)
    - [Iniciante](#iniciante)
    - [Intermediário](#intermediário)
    - [Avançado](#avançado)
  - [Recomendações](#recomendações)
  - [Documentação Útil](#documentação-útil)
  - [Agradecimentos](#agradecimentos)

## Sobre
Bem vindo ao repositório do canal programação no ponto, aqui você encontrará todos os códigos utilizados nas aulas. Fique a vontade para mandar mensagem através de qualquer rede social em caso de dúvida, terei o prazer de ajudar.

## Planejamento
Ordem que as aulas no youtube serão postadas.

### Configurando o ambiente no windows
Nessa playlist ensino como instalar o windows do zero na máquina virtual e configurar o ambiente básico para desenvolver, segue o [link da playlist](https://www.youtube.com/playlist?list=PLWWWueTSmaQ6tkqUusoYVvdjANp7Qekkx).

- [x] Instalando o Windows
- [x] Instalando o Chocolatey
- [x] Instalando o gcc
- [x] Instalando o Python
- [x] Instalando o Java
- [x] Instalando o Node
- [x] Instalando o git
- [x] Instalando o VSCode

### Resumo da Configuração

Abra o PowerShell como administador e rode os scrits em ordem:
```sh
Set-ExecutionPolicy AllSigned
```
```sh
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))
```
```sh
choco
```

Se aparecer:
```sh
Chocolatey v0.10.15
Please run 'choco -?' or 'choco <command> -?' for help menu.
```
Tudo ocorreu bem e você instalou o chocolatey (a versão pode ser superior a minha).

Instalando gcc:
```sh
choco install mingw
```

Instalando o NodeJS:
```sh
choco install nodejs
```

Instalando o Python3:
```sh
choco install python
```

Instalando o Java (JDK8):
```sh
choco install jdk8
```

Instalando o git:
```sh
choco install git
```

### Introdução
Nessa playlist ensino o básico das seguintes linguagens de programação cobrindo os assuntos:

1.  Função main
2.  Input e Output
3.  Variáveis
4.  Operações Matemáticas
5.  Operador Modular
6.  Inteiro e Ponto Flutuante
7.  If
8.  Loop While
9.  Loop For
10. Array
11. Matriz

- [ ] C - (em andamento)
- [ ] C++
- [ ] JavaScript

### Iniciante
Nessa playlist você irá aprender o básico das seguintes linguagens cobrindo os seguintes assuntos:

1.  String
2.  Concatenar Strings
3.  Comparar Strings
4.  Tamanho da String
5.  Funções
6.  Variável Global
7.  Váriavel Local
8.  Váriavel Estática
9.  Função dentro de Função
10. Funções Recursivas
11. Função recebendo Arrays
12. Função recebendo Matrizes

- [ ] C
- [ ] C++
- [ ] JavaScript

### Intermediário
Nessa última playlist veremos um pouco a fundo implementações de algoritmos/implementações específicos.

Para C:

1. Gerar valores aleatórios
2. Bubble    Sort
3. Selection Sort
4. Insertion Sort
5. Merge     Sort
6. Ponteiros
7. qsort()
8. Estruturas

Para C++:

1. Gerar valores aleatórios
2. Bubble    Sort
3. Selection Sort
4. Insertion Sort
5. Merge     Sort
6. Ponteiros
7. namespace
8. std::sort()
9. Classes

Para JavaScript:

1. JavaScript Moderno ES6
2. Array Map
3. Array Filter
4. Array Reduce
5. Array Sort
6. Datas
7. Objetos

- [ ] C
- [ ] C++
- [ ] JavaScript

### Avançado
Nessa última playlits iremos ver o início do avançado das linguagens de programação com alguns exemplos.

Para C/C++:

1. Alocando Memória Dinamicamente
2. Diretivas DEFINE e TYPEDEF
3. Lista encadeada simples
4. Lista duplamente encadeada
5. Lista circular
6. Árvore binária
7. Hash

Para JavaScript:

1. Manipulando a DOM
2. Eventos
3. Programação Assíncrona
4. Fetch
5. Pegando dados de uma API rest

## Recomendações
- [Curso de C](https://www.youtube.com/playlist?list=PLa75BYTPDNKZWYypgOFEsX3H2Mg-SzuLW)
- [Curso de C++](https://www.youtube.com/playlist?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40)
- [Curso de JavaScript](https://www.youtube.com/playlist?list=PLHz_AreHm4dlsK3Nr9GVvXCbpQyHQl1o1)
- [Rocketseat - WebDev](https://app.rocketseat.com.br/discover/courses)
- [Projeto ODIN - WebDev](https://www.theodinproject.com/)
- [Kaggle - Python](https://www.kaggle.com/learn/overview)
- [Fast AI - Inteligência Artificial](https://www.fast.ai/)
- [FreeCodeCamp](https://www.freecodecamp.org/)

## Documentação Útil
- [Mozilla - Front End WebDev](https://developer.mozilla.org/en-US/docs/Learn/Front-end_web_developer)
- [Google - Manual de Boas Práticas](https://google.github.io/styleguide/)
- [GNU - Manual da Linguagem C](https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html)
- [Microsoft - Manual da Linguagem C++](https://docs.microsoft.com/en-us/cpp/cpp/cpp-language-reference?view=msvc-160)
- [ECMA - Manual do JavaScript ES6](https://262.ecma-international.org/6.0/)

## Agradecimentos

- [Artista da Foto de Perfil](https://pixabay.com/users/janjf93-3084263/)
- [Artista do Banner](https://pixabay.com/users/geralt-9301/)

---

![banner](https://i.imgur.com/mQL5DVd.jpg)

---