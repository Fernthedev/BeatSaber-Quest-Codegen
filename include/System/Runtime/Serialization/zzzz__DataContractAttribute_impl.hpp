#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractAttribute.get_IsReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::DataContractAttribute::*)()>(&::System::Runtime::Serialization::DataContractAttribute::get_IsReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284d5f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataContractAttribute*>::get(),
                            "get_IsReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::DataContractAttribute::__set_isReference(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::DataContractAttribute::__get_isReference()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& System::Runtime::Serialization::DataContractAttribute::__get_isReference() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline bool System::Runtime::Serialization::DataContractAttribute::get_IsReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::DataContractAttribute*>::get(),
                            "get_IsReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
