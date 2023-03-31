#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "weeknineinclass.h"

TEST_CASE("Test Case"){
    List* x = new List();
    x->push(3);
    x->push(4);
    x->push(5);
    CHECK(x->head->data == 3);
    CHECK(x->head->next->data == 4);
    CHECK(x->head->next->next->data == 5);
    delete x;

}
