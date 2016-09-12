# ICPC - Marathon 2016

Algorithm Solutions.

<a href="http://maratona.ime.usp.br/maratona.pdf">Problemas</a><br />
<a href="http://maratona.ime.usp.br/prim-fase16/SolucoesdaRegionaldaMaratona2016.pdf"> Explicativos</a><br />



<meta http-equiv=Content-Type content="text/html; charset=UTF-8">
<style type="text/css">
<!--
span.cls_003{font-family:Arial,serif;font-size:8.1px;color:rgb(28,29,29);font-weight:bold;font-style:normal;text-decoration: none}
div.cls_003{font-family:Arial,serif;font-size:8.1px;color:rgb(28,29,29);font-weight:bold;font-style:normal;text-decoration: none}
span.cls_004{font-family:Arial,serif;font-size:7.6px;color:rgb(28,29,29);font-weight:bold;font-style:normal;text-decoration: none}
div.cls_004{font-family:Arial,serif;font-size:7.6px;color:rgb(28,29,29);font-weight:bold;font-style:normal;text-decoration: none}
span.cls_002{font-family:Arial,serif;font-size:21.2px;color:rgb(28,29,29);font-weight:bold;font-style:normal;text-decoration: none}
div.cls_002{font-family:Arial,serif;font-size:21.2px;color:rgb(28,29,29);font-weight:bold;font-style:normal;text-decoration: none}
span.cls_005{font-family:Arial,serif;font-size:18.1px;color:rgb(43,42,41);font-weight:bold;font-style:normal;text-decoration: none}
div.cls_005{font-family:Arial,serif;font-size:18.1px;color:rgb(43,42,41);font-weight:bold;font-style:normal;text-decoration: none}
span.cls_006{font-family:Arial,serif;font-size:14.4px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
div.cls_006{font-family:Arial,serif;font-size:14.4px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
span.cls_007{font-family:Arial,serif;font-size:12.0px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
div.cls_007{font-family:Arial,serif;font-size:12.0px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
span.cls_008{font-family:Arial,serif;font-size:10.0px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
div.cls_008{font-family:Arial,serif;font-size:10.0px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
span.cls_009{font-family:Arial,serif;font-size:11.0px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
div.cls_009{font-family:Arial,serif;font-size:11.0px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
span.cls_010{font-family:Courier New,serif;font-size:10.0px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
div.cls_010{font-family:Courier New,serif;font-size:10.0px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
span.cls_011{font-family:Arial,serif;font-size:6.0px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
div.cls_011{font-family:Arial,serif;font-size:6.0px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
span.cls_012{font-family:Arial,serif;font-size:20.7px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
div.cls_012{font-family:Arial,serif;font-size:20.7px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
span.cls_013{font-family:Courier New,serif;font-size:11.0px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
div.cls_013{font-family:Courier New,serif;font-size:11.0px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
span.cls_014{font-family:Arial,serif;font-size:8.0px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
div.cls_014{font-family:Arial,serif;font-size:8.0px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
span.cls_015{font-family:Arial,serif;font-size:13.2px;color:rgb(0,0,0);font-weight:bold;font-style:normal;text-decoration: none}
div.cls_015{font-family:Arial,serif;font-size:13.2px;color:rgb(0,0,0);font-weight:bold;font-style:normal;text-decoration: none}
span.cls_016{font-family:Courier New,serif;font-size:8.0px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
div.cls_016{font-family:Courier New,serif;font-size:8.0px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}
span.cls_017{font-family:Arial,serif;font-size:7.2px;color:rgb(43,42,41);font-weight:normal;font-style:normal;text-decoration: none}
div.cls_017{font-family:Arial,serif;font-size:7.2px;color:rgb(43,42,41);font-weight:normal;font-style:normal;text-decoration: none}
span.cls_018{font-family:Times,serif;font-size:8.2px;color:rgb(43,42,41);font-weight:normal;font-style:normal;text-decoration: none}
div.cls_018{font-family:Times,serif;font-size:8.2px;color:rgb(43,42,41);font-weight:normal;font-style:normal;text-decoration: none}
span.cls_019{font-family:Times,serif;font-size:8.2px;color:rgb(43,42,41);font-weight:normal;font-style:italic;text-decoration: none}
div.cls_019{font-family:Times,serif;font-size:8.2px;color:rgb(43,42,41);font-weight:normal;font-style:italic;text-decoration: none}
span.cls_020{font-family:Arial,serif;font-size:8.2px;color:rgb(43,42,41);font-weight:normal;font-style:normal;text-decoration: none}
div.cls_020{font-family:Arial,serif;font-size:8.2px;color:rgb(43,42,41);font-weight:normal;font-style:normal;text-decoration: none}
span.cls_021{font-family:Times,serif;font-size:9.9px;color:rgb(43,42,41);font-weight:normal;font-style:normal;text-decoration: none}
div.cls_021{font-family:Times,serif;font-size:9.9px;color:rgb(43,42,41);font-weight:normal;font-style:normal;text-decoration: none}
span.cls_022{font-family:Arial,serif;font-size:14.0px;color:rgb(0,0,0);font-weight:bold;font-style:normal;text-decoration: none}
div.cls_022{font-family:Arial,serif;font-size:14.0px;color:rgb(0,0,0);font-weight:bold;font-style:normal;text-decoration: none}
-->
</style>
<script type="text/javascript" src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/wz_jsgraphics.js"></script>

<div style="position:absolute;left:50%;margin-left:-297px;top:0px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background01.jpg" width=595 height=841></div>
<div style="position:absolute;left:252.44px;top:97.62px" class="cls_003"><span class="cls_003">International Collegiate</span></div>
<div style="position:absolute;left:452.79px;top:98.42px" class="cls_004"><span class="cls_004">event</span></div>
<div style="position:absolute;left:208.34px;top:91.81px" class="cls_002"><span class="cls_002">acm</span></div>
<div style="position:absolute;left:252.44px;top:105.62px" class="cls_003"><span class="cls_003">Programming Contest</span></div>
<div style="position:absolute;left:366.71px;top:95.07px" class="cls_005"><span class="cls_005">2016</span></div>
<div style="position:absolute;left:452.79px;top:106.41px" class="cls_004"><span class="cls_004">sponsor</span></div>
<div style="position:absolute;left:170.33px;top:150.61px" class="cls_006"><span class="cls_006">Maratona de Programação da SBC 2016</span></div>
<div style="position:absolute;left:222.05px;top:178.51px" class="cls_007"><span class="cls_007">Sub-Regional Brasil do ACM ICPC</span></div>
<div style="position:absolute;left:261.33px;top:206.01px" class="cls_008"><span class="cls_008">10 de Setembro de 2016</span></div>
<div style="position:absolute;left:250.65px;top:246.96px" class="cls_009"><span class="cls_009">Caderno de Problemas</span></div>
<div style="position:absolute;left:264.98px;top:340.46px" class="cls_008"><span class="cls_008">Informações Gerais</span></div>
<div style="position:absolute;left:72.00px;top:370.04px" class="cls_008"><span class="cls_008">Este caderno contém 12 problemas; as páginas estão numeradas de 1 a 16, não contando esta página de rosto.</span></div>
<div style="position:absolute;left:72.00px;top:382.00px" class="cls_008"><span class="cls_008">Verifique se o caderno está completo.</span></div>
<div style="position:absolute;left:72.00px;top:405.91px" class="cls_008"><span class="cls_008">A) Sobre os nomes dos programas</span></div>
<div style="position:absolute;left:72.00px;top:417.86px" class="cls_008"><span class="cls_008">1) Sua solução deve ser chamada codigo de problema</span><span class="cls_010">.c</span><span class="cls_008">, codigo de problema</span><span class="cls_010">.cpp</span><span class="cls_008">, codigo de problema</span><span class="cls_010">.pas</span><span class="cls_008">, co-</span></div>
<div style="position:absolute;left:72.00px;top:429.82px" class="cls_008"><span class="cls_008">digo de problema</span><span class="cls_010">.java</span><span class="cls_008"> ou codigo de problema</span><span class="cls_010">.py</span><span class="cls_008">, onde codigo de problema é a letra maiúscula que identifica o</span></div>
<div style="position:absolute;left:72.00px;top:441.77px" class="cls_008"><span class="cls_008">problema. Lembre que em Java o nome da classe principal deve ser igual ao nome do arquivo.</span></div>
<div style="position:absolute;left:72.00px;top:465.68px" class="cls_008"><span class="cls_008">B) Sobre a entrada</span></div>
<div style="position:absolute;left:72.00px;top:477.64px" class="cls_008"><span class="cls_008">1) A entrada de seu programa deve ser lida da entrada padrão.</span></div>
<div style="position:absolute;left:72.00px;top:489.59px" class="cls_008"><span class="cls_008">2) A entrada é composta de um único caso de teste, descrito em um número de linhas que depende do problema.</span></div>
<div style="position:absolute;left:72.00px;top:501.55px" class="cls_008"><span class="cls_008">3) Quando uma linha da entrada contém vários valores, estes são separados por um único espaço em branco; a</span></div>
<div style="position:absolute;left:72.00px;top:513.50px" class="cls_008"><span class="cls_008">entrada não contém nenhum outro espaço em branco.</span></div>
<div style="position:absolute;left:72.00px;top:525.46px" class="cls_008"><span class="cls_008">4) Cada linha, incluindo a última, contém exatamente um caractere final-de-linha.</span></div>
<div style="position:absolute;left:72.00px;top:537.41px" class="cls_008"><span class="cls_008">5) O final da entrada coincide com o final do arquivo.</span></div>
<div style="position:absolute;left:72.00px;top:569.83px" class="cls_008"><span class="cls_008">C) Sobre a sa</span></div>
<div style="position:absolute;left:140.27px;top:569.83px" class="cls_008"><span class="cls_008">ıda</span></div>
<div style="position:absolute;left:72.00px;top:583.38px" class="cls_008"><span class="cls_008">1) A sa</span></div>
<div style="position:absolute;left:103.88px;top:583.38px" class="cls_008"><span class="cls_008">ıda de seu programa deve ser escrita na sa´ıda padrão.</span></div>
<div style="position:absolute;left:72.00px;top:596.93px" class="cls_008"><span class="cls_008">2) Quando uma linha da sa´ıda contém vários valores, estes devem ser separados por um único espaço em branco;</span></div>
<div style="position:absolute;left:72.00px;top:610.48px" class="cls_008"><span class="cls_008">a sa´ıda não deve conter nenhum outro espaço em branco.</span></div>
<div style="position:absolute;left:72.00px;top:624.02px" class="cls_008"><span class="cls_008">3) Cada linha, incluindo a última, deve conter exatamente um caractere final-de-linha.</span></div>
<div style="position:absolute;left:294.02px;top:676.67px" class="cls_011"><span class="cls_011">Promoção:</span></div>
<div style="position:absolute;left:306.57px;top:749.13px" class="cls_011"><span class="cls_011">v1.0</span></div>
</div>
<div style="position:absolute;left:50%;margin-left:-297px;top:851px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background02.jpg" width=595 height=841></div>
<div style="position:absolute;left:72.00px;top:36.16px" class="cls_009"><span class="cls_009">Maratona de Programação da SBC - ACM ICPC - 2016</span></div>
<div style="position:absolute;left:548.95px;top:36.16px" class="cls_009"><span class="cls_009">1</span></div>
<div style="position:absolute;left:278.56px;top:79.68px" class="cls_006"><span class="cls_006">Problema A</span></div>
<div style="position:absolute;left:235.25px;top:98.27px" class="cls_012"><span class="cls_012">Andando no tempo</span></div>
<div style="position:absolute;left:72.00px;top:132.37px" class="cls_009"><span class="cls_009">Imagine que você tenha uma máquina do tempo que pode ser usada no máximo três vezes, e a cada</span></div>
<div style="position:absolute;left:72.00px;top:145.92px" class="cls_009"><span class="cls_009">uso da máquina você pode escolher voltar para o passado ou ir para o futuro. A máquina possui três</span></div>
<div style="position:absolute;left:72.00px;top:159.47px" class="cls_009"><span class="cls_009">créditos fixos; cada crédito representa uma certa quantidade de anos, e pode ser usado para ir essa</span></div>
<div style="position:absolute;left:72.00px;top:173.02px" class="cls_009"><span class="cls_009">quantidade de anos para o passado ou para o futuro.  Você pode fazer uma, duas ou três viagens, e</span></div>
<div style="position:absolute;left:72.00px;top:186.57px" class="cls_009"><span class="cls_009">cada um desses três créditos pode ser usado uma vez apenas. Por exemplo, se os créditos forem 5, 12</span></div>
<div style="position:absolute;left:72.00px;top:200.12px" class="cls_009"><span class="cls_009">e 9, você poderia decidir fazer duas viagens: ir 5 anos para o futuro e, depois, voltar 9 anos para o</span></div>
<div style="position:absolute;left:72.00px;top:213.67px" class="cls_009"><span class="cls_009">passado. Dessa forma, você terminaria quatro anos no passado, em 2012. Também poderia fazer três</span></div>
<div style="position:absolute;left:72.00px;top:227.22px" class="cls_009"><span class="cls_009">viagens, todas indo para o futuro, usando os créditos em qualquer ordem, terminando em 2042.</span></div>
<div style="position:absolute;left:88.94px;top:240.77px" class="cls_009"><span class="cls_009">Neste problema, dados os valores dos três créditos da máquina, seu programa deve dizer se é ou</span></div>
<div style="position:absolute;left:72.00px;top:254.32px" class="cls_009"><span class="cls_009">não poss´ıvel viajar no tempo e voltar para o presente, fazendo pelo menos uma viagem e, no máximo,</span></div>
<div style="position:absolute;left:72.00px;top:267.87px" class="cls_009"><span class="cls_009">três viagens; sempre usando cada um dos três créditos no máximo uma vez.</span></div>
<div style="position:absolute;left:72.00px;top:288.74px" class="cls_007"><span class="cls_007">Entrada</span></div>
<div style="position:absolute;left:88.94px;top:307.32px" class="cls_009"><span class="cls_009">A entrada consiste de uma linha contendo os valores dos três créditos A, B e C (1  A, B, C </span></div>
<div style="position:absolute;left:72.00px;top:320.87px" class="cls_009"><span class="cls_009">1000).</span></div>
<div style="position:absolute;left:72.00px;top:341.74px" class="cls_007"><span class="cls_007">Sa</span></div>
<div style="position:absolute;left:86.00px;top:341.74px" class="cls_007"><span class="cls_007">ıda</span></div>
<div style="position:absolute;left:88.94px;top:360.32px" class="cls_009"><span class="cls_009">Seu programa deve imprimir uma linha contendo o caracter “</span><span class="cls_013">S</span><span class="cls_009">” se é poss´ıvel viajar e voltar para</span></div>
<div style="position:absolute;left:72.00px;top:373.87px" class="cls_009"><span class="cls_009">o presente, ou “</span><span class="cls_013">N</span><span class="cls_009">” caso contrário.</span></div>
<div style="position:absolute;left:77.98px;top:400.77px" class="cls_008"><span class="cls_008">Exemplo de entrada 1</span></div>
<div style="position:absolute;left:319.07px;top:400.77px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:400.77px" class="cls_008"><span class="cls_008">ıda 1</span></div>
<div style="position:absolute;left:77.98px;top:418.35px" class="cls_013"><span class="cls_013">22 5 22</span></div>
<div style="position:absolute;left:319.07px;top:418.35px" class="cls_013"><span class="cls_013">S</span></div>
<div style="position:absolute;left:77.98px;top:449.76px" class="cls_008"><span class="cls_008">Exemplo de entrada 2</span></div>
<div style="position:absolute;left:319.07px;top:449.76px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:449.76px" class="cls_008"><span class="cls_008">ıda 2</span></div>
<div style="position:absolute;left:77.98px;top:467.35px" class="cls_013"><span class="cls_013">31 110 79</span></div>
<div style="position:absolute;left:319.07px;top:467.35px" class="cls_013"><span class="cls_013">S</span></div>
<div style="position:absolute;left:77.98px;top:498.76px" class="cls_008"><span class="cls_008">Exemplo de entrada 3</span></div>
<div style="position:absolute;left:319.07px;top:498.76px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:498.76px" class="cls_008"><span class="cls_008">ıda 3</span></div>
<div style="position:absolute;left:77.98px;top:516.34px" class="cls_013"><span class="cls_013">45 8 7</span></div>
<div style="position:absolute;left:319.07px;top:516.34px" class="cls_013"><span class="cls_013">N</span></div>
</div>
<div style="position:absolute;left:50%;margin-left:-297px;top:1702px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background03.jpg" width=595 height=841></div>
<div style="position:absolute;left:72.00px;top:36.16px" class="cls_009"><span class="cls_009">Maratona de Programação da SBC - ACM ICPC - 2016</span></div>
<div style="position:absolute;left:548.95px;top:36.16px" class="cls_009"><span class="cls_009">2</span></div>
<div style="position:absolute;left:278.54px;top:79.68px" class="cls_006"><span class="cls_006">Problema B</span></div>
<div style="position:absolute;left:255.36px;top:98.27px" class="cls_012"><span class="cls_012">Batata quente</span></div>
<div style="position:absolute;left:72.00px;top:132.37px" class="cls_009"><span class="cls_009">Batata quente é uma brincadeira bastante popular entre crianças na escola. A brincadeira é simples:</span></div>
<div style="position:absolute;left:72.00px;top:145.92px" class="cls_009"><span class="cls_009">a criança que está com a batata a joga para uma outra criança.  Em algum momento, o professor,</span></div>
<div style="position:absolute;left:72.00px;top:159.47px" class="cls_009"><span class="cls_009">que não está olhando para o que está acontecendo, irá dizer que a brincadeira acabou. Quando isso</span></div>
<div style="position:absolute;left:72.00px;top:173.02px" class="cls_009"><span class="cls_009">acontece, a criança que está com a batata perde.</span></div>
<div style="position:absolute;left:88.94px;top:186.57px" class="cls_009"><span class="cls_009">Uma variação da brincadeira, jogada na fila da cantina, é proposta por um professor. As crianças</span></div>
<div style="position:absolute;left:72.00px;top:200.12px" class="cls_009"><span class="cls_009">estão numeradas de 1 a N de acordo com sua posição na fila, onde a criança com o número 1 é a</span></div>
<div style="position:absolute;left:72.00px;top:213.67px" class="cls_009"><span class="cls_009">primeira da fila. Cada uma receberá um papel com um número, e sempre que receber a batata, deverá</span></div>
<div style="position:absolute;left:72.00px;top:227.22px" class="cls_009"><span class="cls_009">passá-la para a criança na posição anotada em seu papel. O jogo termina com o professor vitorioso se</span></div>
<div style="position:absolute;left:72.00px;top:240.77px" class="cls_009"><span class="cls_009">a batata chegar em uma posição menor ou igual a X na fila, com X definido no in´ıcio da brincadeira.</span></div>
<div style="position:absolute;left:72.00px;top:254.32px" class="cls_009"><span class="cls_009">Se isso nunca acontecer, o jogo nunca termina, porém as crianças saem vitoriosas:  no dia seguinte</span></div>
<div style="position:absolute;left:72.00px;top:267.87px" class="cls_009"><span class="cls_009">todas ganham um desconto na cantina.</span></div>
<div style="position:absolute;left:88.94px;top:281.41px" class="cls_009"><span class="cls_009">O professor começa o jogo jogando a batata para alguma criança na fila.  Como sua mira não é</span></div>
<div style="position:absolute;left:72.00px;top:294.96px" class="cls_009"><span class="cls_009">muito boa, ele só consegue garantir que vai jogar a batata para alguma criança em um invervalo L . . . R</span></div>
<div style="position:absolute;left:72.00px;top:308.51px" class="cls_009"><span class="cls_009">da fila com a mesma probabilidade. Ele está considerando vários poss´ıveis intervalos da fila para iniciar</span></div>
<div style="position:absolute;left:72.00px;top:322.06px" class="cls_009"><span class="cls_009">a brincadeira. Para isso, o professor gostaria de descobrir, para cada um desses intervalos, qual o valor</span></div>
<div style="position:absolute;left:72.00px;top:335.61px" class="cls_009"><span class="cls_009">de X que ele deve escolher para que o jogo seja o mais justo poss´ıvel, ou seja, a probabilidade de o</span></div>
<div style="position:absolute;left:72.00px;top:349.16px" class="cls_009"><span class="cls_009">jogo terminar seja a mais próxima poss´ıvel da probabilidade de o jogo não terminar.</span></div>
<div style="position:absolute;left:88.94px;top:362.71px" class="cls_009"><span class="cls_009">Você deve auxiliar o professor a avaliar as propostas.  Dados os papéis de cada criança da fila e</span></div>
<div style="position:absolute;left:72.00px;top:376.26px" class="cls_009"><span class="cls_009">vários intervalos poss´ıveis, responda, para cada intervalo, o valor de X que torne o jogo mais justo</span></div>
<div style="position:absolute;left:72.00px;top:389.81px" class="cls_009"><span class="cls_009">poss</span></div>
<div style="position:absolute;left:92.43px;top:389.81px" class="cls_009"><span class="cls_009">ıvel. Se houver empate, responda o X mais próximo do in´ıcio da fila.</span></div>
<div style="position:absolute;left:72.00px;top:410.68px" class="cls_007"><span class="cls_007">Entrada</span></div>
<div style="position:absolute;left:88.94px;top:428.24px" class="cls_009"><span class="cls_009">A primeira linha da entrada contém dois inteiros, N e Q (2  N  50000, 1  Q  10</span><span class="cls_014"><sup>5</sup></span><span class="cls_009">).  A</span></div>
<div style="position:absolute;left:72.00px;top:442.81px" class="cls_009"><span class="cls_009">linha seguinte contém N inteiros p</span><span class="cls_014"><sub>1</sub></span><span class="cls_009">, p</span><span class="cls_014"><sub>2</sub></span><span class="cls_009"> . . . p</span><span class="cls_014"><sub>N</sub></span><span class="cls_009">  (1  p</span><span class="cls_014"><sub>i</sub></span><span class="cls_009">  N ), os valores dos papéis recebidos por cada</span></div>
<div style="position:absolute;left:72.00px;top:456.36px" class="cls_009"><span class="cls_009">uma das crianças.  Seguem então Q linhas, cada uma com dois inteiros L e R (1  L  R  N ),</span></div>
<div style="position:absolute;left:72.00px;top:469.91px" class="cls_009"><span class="cls_009">representando um intervalo considerado pelo professor.</span></div>
<div style="position:absolute;left:72.00px;top:490.78px" class="cls_007"><span class="cls_007">Sa</span></div>
<div style="position:absolute;left:86.00px;top:490.78px" class="cls_007"><span class="cls_007">ıda</span></div>
<div style="position:absolute;left:88.94px;top:509.36px" class="cls_009"><span class="cls_009">Imprima Q linhas, cada uma contendo, para cada intervalo considerado pelo professor, o número</span></div>
<div style="position:absolute;left:72.00px;top:522.91px" class="cls_009"><span class="cls_009">inteiro X que o professor deverá escolher para que a brincadeira seja a mais justa poss</span></div>
<div style="position:absolute;left:485.95px;top:522.91px" class="cls_009"><span class="cls_009">ıvel.</span></div>
<div style="position:absolute;left:77.98px;top:549.81px" class="cls_008"><span class="cls_008">Exemplo de entrada 1</span></div>
<div style="position:absolute;left:319.07px;top:549.81px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:549.81px" class="cls_008"><span class="cls_008">ıda 1</span></div>
<div style="position:absolute;left:77.98px;top:567.39px" class="cls_013"><span class="cls_013">9 4</span></div>
<div style="position:absolute;left:319.07px;top:567.39px" class="cls_013"><span class="cls_013">1</span></div>
<div style="position:absolute;left:77.98px;top:580.94px" class="cls_013"><span class="cls_013">2 3 4 5 6 7 4 9 5</span></div>
<div style="position:absolute;left:319.07px;top:580.94px" class="cls_013"><span class="cls_013">3</span></div>
<div style="position:absolute;left:77.98px;top:594.49px" class="cls_013"><span class="cls_013">1 3</span></div>
<div style="position:absolute;left:319.07px;top:594.49px" class="cls_013"><span class="cls_013">3</span></div>
<div style="position:absolute;left:77.98px;top:608.04px" class="cls_013"><span class="cls_013">3 5</span></div>
<div style="position:absolute;left:319.07px;top:608.04px" class="cls_013"><span class="cls_013">1</span></div>
<div style="position:absolute;left:77.98px;top:621.59px" class="cls_013"><span class="cls_013">2 8</span></div>
<div style="position:absolute;left:77.98px;top:635.14px" class="cls_013"><span class="cls_013">7 9</span></div>
<div style="position:absolute;left:77.98px;top:666.55px" class="cls_008"><span class="cls_008">Exemplo de entrada 2</span></div>
<div style="position:absolute;left:319.07px;top:666.55px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:666.55px" class="cls_008"><span class="cls_008">ıda 2</span></div>
<div style="position:absolute;left:77.98px;top:684.13px" class="cls_013"><span class="cls_013">3 3</span></div>
<div style="position:absolute;left:319.07px;top:684.13px" class="cls_013"><span class="cls_013">1</span></div>
<div style="position:absolute;left:77.98px;top:697.68px" class="cls_013"><span class="cls_013">1 3 3</span></div>
<div style="position:absolute;left:319.07px;top:697.68px" class="cls_013"><span class="cls_013">1</span></div>
<div style="position:absolute;left:77.98px;top:711.23px" class="cls_013"><span class="cls_013">1 1</span></div>
<div style="position:absolute;left:319.07px;top:711.23px" class="cls_013"><span class="cls_013">2</span></div>
<div style="position:absolute;left:77.98px;top:724.78px" class="cls_013"><span class="cls_013">1 2</span></div>
<div style="position:absolute;left:77.98px;top:738.33px" class="cls_013"><span class="cls_013">2 3</span></div>
</div>
<div style="position:absolute;left:50%;margin-left:-297px;top:2553px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background04.jpg" width=595 height=841></div>
<div style="position:absolute;left:72.00px;top:36.16px" class="cls_009"><span class="cls_009">Maratona de Programação da SBC - ACM ICPC - 2016</span></div>
<div style="position:absolute;left:548.95px;top:36.16px" class="cls_009"><span class="cls_009">3</span></div>
<div style="position:absolute;left:278.71px;top:79.68px" class="cls_006"><span class="cls_006">Problema C</span></div>
<div style="position:absolute;left:270.32px;top:98.27px" class="cls_012"><span class="cls_012">Containers</span></div>
<div style="position:absolute;left:72.00px;top:127.40px" class="cls_009"><span class="cls_009">O SBC-Sistema de Balanceamento de Containers precisa ser atua-</span></div>
<div style="position:absolute;left:72.00px;top:140.95px" class="cls_009"><span class="cls_009">lizado para funcionar com uma nova classe de navios, a “dois por</span></div>
<div style="position:absolute;left:432.04px;top:148.77px" class="cls_015"><span class="cls_015">3</span></div>
<div style="position:absolute;left:456.79px;top:148.77px" class="cls_015"><span class="cls_015">1</span></div>
<div style="position:absolute;left:481.54px;top:148.77px" class="cls_015"><span class="cls_015">2</span></div>
<div style="position:absolute;left:506.29px;top:148.77px" class="cls_015"><span class="cls_015">1</span></div>
<div style="position:absolute;left:72.00px;top:154.49px" class="cls_009"><span class="cls_009">quatro”, que são navios que podem carregar oito grandes containers</span></div>
<div style="position:absolute;left:72.00px;top:168.04px" class="cls_009"><span class="cls_009">numa disposição de duas linhas e quatro colunas, como mostrado na</span></div>
<div style="position:absolute;left:432.04px;top:172.47px" class="cls_015"><span class="cls_015">4</span></div>
<div style="position:absolute;left:456.79px;top:172.53px" class="cls_015"><span class="cls_015">7</span></div>
<div style="position:absolute;left:476.59px;top:172.30px" class="cls_015"><span class="cls_015">52</span></div>
<div style="position:absolute;left:506.29px;top:172.57px" class="cls_015"><span class="cls_015">9</span></div>
<div style="position:absolute;left:72.00px;top:181.59px" class="cls_009"><span class="cls_009">figura ao lado. Esses navios possuem um guindaste fixo que é capaz</span></div>
<div style="position:absolute;left:72.00px;top:195.14px" class="cls_009"><span class="cls_009">de realizar um único tipo de movimentação: levantar dois containers</span></div>
<div style="position:absolute;left:72.00px;top:208.69px" class="cls_009"><span class="cls_009">adjacentes, na linha ou na coluna, e trocá-los de posição. Para ace-</span></div>
<div style="position:absolute;left:72.00px;top:222.24px" class="cls_009"><span class="cls_009">lerar o carregamento nos portos, os oito containers são embarcados</span></div>
<div style="position:absolute;left:432.04px;top:230.45px" class="cls_015"><span class="cls_015">7</span></div>
<div style="position:absolute;left:456.79px;top:230.45px" class="cls_015"><span class="cls_015">1</span></div>
<div style="position:absolute;left:481.54px;top:230.45px" class="cls_015"><span class="cls_015">2</span></div>
<div style="position:absolute;left:506.29px;top:230.45px" class="cls_015"><span class="cls_015">1</span></div>
<div style="position:absolute;left:72.00px;top:235.79px" class="cls_009"><span class="cls_009">em qualquer uma das oito posições, definindo uma configuração ini-</span></div>
<div style="position:absolute;left:72.00px;top:249.34px" class="cls_009"><span class="cls_009">cial. Depois que o navio deixa o porto, o guindaste precisa mover os</span></div>
<div style="position:absolute;left:432.04px;top:255.20px" class="cls_015"><span class="cls_015">3</span></div>
<div style="position:absolute;left:456.79px;top:255.20px" class="cls_015"><span class="cls_015">9</span></div>
<div style="position:absolute;left:476.59px;top:255.20px" class="cls_015"><span class="cls_015">52</span></div>
<div style="position:absolute;left:506.29px;top:255.20px" class="cls_015"><span class="cls_015">4</span></div>
<div style="position:absolute;left:72.00px;top:262.89px" class="cls_009"><span class="cls_009">containers para deixá-los numa configuração final pré-definida para</span></div>
<div style="position:absolute;left:72.00px;top:276.44px" class="cls_009"><span class="cls_009">a viagem.</span></div>
<div style="position:absolute;left:88.94px;top:290.12px" class="cls_009"><span class="cls_009">O problema é que o custo de combust´ıvel para o guindaste realizar uma movimentação é igual</span></div>
<div style="position:absolute;left:72.00px;top:303.67px" class="cls_009"><span class="cls_009">à soma dos pesos dos dois containers adjacentes cujas posições foram trocadas.  Dados os pesos dos</span></div>
<div style="position:absolute;left:72.00px;top:317.22px" class="cls_009"><span class="cls_009">containers em cada posição nas configurações inicial e final, o SBC precisa computar o custo total</span></div>
<div style="position:absolute;left:72.00px;top:330.77px" class="cls_009"><span class="cls_009">m</span></div>
<div style="position:absolute;left:81.09px;top:330.77px" class="cls_009"><span class="cls_009">ınimo poss´ıvel de uma sequência de movimentações que leve os containers da configuração inicial à</span></div>
<div style="position:absolute;left:72.00px;top:344.32px" class="cls_009"><span class="cls_009">configuração final.</span></div>
<div style="position:absolute;left:72.00px;top:365.19px" class="cls_007"><span class="cls_007">Entrada</span></div>
<div style="position:absolute;left:88.94px;top:383.77px" class="cls_009"><span class="cls_009">A entrada consiste de quatro linhas contendo, cada uma, quatro inteiros entre 1 e 1000, inclusive.</span></div>
<div style="position:absolute;left:72.00px;top:397.32px" class="cls_009"><span class="cls_009">As duas primeiras linhas definem os pesos na configuração inicial e as duas últimas linhas, os pesos</span></div>
<div style="position:absolute;left:72.00px;top:410.87px" class="cls_009"><span class="cls_009">na configuração final. Sempre existe uma solução, pois os containers nas configurações inicial e final</span></div>
<div style="position:absolute;left:72.00px;top:424.42px" class="cls_009"><span class="cls_009">são os mesmos, com as posições possivelmente trocadas.</span></div>
<div style="position:absolute;left:72.00px;top:445.29px" class="cls_007"><span class="cls_007">Sa</span></div>
<div style="position:absolute;left:86.00px;top:445.29px" class="cls_007"><span class="cls_007">ıda</span></div>
<div style="position:absolute;left:88.94px;top:463.87px" class="cls_009"><span class="cls_009">Seu programa deve produzir uma única linha contendo um inteiro, representando o custo total</span></div>
<div style="position:absolute;left:72.00px;top:477.42px" class="cls_009"><span class="cls_009">m´ınimo de uma sequência de movimentos que leve da configuração inicial à configuração final.</span></div>
<div style="position:absolute;left:77.98px;top:504.32px" class="cls_008"><span class="cls_008">Exemplo de entrada 1</span></div>
<div style="position:absolute;left:319.07px;top:504.32px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:504.32px" class="cls_008"><span class="cls_008">ıda 1</span></div>
<div style="position:absolute;left:77.98px;top:521.90px" class="cls_013"><span class="cls_013">3 1 2 1</span></div>
<div style="position:absolute;left:319.07px;top:521.90px" class="cls_013"><span class="cls_013">81</span></div>
<div style="position:absolute;left:77.98px;top:535.45px" class="cls_013"><span class="cls_013">4 7 52 9</span></div>
<div style="position:absolute;left:77.98px;top:549.00px" class="cls_013"><span class="cls_013">7 1 2 1</span></div>
<div style="position:absolute;left:77.98px;top:562.55px" class="cls_013"><span class="cls_013">3 9 52 4</span></div>
<div style="position:absolute;left:77.98px;top:593.96px" class="cls_008"><span class="cls_008">Exemplo de entrada 2</span></div>
<div style="position:absolute;left:319.07px;top:593.96px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:593.96px" class="cls_008"><span class="cls_008">ıda 2</span></div>
<div style="position:absolute;left:77.98px;top:611.54px" class="cls_013"><span class="cls_013">1 2 3 4</span></div>
<div style="position:absolute;left:319.07px;top:611.54px" class="cls_013"><span class="cls_013">50</span></div>
<div style="position:absolute;left:77.98px;top:625.09px" class="cls_013"><span class="cls_013">5 10 7 8</span></div>
<div style="position:absolute;left:77.98px;top:638.64px" class="cls_013"><span class="cls_013">1 2 3 4</span></div>
<div style="position:absolute;left:77.98px;top:652.19px" class="cls_013"><span class="cls_013">5 8 7 10</span></div>
<div style="position:absolute;left:77.98px;top:683.60px" class="cls_008"><span class="cls_008">Exemplo de entrada 3</span></div>
<div style="position:absolute;left:319.07px;top:683.60px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:683.60px" class="cls_008"><span class="cls_008">ıda 3</span></div>
<div style="position:absolute;left:77.98px;top:701.19px" class="cls_013"><span class="cls_013">34 5 6 998</span></div>
<div style="position:absolute;left:319.07px;top:701.19px" class="cls_013"><span class="cls_013">0</span></div>
<div style="position:absolute;left:77.98px;top:714.74px" class="cls_013"><span class="cls_013">4 17 77 84</span></div>
<div style="position:absolute;left:77.98px;top:728.28px" class="cls_013"><span class="cls_013">34 5 6 998</span></div>
<div style="position:absolute;left:77.98px;top:741.83px" class="cls_013"><span class="cls_013">4 17 77 84</span></div>
</div>
<div style="position:absolute;left:50%;margin-left:-297px;top:3404px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background05.jpg" width=595 height=841></div>
<div style="position:absolute;left:72.00px;top:36.16px" class="cls_009"><span class="cls_009">Maratona de Programação da SBC - ACM ICPC - 2016</span></div>
<div style="position:absolute;left:548.95px;top:36.16px" class="cls_009"><span class="cls_009">4</span></div>
<div style="position:absolute;left:278.15px;top:79.68px" class="cls_006"><span class="cls_006">Problema D</span></div>
<div style="position:absolute;left:277.47px;top:98.27px" class="cls_012"><span class="cls_012">Divisores</span></div>
<div style="position:absolute;left:72.00px;top:132.37px" class="cls_009"><span class="cls_009">Pense um número positivo n. Agora me diga um divisor A de n. Agora me dê um outro número B</span></div>
<div style="position:absolute;left:72.00px;top:145.92px" class="cls_009"><span class="cls_009">que não seja divisor de n. Agora um múltiplo C. E um não múltiplo D. O número que você pensou</span></div>
<div style="position:absolute;left:71.70px;top:159.47px" class="cls_009"><span class="cls_009">é...</span></div>
<div style="position:absolute;left:88.94px;top:173.02px" class="cls_009"><span class="cls_009">Parece um truque de mágica, mas é matemática! Será que, conhecendo os números A, B, C e D,</span></div>
<div style="position:absolute;left:72.00px;top:186.57px" class="cls_009"><span class="cls_009">você consegue descobrir qual era o número original n? Note que pode existir mais de uma solução!</span></div>
<div style="position:absolute;left:88.94px;top:200.12px" class="cls_009"><span class="cls_009">Neste problema, dados os valores de A, B, C e D, você deve escrever um programa que determine</span></div>
<div style="position:absolute;left:72.00px;top:213.67px" class="cls_009"><span class="cls_009">qual o menor número n que pode ter sido pensado ou concluir que não existe um valor poss</span></div>
<div style="position:absolute;left:510.82px;top:213.67px" class="cls_009"><span class="cls_009">ıvel.</span></div>
<div style="position:absolute;left:72.00px;top:234.54px" class="cls_007"><span class="cls_007">Entrada</span></div>
<div style="position:absolute;left:88.94px;top:253.12px" class="cls_009"><span class="cls_009">A entrada consiste de uma única linha que contém quatro números inteiros A, B, C, e D, como</span></div>
<div style="position:absolute;left:72.00px;top:265.65px" class="cls_009"><span class="cls_009">descrito acima (1  A, B, C, D  10</span><span class="cls_014"><sup>9</sup></span><span class="cls_009">).</span></div>
<div style="position:absolute;left:72.00px;top:287.54px" class="cls_007"><span class="cls_007">Sa</span></div>
<div style="position:absolute;left:86.00px;top:287.54px" class="cls_007"><span class="cls_007">ıda</span></div>
<div style="position:absolute;left:88.94px;top:306.12px" class="cls_009"><span class="cls_009">Seu programa deve produzir uma única linha. Caso exista pelo menos um número n para os quais</span></div>
<div style="position:absolute;left:72.00px;top:319.67px" class="cls_009"><span class="cls_009">A, B, C e D façam sentido, a linha deve conter o menor n poss´ıvel.  Caso contrário, a linha deve</span></div>
<div style="position:absolute;left:72.00px;top:333.22px" class="cls_009"><span class="cls_009">conter −1.</span></div>
<div style="position:absolute;left:77.98px;top:358.91px" class="cls_008"><span class="cls_008">Exemplo de entrada 1</span></div>
<div style="position:absolute;left:319.07px;top:358.91px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:358.91px" class="cls_008"><span class="cls_008">ıda 1</span></div>
<div style="position:absolute;left:77.98px;top:376.49px" class="cls_013"><span class="cls_013">2 12 8 2</span></div>
<div style="position:absolute;left:319.07px;top:376.49px" class="cls_013"><span class="cls_013">4</span></div>
<div style="position:absolute;left:77.98px;top:407.90px" class="cls_008"><span class="cls_008">Exemplo de entrada 2</span></div>
<div style="position:absolute;left:319.07px;top:407.90px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:407.90px" class="cls_008"><span class="cls_008">ıda 2</span></div>
<div style="position:absolute;left:77.98px;top:425.49px" class="cls_013"><span class="cls_013">3 4 60 105</span></div>
<div style="position:absolute;left:319.07px;top:425.49px" class="cls_013"><span class="cls_013">6</span></div>
</div>
<div style="position:absolute;left:50%;margin-left:-297px;top:4255px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background06.jpg" width=595 height=841></div>
<div style="position:absolute;left:72.00px;top:36.16px" class="cls_009"><span class="cls_009">Maratona de Programação da SBC - ACM ICPC - 2016</span></div>
<div style="position:absolute;left:548.95px;top:36.16px" class="cls_009"><span class="cls_009">5</span></div>
<div style="position:absolute;left:279.02px;top:79.68px" class="cls_006"><span class="cls_006">Problema E</span></div>
<div style="position:absolute;left:249.52px;top:98.27px" class="cls_012"><span class="cls_012">Estat´ıstica hexa</span></div>
<div style="position:absolute;left:72.00px;top:132.37px" class="cls_009"><span class="cls_009">Dada uma sequência de inteiros positivos em hexadecimal, por exemplo, S = [</span><span class="cls_013">9af47c0b</span><span class="cls_009">,</span><span class="cls_013"> 2545557</span><span class="cls_009">,</span></div>
<div style="position:absolute;left:72.00px;top:145.92px" class="cls_013"><span class="cls_013">ff6447979</span><span class="cls_009">], definimos</span><span class="cls_013"> soma</span><span class="cls_009">(S) como sendo a soma de todos os elementos de S. Considere agora uma</span></div>
<div style="position:absolute;left:72.00px;top:159.47px" class="cls_009"><span class="cls_009">certa permutação dos 16 d´ıgitos hexadecimais, por exemplo, p = [</span><span class="cls_013">4</span><span class="cls_009">,</span><span class="cls_013"> 9</span><span class="cls_009">,</span><span class="cls_013"> 5</span><span class="cls_009">,</span><span class="cls_013"> a</span><span class="cls_009">,</span><span class="cls_013"> 0</span><span class="cls_009">,</span><span class="cls_013"> c</span><span class="cls_009">,</span><span class="cls_013"> f</span><span class="cls_009">,</span><span class="cls_013"> 3</span><span class="cls_009">,</span><span class="cls_013"> d</span><span class="cls_009">,</span><span class="cls_013"> 7</span><span class="cls_009">,</span><span class="cls_013"> 8</span><span class="cls_009">,</span><span class="cls_013"> b</span><span class="cls_009">,</span><span class="cls_013"> 1</span><span class="cls_009">,</span><span class="cls_013"> 2</span><span class="cls_009">,</span><span class="cls_013"> 6</span><span class="cls_009">,</span><span class="cls_013"> e</span><span class="cls_009">].</span></div>
<div style="position:absolute;left:72.00px;top:172.00px" class="cls_009"><span class="cls_009">A partir da sequência base S, podemos definir uma sequência transformada S</span><span class="cls_014">[</span><span class="cls_016">4</span><span class="cls_014">]</span><span class="cls_009">, que é obtida pela</span></div>
<div style="position:absolute;left:72.00px;top:186.57px" class="cls_009"><span class="cls_009">remoção de todas as ocorrências do d´ıgito hexadecimal</span><span class="cls_013"> 4</span><span class="cls_009"> de todos os inteiros em S, S</span><span class="cls_014">[</span><span class="cls_016">4</span><span class="cls_014">]</span><span class="cls_009"> = [</span><span class="cls_013">9af7c0b</span><span class="cls_009">,</span></div>
<div style="position:absolute;left:72.00px;top:200.12px" class="cls_013"><span class="cls_013">255557</span><span class="cls_009">,</span><span class="cls_013"> ff67979</span><span class="cls_009">]. Em seguida, podemos remover o d´ıgito</span><span class="cls_013"> 9</span><span class="cls_009"> e obter S</span><span class="cls_014">[</span><span class="cls_016">4</span><span class="cls_014">,</span><span class="cls_016">9</span><span class="cls_014">]</span><span class="cls_009"> = [</span><span class="cls_013">af7c0b</span><span class="cls_009">,</span><span class="cls_013"> 255557</span><span class="cls_009">,</span><span class="cls_013"> ff677</span><span class="cls_009">].</span></div>
<div style="position:absolute;left:72.00px;top:213.67px" class="cls_009"><span class="cls_009">Seguindo a ordem dos d´ıgitos na permutação p, podemos definir dessa forma 16 sequências: S</span><span class="cls_014">[</span><span class="cls_016">4</span><span class="cls_014">]</span><span class="cls_009">, S</span><span class="cls_014">[</span><span class="cls_016">4</span><span class="cls_014">,</span><span class="cls_016">9</span><span class="cls_014">]</span><span class="cls_009">,</span></div>
<div style="position:absolute;left:72.00px;top:226.20px" class="cls_009"><span class="cls_009">S</span><span class="cls_014">[</span><span class="cls_016">4</span><span class="cls_014">,</span><span class="cls_016">9</span><span class="cls_014">,</span><span class="cls_016">5</span><span class="cls_014">]</span><span class="cls_009">,...,S</span><span class="cls_014">[</span><span class="cls_016">4</span><span class="cls_014">,</span><span class="cls_016">9</span><span class="cls_014">,</span><span class="cls_016">5</span><span class="cls_014">,</span><span class="cls_016">a</span><span class="cls_014">,</span><span class="cls_016">0</span><span class="cls_014">,</span><span class="cls_016">c</span><span class="cls_014">,</span><span class="cls_016">f</span><span class="cls_014">,</span><span class="cls_016">3</span><span class="cls_014">,</span><span class="cls_016">d</span><span class="cls_014">,</span><span class="cls_016">7</span><span class="cls_014">,</span><span class="cls_016">8</span><span class="cls_014">,</span><span class="cls_016">b</span><span class="cls_014">,</span><span class="cls_016">1</span><span class="cls_014">,</span><span class="cls_016">2</span><span class="cls_014">,</span><span class="cls_016">6</span><span class="cls_014">,</span><span class="cls_016">e</span><span class="cls_014">]</span><span class="cls_009">.  Estamos interessados em somar todos os elementos dessas 16</span></div>
<div style="position:absolute;left:72.00px;top:240.77px" class="cls_009"><span class="cls_009">sequências:</span></div>
<div style="position:absolute;left:90.24px;top:263.71px" class="cls_013"><span class="cls_013">total</span><span class="cls_009">(S, p) =</span><span class="cls_013"> soma</span><span class="cls_009">(S</span><span class="cls_014">[</span><span class="cls_016">4</span><span class="cls_014">]</span><span class="cls_009">) +</span><span class="cls_013"> soma</span><span class="cls_009">(S</span><span class="cls_014">[</span><span class="cls_016">4</span><span class="cls_014">,</span><span class="cls_016">9</span><span class="cls_014">]</span><span class="cls_009">) +</span><span class="cls_013"> soma</span><span class="cls_009">(S</span><span class="cls_014">[</span><span class="cls_016">4</span><span class="cls_014">,</span><span class="cls_016">9</span><span class="cls_014">,</span><span class="cls_016">5</span><span class="cls_014">]</span><span class="cls_009">) + · · · +</span><span class="cls_013"> soma</span><span class="cls_009">(S</span><span class="cls_014">[</span><span class="cls_016">4</span><span class="cls_014">,</span><span class="cls_016">9</span><span class="cls_014">,</span><span class="cls_016">5</span><span class="cls_014">,</span><span class="cls_016">a</span><span class="cls_014">,</span><span class="cls_016">0</span><span class="cls_014">,</span><span class="cls_016">c</span><span class="cls_014">,</span><span class="cls_016">f</span><span class="cls_014">,</span><span class="cls_016">3</span><span class="cls_014">,</span><span class="cls_016">d</span><span class="cls_014">,</span><span class="cls_016">7</span><span class="cls_014">,</span><span class="cls_016">8</span><span class="cls_014">,</span><span class="cls_016">b</span><span class="cls_014">,</span><span class="cls_016">1</span><span class="cls_014">,</span><span class="cls_016">2</span><span class="cls_014">,</span><span class="cls_016">6</span><span class="cls_014">,</span><span class="cls_016">e</span><span class="cls_014">]</span><span class="cls_009">)</span></div>
<div style="position:absolute;left:88.94px;top:289.78px" class="cls_009"><span class="cls_009">Claramente, esse total depende da permutação p usada na remoção sucessiva. Dada uma sequência</span></div>
<div style="position:absolute;left:72.00px;top:303.33px" class="cls_009"><span class="cls_009">de N inteiros positivos em hexadecimal, seu programa deve computar, considerando todas as poss</span></div>
<div style="position:absolute;left:533.73px;top:303.33px" class="cls_009"><span class="cls_009">ıveis</span></div>
<div style="position:absolute;left:72.00px;top:316.88px" class="cls_009"><span class="cls_009">permutações dos 16 d</span></div>
<div style="position:absolute;left:177.22px;top:316.88px" class="cls_009"><span class="cls_009">ıgitos hexadecimais:  o total m´ınimo, o total máximo e o somatório dos totais</span></div>
<div style="position:absolute;left:72.00px;top:330.43px" class="cls_009"><span class="cls_009">de todas as permutações. Para o somatório dos totais de todas as permutações, imprima o resultado</span></div>
<div style="position:absolute;left:72.00px;top:342.96px" class="cls_009"><span class="cls_009">módulo</span><span class="cls_013"> 3b9aca07</span><span class="cls_009"> (10</span><span class="cls_014"><sup>9</sup></span><span class="cls_009"> + 7 na base 10).</span></div>
<div style="position:absolute;left:72.00px;top:364.85px" class="cls_007"><span class="cls_007">Entrada</span></div>
<div style="position:absolute;left:88.94px;top:383.43px" class="cls_009"><span class="cls_009">A primeira linha da entrada contém um inteiro N ,</span><span class="cls_013"> 1</span><span class="cls_009">  N </span><span class="cls_013"> 3f</span><span class="cls_009">, representando o tamanho da</span></div>
<div style="position:absolute;left:72.00px;top:396.98px" class="cls_009"><span class="cls_009">sequência.  As N linhas seguintes contêm, cada uma, um inteiro positivo P ,</span><span class="cls_013"> 0</span><span class="cls_009">  P  </span><span class="cls_013"> fffffffff</span><span class="cls_009">,</span></div>
<div style="position:absolute;left:72.00px;top:410.53px" class="cls_009"><span class="cls_009">definindo a sequência inicial S de inteiros. Todos os números na entrada estão em hexadecimal, com</span></div>
<div style="position:absolute;left:72.00px;top:424.08px" class="cls_009"><span class="cls_009">letras minúsculas.</span></div>
<div style="position:absolute;left:72.00px;top:444.95px" class="cls_007"><span class="cls_007">Sa</span></div>
<div style="position:absolute;left:86.01px;top:444.95px" class="cls_007"><span class="cls_007">ıda</span></div>
<div style="position:absolute;left:88.94px;top:463.53px" class="cls_009"><span class="cls_009">Seu programa deve produzir uma única linha na sa´ıda contendo três inteiros positivos, em hexade-</span></div>
<div style="position:absolute;left:72.00px;top:477.08px" class="cls_009"><span class="cls_009">cimal com letras minúsculas, representando o total m´ınimo, o total máximo e o somatório dos totais</span></div>
<div style="position:absolute;left:72.00px;top:490.63px" class="cls_009"><span class="cls_009">considerando todas as permutações poss</span></div>
<div style="position:absolute;left:263.95px;top:490.63px" class="cls_009"><span class="cls_009">ıveis dos 16 d´ıgitos hexadecimais.</span></div>
<div style="position:absolute;left:77.98px;top:517.53px" class="cls_008"><span class="cls_008">Exemplo de entrada 1</span></div>
<div style="position:absolute;left:319.07px;top:517.53px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:517.53px" class="cls_008"><span class="cls_008">ıda 1</span></div>
<div style="position:absolute;left:77.98px;top:535.11px" class="cls_013"><span class="cls_013">3</span></div>
<div style="position:absolute;left:319.07px;top:535.11px" class="cls_013"><span class="cls_013">1312c99c b4e87e9387 5bb5fc</span></div>
<div style="position:absolute;left:77.98px;top:548.66px" class="cls_013"><span class="cls_013">9af47c0b</span></div>
<div style="position:absolute;left:77.98px;top:562.21px" class="cls_013"><span class="cls_013">2545557</span></div>
<div style="position:absolute;left:77.98px;top:575.76px" class="cls_013"><span class="cls_013">ff6447979</span></div>
<div style="position:absolute;left:77.98px;top:607.17px" class="cls_008"><span class="cls_008">Exemplo de entrada 2</span></div>
<div style="position:absolute;left:319.07px;top:607.17px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:607.17px" class="cls_008"><span class="cls_008">ıda 2</span></div>
<div style="position:absolute;left:77.98px;top:624.76px" class="cls_013"><span class="cls_013">1</span></div>
<div style="position:absolute;left:319.07px;top:624.76px" class="cls_013"><span class="cls_013">0 effffffff1 15dac189</span></div>
<div style="position:absolute;left:77.98px;top:638.30px" class="cls_013"><span class="cls_013">fffffffff</span></div>
</div>
<div style="position:absolute;left:50%;margin-left:-297px;top:5106px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background07.jpg" width=595 height=841></div>
<div style="position:absolute;left:72.00px;top:36.16px" class="cls_009"><span class="cls_009">Maratona de Programação da SBC - ACM ICPC - 2016</span></div>
<div style="position:absolute;left:548.95px;top:36.16px" class="cls_009"><span class="cls_009">6</span></div>
<div style="position:absolute;left:279.21px;top:79.68px" class="cls_006"><span class="cls_006">Problema F</span></div>
<div style="position:absolute;left:244.19px;top:98.27px" class="cls_012"><span class="cls_012">Fundindo árvores</span></div>
<div style="position:absolute;left:72.00px;top:132.37px" class="cls_009"><span class="cls_009">Em Computação árvores são objetos estranhos: a raiz está no topo e as folhas estão embaixo! Uma</span></div>
<div style="position:absolute;left:72.00px;top:145.92px" class="cls_009"><span class="cls_009">árvore é uma estrutura de dados composta de N vértices conectados por N − 1 arestas de forma que é</span></div>
<div style="position:absolute;left:72.00px;top:159.47px" class="cls_009"><span class="cls_009">poss´ıvel chegar de um vértice a qualquer outro vértice seguindo as arestas. Em uma árvore enraizada,</span></div>
<div style="position:absolute;left:72.00px;top:173.02px" class="cls_009"><span class="cls_009">cada aresta conecta um vértice pai a um vértice filho. Um único vértice não tem pai, e é chamado de</span></div>
<div style="position:absolute;left:72.00px;top:186.57px" class="cls_009"><span class="cls_009">raiz. Assim, partir da raiz é possivel chegar a qualquer outro vértice da árvore seguindo as arestas na</span></div>
<div style="position:absolute;left:72.00px;top:200.12px" class="cls_009"><span class="cls_009">direção de pai para filho.</span></div>
<div style="position:absolute;left:88.94px;top:213.67px" class="cls_009"><span class="cls_009">Em uma árvore ternária cada vértice pode ter até três vértices filhos, chamados esquerdo, central</span></div>
<div style="position:absolute;left:72.00px;top:227.22px" class="cls_009"><span class="cls_009">e direito. Uma árvore ternária canhota é uma árvore ternária enraizada em que nenhum vértice tem</span></div>
<div style="position:absolute;left:72.00px;top:240.77px" class="cls_009"><span class="cls_009">filho direito. Uma árvore ternária destra é uma árvore ternária enraizada em que nenhum vértice tem</span></div>
<div style="position:absolute;left:72.00px;top:254.32px" class="cls_009"><span class="cls_009">filho esquerdo.  A raiz de uma árvore ternária é sempre um vértice central.  A figura abaixo mostra</span></div>
<div style="position:absolute;left:72.00px;top:267.87px" class="cls_009"><span class="cls_009">exemplos de uma árvore canhota e de uma árvore destra.</span></div>
<div style="position:absolute;left:251.86px;top:296.39px" class="cls_017"><span class="cls_017">a</span></div>
<div style="position:absolute;left:390.15px;top:307.66px" class="cls_017"><span class="cls_017">x</span></div>
<div style="position:absolute;left:226.66px;top:321.59px" class="cls_017"><span class="cls_017">b</span></div>
<div style="position:absolute;left:252.07px;top:320.69px" class="cls_017"><span class="cls_017">c</span></div>
<div style="position:absolute;left:390.15px;top:331.96px" class="cls_017"><span class="cls_017">y</span></div>
<div style="position:absolute;left:414.45px;top:331.96px" class="cls_017"><span class="cls_017">z</span></div>
<div style="position:absolute;left:172.74px;top:335.76px" class="cls_018"><span class="cls_018">Uma árvore</span></div>
<div style="position:absolute;left:333.84px;top:335.76px" class="cls_018"><span class="cls_018">Uma árvore</span></div>
<div style="position:absolute;left:182.85px;top:345.48px" class="cls_019"><span class="cls_019">canhota</span><span class="cls_018">:</span></div>
<div style="position:absolute;left:226.66px;top:345.89px" class="cls_017"><span class="cls_017">d</span></div>
<div style="position:absolute;left:349.80px;top:345.48px" class="cls_019"><span class="cls_019">destra</span><span class="cls_018">:</span></div>
<div style="position:absolute;left:389.95px;top:356.26px" class="cls_017"><span class="cls_017">u</span></div>
<div style="position:absolute;left:413.65px;top:356.26px" class="cls_017"><span class="cls_017">w</span></div>
<div style="position:absolute;left:226.66px;top:369.29px" class="cls_017"><span class="cls_017">e</span></div>
<div style="position:absolute;left:415.25px;top:380.56px" class="cls_017"><span class="cls_017">t</span></div>
<div style="position:absolute;left:227.67px;top:393.59px" class="cls_017"><span class="cls_017">f</span></div>
<div style="position:absolute;left:438.75px;top:404.86px" class="cls_017"><span class="cls_017">v</span></div>
<div style="position:absolute;left:202.36px;top:417.89px" class="cls_017"><span class="cls_017">g</span></div>
<div style="position:absolute;left:88.94px;top:445.43px" class="cls_009"><span class="cls_009">A superposição S de uma árvore canhota C com uma árvore destra D é uma árvore ternária</span></div>
<div style="position:absolute;left:72.00px;top:458.98px" class="cls_009"><span class="cls_009">enraizada em que a raiz é ou a raiz de C ou a raiz de D ou ambas as ra´ızes, de C e de D, superpostas,</span></div>
<div style="position:absolute;left:72.00px;top:472.53px" class="cls_009"><span class="cls_009">e que contém a estrutura de ambas as árvores superpostas. A figura abaixo mostra algumas árvores</span></div>
<div style="position:absolute;left:72.00px;top:486.08px" class="cls_009"><span class="cls_009">formadas pela superposição da árvore canhota e da árvore destra da figura acima.</span></div>
<div style="position:absolute;left:470.91px;top:513.58px" class="cls_017"><span class="cls_017">a</span></div>
<div style="position:absolute;left:174.96px;top:526.07px" class="cls_017"><span class="cls_017">x</span></div>
<div style="position:absolute;left:326.47px;top:526.52px" class="cls_017"><span class="cls_017">a</span></div>
<div style="position:absolute;left:445.71px;top:538.78px" class="cls_017"><span class="cls_017">b</span></div>
<div style="position:absolute;left:471.11px;top:537.88px" class="cls_017"><span class="cls_017">c</span></div>
<div style="position:absolute;left:171.93px;top:550.91px" class="cls_017"><span class="cls_017">a/y</span><span class="cls_020">y</span></div>
<div style="position:absolute;left:199.26px;top:550.37px" class="cls_017"><span class="cls_017">z</span></div>
<div style="position:absolute;left:301.27px;top:551.72px" class="cls_017"><span class="cls_017">b</span></div>
<div style="position:absolute;left:326.67px;top:550.82px" class="cls_017"><span class="cls_017">c</span></div>
<div style="position:absolute;left:445.71px;top:563.08px" class="cls_017"><span class="cls_017">d</span></div>
<div style="position:absolute;left:149.53px;top:575.21px" class="cls_017"><span class="cls_017">b</span></div>
<div style="position:absolute;left:171.93px;top:575.21px" class="cls_017"><span class="cls_017">c/u</span><span class="cls_020">u</span></div>
<div style="position:absolute;left:198.46px;top:574.67px" class="cls_017"><span class="cls_017">w</span></div>
<div style="position:absolute;left:298.47px;top:576.02px" class="cls_017"><span class="cls_017">d/x</span><span class="cls_020">x</span></div>
<div style="position:absolute;left:445.71px;top:586.48px" class="cls_017"><span class="cls_017">e</span></div>
<div style="position:absolute;left:149.53px;top:599.51px" class="cls_017"><span class="cls_017">d</span></div>
<div style="position:absolute;left:200.06px;top:598.97px" class="cls_017"><span class="cls_017">t</span></div>
<div style="position:absolute;left:298.47px;top:600.32px" class="cls_017"><span class="cls_017">e/y</span><span class="cls_020">y</span></div>
<div style="position:absolute;left:325.77px;top:599.78px" class="cls_017"><span class="cls_017">z</span></div>
<div style="position:absolute;left:443.91px;top:611.68px" class="cls_017"><span class="cls_017">f</span></div>
<div style="position:absolute;left:445.50px;top:610.31px" class="cls_017"><span class="cls_017">/</span></div>
<div style="position:absolute;left:447.92px;top:611.68px" class="cls_017"><span class="cls_017">x</span></div>
<div style="position:absolute;left:149.53px;top:622.91px" class="cls_017"><span class="cls_017">e</span></div>
<div style="position:absolute;left:223.56px;top:623.27px" class="cls_017"><span class="cls_017">v</span></div>
<div style="position:absolute;left:299.27px;top:624.62px" class="cls_017"><span class="cls_017">f/</span></div>
<div style="position:absolute;left:303.27px;top:624.62px" class="cls_017"><span class="cls_017">u</span></div>
<div style="position:absolute;left:324.97px;top:624.08px" class="cls_017"><span class="cls_017">w</span></div>
<div style="position:absolute;left:421.41px;top:635.08px" class="cls_017"><span class="cls_017">g</span></div>
<div style="position:absolute;left:445.72px;top:635.51px" class="cls_017"><span class="cls_017">y</span></div>
<div style="position:absolute;left:470.02px;top:635.51px" class="cls_017"><span class="cls_017">z</span></div>
<div style="position:absolute;left:150.53px;top:647.21px" class="cls_017"><span class="cls_017">f</span></div>
<div style="position:absolute;left:276.97px;top:648.02px" class="cls_017"><span class="cls_017">g</span></div>
<div style="position:absolute;left:326.57px;top:648.38px" class="cls_017"><span class="cls_017">t</span></div>
<div style="position:absolute;left:445.52px;top:659.81px" class="cls_017"><span class="cls_017">u</span></div>
<div style="position:absolute;left:469.22px;top:659.81px" class="cls_017"><span class="cls_017">w</span></div>
<div style="position:absolute;left:125.23px;top:671.51px" class="cls_017"><span class="cls_017">g</span></div>
<div style="position:absolute;left:350.07px;top:672.68px" class="cls_017"><span class="cls_017">v</span></div>
<div style="position:absolute;left:470.82px;top:684.11px" class="cls_017"><span class="cls_017">t</span></div>
<div style="position:absolute;left:163.77px;top:695.37px" class="cls_021"><span class="cls_021">(a)</span></div>
<div style="position:absolute;left:302.24px;top:695.37px" class="cls_021"><span class="cls_021">(b)</span></div>
<div style="position:absolute;left:440.90px;top:695.37px" class="cls_021"><span class="cls_021">(c)</span></div>
<div style="position:absolute;left:494.32px;top:708.41px" class="cls_017"><span class="cls_017">v</span></div>
<div style="position:absolute;left:88.94px;top:736.69px" class="cls_009"><span class="cls_009">Note que na Figura (a) a raiz é o vértice x (da árvore destra) e os pares de vértices (a, y) e (c, u)</span></div>
<div style="position:absolute;left:72.00px;top:750.24px" class="cls_009"><span class="cls_009">são superpostos. Na Figura (b) a raiz é o vértice a (da árvore canhota) e os pares de vértices (d, x),</span></div>
</div>
<div style="position:absolute;left:50%;margin-left:-297px;top:5957px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background08.jpg" width=595 height=841></div>
<div style="position:absolute;left:72.00px;top:36.16px" class="cls_009"><span class="cls_009">Maratona de Programação da SBC - ACM ICPC - 2016</span></div>
<div style="position:absolute;left:548.95px;top:36.16px" class="cls_009"><span class="cls_009">7</span></div>
<div style="position:absolute;left:72.00px;top:83.11px" class="cls_009"><span class="cls_009">(e, y) e (f, u) são superpostos. Na Figura (c) a raiz também é o vértice a (da árvore canhota) e o par</span></div>
<div style="position:absolute;left:72.00px;top:96.66px" class="cls_009"><span class="cls_009">de vértices (f, x) é superposto.</span></div>
<div style="position:absolute;left:88.94px;top:110.21px" class="cls_009"><span class="cls_009">Dadas uma árvore canhota e uma árvore destra, sua tarefa é determinar o número m´ınimo de</span></div>
<div style="position:absolute;left:72.00px;top:123.76px" class="cls_009"><span class="cls_009">vértices necessários para construir uma árvore ternária que é uma superposição das árvores dadas.</span></div>
<div style="position:absolute;left:72.00px;top:144.63px" class="cls_007"><span class="cls_007">Entrada</span></div>
<div style="position:absolute;left:88.94px;top:163.21px" class="cls_009"><span class="cls_009">A primeira linha de um caso de teste contém um inteiro N indicando o número de vértices da</span></div>
<div style="position:absolute;left:72.00px;top:175.74px" class="cls_009"><span class="cls_009">árvore canhota (1  N   10</span><span class="cls_014"><sup>4</sup></span><span class="cls_009">).  Vértices nesta árvore são identificados por números de 1 a N , e</span></div>
<div style="position:absolute;left:72.00px;top:190.31px" class="cls_009"><span class="cls_009">a raiz é o vértice de número 1.  Cada uma das N linhas seguintes contém três inteiros I, L e K,</span></div>
<div style="position:absolute;left:72.00px;top:203.86px" class="cls_009"><span class="cls_009">indicando respectivamente o identificador de um vértice I, o identificador do filho esquerdo L de I</span></div>
<div style="position:absolute;left:72.00px;top:217.41px" class="cls_009"><span class="cls_009">e o identificador do filho central K de I (0  I,L,K  N). A linha seguinte contém um inteiro M</span></div>
<div style="position:absolute;left:72.00px;top:229.94px" class="cls_009"><span class="cls_009">indicando o número de vértices da árvore destra (1  M  10</span><span class="cls_014"><sup>4</sup></span><span class="cls_009">). Vértices nesta árvore são identificados</span></div>
<div style="position:absolute;left:72.00px;top:244.51px" class="cls_009"><span class="cls_009">por números de 1 a M , e a raiz é o vértice de número 1. Cada uma das M linhas seguintes contém</span></div>
<div style="position:absolute;left:72.00px;top:258.06px" class="cls_009"><span class="cls_009">três inteiros P , Q e R, indicando respectivamente o identificador de um vértice P , o identificador do</span></div>
<div style="position:absolute;left:72.00px;top:271.61px" class="cls_009"><span class="cls_009">filho central Q de P e o identificador do filho direito R de P (0  P, Q, R  N ). O valor zero indica</span></div>
<div style="position:absolute;left:72.00px;top:285.16px" class="cls_009"><span class="cls_009">um vértice não existente (usado quando um vértice não tem um ou ambos os seus filhos).</span></div>
<div style="position:absolute;left:72.00px;top:306.03px" class="cls_007"><span class="cls_007">Sa</span></div>
<div style="position:absolute;left:86.00px;top:306.03px" class="cls_007"><span class="cls_007">ıda</span></div>
<div style="position:absolute;left:88.94px;top:324.61px" class="cls_009"><span class="cls_009">Imprima o número m´ınimo de vértices de uma árvore que é a superposição das duas árvores dadas</span></div>
<div style="position:absolute;left:72.00px;top:338.16px" class="cls_009"><span class="cls_009">na entrada.</span></div>
<div style="position:absolute;left:77.98px;top:362.94px" class="cls_008"><span class="cls_008">Exemplo de entrada 1</span></div>
<div style="position:absolute;left:319.07px;top:362.94px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:362.94px" class="cls_008"><span class="cls_008">ıda 1</span></div>
<div style="position:absolute;left:77.98px;top:380.52px" class="cls_013"><span class="cls_013">7</span></div>
<div style="position:absolute;left:319.07px;top:380.52px" class="cls_013"><span class="cls_013">11</span></div>
<div style="position:absolute;left:77.98px;top:394.07px" class="cls_013"><span class="cls_013">1 2 3</span></div>
<div style="position:absolute;left:77.98px;top:407.62px" class="cls_013"><span class="cls_013">2 0 0</span></div>
<div style="position:absolute;left:77.98px;top:421.17px" class="cls_013"><span class="cls_013">3 4 0</span></div>
<div style="position:absolute;left:77.98px;top:434.72px" class="cls_013"><span class="cls_013">4 0 5</span></div>
<div style="position:absolute;left:77.98px;top:448.27px" class="cls_013"><span class="cls_013">5 0 6</span></div>
<div style="position:absolute;left:77.98px;top:461.81px" class="cls_013"><span class="cls_013">6 7 0</span></div>
<div style="position:absolute;left:77.98px;top:475.36px" class="cls_013"><span class="cls_013">7 0 0</span></div>
<div style="position:absolute;left:77.98px;top:488.91px" class="cls_013"><span class="cls_013">7</span></div>
<div style="position:absolute;left:77.98px;top:502.46px" class="cls_013"><span class="cls_013">1 2 3</span></div>
<div style="position:absolute;left:77.98px;top:516.01px" class="cls_013"><span class="cls_013">2 4 0</span></div>
<div style="position:absolute;left:77.98px;top:529.56px" class="cls_013"><span class="cls_013">3 5 0</span></div>
<div style="position:absolute;left:77.98px;top:543.11px" class="cls_013"><span class="cls_013">4 0 6</span></div>
<div style="position:absolute;left:77.98px;top:556.66px" class="cls_013"><span class="cls_013">5 0 0</span></div>
<div style="position:absolute;left:77.98px;top:570.21px" class="cls_013"><span class="cls_013">6 0 7</span></div>
<div style="position:absolute;left:77.98px;top:583.76px" class="cls_013"><span class="cls_013">7 0 0</span></div>
</div>
<div style="position:absolute;left:50%;margin-left:-297px;top:6808px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background09.jpg" width=595 height=841></div>
<div style="position:absolute;left:72.00px;top:36.16px" class="cls_009"><span class="cls_009">Maratona de Programação da SBC - ACM ICPC - 2016</span></div>
<div style="position:absolute;left:548.95px;top:36.16px" class="cls_009"><span class="cls_009">8</span></div>
<div style="position:absolute;left:77.98px;top:83.98px" class="cls_008"><span class="cls_008">Exemplo de entrada 2</span></div>
<div style="position:absolute;left:319.07px;top:83.98px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:83.98px" class="cls_008"><span class="cls_008">ıda 2</span></div>
<div style="position:absolute;left:77.98px;top:101.57px" class="cls_013"><span class="cls_013">5</span></div>
<div style="position:absolute;left:319.07px;top:101.57px" class="cls_013"><span class="cls_013">6</span></div>
<div style="position:absolute;left:77.98px;top:115.11px" class="cls_013"><span class="cls_013">1 2 3</span></div>
<div style="position:absolute;left:77.98px;top:128.66px" class="cls_013"><span class="cls_013">2 4 5</span></div>
<div style="position:absolute;left:77.98px;top:142.21px" class="cls_013"><span class="cls_013">3 0 0</span></div>
<div style="position:absolute;left:77.98px;top:155.76px" class="cls_013"><span class="cls_013">4 0 0</span></div>
<div style="position:absolute;left:77.98px;top:169.31px" class="cls_013"><span class="cls_013">5 0 0</span></div>
<div style="position:absolute;left:77.98px;top:182.86px" class="cls_013"><span class="cls_013">3</span></div>
<div style="position:absolute;left:77.98px;top:196.41px" class="cls_013"><span class="cls_013">1 2 3</span></div>
<div style="position:absolute;left:77.98px;top:209.96px" class="cls_013"><span class="cls_013">2 0 0</span></div>
<div style="position:absolute;left:77.98px;top:223.51px" class="cls_013"><span class="cls_013">3 0 0</span></div>
<div style="position:absolute;left:77.98px;top:254.92px" class="cls_008"><span class="cls_008">Exemplo de entrada 3</span></div>
<div style="position:absolute;left:319.07px;top:254.92px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:254.92px" class="cls_008"><span class="cls_008">ıda 3</span></div>
<div style="position:absolute;left:77.98px;top:272.50px" class="cls_013"><span class="cls_013">3</span></div>
<div style="position:absolute;left:319.07px;top:272.50px" class="cls_013"><span class="cls_013">3</span></div>
<div style="position:absolute;left:77.98px;top:286.05px" class="cls_013"><span class="cls_013">3 0 2</span></div>
<div style="position:absolute;left:77.98px;top:299.60px" class="cls_013"><span class="cls_013">2 0 0</span></div>
<div style="position:absolute;left:77.98px;top:313.15px" class="cls_013"><span class="cls_013">1 0 3</span></div>
<div style="position:absolute;left:77.98px;top:326.70px" class="cls_013"><span class="cls_013">2</span></div>
<div style="position:absolute;left:77.98px;top:340.25px" class="cls_013"><span class="cls_013">2 0 0</span></div>
<div style="position:absolute;left:77.98px;top:353.80px" class="cls_013"><span class="cls_013">1 2 0</span></div>
</div>
<div style="position:absolute;left:50%;margin-left:-297px;top:7659px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background10.jpg" width=595 height=841></div>
<div style="position:absolute;left:72.00px;top:36.16px" class="cls_009"><span class="cls_009">Maratona de Programação da SBC - ACM ICPC - 2016</span></div>
<div style="position:absolute;left:548.95px;top:36.16px" class="cls_009"><span class="cls_009">9</span></div>
<div style="position:absolute;left:278.52px;top:79.68px" class="cls_006"><span class="cls_006">Problema G</span></div>
<div style="position:absolute;left:285.79px;top:98.27px" class="cls_012"><span class="cls_012">Go−−</span></div>
<div style="position:absolute;left:72.00px;top:129.12px" class="cls_009"><span class="cls_009">Go−− é até parecido com o tradicional jogo de Go, mas é bem mais</span></div>
<div style="position:absolute;left:72.00px;top:142.67px" class="cls_009"><span class="cls_009">fácil! Ele é jogado em um tabuleiro quadrado de dimensão N , inicial-</span></div>
<div style="position:absolute;left:72.00px;top:156.22px" class="cls_009"><span class="cls_009">mente vazio, no qual dois jogadores, um jogando com as pedras pretas</span></div>
<div style="position:absolute;left:72.00px;top:169.77px" class="cls_009"><span class="cls_009">e o outro com as brancas, se alternam colocando uma pedra por vez</span></div>
<div style="position:absolute;left:72.00px;top:183.32px" class="cls_009"><span class="cls_009">dentro de qualquer célula que ainda não esteja ocupada.  A partida</span></div>
<div style="position:absolute;left:72.00px;top:196.86px" class="cls_009"><span class="cls_009">termina depois que cada jogador colocou P pedras no tabuleiro. Con-</span></div>
<div style="position:absolute;left:72.00px;top:210.41px" class="cls_009"><span class="cls_009">sidere todas as poss´ıveis sub-áreas quadradas de dimensão de 1 a N .</span></div>
<div style="position:absolute;left:72.00px;top:223.96px" class="cls_009"><span class="cls_009">Uma sub-área pertence ao jogador que joga com as pedras pretas se</span></div>
<div style="position:absolute;left:72.00px;top:237.51px" class="cls_009"><span class="cls_009">ela contém pelo menos uma pedra preta e nenhuma pedra branca. Da</span></div>
<div style="position:absolute;left:72.00px;top:251.06px" class="cls_009"><span class="cls_009">mesma forma, uma sub-área quadrada pertence ao jogador que joga</span></div>
<div style="position:absolute;left:72.00px;top:264.61px" class="cls_009"><span class="cls_009">com as pedras brancas se contém ao menos uma pedra branca e ne-</span></div>
<div style="position:absolute;left:72.00px;top:278.16px" class="cls_009"><span class="cls_009">nhuma pedra preta. Note que as áreas que não contenham nenhuma</span></div>
<div style="position:absolute;left:72.00px;top:291.71px" class="cls_009"><span class="cls_009">pedra, ou que contenham tanto pedras pretas quanto brancas, não</span></div>
<div style="position:absolute;left:72.00px;top:305.26px" class="cls_009"><span class="cls_009">pertencem a nenhum jogador.</span></div>
<div style="position:absolute;left:88.94px;top:318.94px" class="cls_009"><span class="cls_009">Neste problema, dada a posição final do tabuleiro, seu programa deve computar quantas sub-áreas</span></div>
<div style="position:absolute;left:72.00px;top:332.49px" class="cls_009"><span class="cls_009">quadradas pertencem a cada jogador, para descobrir quem ganhou a partida.  Na figura, as pretas</span></div>
<div style="position:absolute;left:72.00px;top:346.04px" class="cls_009"><span class="cls_009">possuem 12 sub-áreas (cinco de dimensão 1, seis de dimensão 2 e uma de dimensão 3).  As brancas,</span></div>
<div style="position:absolute;left:72.00px;top:359.59px" class="cls_009"><span class="cls_009">que perderam a partida, possuem apenas 10.</span></div>
<div style="position:absolute;left:72.00px;top:380.46px" class="cls_007"><span class="cls_007">Entrada</span></div>
<div style="position:absolute;left:88.94px;top:398.02px" class="cls_009"><span class="cls_009">A primeira linha da entrada contém dois inteiros N e P , 2  N  500, 1  P  500 e P  N</span><span class="cls_014"><sup>2</sup></span><span class="cls_009">/2,</span></div>
<div style="position:absolute;left:72.00px;top:412.59px" class="cls_009"><span class="cls_009">representando, respectivamente, a dimensão do tabuleiro e o número de pedras que cada jogador</span></div>
<div style="position:absolute;left:72.00px;top:426.14px" class="cls_009"><span class="cls_009">coloca.  Cada uma das P linhas seguintes contém dois inteiros L e C (1  L, C  N ) definindo as</span></div>
<div style="position:absolute;left:72.00px;top:439.69px" class="cls_009"><span class="cls_009">coordenadas (linha, coluna) das pedras pretas. Depois, cada uma das próximas P linhas contém dois</span></div>
<div style="position:absolute;left:72.00px;top:453.24px" class="cls_009"><span class="cls_009">inteiros L e C (1  L, C  N ) definindo as coordenadas (linha, coluna) das pedras brancas. Todas as</span></div>
<div style="position:absolute;left:72.00px;top:466.79px" class="cls_009"><span class="cls_009">pedras são colocadas em células distintas.</span></div>
<div style="position:absolute;left:72.00px;top:487.66px" class="cls_007"><span class="cls_007">Sa</span></div>
<div style="position:absolute;left:86.00px;top:487.66px" class="cls_007"><span class="cls_007">ıda</span></div>
<div style="position:absolute;left:88.94px;top:506.24px" class="cls_009"><span class="cls_009">Imprima uma linha contendo dois inteiros separados por um espaço: quantas áreas distintas per-</span></div>
<div style="position:absolute;left:72.00px;top:519.79px" class="cls_009"><span class="cls_009">tencentes às pretas e às brancas.</span></div>
<div style="position:absolute;left:77.98px;top:546.69px" class="cls_008"><span class="cls_008">Exemplo de entrada 1</span></div>
<div style="position:absolute;left:319.07px;top:546.69px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:546.69px" class="cls_008"><span class="cls_008">ıda 1</span></div>
<div style="position:absolute;left:77.98px;top:564.27px" class="cls_013"><span class="cls_013">2 1</span></div>
<div style="position:absolute;left:319.07px;top:564.27px" class="cls_013"><span class="cls_013">1 1</span></div>
<div style="position:absolute;left:77.98px;top:577.82px" class="cls_013"><span class="cls_013">1 1</span></div>
<div style="position:absolute;left:77.98px;top:591.37px" class="cls_013"><span class="cls_013">2 2</span></div>
</div>
<div style="position:absolute;left:50%;margin-left:-297px;top:8510px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background11.jpg" width=595 height=841></div>
<div style="position:absolute;left:72.00px;top:36.16px" class="cls_009"><span class="cls_009">Maratona de Programação da SBC - ACM ICPC - 2016</span></div>
<div style="position:absolute;left:543.49px;top:36.16px" class="cls_009"><span class="cls_009">10</span></div>
<div style="position:absolute;left:77.98px;top:83.98px" class="cls_008"><span class="cls_008">Exemplo de entrada 2</span></div>
<div style="position:absolute;left:319.07px;top:83.98px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:83.98px" class="cls_008"><span class="cls_008">ıda 2</span></div>
<div style="position:absolute;left:77.98px;top:101.57px" class="cls_013"><span class="cls_013">5 5</span></div>
<div style="position:absolute;left:319.07px;top:101.57px" class="cls_013"><span class="cls_013">12 10</span></div>
<div style="position:absolute;left:77.98px;top:115.11px" class="cls_013"><span class="cls_013">1 3</span></div>
<div style="position:absolute;left:77.98px;top:128.66px" class="cls_013"><span class="cls_013">2 3</span></div>
<div style="position:absolute;left:77.98px;top:142.21px" class="cls_013"><span class="cls_013">2 4</span></div>
<div style="position:absolute;left:77.98px;top:155.76px" class="cls_013"><span class="cls_013">4 1</span></div>
<div style="position:absolute;left:77.98px;top:169.31px" class="cls_013"><span class="cls_013">5 3</span></div>
<div style="position:absolute;left:77.98px;top:182.86px" class="cls_013"><span class="cls_013">1 5</span></div>
<div style="position:absolute;left:77.98px;top:196.41px" class="cls_013"><span class="cls_013">2 1</span></div>
<div style="position:absolute;left:77.98px;top:209.96px" class="cls_013"><span class="cls_013">3 5</span></div>
<div style="position:absolute;left:77.98px;top:223.51px" class="cls_013"><span class="cls_013">4 4</span></div>
<div style="position:absolute;left:77.98px;top:237.06px" class="cls_013"><span class="cls_013">5 1</span></div>
<div style="position:absolute;left:77.98px;top:268.47px" class="cls_008"><span class="cls_008">Exemplo de entrada 3</span></div>
<div style="position:absolute;left:319.07px;top:268.47px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:268.47px" class="cls_008"><span class="cls_008">ıda 3</span></div>
<div style="position:absolute;left:77.98px;top:286.05px" class="cls_013"><span class="cls_013">500 3</span></div>
<div style="position:absolute;left:319.07px;top:286.05px" class="cls_013"><span class="cls_013">4 12463784</span></div>
<div style="position:absolute;left:77.98px;top:299.60px" class="cls_013"><span class="cls_013">500 498</span></div>
<div style="position:absolute;left:77.98px;top:313.15px" class="cls_013"><span class="cls_013">500 499</span></div>
<div style="position:absolute;left:77.98px;top:326.70px" class="cls_013"><span class="cls_013">500 500</span></div>
<div style="position:absolute;left:77.98px;top:340.25px" class="cls_013"><span class="cls_013">120 124</span></div>
<div style="position:absolute;left:77.98px;top:353.80px" class="cls_013"><span class="cls_013">251 269</span></div>
<div style="position:absolute;left:77.98px;top:367.35px" class="cls_013"><span class="cls_013">499 498</span></div>
</div>
<div style="position:absolute;left:50%;margin-left:-297px;top:9361px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background12.jpg" width=595 height=841></div>
<div style="position:absolute;left:72.00px;top:36.16px" class="cls_009"><span class="cls_009">Maratona de Programação da SBC - ACM ICPC - 2016</span></div>
<div style="position:absolute;left:543.49px;top:36.16px" class="cls_009"><span class="cls_009">11</span></div>
<div style="position:absolute;left:278.28px;top:79.68px" class="cls_006"><span class="cls_006">Problema H</span></div>
<div style="position:absolute;left:244.92px;top:98.27px" class="cls_012"><span class="cls_012">huaauhahhuahau</span></div>
<div style="position:absolute;left:72.00px;top:132.37px" class="cls_009"><span class="cls_009">Em chats, é muito comum entre jovens e adolescentes utilizar sequências de letras, que parecem muitas</span></div>
<div style="position:absolute;left:72.00px;top:145.92px" class="cls_009"><span class="cls_009">vezes aleatórias, para representar risadas. Alguns exemplos comuns são:</span></div>
<div style="position:absolute;left:72.00px;top:171.43px" class="cls_013"><span class="cls_013">huaauhahhuahau</span></div>
<div style="position:absolute;left:72.00px;top:184.98px" class="cls_013"><span class="cls_013">hehehehe</span></div>
<div style="position:absolute;left:72.00px;top:198.53px" class="cls_013"><span class="cls_013">ahahahaha</span></div>
<div style="position:absolute;left:72.00px;top:212.07px" class="cls_013"><span class="cls_013">jaisjjkasjksjjskjakijs</span></div>
<div style="position:absolute;left:72.00px;top:225.62px" class="cls_013"><span class="cls_013">huehuehue</span></div>
<div style="position:absolute;left:88.94px;top:251.13px" class="cls_009"><span class="cls_009">Cláudia é uma jovem programadora que ficou intrigada pela sonoridade das “risadas digitais”.</span></div>
<div style="position:absolute;left:72.00px;top:264.68px" class="cls_009"><span class="cls_009">Algumas delas ela nem mesmo consegue pronunciar!  Mas ela percebeu que algumas delas parecem</span></div>
<div style="position:absolute;left:72.00px;top:278.23px" class="cls_009"><span class="cls_009">transmitir melhor o sentimento da risada que outras.  A primeira coisa que ela percebeu é que as</span></div>
<div style="position:absolute;left:72.00px;top:291.78px" class="cls_009"><span class="cls_009">consoantes não interferem no quanto as risadas digitais influenciam na transmissão do sentimento.</span></div>
<div style="position:absolute;left:72.00px;top:305.33px" class="cls_009"><span class="cls_009">A segunda coisa que ela percebeu é que as risadas digitais mais engraçadas são aquelas em que</span></div>
<div style="position:absolute;left:72.00px;top:318.87px" class="cls_009"><span class="cls_009">as sequências de vogais são iguais quando lidas na ordem natural (da esquerda para a direita) ou</span></div>
<div style="position:absolute;left:72.00px;top:332.42px" class="cls_009"><span class="cls_009">na ordem inversa (da direita para a esquerda), ignorando as consoantes.  Por exemplo, “hahaha” e</span></div>
<div style="position:absolute;left:72.00px;top:345.97px" class="cls_009"><span class="cls_009">“huaauhahhuahau” estão entre as risadas mais engraçadas, enquanto “riajkjdhhihhjak” e “huehuehue”</span></div>
<div style="position:absolute;left:72.00px;top:359.52px" class="cls_009"><span class="cls_009">não estão entre as mais engraçadas.</span></div>
<div style="position:absolute;left:88.94px;top:373.07px" class="cls_009"><span class="cls_009">Cláudia está muito atarefada com a análise estat´ıstica das risadas digitais e pediu sua ajuda para</span></div>
<div style="position:absolute;left:72.00px;top:386.62px" class="cls_009"><span class="cls_009">escrever um programa que determine, para uma risada digital, se ela é das mais engraçadas ou não.</span></div>
<div style="position:absolute;left:72.00px;top:407.49px" class="cls_007"><span class="cls_007">Entrada</span></div>
<div style="position:absolute;left:88.94px;top:426.07px" class="cls_009"><span class="cls_009">A entrada é composta por uma linha, contendo uma sequência de no máximo 50 caracteres, formada</span></div>
<div style="position:absolute;left:72.00px;top:439.62px" class="cls_009"><span class="cls_009">apenas por letras minúsculas sem acentuação.  As vogais são as letras ‘</span><span class="cls_013">a</span><span class="cls_009">’,‘</span><span class="cls_013">e</span><span class="cls_009">’,‘</span><span class="cls_013">i</span><span class="cls_009">’,‘</span><span class="cls_013">o</span><span class="cls_009">’,‘</span><span class="cls_013">u</span><span class="cls_009">’.  A sequência</span></div>
<div style="position:absolute;left:72.00px;top:453.17px" class="cls_009"><span class="cls_009">contém pelo menos uma vogal.</span></div>
<div style="position:absolute;left:72.00px;top:474.04px" class="cls_007"><span class="cls_007">Sa</span></div>
<div style="position:absolute;left:86.00px;top:474.04px" class="cls_007"><span class="cls_007">ıda</span></div>
<div style="position:absolute;left:88.94px;top:492.62px" class="cls_009"><span class="cls_009">Seu programa deve produzir uma linha contendo um caractere, “</span><span class="cls_013">S</span><span class="cls_009">” caso a risada seja das mais</span></div>
<div style="position:absolute;left:72.00px;top:506.17px" class="cls_009"><span class="cls_009">engraçadas, ou “</span><span class="cls_013">N</span><span class="cls_009">” caso contrário.</span></div>
<div style="position:absolute;left:77.98px;top:533.07px" class="cls_008"><span class="cls_008">Exemplo de entrada 1</span></div>
<div style="position:absolute;left:319.07px;top:533.07px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:533.07px" class="cls_008"><span class="cls_008">ıda 1</span></div>
<div style="position:absolute;left:77.98px;top:550.65px" class="cls_013"><span class="cls_013">hahaha</span></div>
<div style="position:absolute;left:319.07px;top:550.65px" class="cls_013"><span class="cls_013">S</span></div>
<div style="position:absolute;left:77.98px;top:582.07px" class="cls_008"><span class="cls_008">Exemplo de entrada 2</span></div>
<div style="position:absolute;left:319.07px;top:582.07px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:582.07px" class="cls_008"><span class="cls_008">ıda 2</span></div>
<div style="position:absolute;left:77.98px;top:599.65px" class="cls_013"><span class="cls_013">riajkjdhhihhjak</span></div>
<div style="position:absolute;left:319.07px;top:599.65px" class="cls_013"><span class="cls_013">N</span></div>
<div style="position:absolute;left:77.98px;top:633.49px" class="cls_008"><span class="cls_008">Exemplo de entrada 3</span></div>
<div style="position:absolute;left:319.07px;top:633.49px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:633.49px" class="cls_008"><span class="cls_008">ıda 3</span></div>
<div style="position:absolute;left:77.98px;top:651.07px" class="cls_013"><span class="cls_013">a</span></div>
<div style="position:absolute;left:319.07px;top:651.07px" class="cls_013"><span class="cls_013">S</span></div>
<div style="position:absolute;left:77.98px;top:682.48px" class="cls_008"><span class="cls_008">Exemplo de entrada 4</span></div>
<div style="position:absolute;left:319.07px;top:682.48px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:682.48px" class="cls_008"><span class="cls_008">ıda 4</span></div>
<div style="position:absolute;left:77.98px;top:700.07px" class="cls_013"><span class="cls_013">huaauhahhuahau</span></div>
<div style="position:absolute;left:319.07px;top:700.07px" class="cls_013"><span class="cls_013">S</span></div>
</div>
<div style="position:absolute;left:50%;margin-left:-297px;top:10212px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background13.jpg" width=595 height=841></div>
<div style="position:absolute;left:72.00px;top:36.16px" class="cls_009"><span class="cls_009">Maratona de Programação da SBC - ACM ICPC - 2016</span></div>
<div style="position:absolute;left:543.49px;top:36.16px" class="cls_009"><span class="cls_009">12</span></div>
<div style="position:absolute;left:281.29px;top:79.68px" class="cls_006"><span class="cls_006">Problema I</span></div>
<div style="position:absolute;left:279.24px;top:98.27px" class="cls_012"><span class="cls_012">Isósceles</span></div>
<div style="position:absolute;left:72.00px;top:132.37px" class="cls_009"><span class="cls_009">Os irmãos Sérgio e Luiz estavam brincando com cubinhos de madeira e queriam construir um muro,</span></div>
<div style="position:absolute;left:72.00px;top:145.92px" class="cls_009"><span class="cls_009">que acabou ficando incompleto, com as colunas tendo diferentes alturas, como nessa figura.</span></div>
<div style="position:absolute;left:88.94px;top:275.38px" class="cls_009"><span class="cls_009">Eles decidiram agora que a brincadeira seria retirar cubinhos, sempre de cima para baixo nas</span></div>
<div style="position:absolute;left:72.00px;top:288.93px" class="cls_009"><span class="cls_009">colunas, de maneira que no final restasse apenas um triângulo isósceles de cubinhos.  Eles podem</span></div>
<div style="position:absolute;left:72.00px;top:302.48px" class="cls_009"><span class="cls_009">apenas retirar cubinhos do muro, sem recolocar em outra coluna, e os triângulos têm que ser completos.</span></div>
<div style="position:absolute;left:72.00px;top:316.03px" class="cls_009"><span class="cls_009">A figura abaixo ilustra os cinco primeiros triângulos isósceles de cubinhos, do tipo que eles querem,</span></div>
<div style="position:absolute;left:72.00px;top:329.58px" class="cls_009"><span class="cls_009">com alturas 1, 2, 3, 4 e 5 respectivamente.</span></div>
<div style="position:absolute;left:88.94px;top:414.04px" class="cls_009"><span class="cls_009">Dada a sequência de alturas das colunas do muro, seu programa deve ajudar Sérgio e Luiz a</span></div>
<div style="position:absolute;left:72.00px;top:427.59px" class="cls_009"><span class="cls_009">descobrir qual é a altura máxima que o triângulo poderia ter ao final.  No muro da primeira figura,</span></div>
<div style="position:absolute;left:72.00px;top:441.14px" class="cls_009"><span class="cls_009">com 30 colunas de cubinhos, o triângulo mais alto poss´ıvel teria altura igual a sete.</span></div>
<div style="position:absolute;left:72.00px;top:462.01px" class="cls_007"><span class="cls_007">Entrada</span></div>
<div style="position:absolute;left:88.94px;top:480.59px" class="cls_009"><span class="cls_009">A primeira linha da entrada contém um inteiro N , 1  N  50000, representando o número de</span></div>
<div style="position:absolute;left:72.00px;top:494.14px" class="cls_009"><span class="cls_009">colunas do muro. A segunda linha contém N inteiros A</span><span class="cls_014"><sub>i</sub></span><span class="cls_009">, 1  A</span><span class="cls_014"><sub>i</sub></span><span class="cls_009">  N , para 1  i  N , indicando as</span></div>
<div style="position:absolute;left:72.00px;top:507.69px" class="cls_009"><span class="cls_009">alturas de cada coluna.</span></div>
<div style="position:absolute;left:72.00px;top:528.56px" class="cls_007"><span class="cls_007">Sa</span></div>
<div style="position:absolute;left:86.00px;top:528.56px" class="cls_007"><span class="cls_007">ıda</span></div>
<div style="position:absolute;left:88.94px;top:547.14px" class="cls_009"><span class="cls_009">Seu programa deve produzir uma única linha com um inteiro H, representando a altura máxima</span></div>
<div style="position:absolute;left:72.00px;top:560.69px" class="cls_009"><span class="cls_009">que um triângulo poderia ter ao final.</span></div>
<div style="position:absolute;left:77.98px;top:587.59px" class="cls_008"><span class="cls_008">Exemplo de entrada 1</span></div>
<div style="position:absolute;left:319.07px;top:587.59px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:587.59px" class="cls_008"><span class="cls_008">ıda 1</span></div>
<div style="position:absolute;left:77.98px;top:605.17px" class="cls_013"><span class="cls_013">16</span></div>
<div style="position:absolute;left:319.07px;top:605.17px" class="cls_013"><span class="cls_013">6</span></div>
<div style="position:absolute;left:77.98px;top:618.72px" class="cls_013"><span class="cls_013">5 6 5 8 9 10 5 8 9 5 7 9 9 9 6 3</span></div>
<div style="position:absolute;left:77.98px;top:650.13px" class="cls_008"><span class="cls_008">Exemplo de entrada 2</span></div>
<div style="position:absolute;left:319.07px;top:650.13px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:650.13px" class="cls_008"><span class="cls_008">ıda 2</span></div>
<div style="position:absolute;left:77.98px;top:667.72px" class="cls_013"><span class="cls_013">8</span></div>
<div style="position:absolute;left:319.07px;top:667.72px" class="cls_013"><span class="cls_013">1</span></div>
<div style="position:absolute;left:77.98px;top:681.26px" class="cls_013"><span class="cls_013">5 1 1 1 1 1 1 3</span></div>
</div>
<div style="position:absolute;left:50%;margin-left:-297px;top:11063px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background14.jpg" width=595 height=841></div>
<div style="position:absolute;left:72.00px;top:36.16px" class="cls_009"><span class="cls_009">Maratona de Programação da SBC - ACM ICPC - 2016</span></div>
<div style="position:absolute;left:543.49px;top:36.16px" class="cls_009"><span class="cls_009">13</span></div>
<div style="position:absolute;left:279.90px;top:79.68px" class="cls_006"><span class="cls_006">Problema J</span></div>
<div style="position:absolute;left:249.73px;top:98.27px" class="cls_012"><span class="cls_012">Jogos ol´ımpicos</span></div>
<div style="position:absolute;left:72.00px;top:132.37px" class="cls_009"><span class="cls_009">Um grupo de investidores está pensando em investir pesado em atletas da delegação brasileira após</span></div>
<div style="position:absolute;left:72.00px;top:145.92px" class="cls_009"><span class="cls_009">as olimp´ıadas do Rio.  Para isso, eles vêm observando N atletas e perceberam que alguns estão em</span></div>
<div style="position:absolute;left:72.00px;top:159.47px" class="cls_009"><span class="cls_009">decadência e outros em ascensão. Em especial, o grupo está de olho em dois fatores sobre cada atleta:</span></div>
<div style="position:absolute;left:72.00px;top:173.02px" class="cls_009"><span class="cls_009">seu cansaço e sua habilidade. Eles anotaram os valores de habilidade e cansaço de cada atleta logo ao</span></div>
<div style="position:absolute;left:72.00px;top:186.57px" class="cls_009"><span class="cls_009">final das olimp´ıadas de 2016.  Em seguida, o grupo estimou a taxa com a qual cada atleta perde ou</span></div>
<div style="position:absolute;left:72.00px;top:200.12px" class="cls_009"><span class="cls_009">ganha habilidade e a taxa com a qual cada atleta se cansa ao longo do tempo, e percebeu que essas</span></div>
<div style="position:absolute;left:72.00px;top:213.67px" class="cls_009"><span class="cls_009">taxas são constantes para os dois atributos.</span></div>
<div style="position:absolute;left:88.94px;top:227.22px" class="cls_009"><span class="cls_009">Os investidores perceberam que esses dados lhes permitem definir o que resolveram chamar de</span></div>
<div style="position:absolute;left:72.00px;top:240.77px" class="cls_009"><span class="cls_009">atleta de ouro: um atleta que, em um determinado per´ıodo de tempo, é o atleta menos cansado e o</span></div>
<div style="position:absolute;left:72.00px;top:254.32px" class="cls_009"><span class="cls_009">mais habilidoso. Ficou decidido que investimentos serão feitos apenas em atletas de ouro. Descubra</span></div>
<div style="position:absolute;left:72.00px;top:267.87px" class="cls_009"><span class="cls_009">quantos jogadores, entre os observados inicialmente, receberão algum investimento. Considere que o</span></div>
<div style="position:absolute;left:72.00px;top:281.41px" class="cls_009"><span class="cls_009">tempo t = 0 é o tempo das olimp´ıadas do Rio:  nenhum atleta que foi de ouro antes desse tempo</span></div>
<div style="position:absolute;left:72.00px;top:294.96px" class="cls_009"><span class="cls_009">pode receber investimento. Considere também que qualquer tempo após as olimp´ıadas do Rio deve</span></div>
<div style="position:absolute;left:72.00px;top:308.51px" class="cls_009"><span class="cls_009">ser considerado, por maior que seja.  Um atleta que é de ouro exatamente no tempo t = 0 deve ser</span></div>
<div style="position:absolute;left:72.00px;top:322.06px" class="cls_009"><span class="cls_009">contado.</span></div>
<div style="position:absolute;left:72.00px;top:342.93px" class="cls_007"><span class="cls_007">Entrada</span></div>
<div style="position:absolute;left:88.94px;top:360.49px" class="cls_009"><span class="cls_009">A primeira linha da entrada contém um inteiro, N (1  N  10</span><span class="cls_014"><sup>5</sup></span><span class="cls_009">), o número de atletas. Seguem</span></div>
<div style="position:absolute;left:72.00px;top:374.04px" class="cls_009"><span class="cls_009">N linhas, cada uma com quatro números inteiros:  H</span><span class="cls_014"><sub>i</sub></span><span class="cls_009">, H</span><span class="cls_014"><sup>t</sup></span></div>
<div style="position:absolute;left:405.68px;top:374.04px" class="cls_009"><span class="cls_009">(−10</span><span class="cls_014"><sup>6</sup></span><span class="cls_009">  &lt; H</span><span class="cls_014"><sub>i</sub></span><span class="cls_009">, H</span><span class="cls_014"><sup>t</sup></span></div>
<div style="position:absolute;left:522.02px;top:374.04px" class="cls_009"><span class="cls_009"> 10</span><span class="cls_014"><sup>6</sup></span><span class="cls_009">,</span></div>
<div style="position:absolute;left:356.35px;top:374.04px" class="cls_014"><span class="cls_014">i</span><span class="cls_009">,C</span><span class="cls_014">i</span><span class="cls_009">,</span></div>
<div style="position:absolute;left:396.39px;top:381.06px" class="cls_014"><span class="cls_014">i</span></div>
<div style="position:absolute;left:479.35px;top:374.04px" class="cls_014"><span class="cls_014">i</span><span class="cls_009">,C</span><span class="cls_014">i</span><span class="cls_009">,</span></div>
<div style="position:absolute;left:512.46px;top:381.06px" class="cls_014"><span class="cls_014">i</span></div>
<div style="position:absolute;left:72.00px;top:387.59px" class="cls_009"><span class="cls_009">H</span><span class="cls_014"><sup>t</sup></span></div>
<div style="position:absolute;left:105.53px;top:388.61px" class="cls_009"><span class="cls_009">= 0), representando, respectivamente, a habilidade ao final das olimp´ıadas, a taxa de variação</span></div>
<div style="position:absolute;left:81.07px;top:387.59px" class="cls_014"><span class="cls_014">i</span><span class="cls_009">,</span></div>
<div style="position:absolute;left:98.16px;top:394.61px" class="cls_014"><span class="cls_014">i</span></div>
<div style="position:absolute;left:72.00px;top:402.16px" class="cls_009"><span class="cls_009">da habilidade, o cansaço ao final das olimp´ıadas e a taxa de variação do cansaço do i-ésimo atleta.</span></div>
<div style="position:absolute;left:72.00px;top:423.03px" class="cls_007"><span class="cls_007">Sa</span></div>
<div style="position:absolute;left:86.00px;top:423.03px" class="cls_007"><span class="cls_007">ıda</span></div>
<div style="position:absolute;left:88.94px;top:441.61px" class="cls_009"><span class="cls_009">Seu programa deve produzir uma única linha com um inteiro O, representando o número de atletas</span></div>
<div style="position:absolute;left:72.00px;top:455.16px" class="cls_009"><span class="cls_009">que receberão algum investimento do grupo.</span></div>
<div style="position:absolute;left:77.98px;top:482.06px" class="cls_008"><span class="cls_008">Exemplo de entrada 1</span></div>
<div style="position:absolute;left:319.07px;top:482.06px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:482.06px" class="cls_008"><span class="cls_008">ıda 1</span></div>
<div style="position:absolute;left:77.98px;top:499.65px" class="cls_013"><span class="cls_013">3</span></div>
<div style="position:absolute;left:319.07px;top:499.65px" class="cls_013"><span class="cls_013">1</span></div>
<div style="position:absolute;left:77.98px;top:513.19px" class="cls_013"><span class="cls_013">3 2 1 2</span></div>
<div style="position:absolute;left:77.98px;top:526.74px" class="cls_013"><span class="cls_013">2 2 2 2</span></div>
<div style="position:absolute;left:77.98px;top:540.29px" class="cls_013"><span class="cls_013">1 2 3 2</span></div>
<div style="position:absolute;left:77.98px;top:571.71px" class="cls_008"><span class="cls_008">Exemplo de entrada 2</span></div>
<div style="position:absolute;left:319.07px;top:571.71px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:571.71px" class="cls_008"><span class="cls_008">ıda 2</span></div>
<div style="position:absolute;left:77.98px;top:589.29px" class="cls_013"><span class="cls_013">6</span></div>
<div style="position:absolute;left:319.07px;top:589.29px" class="cls_013"><span class="cls_013">0</span></div>
<div style="position:absolute;left:77.98px;top:602.84px" class="cls_013"><span class="cls_013">1 10 5 8</span></div>
<div style="position:absolute;left:77.98px;top:616.39px" class="cls_013"><span class="cls_013">8 7 12 -5</span></div>
<div style="position:absolute;left:77.98px;top:629.94px" class="cls_013"><span class="cls_013">10 -2 -3 8</span></div>
<div style="position:absolute;left:77.98px;top:643.49px" class="cls_013"><span class="cls_013">-3 -5 -8 -12</span></div>
<div style="position:absolute;left:77.98px;top:657.03px" class="cls_013"><span class="cls_013">0 1 10 2</span></div>
<div style="position:absolute;left:77.98px;top:670.58px" class="cls_013"><span class="cls_013">8 3 9 -3</span></div>
</div>
<div style="position:absolute;left:50%;margin-left:-297px;top:11914px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background15.jpg" width=595 height=841></div>
<div style="position:absolute;left:72.00px;top:36.16px" class="cls_009"><span class="cls_009">Maratona de Programação da SBC - ACM ICPC - 2016</span></div>
<div style="position:absolute;left:543.49px;top:36.16px" class="cls_009"><span class="cls_009">14</span></div>
<div style="position:absolute;left:278.36px;top:79.68px" class="cls_006"><span class="cls_006">Problema K</span></div>
<div style="position:absolute;left:177.59px;top:98.27px" class="cls_012"><span class="cls_012">Kit de encolhimento de pol´ıgonos</span></div>
<div style="position:absolute;left:72.00px;top:132.37px" class="cls_009"><span class="cls_009">Um Kit de Encolhimento de Pol´ıgonos é um material muito utilizado nas aulas de magia geométrica</span></div>
<div style="position:absolute;left:72.00px;top:145.92px" class="cls_009"><span class="cls_009">na Nlogônia. O kit consiste de dois pontos, A e B no plano cartesiano. Considere um pol´ıgono convexo</span></div>
<div style="position:absolute;left:72.00px;top:159.47px" class="cls_009"><span class="cls_009">dado pelos vértices 1, 2...N , nessa ordem.  Para encolher esse pol´ıgono usando o kit, algumas regras</span></div>
<div style="position:absolute;left:72.00px;top:173.02px" class="cls_009"><span class="cls_009">devem ser respeitadas. Cada vértice x do pol´ıgono deve ser movido uma vez só: para o ponto médio</span></div>
<div style="position:absolute;left:72.00px;top:186.57px" class="cls_009"><span class="cls_009">do segmento Ax ou para o ponto médio do segmento Bx. A operação de encolhimento deve produzir</span></div>
<div style="position:absolute;left:72.00px;top:200.12px" class="cls_009"><span class="cls_009">um novo pol</span></div>
<div style="position:absolute;left:130.88px;top:200.12px" class="cls_009"><span class="cls_009">ıgono convexo que preserve a ordem relativa dos vértices do pol´ıgono original. Em outras</span></div>
<div style="position:absolute;left:72.00px;top:213.67px" class="cls_009"><span class="cls_009">palavras, considerando todas as poss´ıveis maneiras de aplicar o kit, apenas aquelas cuja sequência</span></div>
<div style="position:absolute;left:72.00px;top:227.22px" class="cls_009"><span class="cls_009">final dos vértices 1, 2...N representa um pol</span></div>
<div style="position:absolute;left:283.37px;top:227.22px" class="cls_009"><span class="cls_009">ıgono convexo são válidas.  Veja que o pol´ıgono convexo</span></div>
<div style="position:absolute;left:72.00px;top:240.77px" class="cls_009"><span class="cls_009">original pode estar em sentido horário e uma operação de encolhimento válida produzir um pol</span></div>
<div style="position:absolute;left:528.94px;top:240.77px" class="cls_009"><span class="cls_009">ıgono</span></div>
<div style="position:absolute;left:72.00px;top:254.32px" class="cls_009"><span class="cls_009">convexo em sentido anti-horário, na mesma ordem dos vértices. Apenas a ordem relativa dos pontos</span></div>
<div style="position:absolute;left:71.70px;top:267.87px" class="cls_009"><span class="cls_009">é importante, não o sentido.</span></div>
<div style="position:absolute;left:89.92px;top:278.66px" class="cls_009"><span class="cls_009">É</span></div>
<div style="position:absolute;left:100.31px;top:281.41px" class="cls_009"><span class="cls_009">sabido que magia geométrica não é o forte da maioria dos alunos. A professora pediu que eles</span></div>
<div style="position:absolute;left:72.00px;top:294.96px" class="cls_009"><span class="cls_009">usassem o kit de encolhimento para encolher um pol´ıgono convexo fornecido por ela de forma a obter</span></div>
<div style="position:absolute;left:72.00px;top:308.51px" class="cls_009"><span class="cls_009">a menor área poss´ıvel e um amigo seu implorou para que você resolva a questão por ele. Responda a</span></div>
<div style="position:absolute;left:72.00px;top:322.06px" class="cls_009"><span class="cls_009">menor área poss</span></div>
<div style="position:absolute;left:149.46px;top:322.06px" class="cls_009"><span class="cls_009">ıvel do pol´ıgono para ele.</span></div>
<div style="position:absolute;left:228.01px;top:343.62px" class="cls_022"><span class="cls_022">2</span></div>
<div style="position:absolute;left:193.36px;top:375.12px" class="cls_022"><span class="cls_022">3</span></div>
<div style="position:absolute;left:439.06px;top:375.12px" class="cls_022"><span class="cls_022">1</span></div>
<div style="position:absolute;left:183.91px;top:469.62px" class="cls_022"><span class="cls_022">A</span></div>
<div style="position:absolute;left:237.46px;top:469.62px" class="cls_022"><span class="cls_022">B</span></div>
<div style="position:absolute;left:88.94px;top:496.72px" class="cls_009"><span class="cls_009">A Figura acima ilustra um uso válido do kit, onde o pol</span></div>
<div style="position:absolute;left:349.27px;top:496.72px" class="cls_009"><span class="cls_009">ıgono sombreado é o de menor área poss</span></div>
<div style="position:absolute;left:538.04px;top:496.72px" class="cls_009"><span class="cls_009">ıvel</span></div>
<div style="position:absolute;left:72.00px;top:510.27px" class="cls_009"><span class="cls_009">que preserva a sequência dos vértices. Os pontos A e B correspondem aos pontos do kit. Note que,</span></div>
<div style="position:absolute;left:72.00px;top:523.82px" class="cls_009"><span class="cls_009">apesar do nome encolhimento, às vezes é poss</span></div>
<div style="position:absolute;left:293.16px;top:523.82px" class="cls_009"><span class="cls_009">ıvel utilizar o kit para aumentar a área dos pol´ıgonos!</span></div>
<div style="position:absolute;left:72.00px;top:537.37px" class="cls_009"><span class="cls_009">Como geometria é dif</span></div>
<div style="position:absolute;left:174.76px;top:537.37px" class="cls_009"><span class="cls_009">ıcil!</span></div>
<div style="position:absolute;left:88.94px;top:550.92px" class="cls_009"><span class="cls_009">Observe que um único ponto ou uma reta não são considerados pol´ıgonos. Sendo assim, se um uso</span></div>
<div style="position:absolute;left:72.00px;top:564.47px" class="cls_009"><span class="cls_009">do kit produzir como resultado algo diferente de um pol´ıgono convexo, esse não é um uso válido.</span></div>
<div style="position:absolute;left:72.00px;top:585.34px" class="cls_007"><span class="cls_007">Entrada</span></div>
<div style="position:absolute;left:88.94px;top:602.90px" class="cls_009"><span class="cls_009">A primeira linha da entrada contém um inteiro N (3  N  10</span><span class="cls_014"><sup>5</sup></span><span class="cls_009">), o número de vértices do pol´ıgono.</span></div>
<div style="position:absolute;left:72.00px;top:616.45px" class="cls_009"><span class="cls_009">Seguem N linhas, cada uma com dois inteiros x, y (−10</span><span class="cls_014"><sup>6</sup></span><span class="cls_009">   x, y  10</span><span class="cls_014"><sup>6</sup></span><span class="cls_009">), os vértices do poligono.  A</span></div>
<div style="position:absolute;left:72.30px;top:630.00px" class="cls_009"><span class="cls_009">última linha da entrada contém quatro inteiros, A</span><span class="cls_014"><sub>x</sub></span><span class="cls_009">, A</span><span class="cls_014"><sub>y</sub></span><span class="cls_009"> , B</span><span class="cls_014"><sub>x</sub></span><span class="cls_009"> e B</span><span class="cls_014"><sub>y</sub></span><span class="cls_009">  (−10</span><span class="cls_014"><sup>6</sup></span><span class="cls_009">  A</span><span class="cls_014"><sub>x</sub></span><span class="cls_009">, A</span><span class="cls_014"><sub>y</sub></span><span class="cls_009"> , B</span><span class="cls_014"><sub>x</sub></span><span class="cls_009">, B</span><span class="cls_014"><sub>y</sub></span><span class="cls_009">  10</span><span class="cls_014"><sup>6</sup></span><span class="cls_009">), as</span></div>
<div style="position:absolute;left:72.00px;top:644.57px" class="cls_009"><span class="cls_009">coordenadas x e y de A e as coordenadas x e y de B, respectivamente.  Os pontos da entrada serão</span></div>
<div style="position:absolute;left:72.00px;top:658.12px" class="cls_009"><span class="cls_009">dados na ordem correta em que aparecem no pol´ıgono, no sentido horário ou anti-horário. Não haverão</span></div>
<div style="position:absolute;left:72.00px;top:671.66px" class="cls_009"><span class="cls_009">pontos repetidos e o pol´ıgono será convexo.</span></div>
<div style="position:absolute;left:72.00px;top:692.54px" class="cls_007"><span class="cls_007">Sa</span></div>
<div style="position:absolute;left:86.00px;top:692.54px" class="cls_007"><span class="cls_007">ıda</span></div>
<div style="position:absolute;left:88.94px;top:711.12px" class="cls_009"><span class="cls_009">Seu programa deve produzir uma linha, contendo um número real, com 3 casas decimais de precisão,</span></div>
<div style="position:absolute;left:72.00px;top:724.67px" class="cls_009"><span class="cls_009">representando a menor área poss</span></div>
<div style="position:absolute;left:228.66px;top:724.67px" class="cls_009"><span class="cls_009">ıvel para um pol</span></div>
<div style="position:absolute;left:307.18px;top:724.67px" class="cls_009"><span class="cls_009">ıgono obtido com o uso do kit.</span></div>
</div>
<div style="position:absolute;left:50%;margin-left:-297px;top:12765px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background16.jpg" width=595 height=841></div>
<div style="position:absolute;left:72.00px;top:36.16px" class="cls_009"><span class="cls_009">Maratona de Programação da SBC - ACM ICPC - 2016</span></div>
<div style="position:absolute;left:543.49px;top:36.16px" class="cls_009"><span class="cls_009">15</span></div>
<div style="position:absolute;left:77.98px;top:83.98px" class="cls_008"><span class="cls_008">Exemplo de entrada 1</span></div>
<div style="position:absolute;left:319.07px;top:83.98px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:83.98px" class="cls_008"><span class="cls_008">ıda 1</span></div>
<div style="position:absolute;left:77.98px;top:101.57px" class="cls_013"><span class="cls_013">3</span></div>
<div style="position:absolute;left:319.07px;top:101.57px" class="cls_013"><span class="cls_013">3.500</span></div>
<div style="position:absolute;left:77.98px;top:115.11px" class="cls_013"><span class="cls_013">20 6</span></div>
<div style="position:absolute;left:77.98px;top:128.66px" class="cls_013"><span class="cls_013">4 8</span></div>
<div style="position:absolute;left:77.98px;top:142.21px" class="cls_013"><span class="cls_013">2 6</span></div>
<div style="position:absolute;left:77.98px;top:155.76px" class="cls_013"><span class="cls_013">0 0 4 0</span></div>
<div style="position:absolute;left:77.98px;top:187.17px" class="cls_008"><span class="cls_008">Exemplo de entrada 2</span></div>
<div style="position:absolute;left:319.07px;top:187.17px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:187.17px" class="cls_008"><span class="cls_008">ıda 2</span></div>
<div style="position:absolute;left:77.98px;top:204.76px" class="cls_013"><span class="cls_013">3</span></div>
<div style="position:absolute;left:319.07px;top:204.76px" class="cls_013"><span class="cls_013">1.000</span></div>
<div style="position:absolute;left:77.98px;top:218.31px" class="cls_013"><span class="cls_013">0 4</span></div>
<div style="position:absolute;left:77.98px;top:231.86px" class="cls_013"><span class="cls_013">4 4</span></div>
<div style="position:absolute;left:77.98px;top:245.41px" class="cls_013"><span class="cls_013">0 0</span></div>
<div style="position:absolute;left:77.98px;top:258.95px" class="cls_013"><span class="cls_013">3 -2 -3 -2</span></div>
<div style="position:absolute;left:77.98px;top:290.37px" class="cls_008"><span class="cls_008">Exemplo de entrada 3</span></div>
<div style="position:absolute;left:319.07px;top:290.37px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:290.37px" class="cls_008"><span class="cls_008">ıda 3</span></div>
<div style="position:absolute;left:77.98px;top:307.95px" class="cls_013"><span class="cls_013">3</span></div>
<div style="position:absolute;left:319.07px;top:307.95px" class="cls_013"><span class="cls_013">2.000</span></div>
<div style="position:absolute;left:77.98px;top:321.50px" class="cls_013"><span class="cls_013">0 4</span></div>
<div style="position:absolute;left:77.98px;top:335.05px" class="cls_013"><span class="cls_013">4 4</span></div>
<div style="position:absolute;left:77.98px;top:348.60px" class="cls_013"><span class="cls_013">0 0</span></div>
<div style="position:absolute;left:77.98px;top:362.15px" class="cls_013"><span class="cls_013">2 -2 -2 -2</span></div>
</div>
<div style="position:absolute;left:50%;margin-left:-297px;top:13616px;width:595px;height:841px;border-style:outset;overflow:hidden">
<div style="position:absolute;left:0px;top:0px">
<img src="c6d5b332-7921-11e6-89aa-002590d31986_id_maratona[1]_files/background17.jpg" width=595 height=841></div>
<div style="position:absolute;left:72.00px;top:36.16px" class="cls_009"><span class="cls_009">Maratona de Programação da SBC - ACM ICPC - 2016</span></div>
<div style="position:absolute;left:543.49px;top:36.16px" class="cls_009"><span class="cls_009">16</span></div>
<div style="position:absolute;left:279.41px;top:79.68px" class="cls_006"><span class="cls_006">Problema L</span></div>
<div style="position:absolute;left:276.80px;top:98.27px" class="cls_012"><span class="cls_012">Ladrilhos</span></div>
<div style="position:absolute;left:363.72px;top:129.62px" class="cls_009"><span class="cls_009">É</span></div>
<div style="position:absolute;left:72.00px;top:132.37px" class="cls_009"><span class="cls_009">Avelino tem um mosaico em uma das paredes de sua casa.</span></div>
<div style="position:absolute;left:374.29px;top:132.37px" class="cls_009"><span class="cls_009">uma mosaico muito antigo, composto</span></div>
<div style="position:absolute;left:72.00px;top:145.92px" class="cls_009"><span class="cls_009">por pequenos ladrilhos coloridos.  Como é um mosaico antigo, alguns ladrilhos se soltaram ao longo</span></div>
<div style="position:absolute;left:72.00px;top:159.47px" class="cls_009"><span class="cls_009">dos anos formando buracos.</span></div>
<div style="position:absolute;left:88.94px;top:173.02px" class="cls_009"><span class="cls_009">Agora, Avelino quer restaurar o mosaico cobrindo os buracos com novos ladrilhos. Entretanto, para</span></div>
<div style="position:absolute;left:72.00px;top:186.57px" class="cls_009"><span class="cls_009">economizar, Avelino quer comprar ladrilhos de uma única cor para tapar os buracos. Em particular,</span></div>
<div style="position:absolute;left:72.00px;top:200.12px" class="cls_009"><span class="cls_009">quer comprar ladrilhos de uma das cores originais ou de uma cor ainda não contida no mosaico.</span></div>
<div style="position:absolute;left:88.94px;top:213.67px" class="cls_009"><span class="cls_009">Por ser um mosaico, não se deseja que hajam áreas muito grandes com a mesma cor.  Avelino</span></div>
<div style="position:absolute;left:72.00px;top:227.22px" class="cls_009"><span class="cls_009">resolveu que vai escolher a cor dos ladrilhos tentando fazer com que o tamanho da menor área mo-</span></div>
<div style="position:absolute;left:72.00px;top:240.77px" class="cls_009"><span class="cls_009">nocromática seja o menor poss´ıvel, para que haja mais detalhes. Veja que pode existir mais de uma</span></div>
<div style="position:absolute;left:72.00px;top:254.32px" class="cls_009"><span class="cls_009">cor poss´ıvel. Uma área é monocromática se todos os ladrilhos nela são da mesma cor. Dois ladrilhos</span></div>
<div style="position:absolute;left:72.00px;top:267.87px" class="cls_009"><span class="cls_009">adjacentes fazem parte da mesma área se possuem a mesma cor, e dois ladrilhos são adjacentes se</span></div>
<div style="position:absolute;left:72.00px;top:281.41px" class="cls_009"><span class="cls_009">compartilham um lado.</span></div>
<div style="position:absolute;left:88.94px;top:294.96px" class="cls_009"><span class="cls_009">Veja o primeiro caso de exemplo, temos três áreas da cor 1 (uma de tamanho 3 e duas de tamanho</span></div>
<div style="position:absolute;left:72.00px;top:308.51px" class="cls_009"><span class="cls_009">2), uma área da cor 2 (de tamanho 3) e uma área da cor 3 de tamanho 7. Uma resposta poss´ıvel seria</span></div>
<div style="position:absolute;left:72.00px;top:322.06px" class="cls_009"><span class="cls_009">escolher a cor 2, fazendo com que a menor área monocromática seja de tamanho 2. Se escolhermos a</span></div>
<div style="position:absolute;left:72.00px;top:335.61px" class="cls_009"><span class="cls_009">cor 1 a menor área seria de tamanho 3.</span></div>
<div style="position:absolute;left:88.94px;top:349.16px" class="cls_009"><span class="cls_009">Crie um programa que imprima o tamanho da menor área poss</span></div>
<div style="position:absolute;left:391.66px;top:349.16px" class="cls_009"><span class="cls_009">ıvel.</span></div>
<div style="position:absolute;left:72.00px;top:370.03px" class="cls_007"><span class="cls_007">Entrada</span></div>
<div style="position:absolute;left:88.94px;top:388.61px" class="cls_009"><span class="cls_009">A primeira linha contém dois inteiros H e L, a altura e largura do mosaico, respectivamente,</span></div>
<div style="position:absolute;left:72.00px;top:402.16px" class="cls_009"><span class="cls_009">satisfazendo 1  H  200 e 1  L  200 .  Em seguida, H linhas conterão cada uma L inteiros,</span></div>
<div style="position:absolute;left:72.00px;top:415.71px" class="cls_009"><span class="cls_009">separados por espaço, correspondendo às cores dos ladrilhos. Um inteiro 0 corresponde a um buraco e</span></div>
<div style="position:absolute;left:72.00px;top:429.26px" class="cls_009"><span class="cls_009">um inteiro i = 0 corresponde a um ladrilho com a i-ésima cor, podendo ir de 1 até 40000 no máximo.</span></div>
<div style="position:absolute;left:72.00px;top:450.13px" class="cls_007"><span class="cls_007">Sa</span></div>
<div style="position:absolute;left:86.00px;top:450.13px" class="cls_007"><span class="cls_007">ıda</span></div>
<div style="position:absolute;left:88.94px;top:468.71px" class="cls_009"><span class="cls_009">Seu programa deve produzir uma linha, contendo um inteiro, o tamanho da menor área poss</span></div>
<div style="position:absolute;left:531.69px;top:468.71px" class="cls_009"><span class="cls_009">ıvel.</span></div>
<div style="position:absolute;left:77.98px;top:495.61px" class="cls_008"><span class="cls_008">Exemplo de entrada 1</span></div>
<div style="position:absolute;left:319.07px;top:495.61px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:495.61px" class="cls_008"><span class="cls_008">ıda 1</span></div>
<div style="position:absolute;left:77.98px;top:513.19px" class="cls_013"><span class="cls_013">3 8</span></div>
<div style="position:absolute;left:319.07px;top:513.19px" class="cls_013"><span class="cls_013">2</span></div>
<div style="position:absolute;left:77.98px;top:526.74px" class="cls_013"><span class="cls_013">3 3 3 1 1 0 0 0</span></div>
<div style="position:absolute;left:77.98px;top:540.29px" class="cls_013"><span class="cls_013">3 1 1 0 2 2 0 1</span></div>
<div style="position:absolute;left:77.98px;top:553.84px" class="cls_013"><span class="cls_013">3 3 3 0 0 2 1 1</span></div>
<div style="position:absolute;left:77.98px;top:585.25px" class="cls_008"><span class="cls_008">Exemplo de entrada 2</span></div>
<div style="position:absolute;left:319.07px;top:585.25px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:585.25px" class="cls_008"><span class="cls_008">ıda 2</span></div>
<div style="position:absolute;left:77.98px;top:602.84px" class="cls_013"><span class="cls_013">3 7</span></div>
<div style="position:absolute;left:319.07px;top:602.84px" class="cls_013"><span class="cls_013">3</span></div>
<div style="position:absolute;left:77.98px;top:616.39px" class="cls_013"><span class="cls_013">1 1 0 2 2 1 1</span></div>
<div style="position:absolute;left:77.98px;top:629.94px" class="cls_013"><span class="cls_013">1 1 0 2 2 1 1</span></div>
<div style="position:absolute;left:77.98px;top:643.49px" class="cls_013"><span class="cls_013">1 1 0 0 3 3 3</span></div>
<div style="position:absolute;left:77.98px;top:674.90px" class="cls_008"><span class="cls_008">Exemplo de entrada 3</span></div>
<div style="position:absolute;left:319.07px;top:674.90px" class="cls_008"><span class="cls_008">Exemplo de sa</span></div>
<div style="position:absolute;left:392.06px;top:674.90px" class="cls_008"><span class="cls_008">ıda 3</span></div>
<div style="position:absolute;left:77.98px;top:692.48px" class="cls_013"><span class="cls_013">3 6</span></div>
<div style="position:absolute;left:319.07px;top:692.48px" class="cls_013"><span class="cls_013">1</span></div>
<div style="position:absolute;left:77.98px;top:706.03px" class="cls_013"><span class="cls_013">2 2 2 2 0 2</span></div>
<div style="position:absolute;left:77.98px;top:719.58px" class="cls_013"><span class="cls_013">2 2 2 0 2 2</span></div>
<div style="position:absolute;left:77.98px;top:733.13px" class="cls_013"><span class="cls_013">2 2 2 2 0 2</span></div>
</div>

