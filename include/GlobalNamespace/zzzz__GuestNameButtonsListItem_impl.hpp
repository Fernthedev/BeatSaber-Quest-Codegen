#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GuestNameButtonsListItem_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GuestNameButtonsListItem.set_nameText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GuestNameButtonsListItem::*)(::StringW)>(&::GlobalNamespace::GuestNameButtonsListItem::set_nameText)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x229e540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GuestNameButtonsListItem*>::get(),
                            "set_nameText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GuestNameButtonsListItem.set_buttonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GuestNameButtonsListItem::*)(::System::Action*)>(&::GlobalNamespace::GuestNameButtonsListItem::set_buttonPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229e564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GuestNameButtonsListItem*>::get(),
                            "set_buttonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GuestNameButtonsListItem.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GuestNameButtonsListItem::*)()>(&::GlobalNamespace::GuestNameButtonsListItem::Awake)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x229e56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GuestNameButtonsListItem*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GuestNameButtonsListItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GuestNameButtonsListItem::*)()>(&::GlobalNamespace::GuestNameButtonsListItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229e600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GuestNameButtonsListItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GuestNameButtonsListItem._Awake_b__7_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GuestNameButtonsListItem::*)()>(&::GlobalNamespace::GuestNameButtonsListItem::_Awake_b__7_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x229e608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GuestNameButtonsListItem*>::get(),
                            "<Awake>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GuestNameButtonsListItem::__set__nameText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::GuestNameButtonsListItem::__get__nameText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::GuestNameButtonsListItem::__get__nameText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this);
}
constexpr void GlobalNamespace::GuestNameButtonsListItem::__set__button(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x20>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::GuestNameButtonsListItem::__get__button()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::GuestNameButtonsListItem::__get__button() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x20>(this);
}
constexpr void GlobalNamespace::GuestNameButtonsListItem::__set__buttonPressed(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x28>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::GuestNameButtonsListItem::__get__buttonPressed()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::GuestNameButtonsListItem::__get__buttonPressed() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x28>(this);
}
inline void GlobalNamespace::GuestNameButtonsListItem::set_nameText(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GuestNameButtonsListItem*>::get(),
                            "set_nameText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GuestNameButtonsListItem::set_buttonPressed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GuestNameButtonsListItem*>::get(),
                            "set_buttonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GuestNameButtonsListItem::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GuestNameButtonsListItem*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::GuestNameButtonsListItem* GlobalNamespace::GuestNameButtonsListItem::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GuestNameButtonsListItem*>());
}
inline void GlobalNamespace::GuestNameButtonsListItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GuestNameButtonsListItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GuestNameButtonsListItem::_Awake_b__7_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GuestNameButtonsListItem*>::get(),
                            "<Awake>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
