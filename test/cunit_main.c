#include "CUnit/Basic.h"
#include "Imagem.h"


void teste_imagem_ppm();

int main(){
    CU_initialize_registry();

    CU_pSuite teste = CU_add_suite("Suite de teste", NULL, NULL);

    CU_add_test(teste, "teste_imagem_ppm", teste_imagem_ppm);


    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return CU_get_error();
}
