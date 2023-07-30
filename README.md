
<h1 align="center">🖥️ Algorithms and Data Structures in C++ 💻</h1>

<div align="center">
  
  ![CPP](https://img.shields.io/badge/C++-00599C.svg?style=for-the-badge&logo=C++&logoColor=white)
  
</div>

This repo was destinated to study this area of CS, with the purpose of understanding the main principles and techniques, in addition to get more experience and familiarity with the low-level language.

### Requirements

- g++ (GCC) 13.1.1
- GNU Make 4.4.1

Clone this repository and go inside the path:

```zsh
git clone https://github.com/victor-renan/cpp-algorithms
cd cpp-algorithms
```
## Estruturas de Dados (ED)

`Estruturas de Dados` são formatos específicos que compreendem o armazenamento, organização, relacionamento e as operações envolvem dados na memória do computador. Em suma, pode-se definir estruturas de dados como maneiras particulares de organizar dados na memória.

O espaço de alocação das EDs na memória é referenciado através de `ponteiros`, que são strings de bits que contém o endereço que cada dado ocupa. Em uma comparação análoga, os ponteiros são como se fossem os números das páginas de um livro, que referenciam a posição de cada página e facilitam seu acesso.

Cada estrutura de dados possui uma aplicação específica em problemas computacionais, onde são levadas em consideração as performances de suas operações em função do **tempo de execução** e do **espaço auxiliar** que elas ocupam.

## TAD vs ED

Os `Tipos Abstratos de Dados (TAD)` são representações matemáticas de **tipos de dados**. Eles especificam o que pode ser armazenado, e as operações suportadas pelos dados. Uma `Estrutura de Dados (ED)` são os **formatos** representacionais pelos quais os dados são armazenados e acessados. A grosso modo, os TADs indicam matematicamente o tipo de um dado e o que ele pode fazer, por exemplo: 1, 2, 3... são inteiros, e com eles dá para somar, subtrair, dividir e multiplicar. Já as EDs indicam o jeito que ele irá ocupar a memória, por exemplo: [1, 2, 3] é uma array de inteiros, e nela é possível adicionar, remover, obter e mudar um elemento.

## Arrays

Arrays são coleções de dados de mesmo tipo nas quais cada dado é alocado de maneira contígua na memória do computador. cada elemento de uma array equivale a uma porção de bytes na memória com base no seu tipo, como dado pelo exemplo abaixo:

```cpp
// Array de inteiros, onde cada elemento vale 4 bytes
int inteiros[3] = {1, 2, 3};

// Array de caracteres onde cada elemento vale 1 byte
char caracteres[3] = {'A', 'B', 'C'};

// Array de booleanos, onde cada elemento vale 1 byte
bool booleanos[2] = {true, false};
```

Desse modo, tem-se que a quantidade total de dados que uma array ocupa na memória equivale ao tamanho da mesma vezes o número de bytes que cada elemento ocupa.

### Oxe... mas em Javascript e Python as array pode ter elemento de tipo diferente. E aí?

Para isso ser possível nessas linguagens, ocorrem muitas operações por debaixo dos panos. Em arrays, nativamente, não é possível definir elementos de tipos diferentes, pois geraria problemas quanto ao acesso de dados. Então, quando definimos uma array em Javascript, ou uma lista em Python, com elementos de tipos diferentes, os elementos são alocados na memória com base no maior elemento. Desse, modo, tomemos como exemplo uma array com elementos dos tipos inteiro, char e booleano:

```javascript
// Array em Javascript com elementos de tipos diferentes
const arrayTunada = [1, 'A', true]

```

Em Python, seria:

```python
# Array em Python com elementos de tipos diferentes
array_tunada = [1, 'A', True]

```

Nesses dois exemplos, temos que o tipo inteiro é o que ocupa mais bytes (4) na memória. Assim, todos os elementos serão alocados ocupando 4 bytes, como segue no exemplo abaixo:

<div align="center">

![Imagem](https://i.imgur.com/nxL7MXT.png)

</div>

### Acesso dos dados

Os elementos de uma array são acessados pelo `índice` de sua posição na mesma, dados pela notação `A[i]` onde _A_ é a array, e _i_ é o índice do elemento, que varia de _0 a n - 1_ onde _n_ é numero de elementos, ou seja, o **tamanho da array**. No exemplo acima, o valor booleano `true` pode ser referenciado pela notação `arr[2]`.

### Arrays estáticas e dinâmicas

As arrays podem ser classificadas como estáticas, caso o número de elementos seja fixo, ou dinâmica, caso esse número seja variável.

### Operações fundamentais de uma array

| Operações | Complexidade de tempo (Big-O)|
|-----------|--------------|
| Buscar índice de um elemento | Linear O(n) |
| Mudar o valor de um elemento pelo índice | Constante O(1) |
| Inserir elemento em um índice | Linear O(n) |
| Deletar elemento em um índice | Linear O(n) |