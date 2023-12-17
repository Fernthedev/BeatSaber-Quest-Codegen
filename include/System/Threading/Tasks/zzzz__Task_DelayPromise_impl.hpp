#pragma once
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_DelayPromise_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::__Task__DelayPromise._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__Task__DelayPromise::*)(::System::Threading::CancellationToken)>(&::System::Threading::Tasks::__Task__DelayPromise::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2629114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__DelayPromise*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__Task__DelayPromise.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__Task__DelayPromise::*)()>(&::System::Threading::Tasks::__Task__DelayPromise::Complete)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x262acb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__DelayPromise*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::__Task__DelayPromise::__set_Token(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x58>(this, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& System::Threading::Tasks::__Task__DelayPromise::__get_Token()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x58>(this);
}
constexpr ::System::Threading::CancellationToken const& System::Threading::Tasks::__Task__DelayPromise::__get_Token() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x58>(this);
}
constexpr void System::Threading::Tasks::__Task__DelayPromise::__set_Registration(::System::Threading::CancellationTokenRegistration  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenRegistration, 0x60>(this, std::forward<::System::Threading::CancellationTokenRegistration>(value));
}
constexpr ::System::Threading::CancellationTokenRegistration& System::Threading::Tasks::__Task__DelayPromise::__get_Registration()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenRegistration, 0x60>(this);
}
constexpr ::System::Threading::CancellationTokenRegistration const& System::Threading::Tasks::__Task__DelayPromise::__get_Registration() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenRegistration, 0x60>(this);
}
constexpr void System::Threading::Tasks::__Task__DelayPromise::__set_Timer(::System::Threading::Timer*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Timer*, 0x78>(this, std::forward<::System::Threading::Timer*>(value));
}
constexpr ::System::Threading::Timer* System::Threading::Tasks::__Task__DelayPromise::__get_Timer()  {
return ::cordl_internals::getInstanceField<::System::Threading::Timer*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Timer*> System::Threading::Tasks::__Task__DelayPromise::__get_Timer() const {
return ::cordl_internals::getInstanceField<::System::Threading::Timer*, 0x78>(this);
}
inline ::System::Threading::Tasks::__Task__DelayPromise* System::Threading::Tasks::__Task__DelayPromise::New_ctor(::System::Threading::CancellationToken  token)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::__Task__DelayPromise*>(token));
}
inline void System::Threading::Tasks::__Task__DelayPromise::_ctor(::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__DelayPromise*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, token);
}
inline void System::Threading::Tasks::__Task__DelayPromise::Complete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__DelayPromise*>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
