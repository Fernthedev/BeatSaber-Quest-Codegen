#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__QueueUserWorkItemCallback_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
//  Writing Method size for method: ::System::Threading::QueueUserWorkItemCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::QueueUserWorkItemCallback::*)(::System::Threading::WaitCallback*, ::System::Object*, bool, ByRef<::System::Threading::StackCrawlMark>)>(&::System::Threading::QueueUserWorkItemCallback::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x261c2f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::QueueUserWorkItemCallback.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::QueueUserWorkItemCallback::*)()>(&::System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x261c3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::QueueUserWorkItemCallback.System_Threading_IThreadPoolWorkItem_MarkAborted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::QueueUserWorkItemCallback::*)(::System::Threading::ThreadAbortException*)>(&::System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261c484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get(),
                            "System.Threading.IThreadPoolWorkItem.MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::QueueUserWorkItemCallback.WaitCallback_Context
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Threading::QueueUserWorkItemCallback::WaitCallback_Context)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x261c488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get(),
                            "WaitCallback_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr  System::Threading::QueueUserWorkItemCallback::operator ::System::Threading::IThreadPoolWorkItem*() noexcept {
return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
constexpr void System::Threading::QueueUserWorkItemCallback::__set_callback(::System::Threading::WaitCallback*  value)  {
::cordl_internals::setInstanceField<::System::Threading::WaitCallback*, 0x10>(this, std::forward<::System::Threading::WaitCallback*>(value));
}
constexpr ::System::Threading::WaitCallback* System::Threading::QueueUserWorkItemCallback::__get_callback()  {
return ::cordl_internals::getInstanceField<::System::Threading::WaitCallback*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitCallback*> System::Threading::QueueUserWorkItemCallback::__get_callback() const {
return ::cordl_internals::getInstanceField<::System::Threading::WaitCallback*, 0x10>(this);
}
constexpr void System::Threading::QueueUserWorkItemCallback::__set_context(::System::Threading::ExecutionContext*  value)  {
::cordl_internals::setInstanceField<::System::Threading::ExecutionContext*, 0x18>(this, std::forward<::System::Threading::ExecutionContext*>(value));
}
constexpr ::System::Threading::ExecutionContext* System::Threading::QueueUserWorkItemCallback::__get_context()  {
return ::cordl_internals::getInstanceField<::System::Threading::ExecutionContext*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> System::Threading::QueueUserWorkItemCallback::__get_context() const {
return ::cordl_internals::getInstanceField<::System::Threading::ExecutionContext*, 0x18>(this);
}
constexpr void System::Threading::QueueUserWorkItemCallback::__set_state(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x20>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Threading::QueueUserWorkItemCallback::__get_state()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Threading::QueueUserWorkItemCallback::__get_state() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
inline void System::Threading::QueueUserWorkItemCallback::setStaticF_ccb(::System::Threading::ContextCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "ccb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get>(std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Threading::QueueUserWorkItemCallback::getStaticF_ccb()  {
return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "ccb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get>();
}
inline ::System::Threading::QueueUserWorkItemCallback* System::Threading::QueueUserWorkItemCallback::New_ctor(::System::Threading::WaitCallback*  waitCallback, ::System::Object*  stateObj, bool  compressStack, ByRef<::System::Threading::StackCrawlMark>  stackMark)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::QueueUserWorkItemCallback*>(waitCallback, stateObj, compressStack, stackMark));
}
inline void System::Threading::QueueUserWorkItemCallback::_ctor(::System::Threading::WaitCallback*  waitCallback, ::System::Object*  stateObj, bool  compressStack, ByRef<::System::Threading::StackCrawlMark>  stackMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, waitCallback, stateObj, compressStack, stackMark);
}
inline void System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException*  tae)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get(),
                            "System.Threading.IThreadPoolWorkItem.MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tae);
}
inline void System::Threading::QueueUserWorkItemCallback::WaitCallback_Context(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback*>::get(),
                            "WaitCallback_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
