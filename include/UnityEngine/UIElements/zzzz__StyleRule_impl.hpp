#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleRule.get_properties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleProperty*,::Array<::UnityEngine::UIElements::StyleProperty*>*> (::UnityEngine::UIElements::StyleRule::*)()>(&::UnityEngine::UIElements::StyleRule::get_properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6b52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleRule*>::get(),
                            "get_properties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleRule._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleRule::*)()>(&::UnityEngine::UIElements::StyleRule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6b534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleRule*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::StyleRule::__set_m_Properties(::ArrayW<::UnityEngine::UIElements::StyleProperty*,::Array<::UnityEngine::UIElements::StyleProperty*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIElements::StyleProperty*,::Array<::UnityEngine::UIElements::StyleProperty*>*>, 0x10>(this, std::forward<::ArrayW<::UnityEngine::UIElements::StyleProperty*,::Array<::UnityEngine::UIElements::StyleProperty*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*,::Array<::UnityEngine::UIElements::StyleProperty*>*>& UnityEngine::UIElements::StyleRule::__get_m_Properties()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::StyleProperty*,::Array<::UnityEngine::UIElements::StyleProperty*>*>, 0x10>(this);
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*,::Array<::UnityEngine::UIElements::StyleProperty*>*> const& UnityEngine::UIElements::StyleRule::__get_m_Properties() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::StyleProperty*,::Array<::UnityEngine::UIElements::StyleProperty*>*>, 0x10>(this);
}
constexpr void UnityEngine::UIElements::StyleRule::__set_line(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::StyleRule::__get_line()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& UnityEngine::UIElements::StyleRule::__get_line() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void UnityEngine::UIElements::StyleRule::__set_customPropertiesCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::StyleRule::__get_customPropertiesCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& UnityEngine::UIElements::StyleRule::__get_customPropertiesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
inline ::ArrayW<::UnityEngine::UIElements::StyleProperty*,::Array<::UnityEngine::UIElements::StyleProperty*>*> UnityEngine::UIElements::StyleRule::get_properties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleRule*>::get(),
                            "get_properties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleProperty*,::Array<::UnityEngine::UIElements::StyleProperty*>*>, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleRule* UnityEngine::UIElements::StyleRule::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::StyleRule*>());
}
inline void UnityEngine::UIElements::StyleRule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleRule*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
