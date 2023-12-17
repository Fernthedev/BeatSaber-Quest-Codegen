#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__InspectorNameAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::InspectorNameAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InspectorNameAttribute::*)(::StringW)>(&::UnityEngine::InspectorNameAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ccc0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InspectorNameAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InspectorNameAttribute::__set_displayName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InspectorNameAttribute::__get_displayName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& UnityEngine::InspectorNameAttribute::__get_displayName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
inline ::UnityEngine::InspectorNameAttribute* UnityEngine::InspectorNameAttribute::New_ctor(::StringW  displayName)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InspectorNameAttribute*>(displayName));
}
inline void UnityEngine::InspectorNameAttribute::_ctor(::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InspectorNameAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, displayName);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
