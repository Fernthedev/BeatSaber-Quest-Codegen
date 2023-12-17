#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DelayedMenuButtonTrigger_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "GlobalNamespace/zzzz__IMenuButtonTrigger_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DelayedMenuButtonTrigger.add_menuButtonTriggeredEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelayedMenuButtonTrigger::*)(::System::Action*)>(&::GlobalNamespace::DelayedMenuButtonTrigger::add_menuButtonTriggeredEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23c3e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelayedMenuButtonTrigger*>::get(),
                            "add_menuButtonTriggeredEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedMenuButtonTrigger.remove_menuButtonTriggeredEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelayedMenuButtonTrigger::*)(::System::Action*)>(&::GlobalNamespace::DelayedMenuButtonTrigger::remove_menuButtonTriggeredEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23c3ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelayedMenuButtonTrigger*>::get(),
                            "remove_menuButtonTriggeredEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedMenuButtonTrigger.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelayedMenuButtonTrigger::*)()>(&::GlobalNamespace::DelayedMenuButtonTrigger::Tick)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x23c3f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelayedMenuButtonTrigger*>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedMenuButtonTrigger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelayedMenuButtonTrigger::*)()>(&::GlobalNamespace::DelayedMenuButtonTrigger::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23c4074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelayedMenuButtonTrigger*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::ITickable"
constexpr  GlobalNamespace::DelayedMenuButtonTrigger::operator ::Zenject::ITickable*() noexcept {
return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMenuButtonTrigger"
constexpr  GlobalNamespace::DelayedMenuButtonTrigger::operator ::GlobalNamespace::IMenuButtonTrigger*() noexcept {
return static_cast<::GlobalNamespace::IMenuButtonTrigger*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::DelayedMenuButtonTrigger::__set_menuButtonTriggeredEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x10>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::DelayedMenuButtonTrigger::__get_menuButtonTriggeredEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::DelayedMenuButtonTrigger::__get_menuButtonTriggeredEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr void GlobalNamespace::DelayedMenuButtonTrigger::__set__pressDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::DelayedMenuButtonTrigger::__get__pressDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::DelayedMenuButtonTrigger::__get__pressDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::DelayedMenuButtonTrigger::__set__timer(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::DelayedMenuButtonTrigger::__get__timer()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::DelayedMenuButtonTrigger::__get__timer() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::DelayedMenuButtonTrigger::__set__waitingForButtonRelease(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::DelayedMenuButtonTrigger::__get__waitingForButtonRelease()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& GlobalNamespace::DelayedMenuButtonTrigger::__get__waitingForButtonRelease() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void GlobalNamespace::DelayedMenuButtonTrigger::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x28>(this, std::forward<::GlobalNamespace::IVRPlatformHelper*>(value));
}
constexpr ::GlobalNamespace::IVRPlatformHelper* GlobalNamespace::DelayedMenuButtonTrigger::__get__vrPlatformHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> GlobalNamespace::DelayedMenuButtonTrigger::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x28>(this);
}
inline void GlobalNamespace::DelayedMenuButtonTrigger::add_menuButtonTriggeredEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelayedMenuButtonTrigger*>::get(),
                            "add_menuButtonTriggeredEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::DelayedMenuButtonTrigger::remove_menuButtonTriggeredEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelayedMenuButtonTrigger*>::get(),
                            "remove_menuButtonTriggeredEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::DelayedMenuButtonTrigger::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelayedMenuButtonTrigger*>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::DelayedMenuButtonTrigger* GlobalNamespace::DelayedMenuButtonTrigger::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DelayedMenuButtonTrigger*>());
}
inline void GlobalNamespace::DelayedMenuButtonTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelayedMenuButtonTrigger*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
