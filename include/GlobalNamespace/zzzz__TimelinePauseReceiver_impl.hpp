#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TimelinePauseReceiver_def.hpp"
#include "UnityEngine/Playables/zzzz__INotificationReceiver_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimelinePauseReceiver.add_timelinePauseEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TimelinePauseReceiver::*)(::System::Action*)>(&::GlobalNamespace::TimelinePauseReceiver::add_timelinePauseEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20f5d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseReceiver*>::get(),
                            "add_timelinePauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimelinePauseReceiver.remove_timelinePauseEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TimelinePauseReceiver::*)(::System::Action*)>(&::GlobalNamespace::TimelinePauseReceiver::remove_timelinePauseEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20f5dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseReceiver*>::get(),
                            "remove_timelinePauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimelinePauseReceiver.OnNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TimelinePauseReceiver::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::INotification*, ::System::Object*)>(&::GlobalNamespace::TimelinePauseReceiver::OnNotify)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x20f5e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseReceiver*>::get(),
                            "OnNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::INotification*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimelinePauseReceiver._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TimelinePauseReceiver::*)()>(&::GlobalNamespace::TimelinePauseReceiver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f5ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseReceiver*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Playables::INotificationReceiver"
constexpr  GlobalNamespace::TimelinePauseReceiver::operator ::UnityEngine::Playables::INotificationReceiver*() noexcept {
return static_cast<::UnityEngine::Playables::INotificationReceiver*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::TimelinePauseReceiver::__set_timelinePauseEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x18>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::TimelinePauseReceiver::__get_timelinePauseEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::TimelinePauseReceiver::__get_timelinePauseEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
inline void GlobalNamespace::TimelinePauseReceiver::add_timelinePauseEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseReceiver*>::get(),
                            "add_timelinePauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::TimelinePauseReceiver::remove_timelinePauseEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseReceiver*>::get(),
                            "remove_timelinePauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::TimelinePauseReceiver::OnNotify(::UnityEngine::Playables::Playable  origin, ::UnityEngine::Playables::INotification*  notification, ::System::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseReceiver*>::get(),
                            "OnNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::INotification*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, origin, notification, context);
}
inline ::GlobalNamespace::TimelinePauseReceiver* GlobalNamespace::TimelinePauseReceiver::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TimelinePauseReceiver*>());
}
inline void GlobalNamespace::TimelinePauseReceiver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseReceiver*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
