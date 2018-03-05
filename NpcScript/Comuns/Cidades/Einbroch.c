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
| - Nota: Npcs comuns na cidade einbroch                            |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
einbroch,94,267,3	script	Funcionário#ein01	4_F_02,{
	mes("[Equipe do Aeroporto]\n Bem-vind" + (Sex == SEX_MALE ? "o" : "a") + " ao Aeroporto de Einbroch.\n Utilize essa porta para embarcar no digirível que te leva para Juno, Lighthalzen e Hugel na República de Schwarzwald.");
	next;
	mes("[Equipe do Aeroporto]\n Caso seja Einbroch o seu destino, desça as escadas e fale com nossa Equipe de Recepção para levá-lo até o terminal principal.\n Obrigado, e tenha um voo agradável.");
	close;
}

// ------------------------------------------------------------------
einbroch,259,326,3	script	Leslie#ein_1	4_F_EINOLD,{
	mes("[Leslie]\n Uma senhora velha como eu não pode respirar esse ar!\n Como é que as pessoas ainda vivem aqui, com essa fumaça?\n Claro, o ar de Einbech não não é puro, mas o ar aqui em Einbroch é muito pior!");
	next;
	mes("[Leslie]\n Eu odeio vir para cá as vezes!\n O ar é todo poluído e está cidade está cheia de presos idiota!\n Mas aqui vende-se coisas que eu não encontro em casa...");
	close;
}

// ------------------------------------------------------------------
einbroch,236,191,3	script	Tan#ein	4_M_EINMAN,{
	mes("[Tan]\n Todas as fábricas aqui em Einbroch estão causando sérios problemas de poluição do ar.");
	next;
	mes("[Tan]\n Eu sou engenheiro do Aeroporto e todo dia, o dia todo, lido com manchas de óleo e todo tipo de poluentes.\n Estou surpreso que ainda não fiquei doente.");
	next;
	mes("[Tan]\n Mesmo assim, eu tomo cuidado como posso.\n Aonde quer que eu vá nesta cidade, tem essa fumaça vermelha, eu sempre uso minha Máscara Cirúrgica.\n Se você for ficar por aqui um tempo, você deveria carregar uma também.");
	close;
}

// ------------------------------------------------------------------
einbroch,228,121,5	script	Pequeno Toby#ein-1	4_M_EINMAN,{
	mes("[Pequeno Toby]\n Me perdoe...\n Mas estou perdido!\n Eu não posso encontrar mamãe e papai!");
	next;
	mes("[Pequeno Toby]\n E-eu estou no Aeroporto?!\n Meus pais deveriam vir me buscar, mas eu ainda não encontrei eles!\n Nós acabamos de nos mudar, então não sei aonde ficam as coisas!");
	next;
	mes("[Pequeno Toby]\n E-espere!\n Aonde esta indo?!\n Não me deixe aqui, estou sozinho...!");
	close;
}

// ------------------------------------------------------------------
einbroch,40,116,1	script	Eng. do Aeroporto#ein	4_M_EINMAN,{
	mes("[Engenheiro do Aeroporto]\n E-Ei!\n Não toque em minha preciosa Burielle!\n Eu terminei os reparos dela e agora ela esta dormindo!\n A-afaste-se dela!");
	next;
	switch(select("Quem é Burielle?", "Desculpe")) {
		case 1:
		mes("[Engenheiro do Aeroporto]\n Burielle é o modelo de Aeronave mais bonito construido nos últimos dez anos!\n Ela pode estar no chão agora, mas com as minhas mãos curadores, ela conquistará os céus denovo!");
		next;
		switch(select("Ah!", "Uh huh...")) {
			case 1:
			mes("[" + strcharinfo(PC_NAME) + "]\n Entendo, então você esta trabalhando na restauração desta magnifica espécime de Aeronave.");
			next;
			mes("[Engenheiro do Aeroporto]\n Sim.\n Eu agradeço isso apenas se você tomar cuidado.\n Eu coloquei muito amor concerto de Burielle...");
			close;
			case 2:
			mes("[" + strcharinfo(PC_NAME) + "]\n Uh huh...\n Certo.\n Por um segundo atrás, pensei que você estava falando de uma pessoa, mas agora percebi que não, você sabe, como um louco.");
			next;
			mes("[" + strcharinfo(PC_NAME) + "]\n Oh, você disse, \"modelo mais bonito\"?\n Todas as Aeronaves pra mim parecem iguais, essa aqui não é especial contudo.\n Você esta ficando maluco, pobre coitado.");
			next;
			emotion(e_an);
			mes("[Engenheiro do Aeroporto]\n O-oSque...?!");
			close;
		}
		case 2:
		mes("[Engenheiro do Aeroporto]\n Bem, pelo menos você sabe o que fez de errado.\n Agora pare de perturbar ela e saia!");
		close;
	}
}

// ------------------------------------------------------------------
einbroch,294,312,3	script	Centzu#ein	4_M_EINMAN2,{
	mes("[Centzu]\n Eu ja vivi aqui a um bom tempo atrás e agora vejo que esta grande cidade continua crescendo a cada dia que passa.");
	next;
	mes("[Centzu]\n Como Einbroch cresceu tanto e tão rápido?\n Eu ainda não consigo acreditar que ela se desenvolveu tanto.\n Bem, eu acredito que não é da minha conta.\n Nada que eu fizer fará diferença... ");
	next;
	mes("[Centzu]\n Mesmo com uma industrialização rápida não pode ser boa para a natureza e para as pessoas, eu simplesmente me sento, e assisto o que acontece e aproveito a vida...");
	close;
}

// ------------------------------------------------------------------
einbroch,232,255,5	script	Khowropher#ein	4_M_EINOLD,{
	mes("[Khowropher]\n ^666666*Tosse Tosse*^000000\n O ar aqui é tão grosso e sujo!\n E é pior para nós velhos com problemas respiratórios!");
	next;
	mes("[Khowropher]\n Eu não ligo se eles continuam contruindo mais e mais fábricas e casas nesta cidade.\n Assim, eu gostaria de passar o resto da minha vida em algum lugar quieto e com o ar limpo...");
	next;
	mes("[Khowropher]\n Então novamente, Einbroch é minha cidade natal, e eu não posso simplesmente sair.\n Creio que é meu destino sofrer com este ar até o dia que eu morrer.\n ^666666*Sigh...*^000000");
	close;
}

// ------------------------------------------------------------------
einbroch,143,109,5	script	Khetine#ein	4_M_EINMAN,{
	mes("[Khetine]\n Ultimamente, temos conversado sobre este prédio vazio que foi convertido em algum tipo de instalação misteriosa.");
	next;
	mes("[Khetine]\n Tudo parece muito sombrio, mas eu acho que não é realmente o meu trabalho saber sobre isso.\n Quero dizer, se isso não me afeta, porque deveria me preocupar?");
	close;
}

// ------------------------------------------------------------------
einbroch,229,149,3	script	Sleik#ein	4_M_EINMAN2,{
	mes("[Sleik]\n Estranhamente, temos uma Estação de Trem que todo mundo tem chamado de uma vitória pra ciência.\n Eu digo, não deveriam estar mais impressionados com a Aeronave?");
	next;
	mes("[Sleik]\n Agora, se você quer saber aonde o trem atualmente vai, eu não saberei te dizer.\n Afinal, nunca andei nele.\n Mas eu continuo achando que ter uma Estação de Trem própria é muito bom.");
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
ein_in01,113,211,3	script	Teinz#ein	4_M_REPAIR,{
	mes("[Teinz]\n Se você simplesmente me der dinheiro, serei seu escravo!\n Não tem nada que eu não faria. Tudo é um jogo justo.\n Inferno, eu ate ficaria nú se você me pagasse o suficiente.");
	next;
	mes("[Teinz]\n Se você me pagar o quanto preciso, eu trabalharei duro para você, em qualquer serviço.\n Claro, mineração é difícil, mas enquanto os zenys continuarem a vir, estarei feliz.\n Heh heh heh.");
	close;
}

// ------------------------------------------------------------------
ein_in01,48,220,5	script	Lowe#ein	4_M_REPAIR,{
	mes("[Lowe]\n ...\n ......");
	next;
	mes("[Lowe]\n ...\n ......\n .........");
	next;
	mes("[Lowe]\n Ei.\n Porque você esta olhando pra mim assim?\n Não temos tempo para conversar no trabalho.\n Se Canphotii capturar você provavelmente será punido...");
	next;
	mes("[Lowe]\n Oh espere...\n Você não trabalha aqui.\n Me desculpe, esse tipo de reação é um velho hábito pra mim.");
	close;
}

// ------------------------------------------------------------------
ein_in01,87,237,5	script	Dinje#ein	4_F_EINWOMAN,{
	mes("[Dinje]\n Você sabe porque uma senhora como eu trabalha em uma fábrica?\n Vou te dizer porque...");
	next;
	mes("[Dinje]\n Meu marido folgado, Gesin, esta deitado ali no chão.\n Então eu tenho que trabalhar para poder nos sustentar!");
	next;
	mes("[Dinje]\n Não podemos descançar nem mesmo um segundo se queremos juntar dinheiro suficiente para ficar ricos e saudáveis um dia.\n Você me entende?");
	next;
	mes("[Dinje]\n Bem, meu marido óbviamente não!\n Como ele pode não saber como o mundo real funciona?!\n Ei, chute ele pra mim se ele não acordar logo!");
	close;
}

// ------------------------------------------------------------------
ein_in01,84,218,3	script	Tsuen#ein	4_M_REPAIR,{
	mes("[Tsuen]\n Havia um tempo em que eu sonhava em ser um aventureiro assim como você.\n Mas isso foi a muito tempo atrás...");
	next;
	mes("[Tsuen]\n Agora, não sou nada além de um gerente da fábrica.\n Mesmo assim, não sendo o melhor trabalho, eu estou muito satisfeito.\n Eu tenho certeza que as pessoas gostam dos produtos que supervisiono...");
	next;
	mes("[Tsuen]\n Talvez minha vida estava destinada para ser dessa maneira, mesmo que não seja como eu tenha planejado.\n Mas o tempo virá quando entrar de férias e viajar pelo mundo todo assim que eu tiver uma chance!");
	next;
	mes("[Tsuen]\n Eu espero que esse dia chegue quando eu puder encontra-lo neste vasto mundo e comprimenta-lo como um grande amigo aventureiro!");
	close;
}

// ------------------------------------------------------------------
ein_in01,103,239,1	script	Gesin#ein	4_M_DIEMAN,{
	mes("[Gesin]\n Arrrgh!\n Isso esta me matando!\n Porque eu poderia ser rico?\n Qual o problema em viver como a vivemos?");
	next;
	mes("[Gesin]\n Eu tenho um problema com a minha atual forma de viver.\n Mas sempre a velha bola e as correntes não concordam.\n Porque ela é tão obsecada com riqueza e poder?");
	next;
	mes("[Gesin]\n Bem, no meu caso, eu gosto de ajuda-la, mas eu não posso levantar!\n Estou exausto e meu corpo esta sobrecarregado.\n Não tenho força contudo.");
	next;
	mes("[Gesin]\n Isso é horrível.\n Eu deveria estar descançando ao invés de me preocupando em fazer dinheiro...");
	close;
}

// ------------------------------------------------------------------
ein_in01,33,275,1	script	Pevtatin#ein	4_M_EINMINER,{
	mes("[Pevtatin]\n Meu bom Deus!\n Eu estou estressado!\n Isto tem sido sem parar desde que me mudei pra ca!");
	next;
	mes("[Pevtatin]\n O serviço é pesado e o chefe ja me odeia!\n Eu não me mudei pra ca para isso!\n Mas, o pagamento é decenete, então acho que vou ficar por aqui mais um pouco.");
	next;
	mes("[Pevtatin]\n Aqui vai...!");
	close;
}

// ------------------------------------------------------------------
ein_in01,36,204,3	script	Rombell#ein	4_M_REPAIR,{
	mes("[Rombell]\n É ótima que a fábrica está fazendo bons negócios e traçando um lote de lucros.\n Mas eu ainda tenho uma preocupação maior.");
	next;
	mes("[Rombell]\n O tamanho da poluição que este lugar vem causando é horrível!\n Nós temos estas máquinas cuspindo gases tóxicos o dia todo!\n O ar não vai se manter seguro por muito tempo...");
	next;
	mes("[Rombell]\n Eu digo, o ar que respiramos agora mesmo está muito sujo e as coisas só vão ficando pior.\n Como nós poderiamos solucionar este problema?");
	close;
}

// ------------------------------------------------------------------
ein_in01,64,271,3	script	Vonstein#ein	4_M_EINMAN,{
	mes("[Vonstein]\n Olhando para este metal liquido e quente borbulhando me dão uma sensação tão boa.\n É como se isso pudesse derreter qualquer coisa!");
	next;
	mes("[Vonstein]\n Imagine cobrindo uma rua inteira de pessoas com isso daqui!\n Oh, me desculpe se falava como louco!\n Estava só brincando.");
	close;
}

// ------------------------------------------------------------------
ein_in01,49,202,3	script	Dorf#ein	4_M_REPAIR,{
	mes("[Dorf]\n Máquinas são tão convenientes.\n Basta olhar para a corporação realizando facilmente as tarefas que seriam difíceis de fazer sozinhos.");
	next;
	mes("[Dorf]\n Agora sim é isso que eu chamo tecnologia!\n Claro, é preciso esforço e dinheiro pra fazer uma destas, mas do que me interessa?");
	next;
	mes("[Dorf]\n Eu não tenho problemas, desde que essa coisa louca mantenha o trabalho do modo que eu quero!");
	close;
}

// ------------------------------------------------------------------
ein_in01,68,209,5	script	Khashurantze#ein	4_M_EIN_SOLDIER,{
	mes("[Khashurantze]\n Me desculpe, mas você precisa de uma autorização especial para entrar.\n Terei que pedir que saia agora.");
	close2;
	warp("einbroch", 179, 63);
	end;
}

// ------------------------------------------------------------------
ein_in01,85,261,3	script	Zherin#ein	4_M_REPAIR,{
	mes("[Zherin]\n Eu estou encarregado desta grande folhanlha que contém toda essa ebulição de magma.");
	next;
	mes("[Zherin]\n Mesmo que não precise de muito trabalho, esse trabalho é muito cansativo.\n Eu tenho que prestar muita atenção o tempo todo.\n É muito estressante.");
	next;
	mes("[Zherin]\n Ainda assim, estou orgulhoso do meu trabalho, uma vez que tenho responsabilidade de garantir a segurança dos trabalhadores.\n Contudo, não chegue muito perto da fornalha.\n Caso contrário poderá ser queimado por acidente!");
	close;
}

// ------------------------------------------------------------------
ein_in01,43,252,3	script	Canphotii#ein	4_M_EIN_SOLDIER,{
	mes("[Canphotii]\n Rápido, rápido!\n Entre logo no ritmo!\n Qualquer que trabalhar lento demais será punido!");
	next;
	mes("[Canphotii]\n Não consegue entender isso?!\n Agora volte para sua estação de trabalho!\n Espere, você não trabalha aqui não é?\n Se não, pare de zanzar por ae!");
	next;
	mes("[Canphotii]\n Você não poderia ter entrado aqui!\n Eu não acredito que deixaram você entrar!\n Isso requer uma medida disciplinar extrema!");
	close;
}

// ------------------------------------------------------------------
ein_in01,31,217,3	script	Cendadt#ein	4_M_REPAIR,{
	mes("[Cendadt]\n Esta fábrica tem um monte de coisas que precisam de conserto!\n É incrível que ela continue funcionando!");
	next;
	mes("[Cendadt]\n Sorte para nós, eu ouvi dizer alguns aventureiros altruístas tem doado materiais para ajudar a manter esta fábrica de cair aos pedaços... ou pior.\n Mas é apenas um boato.");
	next;
	mes("[Cendadt]\n ^666666*Sigh*^000000\n Mesmo que isso for verdade, não há nada que se possa fazer.\n Ninguém tem coragem de desafiar o sistema, você sabe?");
	next;
	mes("[Cendadt]\n Eu...\n É melhor eu voltar ao trabalho antes que eu entre numa fria...");
	close;
}
