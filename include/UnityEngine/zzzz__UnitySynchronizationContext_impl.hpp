#pragma once
#include "System/Threading/zzzz__SynchronizationContext_impl.hpp"
#include "UnityEngine/zzzz__UnitySynchronizationContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "UnityEngine/zzzz__UnitySynchronizationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::__UnitySynchronizationContext__WorkRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__UnitySynchronizationContext__WorkRequest::*)(::System::Threading::SendOrPostCallback*, ::System::Object*, ::System::Threading::ManualResetEvent*)>(&::UnityEngine::__UnitySynchronizationContext__WorkRequest::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cd4858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__UnitySynchronizationContext__WorkRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SendOrPostCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ManualResetEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__UnitySynchronizationContext__WorkRequest.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__UnitySynchronizationContext__WorkRequest::*)()>(&::UnityEngine::__UnitySynchronizationContext__WorkRequest::Invoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2cd4bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__UnitySynchronizationContext__WorkRequest>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::__UnitySynchronizationContext__WorkRequest::__set_m_DelagateCallback(::System::Threading::SendOrPostCallback*  value)  {
::cordl_internals::setInstanceField<::System::Threading::SendOrPostCallback*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::SendOrPostCallback*>(value));
}
constexpr ::System::Threading::SendOrPostCallback* UnityEngine::__UnitySynchronizationContext__WorkRequest::__get_m_DelagateCallback()  {
return ::cordl_internals::getInstanceField<::System::Threading::SendOrPostCallback*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SendOrPostCallback*> UnityEngine::__UnitySynchronizationContext__WorkRequest::__get_m_DelagateCallback() const {
return ::cordl_internals::getInstanceField<::System::Threading::SendOrPostCallback*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::__UnitySynchronizationContext__WorkRequest::__set_m_DelagateState(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* UnityEngine::__UnitySynchronizationContext__WorkRequest::__get_m_DelagateState()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> UnityEngine::__UnitySynchronizationContext__WorkRequest::__get_m_DelagateState() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::__UnitySynchronizationContext__WorkRequest::__set_m_WaitHandle(::System::Threading::ManualResetEvent*  value)  {
::cordl_internals::setInstanceField<::System::Threading::ManualResetEvent*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::ManualResetEvent*>(value));
}
constexpr ::System::Threading::ManualResetEvent* UnityEngine::__UnitySynchronizationContext__WorkRequest::__get_m_WaitHandle()  {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> UnityEngine::__UnitySynchronizationContext__WorkRequest::__get_m_WaitHandle() const {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
/// @param waitHandle: ::System::Threading::ManualResetEvent* (default: csnull)
inline void UnityEngine::__UnitySynchronizationContext__WorkRequest::_ctor(::System::Threading::SendOrPostCallback*  callback, ::System::Object*  state, ::System::Threading::ManualResetEvent*  waitHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__UnitySynchronizationContext__WorkRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SendOrPostCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ManualResetEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callback, state, waitHandle);
}
inline void UnityEngine::__UnitySynchronizationContext__WorkRequest::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__UnitySynchronizationContext__WorkRequest>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_DelagateCallback", ty: "::System::Threading::SendOrPostCallback*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_DelagateState", ty: "::System::Object*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_WaitHandle", ty: "::System::Threading::ManualResetEvent*", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::__UnitySynchronizationContext__WorkRequest::__UnitySynchronizationContext__WorkRequest(::System::Threading::SendOrPostCallback*  m_DelagateCallback, ::System::Object*  m_DelagateState, ::System::Threading::ManualResetEvent*  m_WaitHandle) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->m_DelagateCallback = m_DelagateCallback;
this->m_DelagateState = m_DelagateState;
this->m_WaitHandle = m_WaitHandle;
}
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)(int32_t)>(&::UnityEngine::UnitySynchronizationContext::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2cd43fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)(::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*, int32_t)>(&::UnityEngine::UnitySynchronizationContext::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2cd44b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(&::UnityEngine::UnitySynchronizationContext::Send)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2cd4554;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.OperationStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)()>(&::UnityEngine::UnitySynchronizationContext::OperationStarted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cd4864;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.OperationCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)()>(&::UnityEngine::UnitySynchronizationContext::OperationCompleted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cd4870;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.Post
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(&::UnityEngine::UnitySynchronizationContext::Post)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2cd487c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.CreateCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (::UnityEngine::UnitySynchronizationContext::*)()>(&::UnityEngine::UnitySynchronizationContext::CreateCopy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cd49cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.Exec
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)()>(&::UnityEngine::UnitySynchronizationContext::Exec)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2cd4a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            "Exec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.HasPendingTasks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UnitySynchronizationContext::*)()>(&::UnityEngine::UnitySynchronizationContext::HasPendingTasks)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2cd4ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            "HasPendingTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.InitializeSynchronizationContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UnitySynchronizationContext::InitializeSynchronizationContext)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2cd4d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            "InitializeSynchronizationContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.ExecuteTasks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UnitySynchronizationContext::ExecuteTasks)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2cd4d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            "ExecuteTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.ExecutePendingTasks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int64_t)>(&::UnityEngine::UnitySynchronizationContext::ExecutePendingTasks)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2cd4de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            "ExecutePendingTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UnitySynchronizationContext::__set_m_AsyncWorkQueue(::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>* UnityEngine::UnitySynchronizationContext::__get_m_AsyncWorkQueue()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*> UnityEngine::UnitySynchronizationContext::__get_m_AsyncWorkQueue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*, 0x18>(this);
}
constexpr void UnityEngine::UnitySynchronizationContext::__set_m_CurrentFrameWork(::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>* UnityEngine::UnitySynchronizationContext::__get_m_CurrentFrameWork()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*> UnityEngine::UnitySynchronizationContext::__get_m_CurrentFrameWork() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*, 0x20>(this);
}
constexpr void UnityEngine::UnitySynchronizationContext::__set_m_MainThreadID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UnitySynchronizationContext::__get_m_MainThreadID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& UnityEngine::UnitySynchronizationContext::__get_m_MainThreadID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void UnityEngine::UnitySynchronizationContext::__set_m_TrackedCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UnitySynchronizationContext::__get_m_TrackedCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& UnityEngine::UnitySynchronizationContext::__get_m_TrackedCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
inline ::UnityEngine::UnitySynchronizationContext* UnityEngine::UnitySynchronizationContext::New_ctor(int32_t  mainThreadID)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UnitySynchronizationContext*>(mainThreadID));
}
inline void UnityEngine::UnitySynchronizationContext::_ctor(int32_t  mainThreadID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, mainThreadID);
}
inline ::UnityEngine::UnitySynchronizationContext* UnityEngine::UnitySynchronizationContext::New_ctor(::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*  queue, int32_t  mainThreadID)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UnitySynchronizationContext*>(queue, mainThreadID));
}
inline void UnityEngine::UnitySynchronizationContext::_ctor(::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*  queue, int32_t  mainThreadID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::__UnitySynchronizationContext__WorkRequest>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, queue, mainThreadID);
}
inline void UnityEngine::UnitySynchronizationContext::Send(::System::Threading::SendOrPostCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SendOrPostCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callback, state);
}
inline void UnityEngine::UnitySynchronizationContext::OperationStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            "OperationStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UnitySynchronizationContext::OperationCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            "OperationCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UnitySynchronizationContext::Post(::System::Threading::SendOrPostCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            "Post",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SendOrPostCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callback, state);
}
inline ::System::Threading::SynchronizationContext* UnityEngine::UnitySynchronizationContext::CreateCopy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            "CreateCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*, false>(*this, ___internal_method);
}
inline void UnityEngine::UnitySynchronizationContext::Exec()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            "Exec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::UnitySynchronizationContext::HasPendingTasks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            "HasPendingTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UnitySynchronizationContext::InitializeSynchronizationContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            "InitializeSynchronizationContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UnitySynchronizationContext::ExecuteTasks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            "ExecuteTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::UnitySynchronizationContext::ExecutePendingTasks(int64_t  millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnitySynchronizationContext*>::get(),
                            "ExecutePendingTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, millisecondsTimeout);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
