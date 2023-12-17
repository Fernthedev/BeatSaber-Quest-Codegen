#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "HMUI/zzzz__ScreenSystem_def.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass37_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass37_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2127650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass37_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass37_0._PresentFlowCoordinator_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass37_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass37_0::_PresentFlowCoordinator_b__1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2128dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass37_0*>::get(),
                            "<PresentFlowCoordinator>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass37_0._PresentFlowCoordinator_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass37_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass37_0::_PresentFlowCoordinator_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2128e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass37_0*>::get(),
                            "<PresentFlowCoordinator>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__FlowCoordinator____c__DisplayClass37_0::__set_finishedCallback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x10>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* HMUI::__FlowCoordinator____c__DisplayClass37_0::__get_finishedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> HMUI::__FlowCoordinator____c__DisplayClass37_0::__get_finishedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass37_0::__set_flowCoordinator(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x18>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::__FlowCoordinator____c__DisplayClass37_0::__get_flowCoordinator()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::__FlowCoordinator____c__DisplayClass37_0::__get_flowCoordinator() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass37_0::__set___4__this(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x20>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::__FlowCoordinator____c__DisplayClass37_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::__FlowCoordinator____c__DisplayClass37_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x20>(this);
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass37_0* HMUI::__FlowCoordinator____c__DisplayClass37_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__FlowCoordinator____c__DisplayClass37_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass37_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass37_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass37_0::_PresentFlowCoordinator_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass37_0*>::get(),
                            "<PresentFlowCoordinator>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass37_0::_PresentFlowCoordinator_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass37_0*>::get(),
                            "<PresentFlowCoordinator>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass38_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass38_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass38_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2127c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass38_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass38_0._DismissFlowCoordinator_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass38_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass38_0::_DismissFlowCoordinator_b__0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2128eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass38_0*>::get(),
                            "<DismissFlowCoordinator>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__FlowCoordinator____c__DisplayClass38_0::__set_immediately(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::__FlowCoordinator____c__DisplayClass38_0::__get_immediately()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& HMUI::__FlowCoordinator____c__DisplayClass38_0::__get_immediately() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass38_0::__set___4__this(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x18>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::__FlowCoordinator____c__DisplayClass38_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::__FlowCoordinator____c__DisplayClass38_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass38_0::__set_finishedCallback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x20>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* HMUI::__FlowCoordinator____c__DisplayClass38_0::__get_finishedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> HMUI::__FlowCoordinator____c__DisplayClass38_0::__get_finishedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass38_0::__set_viewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0x28>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* HMUI::__FlowCoordinator____c__DisplayClass38_0::__get_viewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> HMUI::__FlowCoordinator____c__DisplayClass38_0::__get_viewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x28>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass38_0::__set_flowCoordinator(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x30>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::__FlowCoordinator____c__DisplayClass38_0::__get_flowCoordinator()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::__FlowCoordinator____c__DisplayClass38_0::__get_flowCoordinator() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x30>(this);
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass38_0* HMUI::__FlowCoordinator____c__DisplayClass38_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__FlowCoordinator____c__DisplayClass38_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass38_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass38_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass38_0::_DismissFlowCoordinator_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass38_0*>::get(),
                            "<DismissFlowCoordinator>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::*)()>(&::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x2128f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2129230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::__set___4__this(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::__get___4__this()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::__set_immediately(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::__get_immediately()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::__get_immediately() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::HMUI::FlowCoordinator*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "immediately", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::HMUI::FlowCoordinator*  __4__this, bool  immediately, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->immediately = immediately;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::*)()>(&::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x212923c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2129418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::__set___4__this(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::__get___4__this()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::__set_immediately(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::__get_immediately()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::__get_immediately() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::HMUI::FlowCoordinator*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "immediately", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40::__FlowCoordinator___DismissChildViewControllersRecursively_d__40(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::HMUI::FlowCoordinator*  __4__this, bool  immediately, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->immediately = immediately;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass41_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass41_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass41_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2128110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass41_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass41_0._ReplaceChildFlowCoordinator_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass41_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass41_0::_ReplaceChildFlowCoordinator_b__0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2129424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass41_0*>::get(),
                            "<ReplaceChildFlowCoordinator>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__FlowCoordinator____c__DisplayClass41_0::__set_finishedCallback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x10>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* HMUI::__FlowCoordinator____c__DisplayClass41_0::__get_finishedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> HMUI::__FlowCoordinator____c__DisplayClass41_0::__get_finishedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass41_0::__set_flowCoordinator(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x18>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::__FlowCoordinator____c__DisplayClass41_0::__get_flowCoordinator()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::__FlowCoordinator____c__DisplayClass41_0::__get_flowCoordinator() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass41_0::__set___4__this(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x20>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::__FlowCoordinator____c__DisplayClass41_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::__FlowCoordinator____c__DisplayClass41_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x20>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass41_0::__set_flowCoordinatorToReplace(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x28>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::__FlowCoordinator____c__DisplayClass41_0::__get_flowCoordinatorToReplace()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::__FlowCoordinator____c__DisplayClass41_0::__get_flowCoordinatorToReplace() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x28>(this);
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass41_0* HMUI::__FlowCoordinator____c__DisplayClass41_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__FlowCoordinator____c__DisplayClass41_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass41_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass41_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass41_0::_ReplaceChildFlowCoordinator_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass41_0*>::get(),
                            "<ReplaceChildFlowCoordinator>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass42_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass42_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass42_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2128118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass42_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass42_0._PresentViewController_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass42_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass42_0::_PresentViewController_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21294c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass42_0*>::get(),
                            "<PresentViewController>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__FlowCoordinator____c__DisplayClass42_0::__set_immediately(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::__FlowCoordinator____c__DisplayClass42_0::__get_immediately()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& HMUI::__FlowCoordinator____c__DisplayClass42_0::__get_immediately() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass42_0::__set___4__this(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x18>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::__FlowCoordinator____c__DisplayClass42_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::__FlowCoordinator____c__DisplayClass42_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass42_0::__set_finishedCallback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x20>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* HMUI::__FlowCoordinator____c__DisplayClass42_0::__get_finishedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> HMUI::__FlowCoordinator____c__DisplayClass42_0::__get_finishedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass42_0::__set_topViewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0x28>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* HMUI::__FlowCoordinator____c__DisplayClass42_0::__get_topViewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> HMUI::__FlowCoordinator____c__DisplayClass42_0::__get_topViewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x28>(this);
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass42_0* HMUI::__FlowCoordinator____c__DisplayClass42_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__FlowCoordinator____c__DisplayClass42_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass42_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass42_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass42_0::_PresentViewController_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass42_0*>::get(),
                            "<PresentViewController>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass43_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass43_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass43_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2128358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass43_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass43_0._DismissViewController_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass43_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass43_0::_DismissViewController_b__0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2129544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass43_0*>::get(),
                            "<DismissViewController>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__FlowCoordinator____c__DisplayClass43_0::__set_immediately(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::__FlowCoordinator____c__DisplayClass43_0::__get_immediately()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& HMUI::__FlowCoordinator____c__DisplayClass43_0::__get_immediately() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass43_0::__set___4__this(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x18>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::__FlowCoordinator____c__DisplayClass43_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::__FlowCoordinator____c__DisplayClass43_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass43_0::__set_finishedCallback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x20>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* HMUI::__FlowCoordinator____c__DisplayClass43_0::__get_finishedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> HMUI::__FlowCoordinator____c__DisplayClass43_0::__get_finishedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass43_0::__set_newTopViewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0x28>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* HMUI::__FlowCoordinator____c__DisplayClass43_0::__get_newTopViewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> HMUI::__FlowCoordinator____c__DisplayClass43_0::__get_newTopViewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x28>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass43_0::__set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*, 0x30>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* HMUI::__FlowCoordinator____c__DisplayClass43_0::__get_taskCompletionSource()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*> HMUI::__FlowCoordinator____c__DisplayClass43_0::__get_taskCompletionSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*, 0x30>(this);
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass43_0* HMUI::__FlowCoordinator____c__DisplayClass43_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__FlowCoordinator____c__DisplayClass43_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass43_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass43_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass43_0::_DismissViewController_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass43_0*>::get(),
                            "<DismissViewController>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass45_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass45_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass45_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212843c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass45_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass45_0._ReplaceTopViewController_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass45_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass45_0::_ReplaceTopViewController_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2129600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass45_0*>::get(),
                            "<ReplaceTopViewController>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__FlowCoordinator____c__DisplayClass45_0::__set_animationType(::HMUI::__ViewController__AnimationType  value)  {
::cordl_internals::setInstanceField<::HMUI::__ViewController__AnimationType, 0x10>(this, std::forward<::HMUI::__ViewController__AnimationType>(value));
}
constexpr ::HMUI::__ViewController__AnimationType& HMUI::__FlowCoordinator____c__DisplayClass45_0::__get_animationType()  {
return ::cordl_internals::getInstanceField<::HMUI::__ViewController__AnimationType, 0x10>(this);
}
constexpr ::HMUI::__ViewController__AnimationType const& HMUI::__FlowCoordinator____c__DisplayClass45_0::__get_animationType() const {
return ::cordl_internals::getInstanceField<::HMUI::__ViewController__AnimationType, 0x10>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass45_0::__set___4__this(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x18>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::__FlowCoordinator____c__DisplayClass45_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::__FlowCoordinator____c__DisplayClass45_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass45_0::__set_finishedCallback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x20>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* HMUI::__FlowCoordinator____c__DisplayClass45_0::__get_finishedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> HMUI::__FlowCoordinator____c__DisplayClass45_0::__get_finishedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass45_0::__set_originalTopViewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0x28>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* HMUI::__FlowCoordinator____c__DisplayClass45_0::__get_originalTopViewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> HMUI::__FlowCoordinator____c__DisplayClass45_0::__get_originalTopViewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x28>(this);
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass45_0* HMUI::__FlowCoordinator____c__DisplayClass45_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__FlowCoordinator____c__DisplayClass45_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass45_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass45_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass45_0::_ReplaceTopViewController_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass45_0*>::get(),
                            "<ReplaceTopViewController>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass46_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass46_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass46_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2128574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass46_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass46_0._PushViewControllerToNavigationController_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass46_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass46_0::_PushViewControllerToNavigationController_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2129680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass46_0*>::get(),
                            "<PushViewControllerToNavigationController>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__FlowCoordinator____c__DisplayClass46_0::__set_immediately(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::__FlowCoordinator____c__DisplayClass46_0::__get_immediately()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& HMUI::__FlowCoordinator____c__DisplayClass46_0::__get_immediately() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass46_0::__set___4__this(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x18>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::__FlowCoordinator____c__DisplayClass46_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::__FlowCoordinator____c__DisplayClass46_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass46_0::__set_finishedCallback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x20>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* HMUI::__FlowCoordinator____c__DisplayClass46_0::__get_finishedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> HMUI::__FlowCoordinator____c__DisplayClass46_0::__get_finishedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass46_0::__set_viewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0x28>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* HMUI::__FlowCoordinator____c__DisplayClass46_0::__get_viewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> HMUI::__FlowCoordinator____c__DisplayClass46_0::__get_viewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x28>(this);
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass46_0* HMUI::__FlowCoordinator____c__DisplayClass46_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__FlowCoordinator____c__DisplayClass46_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass46_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass46_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass46_0::_PushViewControllerToNavigationController_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass46_0*>::get(),
                            "<PushViewControllerToNavigationController>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass49_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass49_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass49_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21286d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass49_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass49_0._PopViewControllerFromNavigationController_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass49_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass49_0::_PopViewControllerFromNavigationController_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2129700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass49_0*>::get(),
                            "<PopViewControllerFromNavigationController>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__FlowCoordinator____c__DisplayClass49_0::__set_immediately(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::__FlowCoordinator____c__DisplayClass49_0::__get_immediately()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& HMUI::__FlowCoordinator____c__DisplayClass49_0::__get_immediately() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass49_0::__set___4__this(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x18>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::__FlowCoordinator____c__DisplayClass49_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::__FlowCoordinator____c__DisplayClass49_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass49_0::__set_finishedCallback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x20>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* HMUI::__FlowCoordinator____c__DisplayClass49_0::__get_finishedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> HMUI::__FlowCoordinator____c__DisplayClass49_0::__get_finishedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass49_0::__set_navigationController(::HMUI::NavigationController*  value)  {
::cordl_internals::setInstanceField<::HMUI::NavigationController*, 0x28>(this, std::forward<::HMUI::NavigationController*>(value));
}
constexpr ::HMUI::NavigationController* HMUI::__FlowCoordinator____c__DisplayClass49_0::__get_navigationController()  {
return ::cordl_internals::getInstanceField<::HMUI::NavigationController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::NavigationController*> HMUI::__FlowCoordinator____c__DisplayClass49_0::__get_navigationController() const {
return ::cordl_internals::getInstanceField<::HMUI::NavigationController*, 0x28>(this);
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass49_0* HMUI::__FlowCoordinator____c__DisplayClass49_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__FlowCoordinator____c__DisplayClass49_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass49_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass49_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass49_0::_PopViewControllerFromNavigationController_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass49_0*>::get(),
                            "<PopViewControllerFromNavigationController>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass50_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass50_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass50_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212880c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass50_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass50_0._PopViewControllersFromNavigationController_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass50_0::*)()>(&::HMUI::__FlowCoordinator____c__DisplayClass50_0::_PopViewControllersFromNavigationController_b__0)> {
  constexpr static std::size_t size = 0x1080;
  constexpr static std::size_t addrs = 0x2129780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass50_0*>::get(),
                            "<PopViewControllersFromNavigationController>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__FlowCoordinator____c__DisplayClass50_0::__set_immediately(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::__FlowCoordinator____c__DisplayClass50_0::__get_immediately()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& HMUI::__FlowCoordinator____c__DisplayClass50_0::__get_immediately() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass50_0::__set___4__this(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x18>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::__FlowCoordinator____c__DisplayClass50_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::__FlowCoordinator____c__DisplayClass50_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x18>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass50_0::__set_finishedCallback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x20>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* HMUI::__FlowCoordinator____c__DisplayClass50_0::__get_finishedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> HMUI::__FlowCoordinator____c__DisplayClass50_0::__get_finishedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass50_0::__set_navigationController(::HMUI::NavigationController*  value)  {
::cordl_internals::setInstanceField<::HMUI::NavigationController*, 0x28>(this, std::forward<::HMUI::NavigationController*>(value));
}
constexpr ::HMUI::NavigationController* HMUI::__FlowCoordinator____c__DisplayClass50_0::__get_navigationController()  {
return ::cordl_internals::getInstanceField<::HMUI::NavigationController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::NavigationController*> HMUI::__FlowCoordinator____c__DisplayClass50_0::__get_navigationController() const {
return ::cordl_internals::getInstanceField<::HMUI::NavigationController*, 0x28>(this);
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass50_0* HMUI::__FlowCoordinator____c__DisplayClass50_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__FlowCoordinator____c__DisplayClass50_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass50_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass50_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass50_0::_PopViewControllersFromNavigationController_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass50_0*>::get(),
                            "<PopViewControllersFromNavigationController>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_topViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ViewController* (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_topViewController)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2126764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "get_topViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_childFlowCoordinator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::FlowCoordinator* (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_childFlowCoordinator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21267dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "get_childFlowCoordinator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_isActivated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_isActivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21267e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "get_isActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_isInTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_isInTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21267ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "get_isInTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_title
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_title)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21267f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "get_title",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetTitle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::StringW, ::HMUI::__ViewController__AnimationType)>(&::HMUI::FlowCoordinator::SetTitle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21267fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "SetTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.set_showBackButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(bool)>(&::HMUI::FlowCoordinator::set_showBackButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x212695c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "set_showBackButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_showBackButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_showBackButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2126968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "get_showBackButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.__StartOnScreenSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ScreenSystem*)>(&::HMUI::FlowCoordinator::__StartOnScreenSystem)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2126970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "__StartOnScreenSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ScreenSystem*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PresentFlowCoordinator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::FlowCoordinator*, ::System::Action*, ::HMUI::__ViewController__AnimationDirection, bool, bool)>(&::HMUI::FlowCoordinator::PresentFlowCoordinator)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x2127298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "PresentFlowCoordinator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DismissFlowCoordinator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::FlowCoordinator*, ::HMUI::__ViewController__AnimationDirection, ::System::Action*, bool)>(&::HMUI::FlowCoordinator::DismissFlowCoordinator)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x212792c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "DismissFlowCoordinator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DismissChildFlowCoordinatorsRecursively
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::HMUI::FlowCoordinator::*)(bool)>(&::HMUI::FlowCoordinator::DismissChildFlowCoordinatorsRecursively)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2127c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "DismissChildFlowCoordinatorsRecursively",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DismissChildViewControllersRecursively
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::HMUI::FlowCoordinator::*)(bool)>(&::HMUI::FlowCoordinator::DismissChildViewControllersRecursively)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2127d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "DismissChildViewControllersRecursively",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.ReplaceChildFlowCoordinator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::FlowCoordinator*, ::System::Action*, ::HMUI::__ViewController__AnimationDirection, bool)>(&::HMUI::FlowCoordinator::ReplaceChildFlowCoordinator)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2127e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "ReplaceChildFlowCoordinator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PresentViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::System::Action*, ::HMUI::__ViewController__AnimationDirection, bool)>(&::HMUI::FlowCoordinator::PresentViewController)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x2126eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "PresentViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DismissViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::__ViewController__AnimationDirection, ::System::Action*, bool)>(&::HMUI::FlowCoordinator::DismissViewController)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2128120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "DismissViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.ReplaceTopViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::System::Action*, ::HMUI::__ViewController__AnimationType, ::HMUI::__ViewController__AnimationDirection)>(&::HMUI::FlowCoordinator::ReplaceTopViewController)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2128360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "ReplaceTopViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.ReplaceTopViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::FlowCoordinator*, ::HMUI::FlowCoordinator*, ::System::Action*, ::HMUI::__ViewController__AnimationType, ::HMUI::__ViewController__AnimationDirection)>(&::HMUI::FlowCoordinator::ReplaceTopViewController)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2127710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "ReplaceTopViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PushViewControllerToNavigationController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::NavigationController*, ::HMUI::ViewController*, ::System::Action*, bool)>(&::HMUI::FlowCoordinator::PushViewControllerToNavigationController)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2128444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "PushViewControllerToNavigationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetViewControllersToNavigationController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::NavigationController*, ::ArrayW<::HMUI::ViewController*,::Array<::HMUI::ViewController*>*>)>(&::HMUI::FlowCoordinator::SetViewControllersToNavigationController)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x212857c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "SetViewControllersToNavigationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*,::Array<::HMUI::ViewController*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetViewControllerToNavigationController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::NavigationController*, ::HMUI::ViewController*)>(&::HMUI::FlowCoordinator::SetViewControllerToNavigationController)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2128594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "SetViewControllerToNavigationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PopViewControllerFromNavigationController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::NavigationController*, ::System::Action*, bool)>(&::HMUI::FlowCoordinator::PopViewControllerFromNavigationController)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x21285ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "PopViewControllerFromNavigationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PopViewControllersFromNavigationController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::NavigationController*, int32_t, ::System::Action*, bool)>(&::HMUI::FlowCoordinator::PopViewControllersFromNavigationController)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x21286dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "PopViewControllersFromNavigationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetLeftScreenViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::HMUI::FlowCoordinator::SetLeftScreenViewController)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2126b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "SetLeftScreenViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetRightScreenViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::HMUI::FlowCoordinator::SetRightScreenViewController)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2126c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "SetRightScreenViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetBottomScreenViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::HMUI::FlowCoordinator::SetBottomScreenViewController)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2126d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "SetBottomScreenViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetTopScreenViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::HMUI::FlowCoordinator::SetTopScreenViewController)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2126e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "SetTopScreenViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PresentTitle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::StringW, ::HMUI::__ViewController__AnimationType)>(&::HMUI::FlowCoordinator::PresentTitle)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x21268ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "PresentTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.IsFlowCoordinatorInHierarchy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::FlowCoordinator::*)(::HMUI::FlowCoordinator*)>(&::HMUI::FlowCoordinator::IsFlowCoordinatorInHierarchy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x212684c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "IsFlowCoordinatorInHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.YoungestChildFlowCoordinatorOrSelf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::FlowCoordinator* (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::YoungestChildFlowCoordinatorOrSelf)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2128814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "YoungestChildFlowCoordinatorOrSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.ProvideInitialViewControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController*)>(&::HMUI::FlowCoordinator::ProvideInitialViewControllers)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2128890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "ProvideInitialViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(bool, bool, bool)>(&::HMUI::FlowCoordinator::Activate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2126ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.Deactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(bool, bool)>(&::HMUI::FlowCoordinator::Deactivate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2127658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "Deactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.__ExternalActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::__ExternalActivate)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x21288a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "__ExternalActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.__ExternalDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::__ExternalDeactivate)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2128aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "__ExternalDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.HandleScreenSystemBackButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::HandleScreenSystemBackButtonWasPressed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2128ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "HandleScreenSystemBackButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetGlobalUserInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(bool)>(&::HMUI::FlowCoordinator::SetGlobalUserInteraction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2127c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "SetGlobalUserInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(bool, bool, bool)>(&::HMUI::FlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(bool, bool)>(&::HMUI::FlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2128ccc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.TransitionDidStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::TransitionDidStart)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2128cd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.TransitionDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::TransitionDidFinish)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2128cdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.TopViewControllerWillChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::HMUI::FlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2128ce4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.InitialViewControllerWasPresented
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::InitialViewControllerWasPresented)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2128ce8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.BackButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*)>(&::HMUI::FlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2128cec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::HMUI::FlowCoordinator::Log)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2128cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2128d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::FlowCoordinator::__set__baseInputModule(::UnityEngine::EventSystems::BaseInputModule*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::BaseInputModule*, 0x18>(this, std::forward<::UnityEngine::EventSystems::BaseInputModule*>(value));
}
constexpr ::UnityEngine::EventSystems::BaseInputModule* HMUI::FlowCoordinator::__get__baseInputModule()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::BaseInputModule*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::BaseInputModule*> HMUI::FlowCoordinator::__get__baseInputModule() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::BaseInputModule*, 0x18>(this);
}
constexpr void HMUI::FlowCoordinator::__set__screenSystem(::HMUI::ScreenSystem*  value)  {
::cordl_internals::setInstanceField<::HMUI::ScreenSystem*, 0x20>(this, std::forward<::HMUI::ScreenSystem*>(value));
}
constexpr ::HMUI::ScreenSystem* HMUI::FlowCoordinator::__get__screenSystem()  {
return ::cordl_internals::getInstanceField<::HMUI::ScreenSystem*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ScreenSystem*> HMUI::FlowCoordinator::__get__screenSystem() const {
return ::cordl_internals::getInstanceField<::HMUI::ScreenSystem*, 0x20>(this);
}
constexpr void HMUI::FlowCoordinator::__set__parentFlowCoordinator(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x28>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::FlowCoordinator::__get__parentFlowCoordinator()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::FlowCoordinator::__get__parentFlowCoordinator() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x28>(this);
}
constexpr void HMUI::FlowCoordinator::__set__childFlowCoordinator(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x30>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* HMUI::FlowCoordinator::__get__childFlowCoordinator()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> HMUI::FlowCoordinator::__get__childFlowCoordinator() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x30>(this);
}
constexpr void HMUI::FlowCoordinator::__set__mainScreenViewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HMUI::ViewController*>*, 0x38>(this, std::forward<::System::Collections::Generic::List_1<::HMUI::ViewController*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HMUI::ViewController*>* HMUI::FlowCoordinator::__get__mainScreenViewControllers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HMUI::ViewController*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HMUI::ViewController*>*> HMUI::FlowCoordinator::__get__mainScreenViewControllers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HMUI::ViewController*>*, 0x38>(this);
}
constexpr void HMUI::FlowCoordinator::__set__leftScreenViewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0x40>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* HMUI::FlowCoordinator::__get__leftScreenViewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> HMUI::FlowCoordinator::__get__leftScreenViewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x40>(this);
}
constexpr void HMUI::FlowCoordinator::__set__rightScreenViewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0x48>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* HMUI::FlowCoordinator::__get__rightScreenViewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> HMUI::FlowCoordinator::__get__rightScreenViewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x48>(this);
}
constexpr void HMUI::FlowCoordinator::__set__bottomScreenViewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0x50>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* HMUI::FlowCoordinator::__get__bottomScreenViewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> HMUI::FlowCoordinator::__get__bottomScreenViewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x50>(this);
}
constexpr void HMUI::FlowCoordinator::__set__topScreenViewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0x58>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* HMUI::FlowCoordinator::__get__topScreenViewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> HMUI::FlowCoordinator::__get__topScreenViewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x58>(this);
}
constexpr void HMUI::FlowCoordinator::__set__wasActivatedBefore(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::FlowCoordinator::__get__wasActivatedBefore()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr bool const& HMUI::FlowCoordinator::__get__wasActivatedBefore() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr void HMUI::FlowCoordinator::__set__title(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HMUI::FlowCoordinator::__get__title()  {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
constexpr ::StringW const& HMUI::FlowCoordinator::__get__title() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
constexpr void HMUI::FlowCoordinator::__set__providedMainViewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0x70>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* HMUI::FlowCoordinator::__get__providedMainViewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> HMUI::FlowCoordinator::__get__providedMainViewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x70>(this);
}
constexpr void HMUI::FlowCoordinator::__set__providedLeftScreenViewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0x78>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* HMUI::FlowCoordinator::__get__providedLeftScreenViewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> HMUI::FlowCoordinator::__get__providedLeftScreenViewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x78>(this);
}
constexpr void HMUI::FlowCoordinator::__set__providedRightScreenViewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0x80>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* HMUI::FlowCoordinator::__get__providedRightScreenViewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> HMUI::FlowCoordinator::__get__providedRightScreenViewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x80>(this);
}
constexpr void HMUI::FlowCoordinator::__set__providedBottomScreenViewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0x88>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* HMUI::FlowCoordinator::__get__providedBottomScreenViewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> HMUI::FlowCoordinator::__get__providedBottomScreenViewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x88>(this);
}
constexpr void HMUI::FlowCoordinator::__set__providedTopScreenViewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0x90>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* HMUI::FlowCoordinator::__get__providedTopScreenViewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> HMUI::FlowCoordinator::__get__providedTopScreenViewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x90>(this);
}
constexpr void HMUI::FlowCoordinator::__set__viewControllersWereProvided(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::FlowCoordinator::__get__viewControllersWereProvided()  {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
constexpr bool const& HMUI::FlowCoordinator::__get__viewControllersWereProvided() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
constexpr void HMUI::FlowCoordinator::__set__isInDidActivatePhase(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x99>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::FlowCoordinator::__get__isInDidActivatePhase()  {
return ::cordl_internals::getInstanceField<bool, 0x99>(this);
}
constexpr bool const& HMUI::FlowCoordinator::__get__isInDidActivatePhase() const {
return ::cordl_internals::getInstanceField<bool, 0x99>(this);
}
constexpr void HMUI::FlowCoordinator::__set__isActivated(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x9a>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::FlowCoordinator::__get__isActivated()  {
return ::cordl_internals::getInstanceField<bool, 0x9a>(this);
}
constexpr bool const& HMUI::FlowCoordinator::__get__isActivated() const {
return ::cordl_internals::getInstanceField<bool, 0x9a>(this);
}
constexpr void HMUI::FlowCoordinator::__set__isInTransition(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x9b>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::FlowCoordinator::__get__isInTransition()  {
return ::cordl_internals::getInstanceField<bool, 0x9b>(this);
}
constexpr bool const& HMUI::FlowCoordinator::__get__isInTransition() const {
return ::cordl_internals::getInstanceField<bool, 0x9b>(this);
}
constexpr void HMUI::FlowCoordinator::__set__showBackButton(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x9c>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::FlowCoordinator::__get__showBackButton()  {
return ::cordl_internals::getInstanceField<bool, 0x9c>(this);
}
constexpr bool const& HMUI::FlowCoordinator::__get__showBackButton() const {
return ::cordl_internals::getInstanceField<bool, 0x9c>(this);
}
constexpr void HMUI::FlowCoordinator::__set__prevEventSystem(::UnityEngine::EventSystems::EventSystem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::EventSystem*, 0xa0>(this, std::forward<::UnityEngine::EventSystems::EventSystem*>(value));
}
constexpr ::UnityEngine::EventSystems::EventSystem* HMUI::FlowCoordinator::__get__prevEventSystem()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::EventSystem*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::EventSystem*> HMUI::FlowCoordinator::__get__prevEventSystem() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::EventSystem*, 0xa0>(this);
}
inline ::HMUI::ViewController* HMUI::FlowCoordinator::get_topViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "get_topViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::ViewController*, false>(*this, ___internal_method);
}
inline ::HMUI::FlowCoordinator* HMUI::FlowCoordinator::get_childFlowCoordinator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "get_childFlowCoordinator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::FlowCoordinator*, false>(*this, ___internal_method);
}
inline bool HMUI::FlowCoordinator::get_isActivated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "get_isActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HMUI::FlowCoordinator::get_isInTransition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "get_isInTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW HMUI::FlowCoordinator::get_title()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "get_title",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
/// @param animationType: ::HMUI::__ViewController__AnimationType (default: static_cast<int32_t>(0x1))
inline void HMUI::FlowCoordinator::SetTitle(::StringW  value, ::HMUI::__ViewController__AnimationType  animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "SetTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value, animationType);
}
inline void HMUI::FlowCoordinator::set_showBackButton(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "set_showBackButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HMUI::FlowCoordinator::get_showBackButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "get_showBackButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HMUI::FlowCoordinator::__StartOnScreenSystem(::HMUI::ScreenSystem*  screenSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "__StartOnScreenSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ScreenSystem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, screenSystem);
}
/// @param finishedCallback: ::System::Action* (default: csnull)
/// @param animationDirection: ::HMUI::__ViewController__AnimationDirection (default: static_cast<int32_t>(0x0))
/// @param immediately: bool (default: false)
/// @param replaceTopViewController: bool (default: false)
inline void HMUI::FlowCoordinator::PresentFlowCoordinator(::HMUI::FlowCoordinator*  flowCoordinator, ::System::Action*  finishedCallback, ::HMUI::__ViewController__AnimationDirection  animationDirection, bool  immediately, bool  replaceTopViewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "PresentFlowCoordinator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, flowCoordinator, finishedCallback, animationDirection, immediately, replaceTopViewController);
}
/// @param animationDirection: ::HMUI::__ViewController__AnimationDirection (default: static_cast<int32_t>(0x0))
/// @param finishedCallback: ::System::Action* (default: csnull)
/// @param immediately: bool (default: false)
inline void HMUI::FlowCoordinator::DismissFlowCoordinator(::HMUI::FlowCoordinator*  flowCoordinator, ::HMUI::__ViewController__AnimationDirection  animationDirection, ::System::Action*  finishedCallback, bool  immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "DismissFlowCoordinator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, flowCoordinator, animationDirection, finishedCallback, immediately);
}
/// @param immediately: bool (default: true)
inline ::System::Threading::Tasks::Task* HMUI::FlowCoordinator::DismissChildFlowCoordinatorsRecursively(bool  immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "DismissChildFlowCoordinatorsRecursively",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, immediately);
}
/// @param immediately: bool (default: true)
inline ::System::Threading::Tasks::Task* HMUI::FlowCoordinator::DismissChildViewControllersRecursively(bool  immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "DismissChildViewControllersRecursively",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, immediately);
}
/// @param finishedCallback: ::System::Action* (default: csnull)
/// @param animationDirection: ::HMUI::__ViewController__AnimationDirection (default: static_cast<int32_t>(0x0))
/// @param immediately: bool (default: false)
inline void HMUI::FlowCoordinator::ReplaceChildFlowCoordinator(::HMUI::FlowCoordinator*  flowCoordinator, ::System::Action*  finishedCallback, ::HMUI::__ViewController__AnimationDirection  animationDirection, bool  immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "ReplaceChildFlowCoordinator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, flowCoordinator, finishedCallback, animationDirection, immediately);
}
/// @param finishedCallback: ::System::Action* (default: csnull)
/// @param animationDirection: ::HMUI::__ViewController__AnimationDirection (default: static_cast<int32_t>(0x0))
/// @param immediately: bool (default: false)
inline void HMUI::FlowCoordinator::PresentViewController(::HMUI::ViewController*  viewController, ::System::Action*  finishedCallback, ::HMUI::__ViewController__AnimationDirection  animationDirection, bool  immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "PresentViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewController, finishedCallback, animationDirection, immediately);
}
/// @param animationDirection: ::HMUI::__ViewController__AnimationDirection (default: static_cast<int32_t>(0x0))
/// @param finishedCallback: ::System::Action* (default: csnull)
/// @param immediately: bool (default: false)
inline ::System::Threading::Tasks::Task* HMUI::FlowCoordinator::DismissViewController(::HMUI::ViewController*  viewController, ::HMUI::__ViewController__AnimationDirection  animationDirection, ::System::Action*  finishedCallback, bool  immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "DismissViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, viewController, animationDirection, finishedCallback, immediately);
}
/// @param finishedCallback: ::System::Action* (default: csnull)
/// @param animationType: ::HMUI::__ViewController__AnimationType (default: static_cast<int32_t>(0x1))
/// @param animationDirection: ::HMUI::__ViewController__AnimationDirection (default: static_cast<int32_t>(0x0))
inline void HMUI::FlowCoordinator::ReplaceTopViewController(::HMUI::ViewController*  viewController, ::System::Action*  finishedCallback, ::HMUI::__ViewController__AnimationType  animationType, ::HMUI::__ViewController__AnimationDirection  animationDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "ReplaceTopViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewController, finishedCallback, animationType, animationDirection);
}
/// @param finishedCallback: ::System::Action* (default: csnull)
/// @param animationType: ::HMUI::__ViewController__AnimationType (default: static_cast<int32_t>(0x1))
/// @param animationDirection: ::HMUI::__ViewController__AnimationDirection (default: static_cast<int32_t>(0x0))
inline void HMUI::FlowCoordinator::ReplaceTopViewController(::HMUI::ViewController*  viewController, ::HMUI::FlowCoordinator*  originalOwnerFlowCoordinator, ::HMUI::FlowCoordinator*  newOwnerFlowCoordinator, ::System::Action*  finishedCallback, ::HMUI::__ViewController__AnimationType  animationType, ::HMUI::__ViewController__AnimationDirection  animationDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "ReplaceTopViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewController, originalOwnerFlowCoordinator, newOwnerFlowCoordinator, finishedCallback, animationType, animationDirection);
}
/// @param finishedCallback: ::System::Action* (default: csnull)
/// @param immediately: bool (default: false)
inline void HMUI::FlowCoordinator::PushViewControllerToNavigationController(::HMUI::NavigationController*  navigationController, ::HMUI::ViewController*  viewController, ::System::Action*  finishedCallback, bool  immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "PushViewControllerToNavigationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, navigationController, viewController, finishedCallback, immediately);
}
inline void HMUI::FlowCoordinator::SetViewControllersToNavigationController(::HMUI::NavigationController*  navigationController, ::ArrayW<::HMUI::ViewController*,::Array<::HMUI::ViewController*>*>  viewControllers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "SetViewControllersToNavigationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*,::Array<::HMUI::ViewController*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, navigationController, viewControllers);
}
inline void HMUI::FlowCoordinator::SetViewControllerToNavigationController(::HMUI::NavigationController*  navigationController, ::HMUI::ViewController*  viewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "SetViewControllerToNavigationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, navigationController, viewController);
}
/// @param finishedCallback: ::System::Action* (default: csnull)
/// @param immediately: bool (default: false)
inline void HMUI::FlowCoordinator::PopViewControllerFromNavigationController(::HMUI::NavigationController*  navigationController, ::System::Action*  finishedCallback, bool  immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "PopViewControllerFromNavigationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, navigationController, finishedCallback, immediately);
}
/// @param finishedCallback: ::System::Action* (default: csnull)
/// @param immediately: bool (default: false)
inline void HMUI::FlowCoordinator::PopViewControllersFromNavigationController(::HMUI::NavigationController*  navigationController, int32_t  numberOfControllers, ::System::Action*  finishedCallback, bool  immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "PopViewControllersFromNavigationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, navigationController, numberOfControllers, finishedCallback, immediately);
}
inline void HMUI::FlowCoordinator::SetLeftScreenViewController(::HMUI::ViewController*  viewController, ::HMUI::__ViewController__AnimationType  animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "SetLeftScreenViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewController, animationType);
}
inline void HMUI::FlowCoordinator::SetRightScreenViewController(::HMUI::ViewController*  viewController, ::HMUI::__ViewController__AnimationType  animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "SetRightScreenViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewController, animationType);
}
inline void HMUI::FlowCoordinator::SetBottomScreenViewController(::HMUI::ViewController*  viewController, ::HMUI::__ViewController__AnimationType  animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "SetBottomScreenViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewController, animationType);
}
inline void HMUI::FlowCoordinator::SetTopScreenViewController(::HMUI::ViewController*  viewController, ::HMUI::__ViewController__AnimationType  animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "SetTopScreenViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewController, animationType);
}
inline void HMUI::FlowCoordinator::PresentTitle(::StringW  title, ::HMUI::__ViewController__AnimationType  animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "PresentTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, title, animationType);
}
inline bool HMUI::FlowCoordinator::IsFlowCoordinatorInHierarchy(::HMUI::FlowCoordinator*  flowCoordinator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "IsFlowCoordinatorInHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, flowCoordinator);
}
inline ::HMUI::FlowCoordinator* HMUI::FlowCoordinator::YoungestChildFlowCoordinatorOrSelf()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "YoungestChildFlowCoordinatorOrSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::FlowCoordinator*, false>(*this, ___internal_method);
}
/// @param leftScreenViewController: ::HMUI::ViewController* (default: csnull)
/// @param rightScreenViewController: ::HMUI::ViewController* (default: csnull)
/// @param bottomScreenViewController: ::HMUI::ViewController* (default: csnull)
/// @param topScreenViewController: ::HMUI::ViewController* (default: csnull)
inline void HMUI::FlowCoordinator::ProvideInitialViewControllers(::HMUI::ViewController*  mainViewController, ::HMUI::ViewController*  leftScreenViewController, ::HMUI::ViewController*  rightScreenViewController, ::HMUI::ViewController*  bottomScreenViewController, ::HMUI::ViewController*  topScreenViewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "ProvideInitialViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, mainViewController, leftScreenViewController, rightScreenViewController, bottomScreenViewController, topScreenViewController);
}
inline void HMUI::FlowCoordinator::Activate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void HMUI::FlowCoordinator::Deactivate(bool  removedFromHierarchy, bool  screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "Deactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void HMUI::FlowCoordinator::__ExternalActivate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "__ExternalActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::FlowCoordinator::__ExternalDeactivate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "__ExternalDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::FlowCoordinator::HandleScreenSystemBackButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "HandleScreenSystemBackButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::FlowCoordinator::SetGlobalUserInteraction(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "SetGlobalUserInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::FlowCoordinator::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void HMUI::FlowCoordinator::DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void HMUI::FlowCoordinator::TransitionDidStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "TransitionDidStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::FlowCoordinator::TransitionDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "TransitionDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::FlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController*  oldViewController, ::HMUI::ViewController*  newViewController, ::HMUI::__ViewController__AnimationType  animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "TopViewControllerWillChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void HMUI::FlowCoordinator::InitialViewControllerWasPresented()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "InitialViewControllerWasPresented",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::FlowCoordinator::BackButtonWasPressed(::HMUI::ViewController*  topViewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "BackButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, topViewController);
}
inline void HMUI::FlowCoordinator::Log(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline ::HMUI::FlowCoordinator* HMUI::FlowCoordinator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::FlowCoordinator*>());
}
inline void HMUI::FlowCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
