<div align="center">
  <h1>Sobre | LIBFT </h1>
  <p>Este repositório reúne os projetos desenvolvidos durante a formação em Engenharia de Software na <strong>42 São Paulo</strong>.
     Todos os projetos foram implementados na linguagem <strong>C</strong>.</p>
  <p>A lista a seguir está organizada do projeto mais recente ao mais antigo.</p>
</div>

## 📚 Sumário

- [🟣 Funções de Strings](#🟣-funções-de-strings)  
- [🔵 Funções de Memória](#🔵-funções-de-memória)  
- [🟠 Funções de Caracteres](#🟠-funções-de-caracteres)  
- [🟢 Funções de Conversão](#🟢-funções-de-conversão)  
- [🔷 Funções de Saída (File Descriptor)](#🔷-funções-de-saída-file-descriptor)  

---

## 🟣 Funções de Strings

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

[⬆ Voltar ao sumário](#📚-sumário)

---

## 🔵 Funções de Memória

| Função       | Descrição |
|--------------|-----------|
| `bzero`      | Preenche uma área de memória com bytes de valor zero. |
| `calloc`     | Aloca memória para um array e inicializa todos os bytes com zero. |
| `memcmp`     | Compara duas áreas de memória byte a byte. |
| `memchr`     | Localiza a primeira ocorrência de um byte específico em um bloco de memória. |
| `memcpy`     | Copia bytes de uma área de memória para outra (não segura para sobreposição). |
| `memmove`    | Copia bytes de uma área de memória para outra (segura para sobreposição). |
| `memset`     | Preenche uma área de memória com um byte específico. |

[⬆ Voltar ao sumário](#📚-sumário)

---

## 🟠 Funções de Caracteres

| Função       | Descrição |
|--------------|-----------|
| `isalnum`    | Verifica se um caractere é uma letra ou um dígito numérico. |
| `isalpha`    | Verifica se um caractere é uma letra do alfabeto. |
| `isascii`    | Verifica se um caractere pertence à tabela ASCII (0–127). |
| `isdigit`    | Verifica se um caractere é um dígito decimal (`0` a `9`). |
| `tolower`    | Converte um caractere para minúsculo, se for maiúsculo. |
| `toupper`    | Converte um caractere para maiúsculo, se for minúsculo. |

[⬆ Voltar ao sumário](#📚-sumário)

---

## 🟢 Funções de Conversão

| Função       | Descrição |
|--------------|-----------|
| `atoi`       | Converte uma string para um número inteiro (`int`). |
| `itoa`       | Converte um número inteiro para uma string. |

[⬆ Voltar ao sumário](#📚-sumário)

---

## 🔷 Funções de Saída (File Descriptor)

| Função       | Descrição |
|--------------|-----------|
| `putchar_fd` | Escreve um caractere em um descritor de arquivo. |
| `putendl_fd` | Escreve uma string seguida de nova linha em um descritor de arquivo. |
| `putnbr_fd`  | Escreve um número inteiro em um descritor de arquivo. |
| `putstr_fd`  | Escreve uma string em um descritor de arquivo. |

[⬆ Voltar ao sumário](#📚-sumário)


