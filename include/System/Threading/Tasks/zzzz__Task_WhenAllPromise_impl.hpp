#pragma once
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_WhenAllPromise_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::__Task__WhenAllPromise._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__Task__WhenAllPromise::*)(::ArrayW<::System::Threading::Tasks::Task*,::Array<::System::Threading::Tasks::Task*>*>)>(&::System::Threading::Tasks::__Task__WhenAllPromise::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2629d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::Tasks::Task*,::Array<::System::Threading::Tasks::Task*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__Task__WhenAllPromise.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__Task__WhenAllPromise::*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::__Task__WhenAllPromise::Invoke)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x262ade8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__Task__WhenAllPromise.get_ShouldNotifyDebuggerOfWaitCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::__Task__WhenAllPromise::*)()>(&::System::Threading::Tasks::__Task__WhenAllPromise::get_ShouldNotifyDebuggerOfWaitCompletion)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x262b0b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__Task__WhenAllPromise.get_InvokeMayRunArbitraryCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::__Task__WhenAllPromise::*)()>(&::System::Threading::Tasks::__Task__WhenAllPromise::get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262b124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr  System::Threading::Tasks::__Task__WhenAllPromise::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
constexpr void System::Threading::Tasks::__Task__WhenAllPromise::__set_m_tasks(::ArrayW<::System::Threading::Tasks::Task*,::Array<::System::Threading::Tasks::Task*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Threading::Tasks::Task*,::Array<::System::Threading::Tasks::Task*>*>, 0x58>(this, std::forward<::ArrayW<::System::Threading::Tasks::Task*,::Array<::System::Threading::Tasks::Task*>*>>(value));
}
constexpr ::ArrayW<::System::Threading::Tasks::Task*,::Array<::System::Threading::Tasks::Task*>*>& System::Threading::Tasks::__Task__WhenAllPromise::__get_m_tasks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Threading::Tasks::Task*,::Array<::System::Threading::Tasks::Task*>*>, 0x58>(this);
}
constexpr ::ArrayW<::System::Threading::Tasks::Task*,::Array<::System::Threading::Tasks::Task*>*> const& System::Threading::Tasks::__Task__WhenAllPromise::__get_m_tasks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Threading::Tasks::Task*,::Array<::System::Threading::Tasks::Task*>*>, 0x58>(this);
}
constexpr void System::Threading::Tasks::__Task__WhenAllPromise::__set_m_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::Tasks::__Task__WhenAllPromise::__get_m_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr int32_t const& System::Threading::Tasks::__Task__WhenAllPromise::__get_m_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
inline ::System::Threading::Tasks::__Task__WhenAllPromise* System::Threading::Tasks::__Task__WhenAllPromise::New_ctor(::ArrayW<::System::Threading::Tasks::Task*,::Array<::System::Threading::Tasks::Task*>*>  tasks)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::__Task__WhenAllPromise*>(tasks));
}
inline void System::Threading::Tasks::__Task__WhenAllPromise::_ctor(::ArrayW<::System::Threading::Tasks::Task*,::Array<::System::Threading::Tasks::Task*>*>  tasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::Tasks::Task*,::Array<::System::Threading::Tasks::Task*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tasks);
}
inline void System::Threading::Tasks::__Task__WhenAllPromise::Invoke(::System::Threading::Tasks::Task*  ignored)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ignored);
}
inline bool System::Threading::Tasks::__Task__WhenAllPromise::get_ShouldNotifyDebuggerOfWaitCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(),
                            "get_ShouldNotifyDebuggerOfWaitCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Threading::Tasks::__Task__WhenAllPromise::get_InvokeMayRunArbitraryCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise*>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
