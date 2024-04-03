unsigned char memoria[154] = {0b00011000, 0b10100000, 0b000000000, 0b00000000}; // Memória RAM

unsigned int mbr; // Barramento MBR

unsigned char ir; // Instrução (OPCODE)
unsigned int mar; // Endereço de memória indicado na instrução

unsigned char ro0, ro1, ro2; // Registradores de Operando
unsigned int reg[16]; // Registradores de uso geral

unsigned int imm; // Imediato

unsigned int pc = 0; // Contador de Instruções
unsigned char e, l ,g; // e: Equal; l: Lower; g: Greater


void Busca(void); // Busca para o MBR os 32 bits na posição indicada por PC.
void Decodifica(void); // Decodifica uma instrução imposta no MBR.
void Executa (void); // Executa a instrução em IR, conforme os dados necessários.

void printBinario(int num); // DEBUG: Imprime uma variavel em seu valor binário.

void lerArquivo(const char *Arquivo); // Lê os arquivos e manda as instruções para a memoria