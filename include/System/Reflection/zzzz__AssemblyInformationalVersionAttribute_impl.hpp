#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyInformationalVersionAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyInformationalVersionAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyInformationalVersionAttribute::*)(::StringW)>(&::System::Reflection::AssemblyInformationalVersionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e5fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyInformationalVersionAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Reflection::AssemblyInformationalVersionAttribute::__set__InformationalVersion_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Reflection::AssemblyInformationalVersionAttribute::__get__InformationalVersion_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Reflection::AssemblyInformationalVersionAttribute::__get__InformationalVersion_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
inline ::System::Reflection::AssemblyInformationalVersionAttribute* System::Reflection::AssemblyInformationalVersionAttribute::New_ctor(::StringW  informationalVersion)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::AssemblyInformationalVersionAttribute*>(informationalVersion));
}
inline void System::Reflection::AssemblyInformationalVersionAttribute::_ctor(::StringW  informationalVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyInformationalVersionAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, informationalVersion);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
