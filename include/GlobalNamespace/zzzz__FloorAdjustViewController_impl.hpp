#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__FloorAdjustViewController_def.hpp"
#include "GlobalNamespace/zzzz__Vector3SO_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloorAdjustViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloorAdjustViewController::*)(bool, bool, bool)>(&::GlobalNamespace::FloorAdjustViewController::DidActivate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x22b0cf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloorAdjustViewController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloorAdjustViewController::*)()>(&::GlobalNamespace::FloorAdjustViewController::Update)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x22b0dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloorAdjustViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloorAdjustViewController::*)()>(&::GlobalNamespace::FloorAdjustViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b103c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloorAdjustViewController._DidActivate_b__9_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloorAdjustViewController::*)()>(&::GlobalNamespace::FloorAdjustViewController::_DidActivate_b__9_0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22b1044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(),
                            "<DidActivate>b__9_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloorAdjustViewController._DidActivate_b__9_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloorAdjustViewController::*)()>(&::GlobalNamespace::FloorAdjustViewController::_DidActivate_b__9_1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22b10c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(),
                            "<DidActivate>b__9_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FloorAdjustViewController::__set__roomCenter(::GlobalNamespace::Vector3SO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3SO*, 0x70>(this, std::forward<::GlobalNamespace::Vector3SO*>(value));
}
constexpr ::GlobalNamespace::Vector3SO* GlobalNamespace::FloorAdjustViewController::__get__roomCenter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> GlobalNamespace::FloorAdjustViewController::__get__roomCenter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0x70>(this);
}
constexpr void GlobalNamespace::FloorAdjustViewController::__set__yIncButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x78>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::FloorAdjustViewController::__get__yIncButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::FloorAdjustViewController::__get__yIncButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr void GlobalNamespace::FloorAdjustViewController::__set__yDecButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x80>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::FloorAdjustViewController::__get__yDecButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::FloorAdjustViewController::__get__yDecButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x80>(this);
}
constexpr void GlobalNamespace::FloorAdjustViewController::__set__playerHeightText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x88>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::FloorAdjustViewController::__get__playerHeightText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::FloorAdjustViewController::__get__playerHeightText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x88>(this);
}
constexpr void GlobalNamespace::FloorAdjustViewController::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x90>(this, std::forward<::GlobalNamespace::IVRPlatformHelper*>(value));
}
constexpr ::GlobalNamespace::IVRPlatformHelper* GlobalNamespace::FloorAdjustViewController::__get__vrPlatformHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> GlobalNamespace::FloorAdjustViewController::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x90>(this);
}
constexpr void GlobalNamespace::FloorAdjustViewController::__set__playerHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x98>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FloorAdjustViewController::__get__playerHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this);
}
constexpr float_t const& GlobalNamespace::FloorAdjustViewController::__get__playerHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this);
}
inline void GlobalNamespace::FloorAdjustViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::FloorAdjustViewController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::FloorAdjustViewController* GlobalNamespace::FloorAdjustViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FloorAdjustViewController*>());
}
inline void GlobalNamespace::FloorAdjustViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::FloorAdjustViewController::_DidActivate_b__9_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(),
                            "<DidActivate>b__9_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::FloorAdjustViewController::_DidActivate_b__9_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloorAdjustViewController*>::get(),
                            "<DidActivate>b__9_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
