#pragma once
#include "UnityEngine/UIElements/zzzz__UxmlTraits_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeOverridesTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeOverridesTraits._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeOverridesTraits::*)()>(&::UnityEngine::UIElements::UxmlAttributeOverridesTraits::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e0e600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeOverridesTraits*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::UxmlAttributeOverridesTraits::__set_m_ElementName(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, 0x18>(this, std::forward<::UnityEngine::UIElements::UxmlStringAttributeDescription*>(value));
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* UnityEngine::UIElements::UxmlAttributeOverridesTraits::__get_m_ElementName()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> UnityEngine::UIElements::UxmlAttributeOverridesTraits::__get_m_ElementName() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, 0x18>(this);
}
inline ::UnityEngine::UIElements::UxmlAttributeOverridesTraits* UnityEngine::UIElements::UxmlAttributeOverridesTraits::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UxmlAttributeOverridesTraits*>());
}
inline void UnityEngine::UIElements::UxmlAttributeOverridesTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeOverridesTraits*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
