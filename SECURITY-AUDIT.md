# Auditoria de publicação

Este repositório é acadêmico e público. Para reduzir o risco de publicar arquivos locais ou credenciais por engano, o workflow `Security Audit` executa uma versão fixada do `detect-secrets` com histórico completo.

A verificação cobre:

- arquivos atuais rastreados pelo Git;
- nomes de arquivos sensíveis alcançáveis no histórico;
- conteúdo textual adicionado ou removido em commits alcançáveis.

Executáveis compilados foram removidos da árvore atual e o `.gitignore` foi configurado para manter o repositório concentrado em código-fonte e documentação.

Um workflow verde significa apenas que os detectores configurados não encontraram padrões de segredo; não é uma certificação formal de segurança.
