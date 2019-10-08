// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

void* winrt_make_test_component_Class()
{
    return winrt::detach_abi(winrt::make<winrt::test_component::factory_implementation::Class>());
}
WINRT_EXPORT namespace winrt::test_component
{
    Class::Class() :
        Class(make<test_component::implementation::Class>())
    {
    }
    Class::Class(param::hstring const& name) :
        Class(make<test_component::implementation::Class>(name))
    {
    }
    Class::Class(param::iterable<hstring> const& arg, int32_t dummy1) :
        Class(make<test_component::implementation::Class>(arg, dummy1))
    {
    }
    Class::Class(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& arg, int32_t dummy1, int32_t dummy2) :
        Class(make<test_component::implementation::Class>(arg, dummy1, dummy2))
    {
    }
    Class::Class(param::map<hstring, hstring> const& arg, int32_t dummy1, int32_t dummy2, int32_t dummy3) :
        Class(make<test_component::implementation::Class>(arg, dummy1, dummy2, dummy3))
    {
    }
    Class::Class(param::map_view<hstring, hstring> const& arg, int32_t dummy1, int32_t dummy2, int32_t dummy3, int32_t dummy4) :
        Class(make<test_component::implementation::Class>(arg, dummy1, dummy2, dummy3, dummy4))
    {
    }
    Class::Class(param::vector<hstring> const& arg, int32_t dummy1, int32_t dummy2, int32_t dummy3, int32_t dummy4, int32_t dummy5) :
        Class(make<test_component::implementation::Class>(arg, dummy1, dummy2, dummy3, dummy4, dummy5))
    {
    }
    Class::Class(param::vector_view<hstring> const& arg, int32_t dummy1, int32_t dummy2, int32_t dummy3, int32_t dummy4, int32_t dummy5, int32_t dummy6) :
        Class(make<test_component::implementation::Class>(arg, dummy1, dummy2, dummy3, dummy4, dummy5, dummy6))
    {
    }
    void Class::StaticTest()
    {
        return test_component::implementation::Class::StaticTest();
    }
    int32_t Class::StaticTestReturn()
    {
        return test_component::implementation::Class::StaticTestReturn();
    }
    int32_t Class::StaticProperty()
    {
        return test_component::implementation::Class::StaticProperty();
    }
    hstring Class::InIterable(param::iterable<hstring> const& value)
    {
        return test_component::implementation::Class::InIterable(value);
    }
    hstring Class::InIterablePair(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& value)
    {
        return test_component::implementation::Class::InIterablePair(value);
    }
    Windows::Foundation::IAsyncOperation<hstring> Class::InAsyncIterable(param::async_iterable<hstring> const& value)
    {
        return test_component::implementation::Class::InAsyncIterable(value);
    }
    Windows::Foundation::IAsyncOperation<hstring> Class::InAsyncIterablePair(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& value)
    {
        return test_component::implementation::Class::InAsyncIterablePair(value);
    }
    hstring Class::InMap(param::map<hstring, hstring> const& value)
    {
        return test_component::implementation::Class::InMap(value);
    }
    hstring Class::InMapView(param::map_view<hstring, hstring> const& value)
    {
        return test_component::implementation::Class::InMapView(value);
    }
    Windows::Foundation::IAsyncOperation<hstring> Class::InAsyncMapView(param::async_map_view<hstring, hstring> const& value)
    {
        return test_component::implementation::Class::InAsyncMapView(value);
    }
    hstring Class::InVector(param::vector<hstring> const& value)
    {
        return test_component::implementation::Class::InVector(value);
    }
    hstring Class::InVectorView(param::vector_view<hstring> const& value)
    {
        return test_component::implementation::Class::InVectorView(value);
    }
    Windows::Foundation::IAsyncOperation<hstring> Class::InAsyncVectorView(param::async_vector_view<hstring> const& value)
    {
        return test_component::implementation::Class::InAsyncVectorView(value);
    }
}