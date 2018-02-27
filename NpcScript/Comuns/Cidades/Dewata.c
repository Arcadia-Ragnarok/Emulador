/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__| (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Versão: Spell Master                                            |
| - Nota: Npcs comuns na cidade Dewata.                             |
\*-----------------------------------------------------------------*/

dewata,181,88,6	script	Jovem#dew	4_M_DEWMAN,{
	mes("[Jovem]\n A ^8B4513Praia de Dewata^000000 não é linda?\n As crianças sempre brincam nesta praia.\n Isto me lembra da minha juventude.");
	next;
	mes("[Jovem]\n Ao anoitecer, você pode ver fogos de artifício na praia.\n Com a brisa do oceano, o bater das ondas, e fogos de artifícios iluminando o céu.\n O céu noturno é um momento de beleza!");
	close;
}

// ------------------------------------------------------------------
dewata,179,204,4	script	Jovenzinha#dew	4_M_DEWWOMAN,{
	mes("[Jovenzinha]\n Quando se está do lado de fora da cidade, e encontra ^FF0000Tigres, Mongeeys, ou porcos^000000.\n Tenha a certeza de evitá-los.")
	next;
	select("O que quer dizer?");
	mes("[Jovenzinha]\n Eu ainda não vi, mas a lenda diz que há um monstro cruel chamado ^FF0000Vazamento^000000.\n Que pode se transformar em um animal hipnotizar as pessoas e matá-las.")
	next;
	mes("[Jovenzinha]\n Você conhece os perigos deste mundo.\n Não faz mal tomar um pouco de cuidado mesmo se for somente uma lenda urbana.")
	close;
}

// ------------------------------------------------------------------
dewata,221,237,5	script	Apreciador de Frutas#dew	4_M_DEWMAN,{
	mes("[Apreciador de Frutas]\n O que há de errado com a sua faaaaaace?\n Você deve ser muito ignorante!");
	next;
	mes("[Apreciador de Frutas]\n Permita-me que eu lhe encha com um pouco de conhecimento.");
	next;
	mes("[Apreciador de Frutas]\n Posso ser jovem, mas ninguém sabe mais de ^777700Coqueiros^000000 do que eu.\n Muito bem!\n O que deseja saber?");
	next;
	switch(select("Sobre a casca..", "Sobre a polpa...", "Sobre o núcleo...", "Nada, obrigado.")) {
		case 1:
		mes("[Apreciador de Frutas]\n Então, quer saber mais sobre a polpa?\n Deixe-me explicar.");
		next;
		mes("[Apreciador de Frutas]\n Normalmente, a casca do côco é utilizada para fazer óleo.\n Óleo de côco é um ingrediente utilizado em diversos tipos de pratos.");
		next;
		mes("[Apreciador de Frutas]\n De qualquer modo, nos referimos ao óleo que vêm do côco por Óleo de Côco.\n O qual é bem conhecido pela sua qualidade.");
		next;
		mes("[Apreciador de Frutas]\n Os restos da produção do óleo são secados, e usados como combustível para cozinhar o aquecer.");
		next;
		mes("[Apreciador de Frutas]\n Ele queima adequadamente e tem um cheiro ótimo, não se consegue melhor que isso.");
		next;
		mes("[Apreciador de Frutas]\n Muito bem!!\n Isso é tudo sobre a polpa, demora muito explicar todos os efeitos úteis da fruta.");
		next;
		mes("[Apreciador de Frutas]\n Não é como se isso fosse o limite do meu conhecimento.\n Não me entenda mal!");
		close;
		case 2:
		mes("[Apreciador de Frutas]\n Então deseja saber sobre o interior da fruta?\n Deixe-me explicar.");
		next;
		mes("[Apreciador de Frutas]\n Côcos têm duas camadas de polpa.\n Por fora é duro, e o interior é macio...");
		next;
		mes("[Apreciador de Frutas]\n Hmm... Sim!\n A polpa do Côco é um pouco mais dura do que a de uma Noz.\n Deve ser por causa da água contida dentro.");
		next;
		mes("[Apreciador de Frutas]\n Dentro da casca, há cerca de 300cc de água, o que é muito útil para saciar a sede do povo.\n Já que a ilha de Dewata possui um clima muito quente.");
		next;
		mes("[Apreciador de Frutas]\n E não jogamos fora depois de tomarmos toda a água dentro dele!!");
		next;
		mes("[Apreciador de Frutas]\n Podemos fazer cantios de qualidade usando eles!\n Como eu disse, ele tem uma casca dura o bastante para que possa ser usada como uma garrafa d'água.");
		next;
		mes("[Apreciador de Frutas]\n Também é ótimo para fazer carvão.\n Carvão feito do côco é muito conhecido por durar muito mais e pela qualidade do fogo.");
		next;
		mes("[Apreciador de Frutas]\n As pessoas adoram cozinhar frutos do mar e frango com carvão feito de côco..");
		next;
		mes("[Apreciador de Frutas]\n Ele possui um bônus extra por queimar e expelir o delicioso aroma de côco.");
		next;
		mes("[Apreciador de Frutas]\n Ok!!\n Essa é toda a informação sobre a polpa, levaria muito tempo para explicar todas as suas utilidades.");
		next;
		mes("[Apreciador de Frutas]\n Não é como se isso fosse o limite do meu conhecimento.\n Não me entenda mal!");
		close;
		case 3:
		mes("[Apreciador de Frutas]\n Então, quer saber mais sobre o núcleo?\n Deixe-me explicar.");
		next;
		mes("[Apreciador de Frutas]\n O núcleo dentro da polpa dura é usado como um digestivo natural.");
		next;
		mes("[Apreciador de Frutas]\n Não há muito o que dizer sobre o núcleo..");
		next;
		mes("[Apreciador de Frutas]\n Mas garantimos usar todos os recursos da futa.");
		next;
		mes("[Apreciador de Frutas]\n Não concorda?");
		close;
		case 4:
		mes("[Apreciador de Frutas]\n Arrgg!\n Você não possui interesse no mundo!");
		close;
	}
}

// ------------------------------------------------------------------
dewata,159,81,4	script	Turista#dew	4_M_SITDOWN,{
	mes("[Nasolo]\n Uau. Oceano límpido, uma praia aquecida...\n Perfeito para um encontro com a namorada...");
	next;
	mes("[Nasolo]\n Se eu tivesse uma...");
	emotion(e_sob);
	next;
	mes("[Nasolo]\n Fico pensando quando minha princesa virá...");
	emotion(e_sigh);
	close;
}

// ------------------------------------------------------------------
dewata,154,107,4	script	Turista#dew2	4_M_04,{
	mes("[Turista]\n Uau...\n Quanto ele já comeu?");
	emotion(e_hmm);
	next;
	mes("[Turista]\n Ele deve ser um comilão, não o Gourmet...");
	next;
	mes("[Turista]\n Já esteve em Prontera?\n Acho que já o vi em algum lugar..");
	close;
}

// ------------------------------------------------------------------
dewata,97,207,4	script	Turista#dew3	1_F_SIGNZISK,{
	mes("[Turista]\n Oh... Eu saí e peguei o guia turístico errado...");
	next;
	mes("[Turista]\n Este 'hombre' é um verdadeiro dorminhoco...\n Porque prolongar isso..");
	emotion(e_spin);
	next;
	mes("[Turista]\n Preciso mudar meu agente de viagem...");
	emotion(e_sigh);
	close;
}

// ------------------------------------------------------------------
dewata,100,206,4	script	Turista#dew4	1_M_ORIENT01,{
	mes("[Turista]\n Ei, Vamos lá!\n Se apresse, enquanto o guia turístico está explicando.");
	next;
	mes("[Turista]\n Qual é... não parece que ele vai parar de falar tão cedo.");
	close;
}

// ------------------------------------------------------------------
dewata,101,206,4	script	Turista#dew5	4_F_01,{
	mes("[Turista]\n Não vai se perder sem um guia?");
	next;
	mes("[Turista]\n Nós já nos perdemos da última vez...");
	close;
}

// ------------------------------------------------------------------
dewata,99,203,4	script	Turista#dew6	4_M_SAGE_C,{
	mes("[Turista]\n Oh. Isso é muito interessante.\n Um templo que adora Buddha...");
	emotion(e_ok);
	next;
	mes("[Turista]\n Mas eu não entendo toda a simbologia aqui.");
	next;
	mes("[Turista]\n Tão lindo...\n Fico imaginando quem construiu este lugar?");
	close;
}

// ------------------------------------------------------------------
dewata,279,213,4	script	Turista#dew7	4_M_LIEMAN,{
	mes("[Turista]\n Uau. Isso é muito confortável.");
	next;
	mes("[Turista]\n Estou tendo um ótimo momento, só relaxando.");
	next;
	mes("[Turista]\n Você poderia deitar aí também.\n Uma vez que o fizer, não irá querer se levantar mais.");
	next;
	mes("[Turista]\n É por isso que não me movo daqui há uma semana!\n Hahahaha.");
	emotion(e_heh);
	close;
}

// ------------------------------------------------------------------
dewata,67,186,0	script	Monge#dew	4_M_BUDDHIST,{
	mes("[Monge]\n Sou um monge e passo meus dias fazendo estudos religiosos.");
	next;
	mes("[Monge]\n Eu acabei de voltar da peregrinação ao Templo Borobudur com meus outros companheiros monges...");
	next;
	mes("[Monge]\n O Templo de Borobudur recebe muitas visitas peregrinas.\n Já que é um dos poucos templos restantes usados para adorar ao Grande Buddha.");
	close;
}

// ------------------------------------------------------------------
dewata,65,188,0	script	Monge#dew2	4_M_BUDDHIST,{
	mes("[Monge]\n O Templo de Borobudur é um dos poucos templos restantes usados para adorar ao Grande Buddha.");
	next;
	mes("[Monge]\n Eu não entendo porque existem tão pouos templos que seguem nossa forma de agir...");
	close;
}

// ------------------------------------------------------------------
dewata,63,190,0	script	Monge#dew3	4_M_BUDDHIST,{
	mes("[Monge]\n Você é um turista?\n Você pode fazer uma oferta e um pedido para um dos santuários.");
	next;
	mes("[Monge]\n Nosso Grande Buddha vai realizar seu pedido..");
	close;
}

// ------------------------------------------------------------------
dewata,62,192,0	script	Monge#dew4	4_M_BUDDHIST,{
	mes("[Monge]\n Nosso Grande Buddha é o rei das almas e o líder de todos os deuses.");
	next;
	mes("[Monge]\n As tribos de Dewata acreditem em Buddha.\n O estranho é que eles definem Buddha como várias criaturas diferentes.");
	next;
	mes("[Monge]\n Não tenho certeza do motivo para isto.\n Talvez seja pela quantidade de tribos em Dewata com diferentes características.");
	close;
}

// ------------------------------------------------------------------
dewata,75,122,6	script	Monge#dewt5	4_M_BUDDHIST,{
	mes("[Monge]\n Você é uma pessoa estranha aqui. O que traz você a este lugar calmo?");
	next;
	switch(select("Estou visitando", "Não há motivos especiais")) {
		case 1:
		mes "[Monge]\n Oh, você é turista.\n Essa é a '^0000FFPagoda^000000' adorando ao Grande Buddha.\n Por favor, tenha respeito aos monges orando por aqui.");
close;
case 2:
mes("[Monge]\n Tenha um bom dia...");
close;
}
}

// ------------------------------------------------------------------
dewata,69,101,6	script	Monge#dewt6	4_M_BUDDHIST,{
	mes("[Monge]\n Nós temos uma pagoda para a adoração dos Buddhas.\n Cada templo tem uma dessas torres, entretanto, não são muitas as pessoas que vêm aqui, exceto os Monges.");
	next;
	switch(select("Entendo...", "Explicar sobre os Buddhas", "Ah, certo.")) {
		case 1:
		mes("[Monge]\n Você deve sentir a compaixão do nosso Buddha!");
		close;
		case 2:
		mes("[Monge]\n Buddha é nosso deus da mitologia de Dewata, ele é o rei das almas e o líder dos deuses do bem.");
		next;
		mes("[Monge]\n Buddha é o guardião das almas a quem frequentemente descreveu na dança tradicional.\n Como lutando contra o mago Rangda.");
		next;
		mes("[Monge]\n Em Dewata nós acreditamos que há muitas entidades protegendo cada ilha e as tribos locais.\n Então, temos diferentes manifestações do Buddha.\n Geralmente descritas como um urso, tigre, dragão, cobra, ou leão.");
		next;
		mes("[Monge]\n O Grande Leão é um dos famosos Buddhas adorados em Dewata.");
		next;
		mes("[Monge]\n Espero que a explicação tenha sido satisfatória.\n Pode me perguntar se ainda tiver questões em mente.");
		close;
		case 3:
		mes("[Monge]\n Tenha um bom dia...");
		close;
	}
}

// ------------------------------------------------------------------
dewata,71,79,6	script	Monge#dewt7	4_M_BUDDHIST,{
	mes("[Monge]\n Essa torre foi construída na ponta de um barranco costeiro.\n Você pode orar sentindo uma leve brisa do oceano passar pelos cabelos.");
	next;
	mes("[Monge]\n Venha, você deve sentir a compaixão do nosso Buddha nesse clima maravilhoso.");
	close;
}

// ------------------------------------------------------------------
dewata,211,272,4	script	Sr. Jiawang#dew	4_M_DEWOLDMAN,{
	mes("[Sr. Jiawang]\n Estes dias, estamos recebendo visitas de vários casais em lua de mel.");
	next;
	mes("[Sr. Jiawang]\n Deve ser por causa da beleza do cenário, certo?");
	next;
	mes("[Sr. Jiawang]\n Estou feliz com meu negócio.\n Espero que todos tenhamos muitas visitas como estas.");
	next;
	mes("[Sr. Jiawang]\n Ah! você deveria trazer seu amor para Dewata na sua noite de núpcias.\n Eu lhe farei um precinho bacana.");
	close;
}

// ------------------------------------------------------------------
dewata,245,244,4	script	Sr. Dingwan#dew	4_M_DEWMAN,{
	mes("[Sr. Dingwan]\n Argg. Isto está me deixando com raiva!");
	emotion(e_an);
	next;
	mes("[Sr. Dingwan]\n Como mais e mais casais podem vir aqui?");
	next;
	mes("[Sr. Dingwan]\n E porque eles agem tão apaixonadinhos?\n Qual é o problema?");
	next;
	mes("[Sr. Dingwan]\n Dá um tempo, mostrem um pouco de respeito pelas pessoas que trabalham aqui...");
	close;
}

// ------------------------------------------------------------------
dewata,233,263,0	script	Casal Apaixonado#dew	4_M_ROGUE,{
	mes("[Marido Apaixonado]\n Você é a coisa mais linda deste mundo, meu amor.");
	emotion(e_kis);
	next;
	mes("[Esposa Apaixonada]\n Sério?\n Sou tão linda assim?\n Eu te amo, querido.");
	emotion(e_kis2, 0, "Casal Apaixonado#dew2");
	next;
	mes("[Casal Apaixonado]\n Hahahahahahahahahahahahahahahahahahahahaha\n Hohohohohohohohohohohohohohohohohohohohoho");
	emotion(e_heh);
	emotion(e_heh, 0, "Casal Apaixonado#dew2");
	next;
	mes("[Marido Apaixonado]\n Vamos agora, estou me cansando disso. Vamos.");
	close;
}

// ------------------------------------------------------------------
dewata,234,263,0	script	Casal Apaixonado#dew2	4_F_JOB_HUNTER,{
	mes("[Esposa Apaixonada]\n Meu amor.\n Você sabe que flor é essa?");
	emotion(e_what);
	next;
	mes("[Marido Apaixonado]\n Hmm? Eu não sei.\n Mas é realmente linda.");
	next;
	mes("[Esposa Apaixonada]\n Amor...\n Quem é mais bonita?\n Eu ou a flor?");
	emotion(e_what);
	next;
	mes("[Marido Apaixonado]\n Não importa o quão bonita seja a flor.\n Você sempre será mais linda.");
	emotion(e_kis, 0, "Casal Apaixonado#dew");
	next;
	mes("[Esposa Apaixonada]\n Sério?\n Sou tão linda assim?\n Eu te amo, docinho.");
	emotion(e_kis2);
	next;
	mes("[Casal Apaixonado]\n Hahahahahahahahahahahahahahahahahahahahaha\n Hohohohohohohohohohohohohohohohohohohohoho");
	emotion(e_heh, 0, "Casal Apaixonado#dew");
	emotion(e_heh);
	next;
	mes("[Esposa Apaixonada]\n Dá um tempo, isso é entediante.\n Vamos continuar.");
	close;
}

// ------------------------------------------------------------------
dewata,269,208,4	script	Garotinho#dew	4_M_DEWBOY,{
	mes("[Garotinho]\n Ei " + (Sex == SEX_MALE ? "mano" : "mana") + ", olhe aquele cara!");
	next;
	mes("[Garotinho]\n Ele está ali deitado há uma semana sem fazer nada...");
	next;
	mes("[Garotinho]\n Quem É aquele cara?");
	emotion(e_what);
	next;
	mes("[Garotinho]\n Eu não quero ser um preguiçoso como ele quando eu crescer.");
	close;
}

// ------------------------------------------------------------------
dewata,227,129,4	script	Sarr#dew	4_M_DEWBOY,{
	mes("[Sarr]\n Eles estão se escondendo, então eu devo procurá-los.\n Irei encontrá-los, com certeza!");
	next;
	mes("[Sarr]\n Um.");
	next;
	mes("[Sarr]\n Dois. Três.");
	next;
	mes("[Sarr]\n Quatro. Cinco. Seis.");
	next;
	mes("[Sarr]\n ... ... ... ...");
	next;
	mes("[Sarr]\n Noventa e nove.\n Cem!!! Lá vou eu!.");
	close;
}

// ------------------------------------------------------------------
dewata,239,140,4	script	Siyak#dew	4_M_DEWGIRL,{
	mes("[Siyak]\n Ei, vamos lá, saia daí.\n Ele irá me encontrar..");
	next;
	mes("[Sarr]\n Eu encontrei o Siyak!!\n Pode sair, pode sair!!");
	emotion(e_omg);
	emotion(e_gg, 0, "Sarr#dew");
	emotion(e_gg, 0, "Sipo#dew");
	next;
	mes("[Siyak]\n Arrgg!!\n É tudo culpa sua.!!");
	emotion(e_an);
	close;
}

// ------------------------------------------------------------------
dewata,193,145,4	script	Sipo#dew	4_M_DEWBOY,{
	mes("[Sipo]\n Sarr não vai me encontrar aqui, não é?");
	next;
	mes("[Sarr]\n Eu encontrei Siyak!!\n Saia, saia!!");
	emotion(e_gg, 0, "Sarr#dew");
	emotion(e_omg, 0, "Siyak#dew");
	emotion(e_gg);
	next;
	mes("[Sipo]\n Hehe. Agora Siyak é o PEGO. Vou continuar me escondendo aqui.");
	close;
}

// ------------------------------------------------------------------
dewata,228,177,4	script	Majya#dew	4_M_DEWBOY,{
	mes("[Majya]\n Eu estava brincando de Esconde-Esconde com meus amigos...");
	next;
	mes("[Majya]\n Eu estava parada aqui, e não me encontram há mais de 3 horas...");
	emotion(e_hmm);
	next;
	mes("[Majya]\n O que devo fazer, sair?\n Eu não quero ser a PEGA...");
	close;
}

// ------------------------------------------------------------------
dewata,278,100,4	script	Criança Desaparecida#dew	4_F_KID2,{
	mes("[Ukki]\n WaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaa.");
	emotion(e_sob);
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n Hey, Garotinha...");
	next;
	mes("[Ukki]\n WaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaa.");
	emotion(e_sob);
	next;
	mes("[Ukki]\n Mamãe. Papai.\n Onde estão vocês.....!. Waa.");
	emotion(e_sob);
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n ... ... ...");
	emotion(e_dots);
	close;
}

// ------------------------------------------------------------------
dewata,249,87,4	script	Mãe#dew	4W_F_01,{
	mes("[Mãe]\n Ukki. Ukki. Aonde ela foi?");
	emotion(e_wah);
	next;
	mes("[Mãe]\n Não posso tirar os olhos dela nem por um segundo...");
	next;
	mes("[Mãe]\n Ukki.");
	emotion(e_wah);
	close;
}

// ------------------------------------------------------------------
dewata,251,85,6	script	Pai#dew	4W_M_01,{
	mes("[Pai]\n Querida, Ukki se perdeu novamente?");
	emotion(e_what);
	next;
	mes("[Pai]\n Arrgg...\n Não posso ir a lugar algum com ela...\n Quantas vezes já foram?");
	emotion(e_swt2);
	next;
	mes("[Pai]\n Ela se perdeu em Louyang, Amatsu, Moscovia, Brasilis, Kunlun, e em Ayothaya...");
	emotion(e_swt2);
	next;
	mes("[Pai]\n O que?!\n Já vão fazer 7 vezes incluindo esta em Dewata...\n 7 vezes!!!!!!");
	emotion(e_otl);
	close;
}

// ------------------------------------------------------------------
dewata,278,281,4	script	Vovô#dew	4_M_DEWOLDMAN,{
	mes("[Vovô Alegre]\n Hoje, irei pedir à minha velha para cozinhar para mim ^006400arroz frito^000000.");
	next;
	mes("[Vovô Alegre]\n O ^006400arroz frito^000000 da minha esposa é sempre muito especial!");
	next;
	mes("[Vovô Alegre]\n Me faz amá-la sempre mais.\n Não pode imaginar o delicioso sabor!");
	emotion(e_lv);
	close;
}

// ------------------------------------------------------------------
dewata,280,277,4	script	Vovó#dew	4_M_DEWOLDWOMAN,{
	mes("[Vovó Alegre]\n No meu tempo de jovem, haviam muitos cavalheiros que queriam me cortejar.");
	emotion(e_swt2);
	next;
	mes("[Vovó Alegre]\n Ainda assim, encontrei o cara certo, e me casei.\n Eu perguntei o que ele mais gostava sobre mim, ele disse que era o meu ^006400arroz frito^000000 caseiro.");
	next;
	mes("[Vovó Alegre]\n Desde então, ele só me pede pra fazer ^006400arros frito^000000 no jantar.\n Já passamos de 40 anos de casados e ele ainda não enjoou.");
	next;
	mes("[Vovó Alegre]\n Eu sempre pensei que seria uma sorte envelhecer ao lado de alguém que amasse o que eu cozinho.");
	emotion(e_lv);
	close;
}

// ------------------------------------------------------------------
dewata,165,103,6	script	Aventureiro Semangat#dew	4_M_DEWOLDMAN,{
	mes("[Aventureiro]\n Também viajei ao redor do Mundo Quando eu era jovem como você.\n ^FF0000Magao, Choco, Águia, e Cobra^000000, todos eram amigos bons que eu me encontrei durante minhas viagens.");
	next;
	mes("[Aventureiro]\n Eu ainda sou apaixonado por aventuras e viagens.\n Mas, simplesmente não posso deixar minha amada esposa e meus netos para trás...");
	next;
	mes("[Aventureiro]\n Você também terá algo ou alguém que será importante em seu coração algum dia.");
	close;
}

// ------------------------------------------------------------------
dewata,139,114,6	script	Esposa de Semangat#dew	4_M_DEWOLDWOMAN,{
	mes("[Esposa de Semangat]\n Para onde aquele velho se meteu?\n Você o viu por aí?");
	next;
	switch(select("Acho que o ví por aí..", "Não, não o vi..")) {
		case 1:
		mes("[Esposa de Semangat]\n Ele fugiu quando eu estava procurando comigo.\n Deve estar por aí, contando histórias cabeludas para alguns viajantes, como sempre.");
		next;
		mes("[Esposa de Semangat]\n Eu peço desculpas pelo meu marido.\n Por favor, não acredite em suas histórias idiotas.\n Como a que diz que ele se deparou com ^FF0000Mongeeys e Cobras^000000.\n Ou que ele lutou ao lado de uma ^FF0000Lula^000000.");
		next;
		mes("[Esposa de Semangat]\n Ele está deitado ali a vida toda.\n Ainda asism, sempre encontra alguns viajantes, e quem ouça aos seus contos malucos.");
		close;
		case 2:
		mes("[Esposa de Semangat]\n Oh. Por favor, diga-me se o vir por aí.");
		close;
	}
}

// ------------------------------------------------------------------
dewata,117,156,6	script	Garoto Sonhador#dew	4_M_DEWBOY,{
	mes("[Garoto Sonhador]\n Minha vovó diz que uma vez existia um pássaro chamado ^FF0000Garuda^000000 que voou sobre esta cidade.\n Depois disso, tivemos ótimas colheitas e pudemos viver felizes.");
	next;
	mes("[Garoto Sonhador]\n Eu quero ver este pássaro voando sobre nossa cidade novamente!\n Então minha mãe, pai vovó, e vovô poderão ser felizes como nos velhos tempos.\n O que acha?");
	close;
}

// ------------------------------------------------------------------
dewata,144,216,4	script	Garoto Esperto#dew	4_M_DEWBOY,{
	mes("[Garoto Esperto]\n Meus pais me contavam...");
	next;
	mes("^006400Filho, você têm que estudar muito.\n Seja feliz.\n Tenha uma vida longa e segura.\n A montanha no horizonte sempre estará lá por você.^000000");
	next;
	mes("[Garoto Esperto]\n Não é uma grande filosofia?\n Eu quero viver dessa maneira e me tornar uma grande pessoa, e ajudar a todos na nossa cidade e viver feliz!");
	close;
}

// ------------------------------------------------------------------
dewata,127,248,6	script	Garoto Ambisioso#dew	4_M_DEWGIRL,{
	mes("[Garoto Ambicioso]\n Minha família têm fermentado o tradicional vinho de Dewata por muitos anos.\n Eu quero tomar dele, mas meu pai diz que sou muito jovem.\n Ele disse que só beberei somente se eu conseguir dormir por ^FF0000100 dias^000000.");
	next;
	mes("[Garoto Ambicioso]\n Todos os adultos adoram tomar do vinho de meu pai.\n Eu quero muito tomar.\n Mas, o que devo fazer...?\n Eu me esqueci de quantas ^FF0000noites^000000.\n Eu já dormi... boo hoo!");
	emotion(e_sob);
	close;
}

// ------------------------------------------------------------------
dewata,280,236,4	script	Viajante#dew	4_F_JOB_BLACKSMITH,{
	mes("[Viajante]\n Eu não sou de ^8B4513Dewata^000000.\n Mas enquanto estava viajando, eu encontrei esse lugar...\n E fiz a escolha de viver nesta linda cidade.");
	next;
	mes("[Viajante]\n Estou muito feliz em viver aqui e encontrar e experimentar toda essa vista maravilhosa.\n É um sonho realizado.");
	next;
	mes("[Viajante]\n Já pensou em se estabelecer por aqui também?");
	close;
}


// ------------------------------------------------------------------
dewata,95,203,6	script	Guia Turístico#dew	4_M_DEWMAN,{
	mes("[Guia]\n Este templo atrás de mim é chamado de Borobudur.\n O Templo de Borobudur foi construído no 9º século para venerar o grande Buddha, uma figura religiosa antiga.");
	emotion(e_swt2);
	next;
	mes("[Guia]\n Esse templo é construído com 6 plataformaas quadradas e 3 redondas.\n E 2672 painéis auxiliares feitos à mão em conjunto com 504 estátuas de vários Buddhas.");
	emotion(e_swt2);
	next;
	mes("[Guia]\n A Stupa central, ou santuário está localizado na plataforma mais alta, a qual é rodeada por mais 72 estátuas.");
	emotion(e_swt2);
	next;
	mes("[Guia]\n Até nos tempos modernos, O Templo de Borobudur é um local de peregrinação para muitos monges adorarem o Buddha.\n Também é a maior atração turística, como pode imaginar.");
	emotion(e_swt2);
	next;
	mes("[Guia]\n Isso é tudo o que tenho sobre o Templo de Borobudur, quer perguntar mais alguma coisa?\n Se não, poderemos prosseguir para o próximo local.");
	close;
}

// ------------------------------------------------------------------
dewata,89,191,6	script	Pequeno Santuário#dew1	CLEAR_NPC,{
	mes("Há um pequeno santuário aqui.\n Há muitas pessoas fazendo pedidos.");
	next;
	switch(select("Fazer uma doação", "Fazer um pedido", "Ir embora")) {
		case 1:
		mes("A caixa de doação diz:\n ^FF00001,000 . 100,000 Zeny^000000\n Quanto gostaria de doar?");
		next;
		input(.@input, 0, 100000);
		if (.@input < 1000) {
			mes("- Cancelado. -");
			close;
		} else if (.@input <= 50000) {
			.@good_luck = rand(1, 10000);
		} else {
			.@good_luck = rand(1, 5000);
		}
		if (.@input > Zeny) {
			mes("- Não há Zeny suficiente. -");
			close;
		}
		mes("Qual é o seu pedido?");
		next;
		input(.@wish$);
		setarray(.@wishes$[0],
			"Energia","Força",
			"Mais Rápido","Velocidade","Rapidez","Agilidade",
			"Mãos Habilidosas","Des",
			"Saudável","Em Forma","Vital",
			"Inteligência","Cérebro","Estudo","Int","1º Lugar",
			"Sorte","Riqueza","Itens","Obter Item","Mercadoria","Loteria",
			"Nível Completo","Nível","NV",
			"Amante","Namorada","Namorado");
		setarray(.@index[0],
			1,1,
			2,2,2,2,
			4,4,8,8,8,
			16,16,16,16,16,
			32,32,32,32,32,32,
			64,64,64,
			128,128,128);
		if (.@good_luck == 7 || .@good_luck == 77 || .@good_luck == 777 || .@good_luck == 7777) {
			.@bonus = 1;
		}
		for(.@i = 0; .@i < getarraysize(.@wishes$); ++.@i) {
			if (compare(.@wish$, .@wishes$[.@i])) {
				.@stat |= .@index[.@i];
				break;
			}
		}
		mes("Você faz um pedido de ^0000FF" + .@wish$ + "^000000 para o pequeno santuário.");
		next;
		callsub(L_Wish);
		Zeny -= .@input;
		if (.@stat & 1 && .@bonus) { consumeitem(12043); }
		else if (.@stat & 2 && .@bonus) { consumeitem(12058); }
		else if (.@stat & 4 && .@bonus) { consumeitem(12063); }
		else if (.@stat & 8 && .@bonus) { consumeitem(12053); }
		else if (.@stat & 16 && .@bonus) { consumeitem(12048); }
		else if (.@stat & 32 && .@bonus) { consumeitem(12068); }
		else if (.@stat & 64) {
			specialeffect(EF_ANGEL, AREA, playerattached());
			mes("- Uma entidade celestial derrama uma bênção sobre você. -");
			next;
		} else if (.@stat & 128) {
			mes("- O santuário lhe envolve em uma amorosa aura. -");
			specialeffect(EF_LIGHTSPHERE, AREA, playerattached());
			next;
		}
		mes("O sentimento é que o pedido pode se tornar verdadeiro.");
		close;
		case 2:
		mes("Qual é o seu pedido?");
		next;
		input(.@wish$);
		mes("Você pediu por ^0000FF" + .@wish$ + "^000000 no pequeno santuário.");
		next;
		callsub(L_Wish);
		mes("O sentimento é que o pedido pode se tornar verdadeiro.");
		close;
		case 3:
		close;
	}

	L_Wish:
	mes("Misteriosas energias emanam do santuário.");
	specialeffect(EF_FLASHER, AREA, "Pequeno Santuário#dew1");
	specialeffect(EF_FLASHER, AREA, "Pequeno Santuário#dew2");
	specialeffect(EF_FLASHER, AREA, "Pequeno Santuário#dew3");
	specialeffect(EF_FLASHER, AREA, "Pequeno Santuário#dew4");
	next;
	mes("Você recebeu a bênção do santuário.");
	specialeffect(EF_BLESSING, AREA, playerattached());
	next;
	return;
}

dewata,89,212,6	duplicate(Pequeno Santuário#dew1)	Pequeno Santuário#dew2	CLEAR_NPC
dewata,68,212,6	duplicate(Pequeno Santuário#dew1)	Pequeno Santuário#dew3	CLEAR_NPC
dewata,68,191,6	duplicate(Pequeno Santuário#dew1)	Pequeno Santuário#dew4	CLEAR_NPC

// ------------------------------------------------------------------
dewata,114,243,6	script	Jovem Preguiçoso#dew	4_M_DEWMAN,1,1,{
	if (countitem(Coco_Juice)) {
		mes("[Preguiçoso]\n Isso não é Suco de Côco?\n Poderia me dar isso?\n Acabei de acordar e minha garganta está seca!");
		next;
		switch(select("Entregar", "Não entregar")) {
			case 1:
			mes("[Preguiçoso]\n Sério?\n Pra mim?\n Lhe darei isto em troca...\n Obrigado... Hehe.");
			delitem(Coco_Juice, 1);
			getrandgroupitem((Gift_Box), 1);
			close;
			case 2:
			mes("[Preguiçoso]\n É isso aí. Ok...");
			close;
		}
	} else {
		mes("[Preguiçoso]\n Ah. Com sede.\n Alguém tem um Suco de Côco por aí?");
		close;
		OnTouch:
		if (countitem(Coco_Juice) == 0) {
			mes("[Preguiçoso]\n Arrgg. Estou com sede..\n Muita sede..\n Me dê Suco de Côco...\n Suco de Côocoo..");
			emotion(e_an);
			next;
			emotion(e_an);
			next;
			emotion(e_an);
			next;
			emotion(e_an);
			close2;
			end;
		}
	}
}

// ------------------------------------------------------------------
dewata,146,109,5	script	Cozinheiro#dew	4_COOK,{
	mes("[Cozinheiro]\n Sejam todos bem vindos à Ilha de Dewata.\n Espero que se comporte como os nobres viajantes, não como alguns jovens problemáticos...");
	next;
	switch(select("Sobre a culinária de Dewata", "Cardápio do Dia?", "Estou bem")) {
		case 1:
		mes("[Cozinheiro]\n Precisa de informações sobre nossos pratos?\n Bem... Não tenho muito o que falar, mas sinta-se à vontade para ouvir, se quiser.");
		next;
		mes("[Cozinheiro]\n Há muito o que abranger, deixe-me começar.");
		next;
		mes("[Cozinheiro]\n Primeiro, os pratos de Dewata possuem nomes especiais baseados em cada receita.");
		next;
		mes("[Cozinheiro]\n Se o nome do prato tem \"Goreng\" no meio, then it is either stir or deep fried food.");
		next;
		mes("[Cozinheiro]\n Se é um tipo de \"Bakar\", então é comida grelhada.");
		next;
		mes("[Cozinheiro]\n E se é 'Satay', então você está comendo um prato skewered.");
		next;
		mes("[Cozinheiro]\n Segundo, nós nomeamos os pratos através de seus ingredientes básicos.");
		next;
		mes("[Cozinheiro]\n Em Dewata, nós chamamos arroz de Nasi, macarrão de Mie, pão de Roti, frando de Ayam, peixe de Ikan, e milho de Jagung.");
		next;
		mes("[Cozinheiro]\n Então, se o arroz é frito chamamos o prato de \"Nasi Goreng\", e macarrão frito de \"Mie Goreng\".");
		next;
		mes("[Cozinheiro]\n Bem... Isso é o bastante para aproveitar nossa comida em Dewata!!\n Se estiver com fome, nós temos nosso Menu Especial por apenas ^0000FF5000^000000 Zeny.");
		close;
		case 2:
		mes("[Cozinheiro]\n Nós temos 2 items: \"Nasi Goreng\" e \"Satay\".\n Qual deles vai querer?");
		next;
		switch(select("Nasi Goreng", "Satay")) {
			case 1:
			mes("[Cozinheiro]\n Isso é Nasi Goreng com meu molho especial juntamente com um ovo frito por cima.\n Custa somente ^0000FF5000^000000 Zeny.");
			.@food = 11532;
			break;
			case 2:
			mes("[Cozinheiro]\n Esse é o Satay, um pedaço de carne skewered e grelhada sobre carvão de côco.\n Custa somente ^0000FF5000^000000 Zeny.");
			.@food = 11533;
			break;
		}
		next;
		switch(select("Provar", "Ir embora")) {
			case 1:
			if (Zeny < 5000) {
				mes("[Cozinheiro]\n Onde está o dinheiro, jovem?!\n Não vendemos fiado aqui! Ok?");
				close;
			} else {
				mes("[Cozinheiro]\n Aqui está o que pediu: " + getitemname(.@food) + ", não irá se arrepender!");
				Zeny -= 5000;
				getitem(.@food,1);
				close;
				case 2:
				mes("[Cozinheiro]\n É uma pena que não irá provar deste delicioso prato...");
				close;
			}
		}
		case 3:
		mes("[Cozinheiro]\n Está falando sério?\n Isso não é nem um pouco engraçado.");
		close;
	}
}

// ------------------------------------------------------------------
dewata,147,107,6	script	Gourmet#dew	4_M_03,{
	mes("[Gourmet]\n Oh... é como se estivesse acontecendo uma festa em minha boca...\n E todos estão convidados!");
	emotion(e_sob);
	next;
	mes("[Gourmet]\n Mestre. Mais, por favor!.");
	emotion(e_no1);
	emotion(e_ok, 0, "Cozinheiro#dew");
	next;
	mes("[Gourmet]\n Você tem que experimentar isso!\n A comida aqui é muito suculenta!.");
	close;
}

// ------------------------------------------------------------------
dewata,204,230,6	script	Mulher de Dieta#dew	4_M_DEWWOMAN,{
	if (!countitem(Satay)) {
		mes("[Mulher de Dieta]\n Ah. Estou morrendo de fome!!\n Estou fazendo dieta no momento.\n Porque ainda estou com fome?");
		next;
		mes("[Mulher de Dieta]\n Não fale tanto comigo!!\n Eu quero experimentar aquele ^006400Satay^000000 grelhado.");
		close;
	}
	mes("[Mulher de Dieta]\n Este ^006400Satay^000000 de dar água na boca é pra mim?");
	next;
	switch(select("Sim, quer um pedaço?", "Não, é pra mim!")) {
		case 1:
		delitem(Satay, 1);
		mes("[Mulher de Dieta]\n Muito obrigado!\n Eu estive com tanta fome.!!\n O cheiro deste ^006400Satay^000000 é tão bom.!");
		next;
		getitem(Satay, 1);
		mes("[Mulher de Dieta]\n Ah... preciso colocar os pés no chão, é ruim se ter muito do que é bom...\n Devo continuar com minha dieta.\n Me desculpe, devolverei isto pra você.");
		emotion(e_sob);
		close;
		case 2:
		mes("[Mulher de Dieta]\n Arrgg..\n Quanta ganância!\n Já que não quer dividir.\n De qualquer forma, não devo burlar minha dieta nem por algo tão cheiroso e delicioso...");
		emotion(e_pif);
		close;
	}
}
