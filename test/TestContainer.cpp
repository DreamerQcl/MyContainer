#include <iostream>
#include <Container.h>
#include <gtest/gtest.h>

TEST(TestContainer, TestAdd) {
    Container<int> container;
    ASSERT_EQ(0, container.Size());
    ASSERT_NE(0, container.Capacity());

    container.Add(1);
    container.Add(2);
    container.Add(3);
    container.Add(4);
    container.Add(5);
    container.Add(6);
    ASSERT_NE(0, container.Size());

    ASSERT_EQ(-1, container.Empty());

    ASSERT_EQ(0, container.Delete(2));
    ASSERT_EQ(4, container.GetElem(2));

    ASSERT_EQ(0, container.Insert(2, 2));

    container.Show();

}
