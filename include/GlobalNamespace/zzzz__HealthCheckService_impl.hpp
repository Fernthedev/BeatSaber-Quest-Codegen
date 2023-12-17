#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HealthCheckService_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "GlobalNamespace/zzzz__IHealthCheckService_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthCheckService._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthCheckService::*)(int32_t)>(&::GlobalNamespace::HealthCheckService::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xe3c368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthCheckService.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthCheckService::*)()>(&::GlobalNamespace::HealthCheckService::Dispose)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe3c46c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthCheckService.PollUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthCheckService::*)()>(&::GlobalNamespace::HealthCheckService::PollUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xe3c510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService*>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthCheckService.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthCheckService::*)()>(&::GlobalNamespace::HealthCheckService::Run)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0xe3c5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService*>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IHealthCheckService"
constexpr  GlobalNamespace::HealthCheckService::operator ::GlobalNamespace::IHealthCheckService*() noexcept {
return static_cast<::GlobalNamespace::IHealthCheckService*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr  GlobalNamespace::HealthCheckService::operator ::GlobalNamespace::IPollable*() noexcept {
return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::HealthCheckService::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::HealthCheckService::__set__port(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::HealthCheckService::__get__port()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::HealthCheckService::__get__port() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::HealthCheckService::__set__runThread(::System::Threading::Thread*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Thread*, 0x18>(this, std::forward<::System::Threading::Thread*>(value));
}
constexpr ::System::Threading::Thread* GlobalNamespace::HealthCheckService::__get__runThread()  {
return ::cordl_internals::getInstanceField<::System::Threading::Thread*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> GlobalNamespace::HealthCheckService::__get__runThread() const {
return ::cordl_internals::getInstanceField<::System::Threading::Thread*, 0x18>(this);
}
constexpr void GlobalNamespace::HealthCheckService::__set__disposed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::HealthCheckService::__get__disposed()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& GlobalNamespace::HealthCheckService::__get__disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void GlobalNamespace::HealthCheckService::__set__manualResetEvent(::System::Threading::ManualResetEvent*  value)  {
::cordl_internals::setInstanceField<::System::Threading::ManualResetEvent*, 0x28>(this, std::forward<::System::Threading::ManualResetEvent*>(value));
}
constexpr ::System::Threading::ManualResetEvent* GlobalNamespace::HealthCheckService::__get__manualResetEvent()  {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> GlobalNamespace::HealthCheckService::__get__manualResetEvent() const {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x28>(this);
}
constexpr void GlobalNamespace::HealthCheckService::__set__listener(::System::Net::HttpListener*  value)  {
::cordl_internals::setInstanceField<::System::Net::HttpListener*, 0x30>(this, std::forward<::System::Net::HttpListener*>(value));
}
constexpr ::System::Net::HttpListener* GlobalNamespace::HealthCheckService::__get__listener()  {
return ::cordl_internals::getInstanceField<::System::Net::HttpListener*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListener*> GlobalNamespace::HealthCheckService::__get__listener() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpListener*, 0x30>(this);
}
inline ::GlobalNamespace::HealthCheckService* GlobalNamespace::HealthCheckService::New_ctor(int32_t  port)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HealthCheckService*>(port));
}
inline void GlobalNamespace::HealthCheckService::_ctor(int32_t  port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, port);
}
inline void GlobalNamespace::HealthCheckService::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthCheckService::PollUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService*>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthCheckService::Run()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService*>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
