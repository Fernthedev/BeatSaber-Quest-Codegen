#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__SoloModeSelectionViewController_def.hpp"
#include "GlobalNamespace/zzzz__SoloModeSelectionViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
constexpr void GlobalNamespace::__SoloModeSelectionViewController__MenuType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SoloModeSelectionViewController__MenuType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__SoloModeSelectionViewController__MenuType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SoloModeSelectionViewController__MenuType::__SoloModeSelectionViewController__MenuType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__SoloModeSelectionViewController__MenuType  GlobalNamespace::__SoloModeSelectionViewController__MenuType::FreePlayMode{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__SoloModeSelectionViewController__MenuType  GlobalNamespace::__SoloModeSelectionViewController__MenuType::NoArrowsMode{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__SoloModeSelectionViewController__MenuType  GlobalNamespace::__SoloModeSelectionViewController__MenuType::OneSaberMode{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__SoloModeSelectionViewController__MenuType  GlobalNamespace::__SoloModeSelectionViewController__MenuType::Back{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*)>(&::GlobalNamespace::SoloModeSelectionViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22dbc38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*)>(&::GlobalNamespace::SoloModeSelectionViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22dbce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)(bool, bool, bool)>(&::GlobalNamespace::SoloModeSelectionViewController::DidActivate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x22dbd98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController.HandleMenuButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)(::GlobalNamespace::__SoloModeSelectionViewController__MenuType)>(&::GlobalNamespace::SoloModeSelectionViewController::HandleMenuButton)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22dbf48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            "HandleMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SoloModeSelectionViewController__MenuType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(&::GlobalNamespace::SoloModeSelectionViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22dbf70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._DidActivate_b__8_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(&::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22dbf78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            "<DidActivate>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._DidActivate_b__8_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(&::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22dbf9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            "<DidActivate>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._DidActivate_b__8_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(&::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22dbfc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            "<DidActivate>b__8_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoloModeSelectionViewController._DidActivate_b__8_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoloModeSelectionViewController::*)()>(&::GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22dbfe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            "<DidActivate>b__8_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SoloModeSelectionViewController::__set__freePlayModeButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x70>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::SoloModeSelectionViewController::__get__freePlayModeButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::SoloModeSelectionViewController::__get__freePlayModeButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x70>(this);
}
constexpr void GlobalNamespace::SoloModeSelectionViewController::__set__oneSaberModeButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x78>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::SoloModeSelectionViewController::__get__oneSaberModeButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::SoloModeSelectionViewController::__get__oneSaberModeButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr void GlobalNamespace::SoloModeSelectionViewController::__set__noArrowsModeButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x80>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::SoloModeSelectionViewController::__get__noArrowsModeButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::SoloModeSelectionViewController::__get__noArrowsModeButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x80>(this);
}
constexpr void GlobalNamespace::SoloModeSelectionViewController::__set__dismissButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x88>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::SoloModeSelectionViewController::__get__dismissButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::SoloModeSelectionViewController::__get__dismissButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x88>(this);
}
constexpr void GlobalNamespace::SoloModeSelectionViewController::__set_didFinishEvent(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*, 0x90>(this, std::forward<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>* GlobalNamespace::SoloModeSelectionViewController::__get_didFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*> GlobalNamespace::SoloModeSelectionViewController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*, 0x90>(this);
}
inline void GlobalNamespace::SoloModeSelectionViewController::add_didFinishEvent(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SoloModeSelectionViewController::remove_didFinishEvent(::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::SoloModeSelectionViewController*,::GlobalNamespace::__SoloModeSelectionViewController__MenuType>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SoloModeSelectionViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SoloModeSelectionViewController::HandleMenuButton(::GlobalNamespace::__SoloModeSelectionViewController__MenuType  subMenuType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            "HandleMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SoloModeSelectionViewController__MenuType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, subMenuType);
}
inline ::GlobalNamespace::SoloModeSelectionViewController* GlobalNamespace::SoloModeSelectionViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SoloModeSelectionViewController*>());
}
inline void GlobalNamespace::SoloModeSelectionViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            "<DidActivate>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            "<DidActivate>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            "<DidActivate>b__8_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SoloModeSelectionViewController::_DidActivate_b__8_3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoloModeSelectionViewController*>::get(),
                            "<DidActivate>b__8_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
