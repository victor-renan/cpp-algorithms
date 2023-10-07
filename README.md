<h1 align="center">🖥️ Data Structures and Algorithms in C++ 💻</h1>

Some annotations of DSA topics.

### Tests

- g++ (GCC) 13.1.1
- GNU Make 4.4.1

Clone this repository and go inside the path:

```zsh
git clone https://github.com/victor-renan/cpp-algorithms
cd cpp-algorithms
```
## Estruturas de Dados (ED)

`Estruturas de Dados` são formatos específicos que compreendem o armazenamento, organização, relacionamento e as operações envolvem dados na memória do computador. Em suma, pode-se definir estruturas de dados como maneiras particulares de organizar dados na memória.

As EDs são acessadas na memória do computador através de `ponteiros` - strings de bits que contém o endereço que cada dado ocupa. Em uma comparação análoga, os ponteiros são como se fossem os números das páginas de um livro, que referenciam a posição de cada página e facilitam seu acesso.

Cada estrutura de dados possui uma aplicação específica em problemas computacionais, onde são levadas em consideração as performances de suas operações em função do seu **tempo de execução** e **espaço auxiliar**.

## Tipos Abstratos de Dados (TAD)

`Tipos Abstratos de Dados (TAD)` são representações do que cada tipo de dado pode conter. Um dado do tipo `String` por exemplo, deve receber, obrigatoriamente, uma cadeia de caracteres; do tipo `int`, números inteiros; e assim por diante.

Os tipos abstratos não definem como os dados são estruturados e armazenados. Isso é um papel das **Estruturas de Dados** como elencado no tópico anterior.

## Arrays

`Arrays` são uma das estruturas de dados mais elementares. Elas organizam os dados de maneira sequencial e contígua, de maneira que cada elemento armazenado pode ser referenciado por um índice.

As `Arrays` também requerem que os dados armazenados sejam do mesmo tipo, pois cada tipo consome uma parcela de `bytes` específica da memória. Um dado `char`, por exemplo, ocupa 1 _byte_; um `int`, 4 _bytes_; e outros.

Abaixo está um exemplo na linguagem delimitada nessas anotações, `C++`.

```cpp
int inteiros[3] = {1, 2, 3};
cout << inteiros[0] << endl; // 1

char caracteres[3] = {'A', 'B', 'C'};
cout << caracteres[0] << endl; // A

bool booleanos[2] = {true, false};
cout << booleanos[0] << endl; // true
```

Ao declarar uma `Array` não-dinâmica é necessário delimitar a quantidade de unidades de espaço que a mesma ocupará na memória, como no exemplo acima, `inteiros[3]` indica que a `Array` `inteiros` ocupará 3 unidades de espaço de 1 _byte_ cada uma.

Esse problema não ocorre em uma `Array` dinâmica. Um exemplo é o tipo `vector` do `C++`, que não carece da delimitação de espaço e pode ser :

```cpp
vector<int> inteiros = {1, 2, 3};
inteiros.push_back(4); // adiciona o item 4

// inteiros agora tem valor {1, 2, 3, 4}
```

Assim, numa `Array` não-dinâmica, é possível aumentar e diminuir seu tamanho pela inserção ou remoção de itens.

Para referenciar e retornar qualquer elemento de uma `Array` **arr** de **n** elementos utiliza-se a notação `arr[i]`, onde **i** é o número de índices possíveis que vai de 0 a **n-1** [Pois começamos a contar os índices não pelo 1, mas pelo 0]. [Ver exemplo acima]

Desse modo, se quisermos referenciar o 2° elemento de **arr**, usamos `arr[1]`; o 4°, `arr[3]`; e assim por diante, lembrando de não ultrapassar o índice máximo, que é **n-1**.

### Arrays de tipos diferentes

Em linguagens de alto nível, como `Python` e `Javascript`, é possivel atribuir valores de múltiplos tipos a uma `Array`, por exemplo:

```javascript
// Javascript
const mutliplos = [1, 'A', true]
```
```python
# Python
multiplos = [1, 'A', True]
```

Isso só é possível porque a linguagem considera todos os elementos como tendo o tamanho do maior elemento para, assim, definir o espaço na memória.

No caso acima, o maior tipo de dado é o `int`, que vale 4 _bytes_. Logo, todos os elementos, ainda que seu tipo seja menor, ocuparão 4 _bytes_ em memória.

### Operações Fundamentais

| Operações | Complexidade de tempo (Big-O)|
|-----------|--------------|
| Buscar índice de um elemento | Linear O(n) |
| Mudar o valor de um elemento pelo índice | Constante O(1) |
| Inserir elemento em um índice | Linear O(n) |
| Deletar elemento em um índice | Linear O(n) |
| Percorrer todos os elementos | Linear O(n) |

**Exemplo em C++:** `algorithms/arrays/src/operations.cpp`
