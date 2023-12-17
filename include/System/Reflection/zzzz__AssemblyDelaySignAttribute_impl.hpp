#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyDelaySignAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyDelaySignAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyDelaySignAttribute::*)(bool)>(&::System::Reflection::AssemblyDelaySignAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e5f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyDelaySignAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Reflection::AssemblyDelaySignAttribute::__set__DelaySign_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& System::Reflection::AssemblyDelaySignAttribute::__get__DelaySign_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& System::Reflection::AssemblyDelaySignAttribute::__get__DelaySign_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline ::System::Reflection::AssemblyDelaySignAttribute* System::Reflection::AssemblyDelaySignAttribute::New_ctor(bool  delaySign)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::AssemblyDelaySignAttribute*>(delaySign));
}
inline void System::Reflection::AssemblyDelaySignAttribute::_ctor(bool  delaySign)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyDelaySignAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, delaySign);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
