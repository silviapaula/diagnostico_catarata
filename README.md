Diagnostico Catarata
====================

Etapas:
-------

[] Leitura Imagem
[] Tranformação em tons de cinza
[] Segmentação das imagens em tons de cinza
[] Detecção da catarata



### Compilando:
A pasta bin deve ser crianda antes da compilação, pois os arquivos .c compilados serão armazenados nesta
pasta. Ápos criada:
```
make
```
### Rodando:
```
make run
```
### Teste:
Para os teste foi utilizado a biblioteca [CUnit](http://cunit.sourceforge.net/). Ápos instalada:
```
make test
```
