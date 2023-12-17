#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__TooltipAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::TooltipAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TooltipAttribute::*)(::StringW)>(&::UnityEngine::TooltipAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ccc120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TooltipAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::TooltipAttribute::__set_tooltip(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::TooltipAttribute::__get_tooltip()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& UnityEngine::TooltipAttribute::__get_tooltip() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
inline ::UnityEngine::TooltipAttribute* UnityEngine::TooltipAttribute::New_ctor(::StringW  tooltip)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TooltipAttribute*>(tooltip));
}
inline void UnityEngine::TooltipAttribute::_ctor(::StringW  tooltip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TooltipAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tooltip);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
