#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Resources/zzzz__SatelliteContractVersionAttribute_def.hpp"
//  Writing Method size for method: ::System::Resources::SatelliteContractVersionAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::SatelliteContractVersionAttribute::*)(::StringW)>(&::System::Resources::SatelliteContractVersionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24e0a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::SatelliteContractVersionAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Resources::SatelliteContractVersionAttribute::__set__Version_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Resources::SatelliteContractVersionAttribute::__get__Version_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Resources::SatelliteContractVersionAttribute::__get__Version_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
inline ::System::Resources::SatelliteContractVersionAttribute* System::Resources::SatelliteContractVersionAttribute::New_ctor(::StringW  version)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Resources::SatelliteContractVersionAttribute*>(version));
}
inline void System::Resources::SatelliteContractVersionAttribute::_ctor(::StringW  version)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::SatelliteContractVersionAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, version);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
