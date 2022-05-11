#include <assert.h>
#include <iostream>
#include "Container.h"

int main() {
    Container<int> container;
    assert(container.Size() == 0);
    assert(container.Capacity() != 0);

    container.Add(1);
    container.Add(2);
    container.Add(3);
    container.Add(4);
    container.Add(5);
    container.Add(6);
    assert(container.Size() != 0);
    assert(container.Empty());

    container.Insert(2,3);
    container.Show();

    std::cout<<container.GetElem(0)<<std::endl;

    container.Delete(2);
    assert(container.GetElem(2) == 3);

    assert(container.Capacity() == 10);

    return 0;
}
