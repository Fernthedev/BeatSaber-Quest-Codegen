#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SignalListener_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SignalListener.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SignalListener::*)()>(&::GlobalNamespace::SignalListener::OnEnable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x20f57cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalListener*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SignalListener.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SignalListener::*)()>(&::GlobalNamespace::SignalListener::OnDisable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x20f5860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalListener*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SignalListener.HandleEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SignalListener::*)()>(&::GlobalNamespace::SignalListener::HandleEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20f58e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalListener*>::get(),
                            "HandleEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SignalListener._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SignalListener::*)()>(&::GlobalNamespace::SignalListener::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f5904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalListener*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SignalListener::__set__signal(::GlobalNamespace::Signal*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Signal*, 0x18>(this, std::forward<::GlobalNamespace::Signal*>(value));
}
constexpr ::GlobalNamespace::Signal* GlobalNamespace::SignalListener::__get__signal()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Signal*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> GlobalNamespace::SignalListener::__get__signal() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Signal*, 0x18>(this);
}
constexpr void GlobalNamespace::SignalListener::__set__unityEvent(::UnityEngine::Events::UnityEvent*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityEvent*, 0x20>(this, std::forward<::UnityEngine::Events::UnityEvent*>(value));
}
constexpr ::UnityEngine::Events::UnityEvent* GlobalNamespace::SignalListener::__get__unityEvent()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityEvent*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> GlobalNamespace::SignalListener::__get__unityEvent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityEvent*, 0x20>(this);
}
inline void GlobalNamespace::SignalListener::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalListener*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SignalListener::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalListener*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SignalListener::HandleEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalListener*>::get(),
                            "HandleEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SignalListener* GlobalNamespace::SignalListener::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SignalListener*>());
}
inline void GlobalNamespace::SignalListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalListener*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
