#pragma once
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/Threading/zzzz__RegisteredWaitHandle_def.hpp"
#include "System/Threading/zzzz__WaitOrTimerCallback_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Threading::RegisteredWaitHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::RegisteredWaitHandle::*)(::System::Threading::WaitHandle*, ::System::Threading::WaitOrTimerCallback*, ::System::Object*, ::System::TimeSpan, bool)>(&::System::Threading::RegisteredWaitHandle::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x261c76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::RegisteredWaitHandle*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitOrTimerCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::RegisteredWaitHandle.Wait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::RegisteredWaitHandle::*)(::System::Object*)>(&::System::Threading::RegisteredWaitHandle::Wait)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x261f0dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::RegisteredWaitHandle*>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::RegisteredWaitHandle.DoCallBack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::RegisteredWaitHandle::*)(::System::Object*)>(&::System::Threading::RegisteredWaitHandle::DoCallBack)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x261f60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::RegisteredWaitHandle*>::get(),
                            "DoCallBack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::RegisteredWaitHandle.Unregister
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::RegisteredWaitHandle::*)(::System::Threading::WaitHandle*)>(&::System::Threading::RegisteredWaitHandle::Unregister)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x261f710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::RegisteredWaitHandle*>::get(),
                            "Unregister",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::RegisteredWaitHandle::__set__waitObject(::System::Threading::WaitHandle*  value)  {
::cordl_internals::setInstanceField<::System::Threading::WaitHandle*, 0x18>(this, std::forward<::System::Threading::WaitHandle*>(value));
}
constexpr ::System::Threading::WaitHandle* System::Threading::RegisteredWaitHandle::__get__waitObject()  {
return ::cordl_internals::getInstanceField<::System::Threading::WaitHandle*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitHandle*> System::Threading::RegisteredWaitHandle::__get__waitObject() const {
return ::cordl_internals::getInstanceField<::System::Threading::WaitHandle*, 0x18>(this);
}
constexpr void System::Threading::RegisteredWaitHandle::__set__callback(::System::Threading::WaitOrTimerCallback*  value)  {
::cordl_internals::setInstanceField<::System::Threading::WaitOrTimerCallback*, 0x20>(this, std::forward<::System::Threading::WaitOrTimerCallback*>(value));
}
constexpr ::System::Threading::WaitOrTimerCallback* System::Threading::RegisteredWaitHandle::__get__callback()  {
return ::cordl_internals::getInstanceField<::System::Threading::WaitOrTimerCallback*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitOrTimerCallback*> System::Threading::RegisteredWaitHandle::__get__callback() const {
return ::cordl_internals::getInstanceField<::System::Threading::WaitOrTimerCallback*, 0x20>(this);
}
constexpr void System::Threading::RegisteredWaitHandle::__set__state(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x28>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Threading::RegisteredWaitHandle::__get__state()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Threading::RegisteredWaitHandle::__get__state() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr void System::Threading::RegisteredWaitHandle::__set__finalEvent(::System::Threading::WaitHandle*  value)  {
::cordl_internals::setInstanceField<::System::Threading::WaitHandle*, 0x30>(this, std::forward<::System::Threading::WaitHandle*>(value));
}
constexpr ::System::Threading::WaitHandle* System::Threading::RegisteredWaitHandle::__get__finalEvent()  {
return ::cordl_internals::getInstanceField<::System::Threading::WaitHandle*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitHandle*> System::Threading::RegisteredWaitHandle::__get__finalEvent() const {
return ::cordl_internals::getInstanceField<::System::Threading::WaitHandle*, 0x30>(this);
}
constexpr void System::Threading::RegisteredWaitHandle::__set__cancelEvent(::System::Threading::ManualResetEvent*  value)  {
::cordl_internals::setInstanceField<::System::Threading::ManualResetEvent*, 0x38>(this, std::forward<::System::Threading::ManualResetEvent*>(value));
}
constexpr ::System::Threading::ManualResetEvent* System::Threading::RegisteredWaitHandle::__get__cancelEvent()  {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> System::Threading::RegisteredWaitHandle::__get__cancelEvent() const {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x38>(this);
}
constexpr void System::Threading::RegisteredWaitHandle::__set__timeout(::System::TimeSpan  value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x40>(this, std::forward<::System::TimeSpan>(value));
}
constexpr ::System::TimeSpan& System::Threading::RegisteredWaitHandle::__get__timeout()  {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x40>(this);
}
constexpr ::System::TimeSpan const& System::Threading::RegisteredWaitHandle::__get__timeout() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x40>(this);
}
constexpr void System::Threading::RegisteredWaitHandle::__set__callsInProcess(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::RegisteredWaitHandle::__get__callsInProcess()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& System::Threading::RegisteredWaitHandle::__get__callsInProcess() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void System::Threading::RegisteredWaitHandle::__set__executeOnlyOnce(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x4c>(this, std::forward<bool>(value));
}
constexpr bool& System::Threading::RegisteredWaitHandle::__get__executeOnlyOnce()  {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this);
}
constexpr bool const& System::Threading::RegisteredWaitHandle::__get__executeOnlyOnce() const {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this);
}
constexpr void System::Threading::RegisteredWaitHandle::__set__unregistered(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x4d>(this, std::forward<bool>(value));
}
constexpr bool& System::Threading::RegisteredWaitHandle::__get__unregistered()  {
return ::cordl_internals::getInstanceField<bool, 0x4d>(this);
}
constexpr bool const& System::Threading::RegisteredWaitHandle::__get__unregistered() const {
return ::cordl_internals::getInstanceField<bool, 0x4d>(this);
}
inline ::System::Threading::RegisteredWaitHandle* System::Threading::RegisteredWaitHandle::New_ctor(::System::Threading::WaitHandle*  waitObject, ::System::Threading::WaitOrTimerCallback*  callback, ::System::Object*  state, ::System::TimeSpan  timeout, bool  executeOnlyOnce)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::RegisteredWaitHandle*>(waitObject, callback, state, timeout, executeOnlyOnce));
}
inline void System::Threading::RegisteredWaitHandle::_ctor(::System::Threading::WaitHandle*  waitObject, ::System::Threading::WaitOrTimerCallback*  callback, ::System::Object*  state, ::System::TimeSpan  timeout, bool  executeOnlyOnce)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::RegisteredWaitHandle*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitOrTimerCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, waitObject, callback, state, timeout, executeOnlyOnce);
}
inline void System::Threading::RegisteredWaitHandle::Wait(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::RegisteredWaitHandle*>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
inline void System::Threading::RegisteredWaitHandle::DoCallBack(::System::Object*  timedOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::RegisteredWaitHandle*>::get(),
                            "DoCallBack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, timedOut);
}
inline bool System::Threading::RegisteredWaitHandle::Unregister(::System::Threading::WaitHandle*  waitObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::RegisteredWaitHandle*>::get(),
                            "Unregister",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitHandle*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, waitObject);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
