#pragma once
#include "System/Threading/Tasks/zzzz__TaskContinuation_impl.hpp"
#include "System/Threading/Tasks/zzzz__StandardTaskContinuation_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::StandardTaskContinuation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::StandardTaskContinuation::*)(::System::Threading::Tasks::Task*, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::Tasks::TaskScheduler*)>(&::System::Threading::Tasks::StandardTaskContinuation::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2628370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::StandardTaskContinuation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::StandardTaskContinuation.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::StandardTaskContinuation::*)(::System::Threading::Tasks::Task*, bool)>(&::System::Threading::Tasks::StandardTaskContinuation::Run)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x262b60c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::StandardTaskContinuation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::StandardTaskContinuation*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::StandardTaskContinuation::__set_m_task(::System::Threading::Tasks::Task*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task*, 0x10>(this, std::forward<::System::Threading::Tasks::Task*>(value));
}
constexpr ::System::Threading::Tasks::Task* System::Threading::Tasks::StandardTaskContinuation::__get_m_task()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> System::Threading::Tasks::StandardTaskContinuation::__get_m_task() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x10>(this);
}
constexpr void System::Threading::Tasks::StandardTaskContinuation::__set_m_options(::System::Threading::Tasks::TaskContinuationOptions  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskContinuationOptions, 0x18>(this, std::forward<::System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr ::System::Threading::Tasks::TaskContinuationOptions& System::Threading::Tasks::StandardTaskContinuation::__get_m_options()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskContinuationOptions, 0x18>(this);
}
constexpr ::System::Threading::Tasks::TaskContinuationOptions const& System::Threading::Tasks::StandardTaskContinuation::__get_m_options() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskContinuationOptions, 0x18>(this);
}
constexpr void System::Threading::Tasks::StandardTaskContinuation::__set_m_taskScheduler(::System::Threading::Tasks::TaskScheduler*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskScheduler*, 0x20>(this, std::forward<::System::Threading::Tasks::TaskScheduler*>(value));
}
constexpr ::System::Threading::Tasks::TaskScheduler* System::Threading::Tasks::StandardTaskContinuation::__get_m_taskScheduler()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskScheduler*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> System::Threading::Tasks::StandardTaskContinuation::__get_m_taskScheduler() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskScheduler*, 0x20>(this);
}
inline ::System::Threading::Tasks::StandardTaskContinuation* System::Threading::Tasks::StandardTaskContinuation::New_ctor(::System::Threading::Tasks::Task*  task, ::System::Threading::Tasks::TaskContinuationOptions  options, ::System::Threading::Tasks::TaskScheduler*  scheduler)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::StandardTaskContinuation*>(task, options, scheduler));
}
inline void System::Threading::Tasks::StandardTaskContinuation::_ctor(::System::Threading::Tasks::Task*  task, ::System::Threading::Tasks::TaskContinuationOptions  options, ::System::Threading::Tasks::TaskScheduler*  scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::StandardTaskContinuation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, task, options, scheduler);
}
inline void System::Threading::Tasks::StandardTaskContinuation::Run(::System::Threading::Tasks::Task*  completedTask, bool  bCanInlineContinuationTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::StandardTaskContinuation*>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, completedTask, bCanInlineContinuationTask);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
