//Verificando a colisao entre duas sprites

//define a resolucao virtual da tela
SetVirtualResolution(320,480)

// mostra o fundo
CreateSprite (LoadImage("fundoreileao.jpg"))

// carrega as duas imagens
imageA = LoadImage ("amigos.png")
imageB = LoadImage ("besouro.png")


// Crias as duas sprites usando as imagens e guarda em variaveis
timaoPumba = CreateSprite (imageA)
alimento = CreateSprite (imageB)
//diminui a sprite do alimento
SetSpriteSize(alimento,48,48)
//aumenta o tamanho do timao e pumba
SetSpriteSize(timaoPumba, 120,120)

// coloca o timao e pumba na esquerda da tela
// enquantos os alimentos ficam a direita
SetSpritePosition(timaoPumba,0,360)
SetSpritePosition(alimento,130,0)

// Adiciona formas de colisao usando caixas (segundo parametro = 2)
SetSpriteShape (timaoPumba,2)
SetSpriteShape (alimento,2)

//Bloco de variaveis
pontos = 0

//Laco principal do jogo
do
    PrintC("Pontos: ")
    PrintC(pontos)
    // faz o alimento cair
    SetSpritePosition ( alimento, 130, GetSpriteY(alimento)+0.8 )
    //Se o alimento passou da tela
    if (GetSpriteY(alimento) > 480)
		//volta o alimento para o topo da tela.
		SetSpritePosition(alimento,130,0)
	endif

	//Trabalhando com os cliques do mouse para mudar o timao e pumba de lugar
	if ( GetPointerPressed ( ) = 1 ) //Se for verdade retorna 1

        // Duas variaveis float para armazenar o x e y do clique na tela.
        x# = GetPointerX ( ) //Retorna o X do clique
        //y# = GetPointerY ( ) //Retorna o Y do clique
        SetSpritePosition(timaoPumba,x#,360)
        //SetSpritePosition(timaoPumba, x#,y#)
	endif

    // Verifica se houve colisao, se houve (GetSpriteCollision)retorna 1
    if GetSpriteCollision ( timaoPumba, alimento ) = 1
        // Como teve colisao vamos mudar as cores
        SetSpritePosition(alimento,130,0)
        pontos = pontos + 5
        efeitoEspecial()
    endif
    

    // Atualiza tela
    Sync ( )
loop


function efeitoEspecial()
	//Cria a imagem para as particulas
	CreateImageColor(1,255,255,255,255)

	//Cria o emissor de particulas
	CreateParticles(1,130,362)
	//Usa a imagem 1 para fazer as particulas, pode ser um png ou jpg
	SetParticlesImage(1,1)
	
	//Reinicia o contador das particulas
    ResetParticleCount(1)
        
	//Define a direcao das particulas
	SetParticlesDirection(1,33,60)

	//Tempo de vida das particulas
	SetParticlesLife(1,2)
	//Tamanho das particulas
	SetParticlesSize(1,13)
	//Angulo de dispersao das particulas
	SetParticlesAngle(1,360)
	//Frequencia de emissao
	SetParticlesFrequency(1,224)
	//Define a velocidade das particulas de perto e de longe do emissor
	SetParticlesVelocityRange(1,1,4)
	//Numero maximo de particulas
	SetParticlesMax (1,412)

	//Para colorir as particulas
	AddParticlesColorKeyFrame(1,0,0,100,255,0)
	AddParticlesColorKeyFrame (1,0.5,0,100,255,255)
	AddParticlesColorKeyFrame (1,2.0,150,50,100,255)
	AddParticlesColorKeyFrame (1,3.0,0,0,0,0)
	
	//Para dar um pause quando pegar um inseto
	sleep(100)
		
endfunction
