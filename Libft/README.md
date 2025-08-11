<div align="center">
  <h1>Libft</h1>
  <p><em> Reimplementação da biblioteca padrão C</em></p>
</div>

## 📖 Sobre o Projeto

O projeto **Libft** consiste na reimplementação, em linguagem C, de um conjunto de funções da biblioteca padrão do C, além de funções adicionais úteis para manipulação de strings, memória, conversão e manipulação de listas ligadas.

O objetivo principal é aprofundar o conhecimento sobre manipulação de memória, ponteiros, strings e estruturas de dados básicas, além de aprender a criar bibliotecas reutilizáveis e modularizadas.

Este projeto serve como base para projetos futuros na 42 e reforça boas práticas de programação em C, incluindo gerenciamento de memória e tratamento de erros.

---

## 📚 Sumário | Funções criadas

<details>
<summary><b>Funções de Strings</b></summary>

| Função       | Descrição |
|--------------|-----------|
| `strdup`     | Cria uma nova string duplicando o conteúdo de outra. |
| `striteri`   | Aplica uma função a cada caractere de uma string, passando seu índice e endereço. |
| `strjoin`    | Concatena duas strings em uma nova string alocada dinamicamente. |
| `strlcat`    | Concatena strings garantindo limite de tamanho do buffer. |
| `strlcpy`    | Copia strings garantindo limite de tamanho do buffer. |
| `strlen`     | Retorna o tamanho de uma string (número de caracteres). |
| `strmapi`    | Cria uma nova string aplicando uma função a cada caractere, usando seu índice. |
| `strncmp`    | Compara duas strings até um número específico de caracteres. |
| `strnstr`    | Localiza a primeira ocorrência de uma substring dentro de outra, com limite de busca. |
| `strrchr`    | Localiza a última ocorrência de um caractere em uma string. |
| `strtrim`    | Remove caracteres específicos do início e do fim de uma string. |
| `substr`     | Cria uma nova string copiando parte de outra, a partir de um índice e tamanho. |

</details>

<details>
<summary><b>Funções de Memória</b></summary>

| Função       | Descrição |
|--------------|-----------|
| `bzero`      | Preenche uma área de memória com bytes de valor zero. |
| `calloc`     | Aloca memória para um array e inicializa todos os bytes com zero. |
| `memcmp`     | Compara duas áreas de memória byte a byte. |
| `memchr`     | Localiza a primeira ocorrência de um byte específico em um bloco de memória. |
| `memcpy`     | Copia bytes de uma área de memória para outra (não segura para sobreposição). |
| `memmove`    | Copia bytes de uma área de memória para outra (segura para sobreposição). |
| `memset`     | Preenche uma área de memória com um byte específico. |

</details>

<details>
<summary><b>Funções de Caracteres</b></summary>

| Função       | Descrição |
|--------------|-----------|
| `isalnum`    | Verifica se um caractere é uma letra ou um dígito numérico. |
| `isalpha`    | Verifica se um caractere é uma letra do alfabeto. |
| `isascii`    | Verifica se um caractere pertence à tabela ASCII (0–127). |
| `isdigit`    | Verifica se um caractere é um dígito decimal (`0` a `9`). |
| `tolower`    | Converte um caractere para minúsculo, se for maiúsculo. |
| `toupper`    | Converte um caractere para maiúsculo, se for minúsculo. |

</details>

<details>
<summary><b>Funções de Conversão</b></summary>

| Função       | Descrição |
|--------------|-----------|
| `atoi`       | Converte uma string para um número inteiro (`int`). |
| `itoa`       | Converte um número inteiro para uma string. |

</details>

<details>
<summary><b>Funções de Saída (File Descriptor)</b></summary>

| Função       | Descrição |
|--------------|-----------|
| `putchar_fd` | Escreve um caractere em um descritor de arquivo. |
| `putendl_fd` | Escreve uma string seguida de nova linha em um descritor de arquivo. |
| `putnbr_fd`  | Escreve um número inteiro em um descritor de arquivo. |
| `putstr_fd`  | Escreve uma string em um descritor de arquivo. |

</details>

<details>
<summary><b>Funções Bônus</b></summary>

| Função           | Descrição |
|------------------|-----------|
| `ft_lstnew`       | Cria um novo nó para uma lista ligada. |
| `ft_lstadd_front` | Adiciona um nó no início da lista ligada. |
| `ft_lstsize`      | Retorna o número de nós da lista ligada. |
| `ft_lstlast`      | Retorna o último nó da lista ligada. |
| `ft_lstadd_back`  | Adiciona um nó no final da lista ligada. |
| `ft_lstdelone`    | Apaga um nó da lista usando uma função de liberação. |
| `ft_lstclear`     | Apaga e libera todos os nós da lista ligada. |
| `ft_lstiter`      | Aplica uma função a cada nó da lista. |
| `ft_lstmap`       | Cria uma nova lista aplicando uma função a cada nó da lista original. |

</details>

---

## 🧪 Testes automatizados com a francinette

Este projeto pode ser testado automaticamente utilizando a ferramenta **francinette**, amplamente utilizada para validar a correção das funções implementadas na Libft.

Para rodar os testes, basta acessar o repositório oficial da francinette e seguir as instruções:

➡️ [Repositório oficial da francinette](https://github.com/afrancinette/afrancinette)

A ferramenta executa uma bateria completa de testes, cobrindo funções obrigatórias e bônus, fornecendo feedback detalhado para garantir que o projeto está conforme os requisitos da escola.

---

<div align="center">
  <sub>Projeto desenvolvido para a Escola 42 São Paulo — Libft</sub>
</div>

