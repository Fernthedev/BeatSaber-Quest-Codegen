#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlatformMenu_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlatformMenu_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
constexpr void GlobalNamespace::__OVRPlatformMenu__eHandler::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRPlatformMenu__eHandler::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRPlatformMenu__eHandler::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPlatformMenu__eHandler::__OVRPlatformMenu__eHandler(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRPlatformMenu__eHandler  GlobalNamespace::__OVRPlatformMenu__eHandler::ShowConfirmQuit{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRPlatformMenu__eHandler  GlobalNamespace::__OVRPlatformMenu__eHandler::RetreatOneLevel{static_cast<int32_t>(0x1)};
constexpr void GlobalNamespace::__OVRPlatformMenu__eBackButtonAction::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRPlatformMenu__eBackButtonAction::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRPlatformMenu__eBackButtonAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction::__OVRPlatformMenu__eBackButtonAction(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction  GlobalNamespace::__OVRPlatformMenu__eBackButtonAction::NONE{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction  GlobalNamespace::__OVRPlatformMenu__eBackButtonAction::SHORT_PRESS{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::OVRPlatformMenu.HandleBackButtonState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction (::GlobalNamespace::OVRPlatformMenu::*)()>(&::GlobalNamespace::OVRPlatformMenu::HandleBackButtonState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2753e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(),
                            "HandleBackButtonState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlatformMenu.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPlatformMenu::*)()>(&::GlobalNamespace::OVRPlatformMenu::Awake)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2753edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlatformMenu.ShowConfirmQuitMenu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPlatformMenu::*)()>(&::GlobalNamespace::OVRPlatformMenu::ShowConfirmQuitMenu)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x275404c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(),
                            "ShowConfirmQuitMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlatformMenu.RetreatOneLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRPlatformMenu::RetreatOneLevel)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2754120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(),
                            "RetreatOneLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlatformMenu.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPlatformMenu::*)()>(&::GlobalNamespace::OVRPlatformMenu::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2754218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlatformMenu._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPlatformMenu::*)()>(&::GlobalNamespace::OVRPlatformMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2754258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRPlatformMenu::__set_inputCode(::GlobalNamespace::__OVRInput__RawButton  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRInput__RawButton, 0x18>(this, std::forward<::GlobalNamespace::__OVRInput__RawButton>(value));
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::OVRPlatformMenu::__get_inputCode()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__RawButton, 0x18>(this);
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::OVRPlatformMenu::__get_inputCode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__RawButton, 0x18>(this);
}
constexpr void GlobalNamespace::OVRPlatformMenu::__set_shortPressHandler(::GlobalNamespace::__OVRPlatformMenu__eHandler  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRPlatformMenu__eHandler, 0x1c>(this, std::forward<::GlobalNamespace::__OVRPlatformMenu__eHandler>(value));
}
constexpr ::GlobalNamespace::__OVRPlatformMenu__eHandler& GlobalNamespace::OVRPlatformMenu::__get_shortPressHandler()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlatformMenu__eHandler, 0x1c>(this);
}
constexpr ::GlobalNamespace::__OVRPlatformMenu__eHandler const& GlobalNamespace::OVRPlatformMenu::__get_shortPressHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlatformMenu__eHandler, 0x1c>(this);
}
constexpr void GlobalNamespace::OVRPlatformMenu::__set_OnShortPress(::System::Func_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<bool>*, 0x20>(this, std::forward<::System::Func_1<bool>*>(value));
}
constexpr ::System::Func_1<bool>* GlobalNamespace::OVRPlatformMenu::__get_OnShortPress()  {
return ::cordl_internals::getInstanceField<::System::Func_1<bool>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> GlobalNamespace::OVRPlatformMenu::__get_OnShortPress() const {
return ::cordl_internals::getInstanceField<::System::Func_1<bool>*, 0x20>(this);
}
inline void GlobalNamespace::OVRPlatformMenu::setStaticF_sceneStack(::System::Collections::Generic::Stack_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Stack_1<::StringW>*, "sceneStack", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get>(std::forward<::System::Collections::Generic::Stack_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::Stack_1<::StringW>* GlobalNamespace::OVRPlatformMenu::getStaticF_sceneStack()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Stack_1<::StringW>*, "sceneStack", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get>();
}
inline ::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction GlobalNamespace::OVRPlatformMenu::HandleBackButtonState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(),
                            "HandleBackButtonState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRPlatformMenu::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRPlatformMenu::ShowConfirmQuitMenu()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(),
                            "ShowConfirmQuitMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRPlatformMenu::RetreatOneLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(),
                            "RetreatOneLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRPlatformMenu::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlatformMenu* GlobalNamespace::OVRPlatformMenu::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRPlatformMenu*>());
}
inline void GlobalNamespace::OVRPlatformMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPlatformMenu*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
