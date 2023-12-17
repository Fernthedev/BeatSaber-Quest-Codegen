#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderCore_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderCore_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::*)(::System::Threading::ExecutionContext*, ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24de1e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::*)()>(&::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::Run)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x24de210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner.InvokeMoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::InvokeMoveNext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x24de41c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get(),
                            "InvokeMoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::__set_m_context(::System::Threading::ExecutionContext*  value)  {
::cordl_internals::setInstanceField<::System::Threading::ExecutionContext*, 0x10>(this, std::forward<::System::Threading::ExecutionContext*>(value));
}
constexpr ::System::Threading::ExecutionContext* System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::__get_m_context()  {
return ::cordl_internals::getInstanceField<::System::Threading::ExecutionContext*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::__get_m_context() const {
return ::cordl_internals::getInstanceField<::System::Threading::ExecutionContext*, 0x10>(this);
}
constexpr void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::__set_m_stateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::IAsyncStateMachine*, 0x18>(this, std::forward<::System::Runtime::CompilerServices::IAsyncStateMachine*>(value));
}
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::__get_m_stateMachine()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::IAsyncStateMachine*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::CompilerServices::IAsyncStateMachine*> System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::__get_m_stateMachine() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::IAsyncStateMachine*, 0x18>(this);
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::setStaticF_s_invokeMoveNext(::System::Threading::ContextCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "s_invokeMoveNext", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get>(std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::getStaticF_s_invokeMoveNext()  {
return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "s_invokeMoveNext", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get>();
}
inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner* System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::New_ctor(::System::Threading::ExecutionContext*  context, ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>(context, stateMachine));
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::_ctor(::System::Threading::ExecutionContext*  context, ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context, stateMachine);
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::Run()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner::InvokeMoveNext(::System::Object*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get(),
                            "InvokeMoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::*)(::System::Action*, ::System::Action*, ::System::Threading::Tasks::Task*)>(&::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24de4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::*)()>(&::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::Invoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24de54c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__set_m_continuation(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x10>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__get_m_continuation()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__get_m_continuation() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__set_m_invokeAction(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x18>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__get_m_invokeAction()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__get_m_invokeAction() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
constexpr void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__set_m_innerTask(::System::Threading::Tasks::Task*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task*, 0x20>(this, std::forward<::System::Threading::Tasks::Task*>(value));
}
constexpr ::System::Threading::Tasks::Task* System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__get_m_innerTask()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::__get_m_innerTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x20>(this);
}
inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper* System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::New_ctor(::System::Action*  continuation, ::System::Action*  invokeAction, ::System::Threading::Tasks::Task*  innerTask)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper*>(continuation, invokeAction, innerTask));
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::_ctor(::System::Action*  continuation, ::System::Action*  invokeAction, ::System::Threading::Tasks::Task*  innerTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, continuation, invokeAction, innerTask);
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__ContinuationWrapper*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::*)()>(&::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24de570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0._OutputAsyncCausalityEvents_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::*)()>(&::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::_OutputAsyncCausalityEvents_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x24de578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0*>::get(),
                            "<OutputAsyncCausalityEvents>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::__set_innerTask(::System::Threading::Tasks::Task*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task*, 0x10>(this, std::forward<::System::Threading::Tasks::Task*>(value));
}
constexpr ::System::Threading::Tasks::Task* System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::__get_innerTask()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::__get_innerTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x10>(this);
}
constexpr void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::__set_continuation(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x18>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::__get_continuation()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::__get_continuation() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0* System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0*>());
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0::_OutputAsyncCausalityEvents_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c__DisplayClass5_0*>::get(),
                            "<OutputAsyncCausalityEvents>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::*)()>(&::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24de638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c._ThrowAsync_b__7_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::*)(::System::Object*)>(&::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::_ThrowAsync_b__7_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x24de640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get(),
                            "<ThrowAsync>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c._ThrowAsync_b__7_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::*)(::System::Object*)>(&::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::_ThrowAsync_b__7_1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x24de6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get(),
                            "<ThrowAsync>b__7_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::setStaticF___9(::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*  value)  {
::cordl_internals::setStaticField<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get>(std::forward<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>(value));
}
inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c* System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get>();
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::setStaticF___9__7_0(::System::Threading::SendOrPostCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback*, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get>(std::forward<::System::Threading::SendOrPostCallback*>(value));
}
inline ::System::Threading::SendOrPostCallback* System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback*, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get>();
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::setStaticF___9__7_1(::System::Threading::WaitCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "<>9__7_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get>(std::forward<::System::Threading::WaitCallback*>(value));
}
inline ::System::Threading::WaitCallback* System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::getStaticF___9__7_1()  {
return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "<>9__7_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get>();
}
inline ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c* System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>());
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::_ThrowAsync_b__7_0(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get(),
                            "<ThrowAsync>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
inline void System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c::_ThrowAsync_b__7_1(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore____c*>::get(),
                            "<ThrowAsync>b__7_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderCore.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncMethodBuilderCore::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Runtime::CompilerServices::AsyncMethodBuilderCore::SetStateMachine)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x24dc3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderCore.GetCompletionAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (::System::Runtime::CompilerServices::AsyncMethodBuilderCore::*)(::System::Threading::Tasks::Task*, ByRef<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>)>(&::System::Runtime::CompilerServices::AsyncMethodBuilderCore::GetCompletionAction)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x24dcc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(),
                            "GetCompletionAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderCore.OutputAsyncCausalityEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (::System::Runtime::CompilerServices::AsyncMethodBuilderCore::*)(::System::Threading::Tasks::Task*, ::System::Action*)>(&::System::Runtime::CompilerServices::AsyncMethodBuilderCore::OutputAsyncCausalityEvents)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x24dce2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(),
                            "OutputAsyncCausalityEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderCore.PostBoxInitialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncMethodBuilderCore::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*, ::System::Threading::Tasks::Task*)>(&::System::Runtime::CompilerServices::AsyncMethodBuilderCore::PostBoxInitialization)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x24dcfb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(),
                            "PostBoxInitialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderCore.ThrowAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*, ::System::Threading::SynchronizationContext*)>(&::System::Runtime::CompilerServices::AsyncMethodBuilderCore::ThrowAsync)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x24dc750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(),
                            "ThrowAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderCore.CreateContinuationWrapper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (*)(::System::Action*, ::System::Action*, ::System::Threading::Tasks::Task*)>(&::System::Runtime::CompilerServices::AsyncMethodBuilderCore::CreateContinuationWrapper)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x24dceec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(),
                            "CreateContinuationWrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderCore.TryGetContinuationTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Action*)>(&::System::Runtime::CompilerServices::AsyncMethodBuilderCore::TryGetContinuationTask)> {
  constexpr static std::size_t size = 0x1094;
  constexpr static std::size_t addrs = 0x24dd150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(),
                            "TryGetContinuationTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::CompilerServices::AsyncMethodBuilderCore::__set_m_stateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::IAsyncStateMachine*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::IAsyncStateMachine*>(value));
}
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Runtime::CompilerServices::AsyncMethodBuilderCore::__get_m_stateMachine()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::IAsyncStateMachine*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::CompilerServices::IAsyncStateMachine*> System::Runtime::CompilerServices::AsyncMethodBuilderCore::__get_m_stateMachine() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::IAsyncStateMachine*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Runtime::CompilerServices::AsyncMethodBuilderCore::__set_m_defaultContextAction(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* System::Runtime::CompilerServices::AsyncMethodBuilderCore::__get_m_defaultContextAction()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> System::Runtime::CompilerServices::AsyncMethodBuilderCore::__get_m_defaultContextAction() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Runtime::CompilerServices::AsyncMethodBuilderCore::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
inline ::System::Action* System::Runtime::CompilerServices::AsyncMethodBuilderCore::GetCompletionAction(::System::Threading::Tasks::Task*  taskForTracing, ByRef<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>  runnerToInitialize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(),
                            "GetCompletionAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(*this, ___internal_method, taskForTracing, runnerToInitialize);
}
inline ::System::Action* System::Runtime::CompilerServices::AsyncMethodBuilderCore::OutputAsyncCausalityEvents(::System::Threading::Tasks::Task*  innerTask, ::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(),
                            "OutputAsyncCausalityEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(*this, ___internal_method, innerTask, continuation);
}
inline void System::Runtime::CompilerServices::AsyncMethodBuilderCore::PostBoxInitialization(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine, ::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*  runner, ::System::Threading::Tasks::Task*  builtTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(),
                            "PostBoxInitialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::__AsyncMethodBuilderCore__MoveNextRunner*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine, runner, builtTask);
}
inline void System::Runtime::CompilerServices::AsyncMethodBuilderCore::ThrowAsync(::System::Exception*  exception, ::System::Threading::SynchronizationContext*  targetContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(),
                            "ThrowAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, exception, targetContext);
}
/// @param innerTask: ::System::Threading::Tasks::Task* (default: csnull)
inline ::System::Action* System::Runtime::CompilerServices::AsyncMethodBuilderCore::CreateContinuationWrapper(::System::Action*  continuation, ::System::Action*  invokeAction, ::System::Threading::Tasks::Task*  innerTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(),
                            "CreateContinuationWrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(nullptr, ___internal_method, continuation, invokeAction, innerTask);
}
inline ::System::Threading::Tasks::Task* System::Runtime::CompilerServices::AsyncMethodBuilderCore::TryGetContinuationTask(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderCore>::get(),
                            "TryGetContinuationTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, action);
}
// Ctor Parameters [CppParam { name: "m_stateMachine", ty: "::System::Runtime::CompilerServices::IAsyncStateMachine*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_defaultContextAction", ty: "::System::Action*", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderCore::AsyncMethodBuilderCore(::System::Runtime::CompilerServices::IAsyncStateMachine*  m_stateMachine, ::System::Action*  m_defaultContextAction) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->m_stateMachine = m_stateMachine;
this->m_defaultContextAction = m_defaultContextAction;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
