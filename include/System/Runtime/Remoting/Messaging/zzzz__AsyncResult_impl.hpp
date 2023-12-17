#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__AsyncResult_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MonoMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a7848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_AsyncState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a7850;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_AsyncWaitHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x24a7858;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_CompletedSynchronously
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a797c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a7984;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_EndInvokeCalled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::get_EndInvokeCalled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a798c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "get_EndInvokeCalled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.set_EndInvokeCalled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(bool)>(&::System::Runtime::Remoting::Messaging::AsyncResult::set_EndInvokeCalled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24a7994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "set_EndInvokeCalled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_AsyncDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a79a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_NextSink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::get_NextSink)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a79a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "get_NextSink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.AsyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(&::System::Runtime::Remoting::Messaging::AsyncResult::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24a79b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.GetReplyMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::GetReplyMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a79f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.SetMessageCtrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::IMessageCtrl*)>(&::System::Runtime::Remoting::Messaging::AsyncResult::SetMessageCtrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a79f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.SetCompletedSynchronously
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(bool)>(&::System::Runtime::Remoting::Messaging::AsyncResult::SetCompletedSynchronously)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24a7a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "SetCompletedSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::EndInvoke)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2497a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.SyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Messaging::AsyncResult::SyncProcessMessage)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x24a7a0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.get_CallMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::MonoMethodMessage* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::get_CallMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a7b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "get_CallMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.set_CallMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Runtime::Remoting::Messaging::MonoMethodMessage*)>(&::System::Runtime::Remoting::Messaging::AsyncResult::set_CallMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a7ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "set_CallMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24a7bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.System_Threading_IThreadPoolWorkItem_MarkAborted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::AsyncResult::*)(::System::Threading::ThreadAbortException*)>(&::System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24a7bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "System.Threading.IThreadPoolWorkItem.MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::AsyncResult.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::AsyncResult::*)()>(&::System::Runtime::Remoting::Messaging::AsyncResult::Invoke)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24a7bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IAsyncResult"
constexpr  System::Runtime::Remoting::Messaging::AsyncResult::operator ::System::IAsyncResult*() noexcept {
return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr  System::Runtime::Remoting::Messaging::AsyncResult::operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept {
return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr  System::Runtime::Remoting::Messaging::AsyncResult::operator ::System::Threading::IThreadPoolWorkItem*() noexcept {
return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_async_state(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x10>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Remoting::Messaging::AsyncResult::__get_async_state()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Remoting::Messaging::AsyncResult::__get_async_state() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_handle(::System::Threading::WaitHandle*  value)  {
::cordl_internals::setInstanceField<::System::Threading::WaitHandle*, 0x18>(this, std::forward<::System::Threading::WaitHandle*>(value));
}
constexpr ::System::Threading::WaitHandle* System::Runtime::Remoting::Messaging::AsyncResult::__get_handle()  {
return ::cordl_internals::getInstanceField<::System::Threading::WaitHandle*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitHandle*> System::Runtime::Remoting::Messaging::AsyncResult::__get_handle() const {
return ::cordl_internals::getInstanceField<::System::Threading::WaitHandle*, 0x18>(this);
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_async_delegate(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x20>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Remoting::Messaging::AsyncResult::__get_async_delegate()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Remoting::Messaging::AsyncResult::__get_async_delegate() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_data(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x28>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Runtime::Remoting::Messaging::AsyncResult::__get_data()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x28>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Runtime::Remoting::Messaging::AsyncResult::__get_data() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x28>(this);
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_object_data(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x30>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Remoting::Messaging::AsyncResult::__get_object_data()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Remoting::Messaging::AsyncResult::__get_object_data() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x30>(this);
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_sync_completed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Remoting::Messaging::AsyncResult::__get_sync_completed()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& System::Runtime::Remoting::Messaging::AsyncResult::__get_sync_completed() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_completed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Remoting::Messaging::AsyncResult::__get_completed()  {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr bool const& System::Runtime::Remoting::Messaging::AsyncResult::__get_completed() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_endinvoke_called(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3a>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Remoting::Messaging::AsyncResult::__get_endinvoke_called()  {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this);
}
constexpr bool const& System::Runtime::Remoting::Messaging::AsyncResult::__get_endinvoke_called() const {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this);
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_async_callback(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x40>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Remoting::Messaging::AsyncResult::__get_async_callback()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Remoting::Messaging::AsyncResult::__get_async_callback() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x40>(this);
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_current(::System::Threading::ExecutionContext*  value)  {
::cordl_internals::setInstanceField<::System::Threading::ExecutionContext*, 0x48>(this, std::forward<::System::Threading::ExecutionContext*>(value));
}
constexpr ::System::Threading::ExecutionContext* System::Runtime::Remoting::Messaging::AsyncResult::__get_current()  {
return ::cordl_internals::getInstanceField<::System::Threading::ExecutionContext*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> System::Runtime::Remoting::Messaging::AsyncResult::__get_current() const {
return ::cordl_internals::getInstanceField<::System::Threading::ExecutionContext*, 0x48>(this);
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_original(::System::Threading::ExecutionContext*  value)  {
::cordl_internals::setInstanceField<::System::Threading::ExecutionContext*, 0x50>(this, std::forward<::System::Threading::ExecutionContext*>(value));
}
constexpr ::System::Threading::ExecutionContext* System::Runtime::Remoting::Messaging::AsyncResult::__get_original()  {
return ::cordl_internals::getInstanceField<::System::Threading::ExecutionContext*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> System::Runtime::Remoting::Messaging::AsyncResult::__get_original() const {
return ::cordl_internals::getInstanceField<::System::Threading::ExecutionContext*, 0x50>(this);
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_add_time(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x58>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Runtime::Remoting::Messaging::AsyncResult::__get_add_time()  {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this);
}
constexpr int64_t const& System::Runtime::Remoting::Messaging::AsyncResult::__get_add_time() const {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this);
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_call_message(::System::Runtime::Remoting::Messaging::MonoMethodMessage*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::MonoMethodMessage*, 0x60>(this, std::forward<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::MonoMethodMessage* System::Runtime::Remoting::Messaging::AsyncResult::__get_call_message()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::MonoMethodMessage*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::MonoMethodMessage*> System::Runtime::Remoting::Messaging::AsyncResult::__get_call_message() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::MonoMethodMessage*, 0x60>(this);
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_message_ctrl(::System::Runtime::Remoting::Messaging::IMessageCtrl*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::IMessageCtrl*, 0x68>(this, std::forward<::System::Runtime::Remoting::Messaging::IMessageCtrl*>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageCtrl* System::Runtime::Remoting::Messaging::AsyncResult::__get_message_ctrl()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::IMessageCtrl*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageCtrl*> System::Runtime::Remoting::Messaging::AsyncResult::__get_message_ctrl() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::IMessageCtrl*, 0x68>(this);
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_reply_message(::System::Runtime::Remoting::Messaging::IMessage*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::IMessage*, 0x70>(this, std::forward<::System::Runtime::Remoting::Messaging::IMessage*>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::AsyncResult::__get_reply_message()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::IMessage*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessage*> System::Runtime::Remoting::Messaging::AsyncResult::__get_reply_message() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::IMessage*, 0x70>(this);
}
constexpr void System::Runtime::Remoting::Messaging::AsyncResult::__set_orig_cb(::System::Threading::WaitCallback*  value)  {
::cordl_internals::setInstanceField<::System::Threading::WaitCallback*, 0x78>(this, std::forward<::System::Threading::WaitCallback*>(value));
}
constexpr ::System::Threading::WaitCallback* System::Runtime::Remoting::Messaging::AsyncResult::__get_orig_cb()  {
return ::cordl_internals::getInstanceField<::System::Threading::WaitCallback*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitCallback*> System::Runtime::Remoting::Messaging::AsyncResult::__get_orig_cb() const {
return ::cordl_internals::getInstanceField<::System::Threading::WaitCallback*, 0x78>(this);
}
inline ::System::Runtime::Remoting::Messaging::AsyncResult* System::Runtime::Remoting::Messaging::AsyncResult::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Messaging::AsyncResult*>());
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "get_AsyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncWaitHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "get_AsyncWaitHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*, false>(*this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::AsyncResult::get_CompletedSynchronously()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "get_CompletedSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::AsyncResult::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::AsyncResult::get_EndInvokeCalled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "get_EndInvokeCalled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::set_EndInvokeCalled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "set_EndInvokeCalled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::AsyncResult::get_AsyncDelegate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "get_AsyncDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Messaging::AsyncResult::get_NextSink()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "get_NextSink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*, false>(*this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* System::Runtime::Remoting::Messaging::AsyncResult::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage*  msg, ::System::Runtime::Remoting::Messaging::IMessageSink*  replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl*, false>(*this, ___internal_method, msg, replySink);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::AsyncResult::GetReplyMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "GetReplyMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(*this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::SetMessageCtrl(::System::Runtime::Remoting::Messaging::IMessageCtrl*  mc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "SetMessageCtrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageCtrl*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, mc);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::SetCompletedSynchronously(bool  completed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "SetCompletedSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, completed);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::AsyncResult::EndInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(*this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::AsyncResult::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage*  msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(*this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage* System::Runtime::Remoting::Messaging::AsyncResult::get_CallMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "get_CallMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::MonoMethodMessage*, false>(*this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::set_CallMessage(::System::Runtime::Remoting::Messaging::MonoMethodMessage*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "set_CallMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::AsyncResult::System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException*  tae)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "System.Threading.IThreadPoolWorkItem.MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tae);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::AsyncResult::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::AsyncResult*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
