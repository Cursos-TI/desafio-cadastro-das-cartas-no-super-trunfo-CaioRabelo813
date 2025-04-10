🃏 Super Trunfo das Cidades — Desafio em C
Este projeto foi desenvolvido como parte dos desafios da trilha de programação em linguagem C, passando por três níveis de dificuldade: Novato (Básico), Aventureiro (Intermediário) e Mestre (Avançado).

✅ Objetivo
Criar um sistema em C que simula um jogo de Super Trunfo com cidades brasileiras, incluindo cadastro de cartas, cálculo de atributos e uma batalha de cartas com base em regras matemáticas e comparações lógicas.

🧭 Níveis do Desafio
Nível Novato (Básico)

Leitura e exibição de informações de 2 cartas de cidades.

Atributos cadastrados: Estado, Código, Nome, População, Área, PIB, Pontos Turísticos.

Nível Aventureiro (Intermediário)

Cálculo da Densidade Populacional (População / Área).

Cálculo do PIB per Capita (PIB / População).

Exibição dos resultados com duas casas decimais.

Nível Mestre (Avançado)

A População passa a ser do tipo unsigned long int.

Cálculo do Super Poder:

População

Área

PIB

Pontos Turísticos

PIB per Capita

Inverso da Densidade Populacional (quanto menor a densidade, maior o poder).

Comparação de cartas atributo por atributo, com regras:

Densidade Populacional: menor valor vence.

Todos os outros atributos: maior valor vence.

Exibição de qual carta venceu em cada atributo (1 = Carta 1 venceu, 0 = Carta 2 venceu).

⚙️ Como Executar o Programa
Clone o repositório:
git clone https://github.com/Cursos-TI/desafio-cadastro-das-cartas-no-super-trunfo-CaioRabelo813.git
Depois entre na pasta:
cd desafio-cadastro-das-cartas-no-super-trunfo-CaioRabelo813

Compile o código com o seguinte comando:
gcc super_trunfo.c -o super_trunfo

Execute o programa com:
./super_trunfo

🧪 Exemplo de Teste
Durante a execução, o programa solicitará os dados de duas cidades. Você deve digitar conforme o exemplo:

Estado: B
Código: B01
Nome da Cidade: Salvador
População: 2900000
Área: 693.8
PIB: 64.35
Número de Pontos Turísticos: 25

Após digitar os dados das duas cartas, o programa exibirá:

Os dados completos de cada carta

Os cálculos de densidade populacional e PIB per capita

O Super Poder de cada carta

E o resultado da batalha, com comparações de todos os atributos

📄 Arquivo principal
super_trunfo.c — contém todo o código fonte do projeto.

✍️ Autor
Caio Rabelo
Estudante de Ciência da Computação apaixonado por inteligência artificial e desenvolvimento de jogos e sistemas.

🧠 Observações
O código foi testado e validado com base nas exigências dos desafios propostos pelo curso.

Está estruturado de forma clara, com nomes de variáveis descritivos e comentários explicativos.

Não utiliza estruturas de repetição (for, while) ou decisão (if, else), conforme exigência do projeto.
