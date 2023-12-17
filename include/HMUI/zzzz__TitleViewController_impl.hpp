#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "HMUI/zzzz__TitleViewController_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::HMUI::TitleViewController.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TitleViewController::*)(::StringW)>(&::HMUI::TitleViewController::SetText)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x212ce5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TitleViewController*>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TitleViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TitleViewController::*)()>(&::HMUI::TitleViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212ce80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TitleViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::TitleViewController::__set__text(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x70>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* HMUI::TitleViewController::__get__text()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> HMUI::TitleViewController::__get__text() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x70>(this);
}
inline void HMUI::TitleViewController::SetText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TitleViewController*>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, text);
}
inline ::HMUI::TitleViewController* HMUI::TitleViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::TitleViewController*>());
}
inline void HMUI::TitleViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TitleViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
