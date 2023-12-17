#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ThreadHelper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
//  Writing Method size for method: ::System::Threading::ThreadHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadHelper::*)(::System::Delegate*)>(&::System::Threading::ThreadHelper::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26192a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadHelper.SetExecutionContextHelper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadHelper::*)(::System::Threading::ExecutionContext*)>(&::System::Threading::ThreadHelper::SetExecutionContextHelper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26192c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(),
                            "SetExecutionContextHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadHelper.ThreadStart_Context
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Threading::ThreadHelper::ThreadStart_Context)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x26192d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(),
                            "ThreadStart_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadHelper.ThreadStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadHelper::*)(::System::Object*)>(&::System::Threading::ThreadHelper::ThreadStart)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x26193dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(),
                            "ThreadStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadHelper.ThreadStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadHelper::*)()>(&::System::Threading::ThreadHelper::ThreadStart)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x26194dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(),
                            "ThreadStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::ThreadHelper::__set__start(::System::Delegate*  value)  {
::cordl_internals::setInstanceField<::System::Delegate*, 0x10>(this, std::forward<::System::Delegate*>(value));
}
constexpr ::System::Delegate* System::Threading::ThreadHelper::__get__start()  {
return ::cordl_internals::getInstanceField<::System::Delegate*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Delegate*> System::Threading::ThreadHelper::__get__start() const {
return ::cordl_internals::getInstanceField<::System::Delegate*, 0x10>(this);
}
constexpr void System::Threading::ThreadHelper::__set__startArg(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Threading::ThreadHelper::__get__startArg()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Threading::ThreadHelper::__get__startArg() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void System::Threading::ThreadHelper::__set__executionContext(::System::Threading::ExecutionContext*  value)  {
::cordl_internals::setInstanceField<::System::Threading::ExecutionContext*, 0x20>(this, std::forward<::System::Threading::ExecutionContext*>(value));
}
constexpr ::System::Threading::ExecutionContext* System::Threading::ThreadHelper::__get__executionContext()  {
return ::cordl_internals::getInstanceField<::System::Threading::ExecutionContext*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> System::Threading::ThreadHelper::__get__executionContext() const {
return ::cordl_internals::getInstanceField<::System::Threading::ExecutionContext*, 0x20>(this);
}
inline void System::Threading::ThreadHelper::setStaticF__ccb(::System::Threading::ContextCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "_ccb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get>(std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Threading::ThreadHelper::getStaticF__ccb()  {
return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "_ccb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get>();
}
inline ::System::Threading::ThreadHelper* System::Threading::ThreadHelper::New_ctor(::System::Delegate*  start)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::ThreadHelper*>(start));
}
inline void System::Threading::ThreadHelper::_ctor(::System::Delegate*  start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, start);
}
inline void System::Threading::ThreadHelper::SetExecutionContextHelper(::System::Threading::ExecutionContext*  ec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(),
                            "SetExecutionContextHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ec);
}
inline void System::Threading::ThreadHelper::ThreadStart_Context(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(),
                            "ThreadStart_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
inline void System::Threading::ThreadHelper::ThreadStart(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(),
                            "ThreadStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj);
}
inline void System::Threading::ThreadHelper::ThreadStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadHelper*>::get(),
                            "ThreadStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
