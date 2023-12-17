#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EditAvatarFlowCoordinatorHelper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__EditAvatarFlowCoordinatorHelper_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "GlobalNamespace/zzzz__AvatarSystemSelectionFlowCoordinator_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystem_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
constexpr void GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction::__EditAvatarFlowCoordinatorHelper__FinishAction(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction  GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction::Continue{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction  GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction::Back{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::*)()>(&::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x22882d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x228868c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__set___4__this(::GlobalNamespace::EditAvatarFlowCoordinatorHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(value));
}
constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*> GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__set_parentFlowCoordinator(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__get_parentFlowCoordinator()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__get_parentFlowCoordinator() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__set_immediately(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__get_immediately()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__get_immediately() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__set_replaceTopViewController(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__get_replaceTopViewController()  {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__get_replaceTopViewController() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__set_backButtonVisible(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3a>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__get_backButtonVisible()  {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__get_backButtonVisible() const {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::EditAvatarFlowCoordinatorHelper*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "parentFlowCoordinator", ty: "::HMUI::FlowCoordinator*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "immediately", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "replaceTopViewController", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "backButtonVisible", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12::__EditAvatarFlowCoordinatorHelper___Show_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper*  __4__this, ::HMUI::FlowCoordinator*  parentFlowCoordinator, bool  immediately, bool  replaceTopViewController, bool  backButtonVisible, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x48>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->parentFlowCoordinator = parentFlowCoordinator;
this->immediately = immediately;
this->replaceTopViewController = replaceTopViewController;
this->backButtonVisible = backButtonVisible;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::*)()>(&::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x2288698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2288b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__set___4__this(::GlobalNamespace::EditAvatarFlowCoordinatorHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(value));
}
constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*> GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__set__avatarSystem_5__2(::BeatSaber::AvatarCore::IAvatarSystem*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::IAvatarSystem*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BeatSaber::AvatarCore::IAvatarSystem*>(value));
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystem* GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__get__avatarSystem_5__2()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarSystem*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystem*> GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__get__avatarSystem_5__2() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::IAvatarSystem*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*> const& GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::EditAvatarFlowCoordinatorHelper*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_avatarSystem_5__2", ty: "::BeatSaber::AvatarCore::IAvatarSystem*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13::__EditAvatarFlowCoordinatorHelper___Initialize_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper*  __4__this, ::BeatSaber::AvatarCore::IAvatarSystem*  _avatarSystem_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_avatarSystem_5__2 = _avatarSystem_5__2;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(::System::Action_2<::HMUI::FlowCoordinator*,::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*)>(&::GlobalNamespace::EditAvatarFlowCoordinatorHelper::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2287dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::FlowCoordinator*,::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(::System::Action_2<::HMUI::FlowCoordinator*,::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*)>(&::GlobalNamespace::EditAvatarFlowCoordinatorHelper::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2287e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::FlowCoordinator*,::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.get__hasOnlyOneAvatarSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)()>(&::GlobalNamespace::EditAvatarFlowCoordinatorHelper::get__hasOnlyOneAvatarSystem)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2287f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            "get__hasOnlyOneAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.Show
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(::HMUI::FlowCoordinator*, bool, bool, bool)>(&::GlobalNamespace::EditAvatarFlowCoordinatorHelper::Show)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2287f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            "Show",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)()>(&::GlobalNamespace::EditAvatarFlowCoordinatorHelper::Initialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2288040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.PresentAvatarEditorFlowCoordinator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*, ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode, ::HMUI::FlowCoordinator*, bool, bool)>(&::GlobalNamespace::EditAvatarFlowCoordinatorHelper::PresentAvatarEditorFlowCoordinator)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x22880d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            "PresentAvatarEditorFlowCoordinator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.HandleAvatarEditorFlowCoordinatorDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*, ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction)>(&::GlobalNamespace::EditAvatarFlowCoordinatorHelper::HandleAvatarEditorFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22881bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            "HandleAvatarEditorFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.HandleAvatarSystemSelectionFlowCoordinatorDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction)>(&::GlobalNamespace::EditAvatarFlowCoordinatorHelper::HandleAvatarSystemSelectionFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2288288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            "HandleAvatarSystemSelectionFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)()>(&::GlobalNamespace::EditAvatarFlowCoordinatorHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22882d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__set__avatarSystemSelectionFlowCoordinator(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, 0x10>(this, std::forward<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator* GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__avatarSystemSelectionFlowCoordinator()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*> GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__avatarSystemSelectionFlowCoordinator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, 0x10>(this);
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0x18>(this, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__playerDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x18>(this);
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x20>(this, std::forward<::BeatSaber::AvatarCore::AvatarSystemCollection*>(value));
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__avatarSystemCollection()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__avatarSystemCollection() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x20>(this);
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x28>(this, std::forward<::Zenject::DiContainer*>(value));
}
constexpr ::Zenject::DiContainer* GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x28>(this);
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__set_didFinishEvent(::System::Action_2<::HMUI::FlowCoordinator*,::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::HMUI::FlowCoordinator*,::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*, 0x30>(this, std::forward<::System::Action_2<::HMUI::FlowCoordinator*,::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*>(value));
}
constexpr ::System::Action_2<::HMUI::FlowCoordinator*,::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>* GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get_didFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::HMUI::FlowCoordinator*,::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::HMUI::FlowCoordinator*,::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*> GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::HMUI::FlowCoordinator*,::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*, 0x30>(this);
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__set__parentFlowCoordinator(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x38>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__parentFlowCoordinator()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__parentFlowCoordinator() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x38>(this);
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__set__singleAvatarEditorFlowCoordinator(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*, 0x40>(this, std::forward<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>(value));
}
constexpr ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__singleAvatarEditorFlowCoordinator()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*> GlobalNamespace::EditAvatarFlowCoordinatorHelper::__get__singleAvatarEditorFlowCoordinator() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*, 0x40>(this);
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::add_didFinishEvent(::System::Action_2<::HMUI::FlowCoordinator*,::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::FlowCoordinator*,::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::remove_didFinishEvent(::System::Action_2<::HMUI::FlowCoordinator*,::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::FlowCoordinator*,::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::EditAvatarFlowCoordinatorHelper::get__hasOnlyOneAvatarSystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            "get__hasOnlyOneAvatarSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
/// @param immediately: bool (default: false)
/// @param replaceTopViewController: bool (default: false)
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::Show(::HMUI::FlowCoordinator*  parentFlowCoordinator, bool  backButtonVisible, bool  immediately, bool  replaceTopViewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            "Show",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parentFlowCoordinator, backButtonVisible, immediately, replaceTopViewController);
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param immediately: bool (default: false)
/// @param replaceTopViewController: bool (default: false)
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::PresentAvatarEditorFlowCoordinator(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*  flowCoordinator, ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode  editMode, ::HMUI::FlowCoordinator*  parentFlowCoordinator, bool  immediately, bool  replaceTopViewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            "PresentAvatarEditorFlowCoordinator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, flowCoordinator, editMode, parentFlowCoordinator, immediately, replaceTopViewController);
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::HandleAvatarEditorFlowCoordinatorDidFinish(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*  flowCoordinator, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystem, ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction  finishAction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            "HandleAvatarEditorFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, flowCoordinator, avatarSystem, finishAction);
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::HandleAvatarSystemSelectionFlowCoordinatorDidFinish(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*  flowCoordinator, ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction  finishAction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            "HandleAvatarSystemSelectionFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, flowCoordinator, finishAction);
}
inline ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* GlobalNamespace::EditAvatarFlowCoordinatorHelper::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>());
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
