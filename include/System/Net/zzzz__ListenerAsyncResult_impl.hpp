#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ListenerAsyncResult_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::ListenerAsyncResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ListenerAsyncResult::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::Net::ListenerAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x29d26bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ListenerAsyncResult::*)(::System::Exception*)>(&::System::Net::ListenerAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x29d273c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.InvokeCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Net::ListenerAsyncResult::InvokeCallback)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x29d2930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "InvokeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ListenerAsyncResult::*)(::System::Net::HttpListenerContext*)>(&::System::Net::ListenerAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d2a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ListenerAsyncResult::*)(::System::Net::HttpListenerContext*, bool)>(&::System::Net::ListenerAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x29d2a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.GetContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpListenerContext* (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::GetContext)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x29d2fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "GetContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.get_AsyncState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29d2fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "get_AsyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.get_AsyncWaitHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x29d2ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "get_AsyncWaitHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.get_CompletedSynchronously
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29d312c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "get_CompletedSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x29d3140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IAsyncResult"
constexpr  System::Net::ListenerAsyncResult::operator ::System::IAsyncResult*() noexcept {
return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
constexpr void System::Net::ListenerAsyncResult::__set_handle(::System::Threading::ManualResetEvent*  value)  {
::cordl_internals::setInstanceField<::System::Threading::ManualResetEvent*, 0x10>(this, std::forward<::System::Threading::ManualResetEvent*>(value));
}
constexpr ::System::Threading::ManualResetEvent* System::Net::ListenerAsyncResult::__get_handle()  {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> System::Net::ListenerAsyncResult::__get_handle() const {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x10>(this);
}
constexpr void System::Net::ListenerAsyncResult::__set_synch(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::ListenerAsyncResult::__get_synch()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& System::Net::ListenerAsyncResult::__get_synch() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void System::Net::ListenerAsyncResult::__set_completed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::ListenerAsyncResult::__get_completed()  {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr bool const& System::Net::ListenerAsyncResult::__get_completed() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr void System::Net::ListenerAsyncResult::__set_cb(::System::AsyncCallback*  value)  {
::cordl_internals::setInstanceField<::System::AsyncCallback*, 0x20>(this, std::forward<::System::AsyncCallback*>(value));
}
constexpr ::System::AsyncCallback* System::Net::ListenerAsyncResult::__get_cb()  {
return ::cordl_internals::getInstanceField<::System::AsyncCallback*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> System::Net::ListenerAsyncResult::__get_cb() const {
return ::cordl_internals::getInstanceField<::System::AsyncCallback*, 0x20>(this);
}
constexpr void System::Net::ListenerAsyncResult::__set_state(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x28>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Net::ListenerAsyncResult::__get_state()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Net::ListenerAsyncResult::__get_state() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr void System::Net::ListenerAsyncResult::__set_exception(::System::Exception*  value)  {
::cordl_internals::setInstanceField<::System::Exception*, 0x30>(this, std::forward<::System::Exception*>(value));
}
constexpr ::System::Exception* System::Net::ListenerAsyncResult::__get_exception()  {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> System::Net::ListenerAsyncResult::__get_exception() const {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x30>(this);
}
constexpr void System::Net::ListenerAsyncResult::__set_context(::System::Net::HttpListenerContext*  value)  {
::cordl_internals::setInstanceField<::System::Net::HttpListenerContext*, 0x38>(this, std::forward<::System::Net::HttpListenerContext*>(value));
}
constexpr ::System::Net::HttpListenerContext* System::Net::ListenerAsyncResult::__get_context()  {
return ::cordl_internals::getInstanceField<::System::Net::HttpListenerContext*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerContext*> System::Net::ListenerAsyncResult::__get_context() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpListenerContext*, 0x38>(this);
}
constexpr void System::Net::ListenerAsyncResult::__set_locker(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x40>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Net::ListenerAsyncResult::__get_locker()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Net::ListenerAsyncResult::__get_locker() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x40>(this);
}
constexpr void System::Net::ListenerAsyncResult::__set_forward(::System::Net::ListenerAsyncResult*  value)  {
::cordl_internals::setInstanceField<::System::Net::ListenerAsyncResult*, 0x48>(this, std::forward<::System::Net::ListenerAsyncResult*>(value));
}
constexpr ::System::Net::ListenerAsyncResult* System::Net::ListenerAsyncResult::__get_forward()  {
return ::cordl_internals::getInstanceField<::System::Net::ListenerAsyncResult*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ListenerAsyncResult*> System::Net::ListenerAsyncResult::__get_forward() const {
return ::cordl_internals::getInstanceField<::System::Net::ListenerAsyncResult*, 0x48>(this);
}
constexpr void System::Net::ListenerAsyncResult::__set_EndCalled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::ListenerAsyncResult::__get_EndCalled()  {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr bool const& System::Net::ListenerAsyncResult::__get_EndCalled() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr void System::Net::ListenerAsyncResult::__set_InGet(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x51>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::ListenerAsyncResult::__get_InGet()  {
return ::cordl_internals::getInstanceField<bool, 0x51>(this);
}
constexpr bool const& System::Net::ListenerAsyncResult::__get_InGet() const {
return ::cordl_internals::getInstanceField<bool, 0x51>(this);
}
inline void System::Net::ListenerAsyncResult::setStaticF_InvokeCB(::System::Threading::WaitCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "InvokeCB", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get>(std::forward<::System::Threading::WaitCallback*>(value));
}
inline ::System::Threading::WaitCallback* System::Net::ListenerAsyncResult::getStaticF_InvokeCB()  {
return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "InvokeCB", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get>();
}
inline ::System::Net::ListenerAsyncResult* System::Net::ListenerAsyncResult::New_ctor(::System::AsyncCallback*  cb, ::System::Object*  state)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::ListenerAsyncResult*>(cb, state));
}
inline void System::Net::ListenerAsyncResult::_ctor(::System::AsyncCallback*  cb, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cb, state);
}
inline void System::Net::ListenerAsyncResult::Complete(::System::Exception*  exc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, exc);
}
inline void System::Net::ListenerAsyncResult::InvokeCallback(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "InvokeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, o);
}
inline void System::Net::ListenerAsyncResult::Complete(::System::Net::HttpListenerContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void System::Net::ListenerAsyncResult::Complete(::System::Net::HttpListenerContext*  context, bool  synch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context, synch);
}
inline ::System::Net::HttpListenerContext* System::Net::ListenerAsyncResult::GetContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "GetContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerContext*, false>(*this, ___internal_method);
}
inline ::System::Object* System::Net::ListenerAsyncResult::get_AsyncState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "get_AsyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::Net::ListenerAsyncResult::get_AsyncWaitHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "get_AsyncWaitHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*, false>(*this, ___internal_method);
}
inline bool System::Net::ListenerAsyncResult::get_CompletedSynchronously()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "get_CompletedSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Net::ListenerAsyncResult::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
