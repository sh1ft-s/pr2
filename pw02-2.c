#include <stdio.h>
#include <stdbool.h>

int main(){
    int first, second;

    bool module_ready, fault_state;

    scanf("%d %d", &first, &second);

    module_ready = first;
    fault_state = second;

    printf("MODULE_READY: %d\n", module_ready);
    printf("FAULT_STATE: %d\n", fault_state);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", module_ready + fault_state);

    return 0;
}