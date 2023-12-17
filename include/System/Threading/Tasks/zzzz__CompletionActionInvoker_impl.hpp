#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__CompletionActionInvoker_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::CompletionActionInvoker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::CompletionActionInvoker::*)(::System::Threading::Tasks::ITaskCompletionAction*, ::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::CompletionActionInvoker::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2627bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::CompletionActionInvoker*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ITaskCompletionAction*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::CompletionActionInvoker.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::CompletionActionInvoker::*)()>(&::System::Threading::Tasks::CompletionActionInvoker::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x262b2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::CompletionActionInvoker*>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::CompletionActionInvoker.MarkAborted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::CompletionActionInvoker::*)(::System::Threading::ThreadAbortException*)>(&::System::Threading::Tasks::CompletionActionInvoker::MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x262b398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::CompletionActionInvoker*>::get(),
                            "MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr  System::Threading::Tasks::CompletionActionInvoker::operator ::System::Threading::IThreadPoolWorkItem*() noexcept {
return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
constexpr void System::Threading::Tasks::CompletionActionInvoker::__set_m_action(::System::Threading::Tasks::ITaskCompletionAction*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::ITaskCompletionAction*, 0x10>(this, std::forward<::System::Threading::Tasks::ITaskCompletionAction*>(value));
}
constexpr ::System::Threading::Tasks::ITaskCompletionAction* System::Threading::Tasks::CompletionActionInvoker::__get_m_action()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::ITaskCompletionAction*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::ITaskCompletionAction*> System::Threading::Tasks::CompletionActionInvoker::__get_m_action() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::ITaskCompletionAction*, 0x10>(this);
}
constexpr void System::Threading::Tasks::CompletionActionInvoker::__set_m_completingTask(::System::Threading::Tasks::Task*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task*, 0x18>(this, std::forward<::System::Threading::Tasks::Task*>(value));
}
constexpr ::System::Threading::Tasks::Task* System::Threading::Tasks::CompletionActionInvoker::__get_m_completingTask()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> System::Threading::Tasks::CompletionActionInvoker::__get_m_completingTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x18>(this);
}
inline ::System::Threading::Tasks::CompletionActionInvoker* System::Threading::Tasks::CompletionActionInvoker::New_ctor(::System::Threading::Tasks::ITaskCompletionAction*  action, ::System::Threading::Tasks::Task*  completingTask)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::CompletionActionInvoker*>(action, completingTask));
}
inline void System::Threading::Tasks::CompletionActionInvoker::_ctor(::System::Threading::Tasks::ITaskCompletionAction*  action, ::System::Threading::Tasks::Task*  completingTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::CompletionActionInvoker*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ITaskCompletionAction*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action, completingTask);
}
inline void System::Threading::Tasks::CompletionActionInvoker::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::CompletionActionInvoker*>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::Tasks::CompletionActionInvoker::MarkAborted(::System::Threading::ThreadAbortException*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::CompletionActionInvoker*>::get(),
                            "MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
