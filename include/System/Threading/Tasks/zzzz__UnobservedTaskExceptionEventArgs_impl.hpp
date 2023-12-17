#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Threading/Tasks/zzzz__UnobservedTaskExceptionEventArgs_def.hpp"
#include "System/zzzz__AggregateException_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::*)(::System::AggregateException*)>(&::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x262c9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AggregateException*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__set_m_exception(::System::AggregateException*  value)  {
::cordl_internals::setInstanceField<::System::AggregateException*, 0x10>(this, std::forward<::System::AggregateException*>(value));
}
constexpr ::System::AggregateException* System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__get_m_exception()  {
return ::cordl_internals::getInstanceField<::System::AggregateException*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::AggregateException*> System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__get_m_exception() const {
return ::cordl_internals::getInstanceField<::System::AggregateException*, 0x10>(this);
}
constexpr void System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__set_m_observed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__get_m_observed()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__get_m_observed() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
inline ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* System::Threading::Tasks::UnobservedTaskExceptionEventArgs::New_ctor(::System::AggregateException*  exception)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>(exception));
}
inline void System::Threading::Tasks::UnobservedTaskExceptionEventArgs::_ctor(::System::AggregateException*  exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AggregateException*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, exception);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
