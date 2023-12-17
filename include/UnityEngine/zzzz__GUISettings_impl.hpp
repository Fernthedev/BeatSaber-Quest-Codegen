#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GUISettings_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUISettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISettings::*)()>(&::UnityEngine::GUISettings::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d085dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::GUISettings::__set_m_DoubleClickSelectsWord(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::GUISettings::__get_m_DoubleClickSelectsWord()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& UnityEngine::GUISettings::__get_m_DoubleClickSelectsWord() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void UnityEngine::GUISettings::__set_m_TripleClickSelectsLine(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::GUISettings::__get_m_TripleClickSelectsLine()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& UnityEngine::GUISettings::__get_m_TripleClickSelectsLine() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr void UnityEngine::GUISettings::__set_m_CursorColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x14>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& UnityEngine::GUISettings::__get_m_CursorColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x14>(this);
}
constexpr ::UnityEngine::Color const& UnityEngine::GUISettings::__get_m_CursorColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x14>(this);
}
constexpr void UnityEngine::GUISettings::__set_m_CursorFlashSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::GUISettings::__get_m_CursorFlashSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& UnityEngine::GUISettings::__get_m_CursorFlashSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void UnityEngine::GUISettings::__set_m_SelectionColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x28>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& UnityEngine::GUISettings::__get_m_SelectionColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x28>(this);
}
constexpr ::UnityEngine::Color const& UnityEngine::GUISettings::__get_m_SelectionColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x28>(this);
}
inline ::UnityEngine::GUISettings* UnityEngine::GUISettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::GUISettings*>());
}
inline void UnityEngine::GUISettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
