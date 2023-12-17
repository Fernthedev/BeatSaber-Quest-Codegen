#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CPUMonitor_def.hpp"
#include "GlobalNamespace/zzzz__RollingAverage_def.hpp"
#include "GlobalNamespace/zzzz__ICPUMonitor_def.hpp"
#include "System/Diagnostics/zzzz__Process_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CPUMonitor.PollUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CPUMonitor::*)()>(&::GlobalNamespace::CPUMonitor::PollUpdate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xe32340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CPUMonitor*>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CPUMonitor.get_utilization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::CPUMonitor::*)()>(&::GlobalNamespace::CPUMonitor::get_utilization)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe32438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CPUMonitor*>::get(),
                            "get_utilization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CPUMonitor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CPUMonitor::*)()>(&::GlobalNamespace::CPUMonitor::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xe32460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CPUMonitor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ICPUMonitor"
constexpr  GlobalNamespace::CPUMonitor::operator ::GlobalNamespace::ICPUMonitor*() noexcept {
return static_cast<::GlobalNamespace::ICPUMonitor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr  GlobalNamespace::CPUMonitor::operator ::GlobalNamespace::IPollable*() noexcept {
return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::CPUMonitor::__set__utilization(::GlobalNamespace::RollingAverage*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RollingAverage*, 0x10>(this, std::forward<::GlobalNamespace::RollingAverage*>(value));
}
constexpr ::GlobalNamespace::RollingAverage* GlobalNamespace::CPUMonitor::__get__utilization()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RollingAverage*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RollingAverage*> GlobalNamespace::CPUMonitor::__get__utilization() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RollingAverage*, 0x10>(this);
}
constexpr void GlobalNamespace::CPUMonitor::__set__currentProcess(::System::Diagnostics::Process*  value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::Process*, 0x18>(this, std::forward<::System::Diagnostics::Process*>(value));
}
constexpr ::System::Diagnostics::Process* GlobalNamespace::CPUMonitor::__get__currentProcess()  {
return ::cordl_internals::getInstanceField<::System::Diagnostics::Process*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Process*> GlobalNamespace::CPUMonitor::__get__currentProcess() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::Process*, 0x18>(this);
}
constexpr void GlobalNamespace::CPUMonitor::__set__processorCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::CPUMonitor::__get__processorCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& GlobalNamespace::CPUMonitor::__get__processorCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void GlobalNamespace::CPUMonitor::__set__lastSampleTime(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::CPUMonitor::__get__lastSampleTime()  {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this);
}
constexpr int64_t const& GlobalNamespace::CPUMonitor::__get__lastSampleTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this);
}
constexpr void GlobalNamespace::CPUMonitor::__set__lastSampleValue(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x30>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::CPUMonitor::__get__lastSampleValue()  {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this);
}
constexpr int64_t const& GlobalNamespace::CPUMonitor::__get__lastSampleValue() const {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this);
}
inline void GlobalNamespace::CPUMonitor::PollUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CPUMonitor*>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::CPUMonitor::get_utilization()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CPUMonitor*>::get(),
                            "get_utilization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::CPUMonitor* GlobalNamespace::CPUMonitor::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CPUMonitor*>());
}
inline void GlobalNamespace::CPUMonitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CPUMonitor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
