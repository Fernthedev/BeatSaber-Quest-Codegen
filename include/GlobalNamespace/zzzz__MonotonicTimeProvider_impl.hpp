#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MonotonicTimeProvider_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonotonicTimeProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MonotonicTimeProvider::*)()>(&::GlobalNamespace::MonotonicTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xe49884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonotonicTimeProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonotonicTimeProvider.GetTimeMs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::MonotonicTimeProvider::*)()>(&::GlobalNamespace::MonotonicTimeProvider::GetTimeMs)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe49a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonotonicTimeProvider*>::get(),
                            "GetTimeMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonotonicTimeProvider.GetTicks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::MonotonicTimeProvider::*)()>(&::GlobalNamespace::MonotonicTimeProvider::GetTicks)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe49a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonotonicTimeProvider*>::get(),
                            "GetTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGNet::Core::ITimeProvider"
constexpr  GlobalNamespace::MonotonicTimeProvider::operator ::BGNet::Core::ITimeProvider*() noexcept {
return static_cast<::BGNet::Core::ITimeProvider*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::MonotonicTimeProvider::__set__timeSpanTicksPerStopwatchTick(double_t  value)  {
::cordl_internals::setInstanceField<double_t, 0x10>(this, std::forward<double_t>(value));
}
constexpr double_t& GlobalNamespace::MonotonicTimeProvider::__get__timeSpanTicksPerStopwatchTick()  {
return ::cordl_internals::getInstanceField<double_t, 0x10>(this);
}
constexpr double_t const& GlobalNamespace::MonotonicTimeProvider::__get__timeSpanTicksPerStopwatchTick() const {
return ::cordl_internals::getInstanceField<double_t, 0x10>(this);
}
constexpr void GlobalNamespace::MonotonicTimeProvider::__set__startTicks(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::MonotonicTimeProvider::__get__startTicks()  {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
constexpr int64_t const& GlobalNamespace::MonotonicTimeProvider::__get__startTicks() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
constexpr void GlobalNamespace::MonotonicTimeProvider::__set__stopwatch(::System::Diagnostics::Stopwatch*  value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::Stopwatch*, 0x20>(this, std::forward<::System::Diagnostics::Stopwatch*>(value));
}
constexpr ::System::Diagnostics::Stopwatch* GlobalNamespace::MonotonicTimeProvider::__get__stopwatch()  {
return ::cordl_internals::getInstanceField<::System::Diagnostics::Stopwatch*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> GlobalNamespace::MonotonicTimeProvider::__get__stopwatch() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::Stopwatch*, 0x20>(this);
}
inline void GlobalNamespace::MonotonicTimeProvider::setStaticF_instance(::GlobalNamespace::MonotonicTimeProvider*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MonotonicTimeProvider*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonotonicTimeProvider*>::get>(std::forward<::GlobalNamespace::MonotonicTimeProvider*>(value));
}
inline ::GlobalNamespace::MonotonicTimeProvider* GlobalNamespace::MonotonicTimeProvider::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MonotonicTimeProvider*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonotonicTimeProvider*>::get>();
}
inline ::GlobalNamespace::MonotonicTimeProvider* GlobalNamespace::MonotonicTimeProvider::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MonotonicTimeProvider*>());
}
inline void GlobalNamespace::MonotonicTimeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonotonicTimeProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int64_t GlobalNamespace::MonotonicTimeProvider::GetTimeMs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonotonicTimeProvider*>::get(),
                            "GetTimeMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline int64_t GlobalNamespace::MonotonicTimeProvider::GetTicks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonotonicTimeProvider*>::get(),
                            "GetTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
