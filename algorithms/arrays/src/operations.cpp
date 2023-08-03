#include <iostream>
#include <vector>
#include <utils.hpp>
using namespace std;

class Operations
{
private:
  vector<int> array;

  void printArray()
  {
    cout << "{ ";
    for (int i = 0; i < array.size(); i++)
    {
      cout << array[i] << " ";
    }
    cout << "}\n";
  }

public:
  Operations()
  {
    array = {};
  }

  void setArray(vector<int> elements)
  {
    array = elements;
  }

  void percorrer()
  {
    cout << "--> Percorrer um elemento" << endl;
    cout << "percorrendo a array: { ";
    for (int i = 0; i < array.size(); i++)
    {
      cout << array[i] << " ";
    }
    cout << "}\n"
         << endl;
  }

  void buscar_elemento(int elemento)
  {
    cout << "--> Buscar um elemento" << endl;
    int index = array.size() + 1;

    for (int i = 0; i < array.size(); i++)
    {
      if (array[i] == elemento)
      {
        index = i;
      }
    }

    if (index > array.size())
    {
      cout << "o elemento não esta na array\n";
    }
    else
    {
      cout << "o elemento " << elemento
           << " esta no indice: "
           << index << "\n"
           << endl;
    }
  }

  void mudar_elemento(int index, int value)
  {
    cout << "--> Mudar um elemento" << endl;

    if (index < array.size())
    {
      cout << "mudando elemento do indice " << index
           << " para o valor " << value << endl;

      this->array[index] = value;

      cout << "nova array: ";
      this->printArray();
    }
    else
    {
      cout << "indice fora da array" << endl;
    }

    cout << endl;
  }

  void inserir_em(int index, int element)
  {
    cout << "--> Inserir um elemento" << endl;
    if (index < array.size())
    {
      cout << "inserindo elemento no indice " << index << endl;

      array.push_back(0);

      int velho = array[index];

      for (int i = index + 1; i < array.size(); i++)
      {
        int temp = array[i];

        array[i] = velho;
        velho = temp;
      }

      array[index] = element;
      cout << "nova array: ";
      this->printArray();
    }
    else
    {
      cout << "indice fora da array\n"
           << endl;
    }

    cout << endl;
  }
  void deletar_em(int index)
  {
    cout << "--> Deletar um elemento" << endl;
    if (index < array.size())
    {
      cout << "deletando elemento no indice " << index << endl;

      int novo = array[index + 1];

      for (int i = index; i < array.size(); i++)
      {
        array[i] = novo;
        novo = array[i + 2];
      }

      array.pop_back();

      cout << "nova array: ";
      this->printArray();
    }
    else
    {
      cout << "indice fora da array\n"
           << endl;
    }

    cout << endl;
  }
};

int main()
{
  Operations operations;

  operations.setArray({1, 2, 3, 4, 5});

  operations.percorrer();
  operations.buscar_elemento(5);
  operations.mudar_elemento(2, 7);
  operations.inserir_em(3, 8);
  operations.deletar_em(2);

  return 0;
}