#pragma once
#include "Unity/Collections/zzzz__NativeArrayDispose_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeArrayDispose.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeArrayDispose::*)()>(&::Unity::Collections::NativeArrayDispose::Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2c9dfe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeArrayDispose>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Unity::Collections::NativeArrayDispose::__set_m_Buffer(::cordl_internals::Ptr<void>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<void>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::Ptr<void>>(value));
}
constexpr ::cordl_internals::Ptr<void>& Unity::Collections::NativeArrayDispose::__get_m_Buffer()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<void>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::Ptr<void> const& Unity::Collections::NativeArrayDispose::__get_m_Buffer() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<void>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Unity::Collections::NativeArrayDispose::__set_m_AllocatorLabel(::Unity::Collections::Allocator  value)  {
::cordl_internals::setInstanceField<::Unity::Collections::Allocator, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Unity::Collections::Allocator>(value));
}
constexpr ::Unity::Collections::Allocator& Unity::Collections::NativeArrayDispose::__get_m_AllocatorLabel()  {
return ::cordl_internals::getInstanceField<::Unity::Collections::Allocator, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Unity::Collections::Allocator const& Unity::Collections::NativeArrayDispose::__get_m_AllocatorLabel() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::Allocator, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void Unity::Collections::NativeArrayDispose::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeArrayDispose>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeArrayDispose::NativeArrayDispose(::cordl_internals::Ptr<void>  m_Buffer, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->m_Buffer = m_Buffer;
this->m_AllocatorLabel = m_AllocatorLabel;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
