#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__ProcessThreadTimes_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::ProcessThreadTimes.get_TotalProcessorTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Diagnostics::ProcessThreadTimes::*)()>(&::System::Diagnostics::ProcessThreadTimes::get_TotalProcessorTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2970134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessThreadTimes*>::get(),
                            "get_TotalProcessorTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessThreadTimes._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::ProcessThreadTimes::*)()>(&::System::Diagnostics::ProcessThreadTimes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296fd30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessThreadTimes*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Diagnostics::ProcessThreadTimes::__set_create(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Diagnostics::ProcessThreadTimes::__get_create()  {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr int64_t const& System::Diagnostics::ProcessThreadTimes::__get_create() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr void System::Diagnostics::ProcessThreadTimes::__set_exit(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Diagnostics::ProcessThreadTimes::__get_exit()  {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
constexpr int64_t const& System::Diagnostics::ProcessThreadTimes::__get_exit() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
constexpr void System::Diagnostics::ProcessThreadTimes::__set_kernel(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Diagnostics::ProcessThreadTimes::__get_kernel()  {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr int64_t const& System::Diagnostics::ProcessThreadTimes::__get_kernel() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr void System::Diagnostics::ProcessThreadTimes::__set_user(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Diagnostics::ProcessThreadTimes::__get_user()  {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this);
}
constexpr int64_t const& System::Diagnostics::ProcessThreadTimes::__get_user() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this);
}
inline ::System::TimeSpan System::Diagnostics::ProcessThreadTimes::get_TotalProcessorTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessThreadTimes*>::get(),
                            "get_TotalProcessorTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(*this, ___internal_method);
}
inline ::System::Diagnostics::ProcessThreadTimes* System::Diagnostics::ProcessThreadTimes::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::ProcessThreadTimes*>());
}
inline void System::Diagnostics::ProcessThreadTimes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessThreadTimes*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
