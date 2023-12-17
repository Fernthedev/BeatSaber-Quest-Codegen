#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedTypeRestrictionAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::*)()>(&::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bd2450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::__set_type(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x10>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::__get_type()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::__get_type() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
inline ::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute* UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute*>());
}
inline void UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
