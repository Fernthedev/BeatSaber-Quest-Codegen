#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTrackedKeyboard_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__OVRTrackedKeyboard_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
constexpr void GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::__OVRTrackedKeyboard__TrackedKeyboardState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::Uninitialized{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::NoTrackableKeyboard{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::Offline{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::StartedNotTracked{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::Stale{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::Valid{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::Error{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::ErrorExtensionFailed{static_cast<int32_t>(0x7)};
constexpr void GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation::__OVRTrackedKeyboard__KeyboardPresentation(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation  GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation::PreferOpaque{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation  GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation::PreferKeyLabels{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::*)(::StringW, ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState, bool)>(&::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2795680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__set_ActiveKeyboardName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__get_ActiveKeyboardName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__get_ActiveKeyboardName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__set_State(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>(value));
}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState& GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__get_State()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const& GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__get_State() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__set_TrackingTimeout(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__get_TrackingTimeout()  {
return ::cordl_internals::getInstanceField<bool, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__get_TrackingTimeout() const {
return ::cordl_internals::getInstanceField<bool, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::_ctor(::StringW  keyboardModel, ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  state, bool  timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keyboardModel, state, timeout);
}
// Ctor Parameters [CppParam { name: "ActiveKeyboardName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "State", ty: "::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState", modifiers: "", def_value: Some("{}") }, CppParam { name: "TrackingTimeout", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent(::StringW  ActiveKeyboardName, ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  State, bool  TrackingTimeout) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->ActiveKeyboardName = ActiveKeyboardName;
this->State = State;
this->TrackingTimeout = TrackingTimeout;
}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::*)(bool)>(&::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x279589c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::__set_IsEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::__get_IsEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::__get_IsEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::_ctor(bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, isEnabled);
}
// Ctor Parameters [CppParam { name: "IsEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent(bool  IsEnabled) noexcept : ::bs_hook::ValueTypeWrapper<0x1>() {this->IsEnabled = IsEnabled;
}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)(int32_t)>(&::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2793de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27958a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::MoveNext)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x27958ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27959b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27959b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27959f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__set___4__this(::GlobalNamespace::OVRTrackedKeyboard*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRTrackedKeyboard*, 0x20>(this, std::forward<::GlobalNamespace::OVRTrackedKeyboard*>(value));
}
constexpr ::GlobalNamespace::OVRTrackedKeyboard* GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTrackedKeyboard*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTrackedKeyboard*, 0x20>(this);
}
inline ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88* GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>(__1__state));
}
inline void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)(int32_t)>(&::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2793e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2795a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::MoveNext)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2795a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2795b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2795b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2795bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__set___4__this(::GlobalNamespace::OVRTrackedKeyboard*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRTrackedKeyboard*, 0x20>(this, std::forward<::GlobalNamespace::OVRTrackedKeyboard*>(value));
}
constexpr ::GlobalNamespace::OVRTrackedKeyboard* GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTrackedKeyboard*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTrackedKeyboard*, 0x20>(this);
}
inline ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89* GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>(__1__state));
}
inline void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)(int32_t)>(&::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2794544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2795bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::MoveNext)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x2795bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2796084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x279608c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27960cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__set___4__this(::GlobalNamespace::OVRTrackedKeyboard*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRTrackedKeyboard*, 0x20>(this, std::forward<::GlobalNamespace::OVRTrackedKeyboard*>(value));
}
constexpr ::GlobalNamespace::OVRTrackedKeyboard* GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTrackedKeyboard*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTrackedKeyboard*, 0x20>(this);
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__set__keyboardInfo_5__2(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, 0x28>(this, std::forward<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo>(value));
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get__keyboardInfo_5__2()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, 0x28>(this);
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo const& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get__keyboardInfo_5__2() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, 0x28>(this);
}
inline ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95* GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>(__1__state));
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)(int32_t)>(&::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27945d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27960d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::MoveNext)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x27960d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x279639c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27963a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27963e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__set___4__this(::GlobalNamespace::OVRTrackedKeyboard*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRTrackedKeyboard*, 0x20>(this, std::forward<::GlobalNamespace::OVRTrackedKeyboard*>(value));
}
constexpr ::GlobalNamespace::OVRTrackedKeyboard* GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTrackedKeyboard*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTrackedKeyboard*, 0x20>(this);
}
inline ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96* GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>(__1__state));
}
inline void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)(int32_t)>(&::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x279498c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27963ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::MoveNext)> {
  constexpr static std::size_t size = 0x9a8;
  constexpr static std::size_t addrs = 0x27963f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2796d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2796da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2796de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__set___4__this(::GlobalNamespace::OVRTrackedKeyboard*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRTrackedKeyboard*, 0x20>(this, std::forward<::GlobalNamespace::OVRTrackedKeyboard*>(value));
}
constexpr ::GlobalNamespace::OVRTrackedKeyboard* GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTrackedKeyboard*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTrackedKeyboard*, 0x20>(this);
}
inline ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98* GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>(__1__state));
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard____c::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2796e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard____c.__ctor_b__113_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard____c::*)(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent)>(&::GlobalNamespace::__OVRTrackedKeyboard____c::__ctor_b__113_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2796e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(),
                            "<.ctor>b__113_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard____c.__ctor_b__113_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard____c::*)(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent)>(&::GlobalNamespace::__OVRTrackedKeyboard____c::__ctor_b__113_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2796e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(),
                            "<.ctor>b__113_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRTrackedKeyboard____c::setStaticF___9(::GlobalNamespace::__OVRTrackedKeyboard____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__OVRTrackedKeyboard____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get>(std::forward<::GlobalNamespace::__OVRTrackedKeyboard____c*>(value));
}
inline ::GlobalNamespace::__OVRTrackedKeyboard____c* GlobalNamespace::__OVRTrackedKeyboard____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRTrackedKeyboard____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get>();
}
inline void GlobalNamespace::__OVRTrackedKeyboard____c::setStaticF___9__113_0(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*, "<>9__113_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get>(std::forward<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>* GlobalNamespace::__OVRTrackedKeyboard____c::getStaticF___9__113_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*, "<>9__113_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get>();
}
inline void GlobalNamespace::__OVRTrackedKeyboard____c::setStaticF___9__113_1(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*, "<>9__113_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get>(std::forward<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>* GlobalNamespace::__OVRTrackedKeyboard____c::getStaticF___9__113_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*, "<>9__113_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get>();
}
inline ::GlobalNamespace::__OVRTrackedKeyboard____c* GlobalNamespace::__OVRTrackedKeyboard____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRTrackedKeyboard____c*>());
}
inline void GlobalNamespace::__OVRTrackedKeyboard____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard____c::__ctor_b__113_0(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent  _p0_)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(),
                            "<.ctor>b__113_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, _p0_);
}
inline void GlobalNamespace::__OVRTrackedKeyboard____c::__ctor_b__113_1(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent  _p0_)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(),
                            "<.ctor>b__113_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, _p0_);
}
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_CurrentKeyboardAngleFromUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_CurrentKeyboardAngleFromUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27939ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_CurrentKeyboardAngleFromUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_CurrentKeyboardAngleFromUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(float_t)>(&::GlobalNamespace::OVRTrackedKeyboard::set_CurrentKeyboardAngleFromUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27939f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_CurrentKeyboardAngleFromUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_TrackingState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_TrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27939fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_TrackingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_TrackingState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState)>(&::GlobalNamespace::OVRTrackedKeyboard::set_TrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2793a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_TrackingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_ActiveKeyboardInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_ActiveKeyboardInfo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2793a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_ActiveKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_ActiveKeyboardInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo)>(&::GlobalNamespace::OVRTrackedKeyboard::set_ActiveKeyboardInfo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2793a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_ActiveKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_SystemKeyboardInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_SystemKeyboardInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2793a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_SystemKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_SystemKeyboardInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo)>(&::GlobalNamespace::OVRTrackedKeyboard::set_SystemKeyboardInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2793a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_SystemKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_Presentation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_Presentation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2793a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_Presentation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_Presentation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation)>(&::GlobalNamespace::OVRTrackedKeyboard::set_Presentation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2793a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_Presentation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_TrackingEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_TrackingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2793cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_TrackingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_TrackingEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::set_TrackingEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2793d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_TrackingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_ConnectionRequired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_ConnectionRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2793d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_ConnectionRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_ConnectionRequired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::set_ConnectionRequired)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2793d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_ConnectionRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_ShowUntracked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_ShowUntracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2793d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_ShowUntracked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_ShowUntracked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::set_ShowUntracked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2793d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_ShowUntracked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_RemoteKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_RemoteKeyboard)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2793d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_RemoteKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_RemoteKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::set_RemoteKeyboard)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2793d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_RemoteKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_KeyboardQueryFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_KeyboardQueryFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2793d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_KeyboardQueryFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_KeyboardQueryFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags)>(&::GlobalNamespace::OVRTrackedKeyboard::set_KeyboardQueryFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2793d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_KeyboardQueryFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_PassthroughOverlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVROverlay* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_PassthroughOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2793d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_PassthroughOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_PassthroughOverlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::OVROverlay*)>(&::GlobalNamespace::OVRTrackedKeyboard::set_PassthroughOverlay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2793d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_PassthroughOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::Start)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2793d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.InitializeHandPresenceData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::InitializeHandPresenceData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2793e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "InitializeHandPresenceData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.RegisterPassthroughMeshToSDK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::RegisterPassthroughMeshToSDK)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2793e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "RegisterPassthroughMeshToSDK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.GetDistanceToKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRTrackedKeyboard::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRTrackedKeyboard::GetDistanceToKeyboard)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2793f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "GetDistanceToKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LaunchLocalKeyboardSelectionDialog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::LaunchLocalKeyboardSelectionDialog)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27940bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "LaunchLocalKeyboardSelectionDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LaunchRemoteKeyboardSelectionDialog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::LaunchRemoteKeyboardSelectionDialog)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2794488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "LaunchRemoteKeyboardSelectionDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.KeyboardTrackerIsRunning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::KeyboardTrackerIsRunning)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27944c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "KeyboardTrackerIsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateTrackingStateCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::UpdateTrackingStateCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27944dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "UpdateTrackingStateCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.StartKeyboardTrackingCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::StartKeyboardTrackingCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x279456c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "StartKeyboardTrackingCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.StopKeyboardTrackingInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::StopKeyboardTrackingInternal)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x27945fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "StopKeyboardTrackingInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateKeyboardPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardPose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2794924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "UpdateKeyboardPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateSkippedPoseTimer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::UpdateSkippedPoseTimer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27949b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "UpdateSkippedPoseTimer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LoadKeyboardMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::LoadKeyboardMesh)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0x27949fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "LoadKeyboardMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateTextureQuality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::UpdateTextureQuality)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x27952f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "UpdateTextureQuality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdatePresentation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::UpdatePresentation)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2793b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "UpdatePresentation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LoadRuntimeKeyboardMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::LoadRuntimeKeyboardMesh)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2795044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "LoadRuntimeKeyboardMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateKeyboardVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardVisibility)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2795428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "UpdateKeyboardVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.SetKeyboardState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState)>(&::GlobalNamespace::OVRTrackedKeyboard::SetKeyboardState)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x27947f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "SetKeyboardState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.GetKeyboardVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::GetKeyboardVisibility)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2793abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "GetKeyboardVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.InitializeKeyboardInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::InitializeKeyboardInfo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27948d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "InitializeKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LaunchOverlayIntent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::StringW)>(&::GlobalNamespace::OVRTrackedKeyboard::LaunchOverlayIntent)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x27940fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "LaunchOverlayIntent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::Dispose)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x279556c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.DispatchVisibilityEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::DispatchVisibilityEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x279553c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "DispatchVisibilityEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2795694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_underlayScaleMultX_(float_t  value)  {
::cordl_internals::setStaticField<float_t, "underlayScaleMultX_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_underlayScaleMultX_()  {
return ::cordl_internals::getStaticField<float_t, "underlayScaleMultX_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_underlayScaleConstY_(float_t  value)  {
::cordl_internals::setStaticField<float_t, "underlayScaleConstY_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_underlayScaleConstY_()  {
return ::cordl_internals::getStaticField<float_t, "underlayScaleConstY_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_underlayScaleMultZ_(float_t  value)  {
::cordl_internals::setStaticField<float_t, "underlayScaleMultZ_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_underlayScaleMultZ_()  {
return ::cordl_internals::getStaticField<float_t, "underlayScaleMultZ_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_underlayOffset_(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "underlayOffset_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRTrackedKeyboard::getStaticF_underlayOffset_()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "underlayOffset_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_boundingBoxAboveKeyboardY_(float_t  value)  {
::cordl_internals::setStaticField<float_t, "boundingBoxAboveKeyboardY_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_boundingBoxAboveKeyboardY_()  {
return ::cordl_internals::getStaticField<float_t, "boundingBoxAboveKeyboardY_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_initialHorizontalDistanceKeyboard_(float_t  value)  {
::cordl_internals::setStaticField<float_t, "initialHorizontalDistanceKeyboard_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_initialHorizontalDistanceKeyboard_()  {
return ::cordl_internals::getStaticField<float_t, "initialHorizontalDistanceKeyboard_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_initialVerticalDistanceKeyboard_(float_t  value)  {
::cordl_internals::setStaticField<float_t, "initialVerticalDistanceKeyboard_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_initialVerticalDistanceKeyboard_()  {
return ::cordl_internals::getStaticField<float_t, "initialVerticalDistanceKeyboard_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>();
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set__CurrentKeyboardAngleFromUp_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__get__CurrentKeyboardAngleFromUp_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__get__CurrentKeyboardAngleFromUp_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set__TrackingState_k__BackingField(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState, 0x1c>(this, std::forward<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>(value));
}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState& GlobalNamespace::OVRTrackedKeyboard::__get__TrackingState_k__BackingField()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState, 0x1c>(this);
}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const& GlobalNamespace::OVRTrackedKeyboard::__get__TrackingState_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState, 0x1c>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set__ActiveKeyboardInfo_k__BackingField(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, 0x20>(this, std::forward<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo>(value));
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo& GlobalNamespace::OVRTrackedKeyboard::__get__ActiveKeyboardInfo_k__BackingField()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, 0x20>(this);
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo const& GlobalNamespace::OVRTrackedKeyboard::__get__ActiveKeyboardInfo_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, 0x20>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set__SystemKeyboardInfo_k__BackingField(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, 0x48>(this, std::forward<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo>(value));
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo& GlobalNamespace::OVRTrackedKeyboard::__get__SystemKeyboardInfo_k__BackingField()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, 0x48>(this);
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo const& GlobalNamespace::OVRTrackedKeyboard::__get__SystemKeyboardInfo_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, 0x48>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_trackingEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboard::__get_trackingEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x70>(this);
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboard::__get_trackingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_connectionRequired(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x71>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboard::__get_connectionRequired()  {
return ::cordl_internals::getInstanceField<bool, 0x71>(this);
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboard::__get_connectionRequired() const {
return ::cordl_internals::getInstanceField<bool, 0x71>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_showUntracked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x72>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboard::__get_showUntracked()  {
return ::cordl_internals::getInstanceField<bool, 0x72>(this);
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboard::__get_showUntracked() const {
return ::cordl_internals::getInstanceField<bool, 0x72>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_keyboardQueryFlags(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags, 0x74>(this, std::forward<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags>(value));
}
constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags& GlobalNamespace::OVRTrackedKeyboard::__get_keyboardQueryFlags()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags, 0x74>(this);
}
constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags const& GlobalNamespace::OVRTrackedKeyboard::__get_keyboardQueryFlags() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags, 0x74>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_presentation(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation, 0x78>(this, std::forward<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation>(value));
}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation& GlobalNamespace::OVRTrackedKeyboard::__get_presentation()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation, 0x78>(this);
}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation const& GlobalNamespace::OVRTrackedKeyboard::__get_presentation() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation, 0x78>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_textureFiltering(::GlobalNamespace::OVRTextureQualityFiltering  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRTextureQualityFiltering, 0x7c>(this, std::forward<::GlobalNamespace::OVRTextureQualityFiltering>(value));
}
constexpr ::GlobalNamespace::OVRTextureQualityFiltering& GlobalNamespace::OVRTrackedKeyboard::__get_textureFiltering()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTextureQualityFiltering, 0x7c>(this);
}
constexpr ::GlobalNamespace::OVRTextureQualityFiltering const& GlobalNamespace::OVRTrackedKeyboard::__get_textureFiltering() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTextureQualityFiltering, 0x7c>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_mipmapBias(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x80>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__get_mipmapBias()  {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this);
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__get_mipmapBias() const {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_PassthroughBorderMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x84>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__get_PassthroughBorderMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this);
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__get_PassthroughBorderMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_keyboardModelShader(::UnityEngine::Shader*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader*, 0x88>(this, std::forward<::UnityEngine::Shader*>(value));
}
constexpr ::UnityEngine::Shader* GlobalNamespace::OVRTrackedKeyboard::__get_keyboardModelShader()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> GlobalNamespace::OVRTrackedKeyboard::__get_keyboardModelShader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x88>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_keyboardModelAlphaBlendShader(::UnityEngine::Shader*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader*, 0x90>(this, std::forward<::UnityEngine::Shader*>(value));
}
constexpr ::UnityEngine::Shader* GlobalNamespace::OVRTrackedKeyboard::__get_keyboardModelAlphaBlendShader()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> GlobalNamespace::OVRTrackedKeyboard::__get_keyboardModelAlphaBlendShader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x90>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_currentKeyboardPresentationStyles(::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles, 0x98>(this, std::forward<::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles>(value));
}
constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles& GlobalNamespace::OVRTrackedKeyboard::__get_currentKeyboardPresentationStyles()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles, 0x98>(this);
}
constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles const& GlobalNamespace::OVRTrackedKeyboard::__get_currentKeyboardPresentationStyles() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles, 0x98>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_projectedPassthroughOpaque_(::GlobalNamespace::OVROverlay*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVROverlay*, 0xa0>(this, std::forward<::GlobalNamespace::OVROverlay*>(value));
}
constexpr ::GlobalNamespace::OVROverlay* GlobalNamespace::OVRTrackedKeyboard::__get_projectedPassthroughOpaque_()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVROverlay*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVROverlay*> GlobalNamespace::OVRTrackedKeyboard::__get_projectedPassthroughOpaque_() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVROverlay*, 0xa0>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_activeKeyboardRenderers_(::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>, 0xa8>(this, std::forward<::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>& GlobalNamespace::OVRTrackedKeyboard::__get_activeKeyboardRenderers_()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>, 0xa8>(this);
}
constexpr ::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*> const& GlobalNamespace::OVRTrackedKeyboard::__get_activeKeyboardRenderers_() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>, 0xa8>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_activeKeyboardMesh_(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0xb0>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::OVRTrackedKeyboard::__get_activeKeyboardMesh_()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::OVRTrackedKeyboard::__get_activeKeyboardMesh_() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0xb0>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_keyboardMeshNodes_(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0xb8>(this, std::forward<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>& GlobalNamespace::OVRTrackedKeyboard::__get_keyboardMeshNodes_()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0xb8>(this);
}
constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> const& GlobalNamespace::OVRTrackedKeyboard::__get_keyboardMeshNodes_() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0xb8>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_activeKeyboardMeshRenderer_(::UnityEngine::MeshRenderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshRenderer*, 0xc0>(this, std::forward<::UnityEngine::MeshRenderer*>(value));
}
constexpr ::UnityEngine::MeshRenderer* GlobalNamespace::OVRTrackedKeyboard::__get_activeKeyboardMeshRenderer_()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> GlobalNamespace::OVRTrackedKeyboard::__get_activeKeyboardMeshRenderer_() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer*, 0xc0>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_passthroughQuad_(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0xc8>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::OVRTrackedKeyboard::__get_passthroughQuad_()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::OVRTrackedKeyboard::__get_passthroughQuad_() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0xc8>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_opaqueShader_(::UnityEngine::Shader*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader*, 0xd0>(this, std::forward<::UnityEngine::Shader*>(value));
}
constexpr ::UnityEngine::Shader* GlobalNamespace::OVRTrackedKeyboard::__get_opaqueShader_()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> GlobalNamespace::OVRTrackedKeyboard::__get_opaqueShader_() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0xd0>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_dynamicQualityTexture_(::UnityEngine::Texture2D*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture2D*, 0xd8>(this, std::forward<::UnityEngine::Texture2D*>(value));
}
constexpr ::UnityEngine::Texture2D* GlobalNamespace::OVRTrackedKeyboard::__get_dynamicQualityTexture_()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> GlobalNamespace::OVRTrackedKeyboard::__get_dynamicQualityTexture_() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D*, 0xd8>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_untrackedPosition_(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xe0>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRTrackedKeyboard::__get_untrackedPosition_()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xe0>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRTrackedKeyboard::__get_untrackedPosition_() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xe0>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_KeyLabelModeShader(::UnityEngine::Shader*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader*, 0xf0>(this, std::forward<::UnityEngine::Shader*>(value));
}
constexpr ::UnityEngine::Shader* GlobalNamespace::OVRTrackedKeyboard::__get_KeyLabelModeShader()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0xf0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> GlobalNamespace::OVRTrackedKeyboard::__get_KeyLabelModeShader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0xf0>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_PassthroughShader(::UnityEngine::Shader*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader*, 0xf8>(this, std::forward<::UnityEngine::Shader*>(value));
}
constexpr ::UnityEngine::Shader* GlobalNamespace::OVRTrackedKeyboard::__get_PassthroughShader()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> GlobalNamespace::OVRTrackedKeyboard::__get_PassthroughShader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0xf8>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_projectedPassthroughRoot(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x100>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::OVRTrackedKeyboard::__get_projectedPassthroughRoot()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::OVRTrackedKeyboard::__get_projectedPassthroughRoot() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x100>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_projectedPassthroughMesh(::UnityEngine::MeshFilter*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshFilter*, 0x108>(this, std::forward<::UnityEngine::MeshFilter*>(value));
}
constexpr ::UnityEngine::MeshFilter* GlobalNamespace::OVRTrackedKeyboard::__get_projectedPassthroughMesh()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshFilter*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> GlobalNamespace::OVRTrackedKeyboard::__get_projectedPassthroughMesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshFilter*, 0x108>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_ProjectedPassthroughKeyLabel(::GlobalNamespace::OVRPassthroughLayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRPassthroughLayer*, 0x110>(this, std::forward<::GlobalNamespace::OVRPassthroughLayer*>(value));
}
constexpr ::GlobalNamespace::OVRPassthroughLayer* GlobalNamespace::OVRTrackedKeyboard::__get_ProjectedPassthroughKeyLabel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRPassthroughLayer*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRPassthroughLayer*> GlobalNamespace::OVRTrackedKeyboard::__get_ProjectedPassthroughKeyLabel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRPassthroughLayer*, 0x110>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_TrackedKeyboardActiveChanged(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*, 0x118>(this, std::forward<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>* GlobalNamespace::OVRTrackedKeyboard::__get_TrackedKeyboardActiveChanged()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*, 0x118>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*> GlobalNamespace::OVRTrackedKeyboard::__get_TrackedKeyboardActiveChanged() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*, 0x118>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_TrackedKeyboardVisibilityChanged(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*, 0x120>(this, std::forward<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>* GlobalNamespace::OVRTrackedKeyboard::__get_TrackedKeyboardVisibilityChanged()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*, 0x120>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*> GlobalNamespace::OVRTrackedKeyboard::__get_TrackedKeyboardVisibilityChanged() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*, 0x120>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_ActiveKeyboardTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x128>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::OVRTrackedKeyboard::__get_ActiveKeyboardTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x128>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::OVRTrackedKeyboard::__get_ActiveKeyboardTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x128>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_HandsOverKeyboard(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x130>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboard::__get_HandsOverKeyboard()  {
return ::cordl_internals::getInstanceField<bool, 0x130>(this);
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboard::__get_HandsOverKeyboard() const {
return ::cordl_internals::getInstanceField<bool, 0x130>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_cameraRig_(::GlobalNamespace::OVRCameraRig*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRCameraRig*, 0x138>(this, std::forward<::GlobalNamespace::OVRCameraRig*>(value));
}
constexpr ::GlobalNamespace::OVRCameraRig* GlobalNamespace::OVRTrackedKeyboard::__get_cameraRig_()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRCameraRig*, 0x138>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> GlobalNamespace::OVRTrackedKeyboard::__get_cameraRig_() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRCameraRig*, 0x138>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_updateKeyboardRoutine_(::UnityEngine::Coroutine*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Coroutine*, 0x140>(this, std::forward<::UnityEngine::Coroutine*>(value));
}
constexpr ::UnityEngine::Coroutine* GlobalNamespace::OVRTrackedKeyboard::__get_updateKeyboardRoutine_()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Coroutine*, 0x140>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> GlobalNamespace::OVRTrackedKeyboard::__get_updateKeyboardRoutine_() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Coroutine*, 0x140>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_keyboardBoundingBox_(::UnityEngine::BoxCollider*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::BoxCollider*, 0x148>(this, std::forward<::UnityEngine::BoxCollider*>(value));
}
constexpr ::UnityEngine::BoxCollider* GlobalNamespace::OVRTrackedKeyboard::__get_keyboardBoundingBox_()  {
return ::cordl_internals::getInstanceField<::UnityEngine::BoxCollider*, 0x148>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::BoxCollider*> GlobalNamespace::OVRTrackedKeyboard::__get_keyboardBoundingBox_() const {
return ::cordl_internals::getInstanceField<::UnityEngine::BoxCollider*, 0x148>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_staleTimeoutCounter_(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x150>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__get_staleTimeoutCounter_()  {
return ::cordl_internals::getInstanceField<float_t, 0x150>(this);
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__get_staleTimeoutCounter_() const {
return ::cordl_internals::getInstanceField<float_t, 0x150>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_reacquisitionTimer_(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x154>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__get_reacquisitionTimer_()  {
return ::cordl_internals::getInstanceField<float_t, 0x154>(this);
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__get_reacquisitionTimer_() const {
return ::cordl_internals::getInstanceField<float_t, 0x154>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_sendFilteredPoseEventTimer_(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x158>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__get_sendFilteredPoseEventTimer_()  {
return ::cordl_internals::getInstanceField<float_t, 0x158>(this);
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__get_sendFilteredPoseEventTimer_() const {
return ::cordl_internals::getInstanceField<float_t, 0x158>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_skippedPoseCount_(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x15c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRTrackedKeyboard::__get_skippedPoseCount_()  {
return ::cordl_internals::getInstanceField<int32_t, 0x15c>(this);
}
constexpr int32_t const& GlobalNamespace::OVRTrackedKeyboard::__get_skippedPoseCount_() const {
return ::cordl_internals::getInstanceField<int32_t, 0x15c>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_EWAPosition(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::UnityEngine::Vector3>, 0x160>(this, std::forward<::System::Nullable_1<::UnityEngine::Vector3>>(value));
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& GlobalNamespace::OVRTrackedKeyboard::__get_EWAPosition()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::Vector3>, 0x160>(this);
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& GlobalNamespace::OVRTrackedKeyboard::__get_EWAPosition() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::Vector3>, 0x160>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_EWARotation(::System::Nullable_1<::UnityEngine::Quaternion>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::UnityEngine::Quaternion>, 0x170>(this, std::forward<::System::Nullable_1<::UnityEngine::Quaternion>>(value));
}
constexpr ::System::Nullable_1<::UnityEngine::Quaternion>& GlobalNamespace::OVRTrackedKeyboard::__get_EWARotation()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::Quaternion>, 0x170>(this);
}
constexpr ::System::Nullable_1<::UnityEngine::Quaternion> const& GlobalNamespace::OVRTrackedKeyboard::__get_EWARotation() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::Quaternion>, 0x170>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_HAND_HEIGHT_TUNING(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x184>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__get_HAND_HEIGHT_TUNING()  {
return ::cordl_internals::getInstanceField<float_t, 0x184>(this);
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__get_HAND_HEIGHT_TUNING() const {
return ::cordl_internals::getInstanceField<float_t, 0x184>(this);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_UseHeuristicRollback(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x188>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboard::__get_UseHeuristicRollback()  {
return ::cordl_internals::getInstanceField<bool, 0x188>(this);
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboard::__get_UseHeuristicRollback() const {
return ::cordl_internals::getInstanceField<bool, 0x188>(this);
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::get_CurrentKeyboardAngleFromUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_CurrentKeyboardAngleFromUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_CurrentKeyboardAngleFromUp(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_CurrentKeyboardAngleFromUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState GlobalNamespace::OVRTrackedKeyboard::get_TrackingState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_TrackingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_TrackingState(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_TrackingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo GlobalNamespace::OVRTrackedKeyboard::get_ActiveKeyboardInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_ActiveKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_ActiveKeyboardInfo(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_ActiveKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo GlobalNamespace::OVRTrackedKeyboard::get_SystemKeyboardInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_SystemKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_SystemKeyboardInfo(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_SystemKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation GlobalNamespace::OVRTrackedKeyboard::get_Presentation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_Presentation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_Presentation(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_Presentation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::get_TrackingEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_TrackingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_TrackingEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_TrackingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::get_ConnectionRequired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_ConnectionRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_ConnectionRequired(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_ConnectionRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::get_ShowUntracked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_ShowUntracked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_ShowUntracked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_ShowUntracked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::get_RemoteKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_RemoteKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_RemoteKeyboard(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_RemoteKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags GlobalNamespace::OVRTrackedKeyboard::get_KeyboardQueryFlags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_KeyboardQueryFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_KeyboardQueryFlags(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_KeyboardQueryFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::OVROverlay* GlobalNamespace::OVRTrackedKeyboard::get_PassthroughOverlay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "get_PassthroughOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVROverlay*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_PassthroughOverlay(::GlobalNamespace::OVROverlay*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "set_PassthroughOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::InitializeHandPresenceData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "InitializeHandPresenceData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::RegisterPassthroughMeshToSDK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "RegisterPassthroughMeshToSDK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::GetDistanceToKeyboard(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "GetDistanceToKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, point);
}
inline void GlobalNamespace::OVRTrackedKeyboard::LaunchLocalKeyboardSelectionDialog()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "LaunchLocalKeyboardSelectionDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::LaunchRemoteKeyboardSelectionDialog()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "LaunchRemoteKeyboardSelectionDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::KeyboardTrackerIsRunning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "KeyboardTrackerIsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::UpdateTrackingStateCoroutine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "UpdateTrackingStateCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::StartKeyboardTrackingCoroutine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "StartKeyboardTrackingCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::StopKeyboardTrackingInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "StopKeyboardTrackingInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardPose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "UpdateKeyboardPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::UpdateSkippedPoseTimer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "UpdateSkippedPoseTimer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::LoadKeyboardMesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "LoadKeyboardMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::UpdateTextureQuality()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "UpdateTextureQuality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::UpdatePresentation(bool  isVisible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "UpdatePresentation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, isVisible);
}
inline ::UnityEngine::GameObject* GlobalNamespace::OVRTrackedKeyboard::LoadRuntimeKeyboardMesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "LoadRuntimeKeyboardMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardVisibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "UpdateKeyboardVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::SetKeyboardState(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "SetKeyboardState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::GetKeyboardVisibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "GetKeyboardVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::InitializeKeyboardInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "InitializeKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::LaunchOverlayIntent(::StringW  dataUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "LaunchOverlayIntent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dataUri);
}
inline void GlobalNamespace::OVRTrackedKeyboard::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::DispatchVisibilityEvent(bool  timeOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            "DispatchVisibilityEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, timeOut);
}
inline ::GlobalNamespace::OVRTrackedKeyboard* GlobalNamespace::OVRTrackedKeyboard::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRTrackedKeyboard*>());
}
inline void GlobalNamespace::OVRTrackedKeyboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
