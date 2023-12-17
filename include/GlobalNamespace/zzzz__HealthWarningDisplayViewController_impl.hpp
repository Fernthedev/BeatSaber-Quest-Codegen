#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningDisplayViewController_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthWarningDisplayViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningDisplayViewController::*)(bool, bool, bool)>(&::GlobalNamespace::HealthWarningDisplayViewController::DidActivate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22b4f20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningDisplayViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningDisplayViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningDisplayViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningDisplayViewController::*)()>(&::GlobalNamespace::HealthWarningDisplayViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b4f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningDisplayViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::HealthWarningDisplayViewController::__set__healthAndSafetyTextMesh(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x70>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::HealthWarningDisplayViewController::__get__healthAndSafetyTextMesh()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::HealthWarningDisplayViewController::__get__healthAndSafetyTextMesh() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x70>(this);
}
constexpr void GlobalNamespace::HealthWarningDisplayViewController::__set__healthAndSafetyFullLocalizationKey(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x78>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::HealthWarningDisplayViewController::__get__healthAndSafetyFullLocalizationKey()  {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this);
}
constexpr ::StringW const& GlobalNamespace::HealthWarningDisplayViewController::__get__healthAndSafetyFullLocalizationKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this);
}
constexpr void GlobalNamespace::HealthWarningDisplayViewController::__set__healthAndSafetyPSLocalizationKey(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x80>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::HealthWarningDisplayViewController::__get__healthAndSafetyPSLocalizationKey()  {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this);
}
constexpr ::StringW const& GlobalNamespace::HealthWarningDisplayViewController::__get__healthAndSafetyPSLocalizationKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this);
}
constexpr void GlobalNamespace::HealthWarningDisplayViewController::__set__showShortHealthAndSafety(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::HealthWarningDisplayViewController::__get__showShortHealthAndSafety()  {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr bool const& GlobalNamespace::HealthWarningDisplayViewController::__get__showShortHealthAndSafety() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
inline void GlobalNamespace::HealthWarningDisplayViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningDisplayViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline ::GlobalNamespace::HealthWarningDisplayViewController* GlobalNamespace::HealthWarningDisplayViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HealthWarningDisplayViewController*>());
}
inline void GlobalNamespace::HealthWarningDisplayViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningDisplayViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
