#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SceneContext_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncSceneContext_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncSceneContext_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstallerRegistry_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext__State::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BGLib::AppFlow::Initialization::__AsyncSceneContext__State::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BGLib::AppFlow::Initialization::__AsyncSceneContext__State::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State::__AsyncSceneContext__State(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State  BGLib::AppFlow::Initialization::__AsyncSceneContext__State::NotInitialized{static_cast<int32_t>(0x0)};
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State  BGLib::AppFlow::Initialization::__AsyncSceneContext__State::Initializing{static_cast<int32_t>(0x1)};
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State  BGLib::AppFlow::Initialization::__AsyncSceneContext__State::Initialized{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::*)()>(&::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xe242dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe24454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::__set___4__this(::BGLib::AppFlow::Initialization::AsyncSceneContext*  value)  {
::cordl_internals::setInstanceField<::BGLib::AppFlow::Initialization::AsyncSceneContext*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(value));
}
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext* BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::__get___4__this()  {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::AsyncSceneContext*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::AsyncSceneContext*> BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::__get___4__this() const {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::AsyncSceneContext*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGLib::AppFlow::Initialization::AsyncSceneContext*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::__AsyncSceneContext___Run_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::BGLib::AppFlow::Initialization::AsyncSceneContext*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::*)()>(&::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xe24460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe247e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::__set___4__this(::BGLib::AppFlow::Initialization::AsyncSceneContext*  value)  {
::cordl_internals::setInstanceField<::BGLib::AppFlow::Initialization::AsyncSceneContext*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(value));
}
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext* BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::__get___4__this()  {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::AsyncSceneContext*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::AsyncSceneContext*> BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::__get___4__this() const {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::AsyncSceneContext*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>& BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> const& BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGLib::AppFlow::Initialization::AsyncSceneContext*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::__AsyncSceneContext___RunAsync_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::BGLib::AppFlow::Initialization::AsyncSceneContext*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0::*)()>(&::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe247ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0._LoadInstallersAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0::*)(::BGLib::AppFlow::Initialization::AsyncInstaller*)>(&::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0::_LoadInstallersAsync_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe247f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0*>::get(),
                            "<LoadInstallersAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::AsyncInstaller*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0::__set_registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*  value)  {
::cordl_internals::setInstanceField<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*, 0x10>(this, std::forward<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>(value));
}
constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0::__get_registry()  {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0::__get_registry() const {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*, 0x10>(this);
}
inline ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0* BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0*>());
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0::_LoadInstallersAsync_b__0(::BGLib::AppFlow::Initialization::AsyncInstaller*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0*>::get(),
                            "<LoadInstallersAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::AsyncInstaller*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, r);
}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::*)()>(&::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xe2481c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe24b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>& BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> const& BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::__set___4__this(::BGLib::AppFlow::Initialization::AsyncSceneContext*  value)  {
::cordl_internals::setInstanceField<::BGLib::AppFlow::Initialization::AsyncSceneContext*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(value));
}
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext* BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::__get___4__this()  {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::AsyncSceneContext*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::AsyncSceneContext*> BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::__get___4__this() const {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::AsyncSceneContext*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::__set___8__1(::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0*  value)  {
::cordl_internals::setInstanceField<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0*>(value));
}
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0* BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::__get___8__1()  {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0*> BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::__get___8__1() const {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGLib::AppFlow::Initialization::AsyncSceneContext*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__8__1", ty: "::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6::__AsyncSceneContext___LoadInstallersAsync_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>  __t__builder, ::BGLib::AppFlow::Initialization::AsyncSceneContext*  __4__this, ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(&::BGLib::AppFlow::Initialization::AsyncSceneContext::Run)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xe23e44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.RunAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(&::BGLib::AppFlow::Initialization::AsyncSceneContext::RunAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xe1e204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                            "RunAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.LoadInstallersAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>* (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(&::BGLib::AppFlow::Initialization::AsyncSceneContext::LoadInstallersAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xe23ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                            "LoadInstallersAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.InstallInstallers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(&::BGLib::AppFlow::Initialization::AsyncSceneContext::InstallInstallers)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xe23fcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(&::BGLib::AppFlow::Initialization::AsyncSceneContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe242cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.__n__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(&::BGLib::AppFlow::Initialization::AsyncSceneContext::__n__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe242d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                            "<>n__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext::__set__asyncInstallers(::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::AsyncInstaller*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::AsyncInstaller*>*, 0xb8>(this, std::forward<::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::AsyncInstaller*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::AsyncInstaller*>* BGLib::AppFlow::Initialization::AsyncSceneContext::__get__asyncInstallers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::AsyncInstaller*>*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::AsyncInstaller*>*> BGLib::AppFlow::Initialization::AsyncSceneContext::__get__asyncInstallers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::AsyncInstaller*>*, 0xb8>(this);
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext::__set__state(::BGLib::AppFlow::Initialization::__AsyncSceneContext__State  value)  {
::cordl_internals::setInstanceField<::BGLib::AppFlow::Initialization::__AsyncSceneContext__State, 0xc0>(this, std::forward<::BGLib::AppFlow::Initialization::__AsyncSceneContext__State>(value));
}
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State& BGLib::AppFlow::Initialization::AsyncSceneContext::__get__state()  {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::__AsyncSceneContext__State, 0xc0>(this);
}
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State const& BGLib::AppFlow::Initialization::AsyncSceneContext::__get__state() const {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::__AsyncSceneContext__State, 0xc0>(this);
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext::__set__registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*  value)  {
::cordl_internals::setInstanceField<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*, 0xc8>(this, std::forward<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>(value));
}
constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* BGLib::AppFlow::Initialization::AsyncSceneContext::__get__registry()  {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> BGLib::AppFlow::Initialization::AsyncSceneContext::__get__registry() const {
return ::cordl_internals::getInstanceField<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*, 0xc8>(this);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext::Run()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::AsyncSceneContext::RunAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                            "RunAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>* BGLib::AppFlow::Initialization::AsyncSceneContext::LoadInstallersAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                            "LoadInstallersAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>*, false>(*this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext::InstallInstallers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                            "InstallInstallers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::BGLib::AppFlow::Initialization::AsyncSceneContext* BGLib::AppFlow::Initialization::AsyncSceneContext::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BGLib::AppFlow::Initialization::AsyncSceneContext*>());
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext::__n__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                            "<>n__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
