# Modelagem de Banco de Dados — Barbearia Dom Caverna

Atividade desenvolvida na disciplina de Modelagem de Banco de Dados do curso de Análise e Desenvolvimento de Sistemas.

## Sobre o projeto

O objetivo foi criar um modelo de banco de dados para organizar os agendamentos da Barbearia Dom Caverna, facilitando o cadastro dos clientes e o controle dos horários dos barbeiros.

Antes de realizar o agendamento, o sistema deve verificar se o cliente já tem cadastro e se o horário escolhido está disponível.

## Diagrama Entidade-Relacionamento (DER)

Montei o diagrama usando o draw.io, com cinco entidades:

- **Cliente:** dados de cadastro, como nome, telefone, CPF e e-mail.
- **Barbeiro:** identificação e contato do profissional.
- **Serviço:** nome, valor e duração do atendimento.
- **Horário de Atendimento:** data e horário relacionados ao barbeiro.
- **Agendamento:** ligação entre cliente, serviço e horário, além da situação do agendamento.

**Imagem do DER:** arquivo `DER-Barbearia-Dom-Caverna.png` (a ser adicionado a esta pasta).

## Relacionamentos

- Cliente **1:N** Agendamento
- Barbeiro **1:N** Horário de Atendimento
- Serviço **1:N** Agendamento
- Horário de Atendimento **1:N** Agendamento, considerando o histórico de cancelamentos e remarcações

## Normalização

Na atividade, analisei o modelo considerando a 1ª, 2ª e 3ª Formas Normais (1FN, 2FN e 3FN). Os dados dos clientes, barbeiros e serviços ficam separados, e os agendamentos usam chaves estrangeiras para fazer as ligações. Não foi necessário criar novas tabelas nessa etapa.

## Regras consideradas

- O CPF deve ser único para evitar cadastros duplicados.
- Cada agendamento tem um cliente, um serviço e um horário.
- Um barbeiro não pode ter dois atendimentos ativos no mesmo horário.
- O sistema deve considerar a duração do serviço para evitar conflitos entre atendimentos.
- Agendamentos podem ser cancelados ou remarcados.

## Ferramenta utilizada

- draw.io (diagrams.net)

**Observação:** este projeto representa a modelagem do banco de dados. A implementação em SQL ainda não foi realizada.
