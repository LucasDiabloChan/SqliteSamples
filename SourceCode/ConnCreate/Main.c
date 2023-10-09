// @AsherLucRen
// Estaebecimento da conexão com o banco de dados

#include <stdio.h>
#include <locale.h>
#include "sqlite3.c"

// ===========================================

// ==========================================================
// Cria conexão com banco de dados
// ==========================================================
int conectarAoBanco(char archiveName[], sqlite3 *db, char *zErrMsg, int rc)
{
	rc = sqlite3_open(archiveName, &db);

	if (rc) 
	{
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		return(0);
	}
	else 
	{
		fprintf(stderr, "Opened database successfully\n");
	}

	sqlite3_close(db);

	return 0;
}


int main(int argc, char* argv[])
{
	// Você pode chamar o método para criar a conexão
	// ou criar manualmente sua conexão

	sqlite3 *db;						// Ponteiro para memória onde está o banco de dados
	char *zErrMsg = 0;					// ?
	int rc;								//
    char archiveName[10] = "teste.db"; 	// Nome do arquivo para ser criado/usado

	conectarAoBanco(archiveName, db, zErrMsg, rc);
}
