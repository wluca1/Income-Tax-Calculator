<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
</head>
<body>
    <h1>Calculadora de Imposto de Renda</h1>
    <p>Este é um simples programa em C que calcula o imposto de renda do usuário.</p>
    <h2>Instruções</h2>
    <ol>
        <li>Para utilizar, basta executar o programa em um compilador C.</li>
        <li>Primeiro decida se você quer utilizar sua renda bruta mensal ou anual </li>
        <li>Logo em seguida digite a Renda Bruta baseada na opção que foi escolhida anteriormente</li>
        <li>Então o Programa vai lhe informar a quantidade de imposto que deve ser pago e sua renda líquida.</li>
        <li>Ao final do programa você pode decidir se quer continuar ou não.</li>
    </ol>
    <h2>Estrutura do Código</h2>
    <p>O código é dividido em diferentes funções que são responsáveis por diferentes aspectos do programa.</p>
    <ul>
        <li>O código começa com a definição de uma estrutura imposto que possui três campos: <code>salario<qcode>, <code>imposto</code> e <code>salarioLiquido</code>.</li>
        <li>Em seguida, é definida a função <code>calculaImposto()</code>, que recebe um ponteiro para uma variável do tipo <code>imposto</code>. A função verifica em qual faixa o salário se encontra e calcula o imposto devido de acordo com a tabela do imposto de renda. O imposto calculado é armazenado no campo <code>imposto</code> da estrutura, e o salário líquido (salário descontado do imposto) é armazenado no campo <code>salarioLiquido</code>.</li>
    </ul>
    <p>No <code>main()</code>, é declarada uma variável do tipo <code>imposto</code>. Em seguida, é iniciado um loop que permite que o usuário execute o programa quantas vezes quiser. Dentro do loop, o usuário é solicitado a escolher se deseja calcular o imposto com base no salário mensal ou anual. Dependendo da escolha do usuário, o programa solicita o valor do salário e chama a função <code>calculaImposto</code> para calcular o imposto devido e o salário líquido. Por fim, os valores calculados são exibidos na tela.</p>
    <p>O loop é repetido enquanto o usuário desejar. Se o usuário escolher não executar o programa novamente, o loop é encerrado e o programa é finalizado.</p>
