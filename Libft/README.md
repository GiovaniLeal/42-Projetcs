<div align="center">
  <h1>Sobre | LIBFT </h1>
  <p>Este repositório reúne os projetos desenvolvidos durante a formação em Engenharia de Software na <strong>42 São Paulo</strong>.
     Todos os projetos foram implementados na linguagem <strong>C</strong>.</p>
  <p>A lista a seguir está organizada do projeto mais recente ao mais antigo.</p>
</div>

## 📌 Sumário / Legenda de Cores

| Cor | Categoria | Link |
|-----|-----------|------|
| <span style="color:purple">●</span> | **Funções de Strings** | [Ir para tabela](#funções-de-strings) |
| <span style="color:teal">●</span> | **Funções de Memória** | [Ir para tabela](#funções-de-memória) |
| <span style="color:orange">●</span> | **Funções de Caracteres** | [Ir para tabela](#funções-de-caracteres) |
| <span style="color:green">●</span> | **Funções de Conversão** | [Ir para tabela](#funções-de-conversão) |
| <span style="color:blue">●</span> | **Funções de Saída (File Descriptor)** | [Ir para tabela](#funções-de-saída-file-descriptor) |

---

## <span style="color:purple">Funções de Strings</span>

| FUNÇÃO       | DESCRIÇÃO |
|--------------|-----------|
| <span style="color:purple">`strdup`</span>   | Cria uma nova string duplicando o conteúdo de outra. |
| <span style="color:purple">`striteri`</span> | Aplica uma função a cada caractere de uma string, passando seu índice e endereço. |
| <span style="color:purple">`strjoin`</span>  | Concatena duas strings em uma nova string alocada dinamicamente. |
| <span style="color:purple">`strlcat`</span>  | Concatena strings garantindo limite de tamanho do buffer. |
| <span style="color:purple">`strlcpy`</span>  | Copia strings garantindo limite de tamanho do buffer. |
| <span style="color:purple">`strlen`</span>   | Retorna o tamanho de uma string (número de caracteres). |
| <span style="color:purple">`strmapi`</span>  | Cria uma nova string aplicando uma função a cada caractere, usando seu índice. |
| <span style="color:purple">`strncmp`</span>  | Compara duas strings até um número específico de caracteres. |
| <span style="color:purple">`strnstr`</span>  | Localiza a primeira ocorrência de uma substring dentro de outra, com limite de busca. |
| <span style="color:purple">`strrchr`</span>  | Localiza a última ocorrência de um caractere em uma string. |
| <span style="color:purple">`strtrim`</span>  | Remove caracteres específicos do início e do fim de uma string. |
| <span style="color:purple">`substr`</span>   | Cria uma nova string copiando parte de outra, a partir de um índice e tamanho. |

[⬆ Voltar ao sumário](#-sumário--legenda-de-cores)

---

## <span style="color:teal">Funções de Memória</span>

| FUNÇÃO       | DESCRIÇÃO |
|--------------|-----------|
| <span style="color:teal">`bzero`</span>      | Preenche uma área de memória com bytes de valor zero. |
| <span style="color:teal">`calloc`</span>     | Aloca memória para um array e inicializa todos os bytes com zero. |
| <span style="color:teal">`memcmp`</span>     | Compara duas áreas de memória byte a byte. |
| <span style="color:teal">`memchr`</span>     | Localiza a primeira ocorrência de um byte específico em um bloco de memória. |
| <span style="color:teal">`memcpy`</span>     | Copia bytes de uma área de memória para outra (não segura para sobreposição). |
| <span style="color:teal">`memmove`</span>    | Copia bytes de uma área de memória para outra (segura para sobreposição). |
| <span style="color:teal">`memset`</span>     | Preenche uma área de memória com um byte específico. |

[⬆ Voltar ao sumário](#-sumário--legenda-de-cores)

---

## <span style="color:orange">Funções de Caracteres</span>

| FUNÇÃO       | DESCRIÇÃO |
|--------------|-----------|
| <span style="color:orange">`isalnum`</span>  | Verifica se um caractere é uma letra ou um dígito numérico. |
| <span style="color:orange">`isalpha`</span>  | Verifica se um caractere é uma letra do alfabeto. |
| <span style="color:orange">`isascii`</span>  | Verifica se um caractere pertence à tabela ASCII (0–127). |
| <span style="color:orange">`isdigit`</span>  | Verifica se um caractere é um dígito decimal (`0` a `9`). |
| <span style="color:orange">`tolower`</span>  | Converte um caractere para minúsculo, se for maiúsculo. |
| <span style="color:orange">`toupper`</span>  | Converte um caractere para maiúsculo, se for minúsculo. |

[⬆ Voltar ao sumário](#-sumário--legenda-de-cores)

---

## <span style="color:green">Funções de Conversão</span>

| FUNÇÃO       | DESCRIÇÃO |
|--------------|-----------|
| <span style="color:green">`atoi`</span>      | Converte uma string para um número inteiro (`int`). |
| <span style="color:green">`itoa`</span>      | Converte um número inteiro para uma string. |

[⬆ Voltar ao sumário](#-sumário--legenda-de-cores)

---

## <span style="color:blue">Funções de Saída (File Descriptor)</span>

| FUNÇÃO       | DESCRIÇÃO |
|--------------|-----------|
| <span style="color:blue">`putchar_fd`</span> | Escreve um caractere em um descritor de arquivo. |
| <span style="color:blue">`putendl_fd`</span> | Escreve uma string seguida de nova linha em um descritor de arquivo. |
| <span style="color:blue">`putnbr_fd`</span>  | Escreve um número inteiro em um descritor de arquivo. |
| <span style="color:blue">`putstr_fd`</span>  | Escreve uma string em um descritor de arquivo. |

[⬆ Voltar ao sumário](#-sumário--legenda-de-cores)

