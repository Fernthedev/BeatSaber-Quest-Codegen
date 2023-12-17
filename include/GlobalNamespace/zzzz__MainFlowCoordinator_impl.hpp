#pragma once
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MainFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__MainMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__EditAvatarFlowCoordinatorHelper_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__SettingsFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__MainFlowCoordinator_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__HelpFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__CampaignFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__PartyFreePlayFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "GlobalNamespace/zzzz__OptionsViewController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__PlayerOptionsViewController_def.hpp"
#include "GlobalNamespace/zzzz__SoloFreePlayFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__HowToPlayViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::*)()>(&::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x228ceb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x228d468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__set_buttonNumber(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__get_buttonNumber()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__get_buttonNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__set___4__this(::GlobalNamespace::MainFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainFlowCoordinator*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::MainFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::MainFlowCoordinator* GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainFlowCoordinator*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainFlowCoordinator*> GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainFlowCoordinator*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "buttonNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MainFlowCoordinator*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, int32_t  buttonNumber, ::GlobalNamespace::MainFlowCoordinator*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2) noexcept : ::bs_hook::ValueTypeWrapper<0x48>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->buttonNumber = buttonNumber;
this->__4__this = __4__this;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::*)()>(&::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x228d474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x228d6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__set___4__this(::GlobalNamespace::MainFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainFlowCoordinator*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::MainFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::MainFlowCoordinator* GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainFlowCoordinator*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainFlowCoordinator*> GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainFlowCoordinator*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__set_finishAction(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>(value));
}
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction& GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__get_finishAction()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction const& GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__get_finishAction() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__set_flowCoordinator(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__get_flowCoordinator()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__get_flowCoordinator() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MainFlowCoordinator*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "finishAction", ty: "::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction", modifiers: "", def_value: Some("{}") }, CppParam { name: "flowCoordinator", ty: "::HMUI::FlowCoordinator*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::MainFlowCoordinator*  __4__this, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction  finishAction, ::HMUI::FlowCoordinator*  flowCoordinator, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x48>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->finishAction = finishAction;
this->flowCoordinator = flowCoordinator;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::*)()>(&::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x228d6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x228e380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::__set___4__this(::GlobalNamespace::MainFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainFlowCoordinator*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::MainFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::MainFlowCoordinator* GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainFlowCoordinator*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainFlowCoordinator*> GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainFlowCoordinator*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::__set_destination(::GlobalNamespace::MenuDestination*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuDestination*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::MenuDestination*>(value));
}
constexpr ::GlobalNamespace::MenuDestination* GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::__get_destination()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuDestination*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuDestination*> GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::__get_destination() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuDestination*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MainFlowCoordinator*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "destination", ty: "::GlobalNamespace::MenuDestination*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::MainFlowCoordinator*  __4__this, ::GlobalNamespace::MenuDestination*  destination, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->destination = destination;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::*)()>(&::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x228e38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x228e970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::__set___4__this(::GlobalNamespace::MainFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainFlowCoordinator*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::MainFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::MainFlowCoordinator* GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainFlowCoordinator*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainFlowCoordinator*> GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainFlowCoordinator*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::__set_presentImmediately(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::__get_presentImmediately()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::__get_presentImmediately() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MainFlowCoordinator*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "presentImmediately", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::MainFlowCoordinator*  __4__this, bool  presentImmediately, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->presentImmediately = presentImmediately;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::*)(int32_t)>(&::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x228ccd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::*)()>(&::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x228e97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::*)()>(&::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::MoveNext)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x228e980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::*)()>(&::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228e9d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::*)()>(&::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x228e9dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::*)()>(&::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228ea1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::__set___4__this(::GlobalNamespace::MainFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainFlowCoordinator*, 0x20>(this, std::forward<::GlobalNamespace::MainFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::MainFlowCoordinator* GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainFlowCoordinator*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainFlowCoordinator*> GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainFlowCoordinator*, 0x20>(this);
}
constexpr void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::__set_destination(::GlobalNamespace::MenuDestination*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuDestination*, 0x28>(this, std::forward<::GlobalNamespace::MenuDestination*>(value));
}
constexpr ::GlobalNamespace::MenuDestination* GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::__get_destination()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuDestination*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuDestination*> GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::__get_destination() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuDestination*, 0x28>(this);
}
inline ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44* GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44*>(__1__state));
}
inline void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(bool, bool, bool)>(&::GlobalNamespace::MainFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x228b468;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.TopViewControllerWillChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::GlobalNamespace::MainFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x228bb90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.InitialViewControllerWasPresented
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)()>(&::GlobalNamespace::MainFlowCoordinator::InitialViewControllerWasPresented)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x228bd24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(bool, bool)>(&::GlobalNamespace::MainFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x228bd9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.PresentFlowCoordinatorOrAskForTutorial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::HMUI::FlowCoordinator*)>(&::GlobalNamespace::MainFlowCoordinator::PresentFlowCoordinatorOrAskForTutorial)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x228c3f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "PresentFlowCoordinatorOrAskForTutorial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleMainMenuViewControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::__MainMenuViewController__MenuButton)>(&::GlobalNamespace::MainFlowCoordinator::HandleMainMenuViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x228c5c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleMainMenuViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainMenuViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainMenuViewController__MenuButton>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleMultiplayerDisclaimerDidFinishAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(int32_t)>(&::GlobalNamespace::MainFlowCoordinator::HandleMultiplayerDisclaimerDidFinishAction)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x228c7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleMultiplayerDisclaimerDidFinishAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleOptionsViewControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::__OptionsViewController__OptionsButton)>(&::GlobalNamespace::MainFlowCoordinator::HandleOptionsViewControllerDidFinish)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x228c878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleOptionsViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OptionsViewController__OptionsButton>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandlePlayerOptionsViewControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::HMUI::ViewController*)>(&::GlobalNamespace::MainFlowCoordinator::HandlePlayerOptionsViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x228c958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandlePlayerOptionsViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleHowToPlayViewControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions)>(&::GlobalNamespace::MainFlowCoordinator::HandleHowToPlayViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x228c96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleHowToPlayViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleCampaignFlowCoordinatorDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::CampaignFlowCoordinator*)>(&::GlobalNamespace::MainFlowCoordinator::HandleCampaignFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x228c9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleCampaignFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CampaignFlowCoordinator*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleEditAvatarFlowCoordinatorHelperDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction)>(&::GlobalNamespace::MainFlowCoordinator::HandleEditAvatarFlowCoordinatorHelperDidFinish)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x228c9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleEditAvatarFlowCoordinatorHelperDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleSoloFreePlayFlowCoordinatorDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::LevelSelectionFlowCoordinator*)>(&::GlobalNamespace::MainFlowCoordinator::HandleSoloFreePlayFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x228caa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleSoloFreePlayFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandlePartyFreePlayFlowCoordinatorDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::LevelSelectionFlowCoordinator*)>(&::GlobalNamespace::MainFlowCoordinator::HandlePartyFreePlayFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x228cab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandlePartyFreePlayFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleSettingsFlowCoordinatorDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction)>(&::GlobalNamespace::MainFlowCoordinator::HandleSettingsFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x228cacc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleSettingsFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsFlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleHelpFlowCoordinatorDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::HelpFlowCoordinator*)>(&::GlobalNamespace::MainFlowCoordinator::HandleHelpFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x228cb60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleHelpFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HelpFlowCoordinator*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleMultiplayerModeSelectionFlowCoordinatorDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*)>(&::GlobalNamespace::MainFlowCoordinator::HandleMultiplayerModeSelectionFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x228cb74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleMultiplayerModeSelectionFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.HandleMainMenuViewControllerMusicPackPromoButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*)>(&::GlobalNamespace::MainFlowCoordinator::HandleMainMenuViewControllerMusicPackPromoButtonWasPressed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x228cb88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleMainMenuViewControllerMusicPackPromoButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.ProcessMenuDestinationRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::MenuDestination*)>(&::GlobalNamespace::MainFlowCoordinator::ProcessMenuDestinationRequest)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x228cc34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "ProcessMenuDestinationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(bool)>(&::GlobalNamespace::MainFlowCoordinator::PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x228c734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.ProcessMenuDestinationRequestAfterFrameCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MainFlowCoordinator::*)(::GlobalNamespace::MenuDestination*)>(&::GlobalNamespace::MainFlowCoordinator::ProcessMenuDestinationRequestAfterFrameCoroutine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x228bb1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "ProcessMenuDestinationRequestAfterFrameCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator.BackButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(::HMUI::ViewController*)>(&::GlobalNamespace::MainFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x228ccf8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)()>(&::GlobalNamespace::MainFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228cd94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator._PresentFlowCoordinatorOrAskForTutorial_b__28_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(int32_t)>(&::GlobalNamespace::MainFlowCoordinator::_PresentFlowCoordinatorOrAskForTutorial_b__28_0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x228cd9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "<PresentFlowCoordinatorOrAskForTutorial>b__28_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator._PresentFlowCoordinatorOrAskForTutorial_b__28_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)()>(&::GlobalNamespace::MainFlowCoordinator::_PresentFlowCoordinatorOrAskForTutorial_b__28_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x228ce7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "<PresentFlowCoordinatorOrAskForTutorial>b__28_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator._HandleMainMenuViewControllerDidFinish_b__29_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)()>(&::GlobalNamespace::MainFlowCoordinator::_HandleMainMenuViewControllerDidFinish_b__29_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x228ce94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "<HandleMainMenuViewControllerDidFinish>b__29_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainFlowCoordinator._PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_b__43_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainFlowCoordinator::*)(int32_t)>(&::GlobalNamespace::MainFlowCoordinator::_PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_b__43_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x228ceb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "<PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator>b__43_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MainFlowCoordinator::__set__defaultLightsPreset(::GlobalNamespace::MenuLightsPresetSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuLightsPresetSO*, 0xa8>(this, std::forward<::GlobalNamespace::MenuLightsPresetSO*>(value));
}
constexpr ::GlobalNamespace::MenuLightsPresetSO* GlobalNamespace::MainFlowCoordinator::__get__defaultLightsPreset()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuLightsPresetSO*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> GlobalNamespace::MainFlowCoordinator::__get__defaultLightsPreset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuLightsPresetSO*, 0xa8>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__soloFreePlayFlowCoordinator(::GlobalNamespace::SoloFreePlayFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SoloFreePlayFlowCoordinator*, 0xb0>(this, std::forward<::GlobalNamespace::SoloFreePlayFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::SoloFreePlayFlowCoordinator* GlobalNamespace::MainFlowCoordinator::__get__soloFreePlayFlowCoordinator()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SoloFreePlayFlowCoordinator*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SoloFreePlayFlowCoordinator*> GlobalNamespace::MainFlowCoordinator::__get__soloFreePlayFlowCoordinator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SoloFreePlayFlowCoordinator*, 0xb0>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__partyFreePlayFlowCoordinator(::GlobalNamespace::PartyFreePlayFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PartyFreePlayFlowCoordinator*, 0xb8>(this, std::forward<::GlobalNamespace::PartyFreePlayFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::PartyFreePlayFlowCoordinator* GlobalNamespace::MainFlowCoordinator::__get__partyFreePlayFlowCoordinator()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PartyFreePlayFlowCoordinator*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyFreePlayFlowCoordinator*> GlobalNamespace::MainFlowCoordinator::__get__partyFreePlayFlowCoordinator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PartyFreePlayFlowCoordinator*, 0xb8>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__campaignFlowCoordinator(::GlobalNamespace::CampaignFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::CampaignFlowCoordinator*, 0xc0>(this, std::forward<::GlobalNamespace::CampaignFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::CampaignFlowCoordinator* GlobalNamespace::MainFlowCoordinator::__get__campaignFlowCoordinator()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CampaignFlowCoordinator*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignFlowCoordinator*> GlobalNamespace::MainFlowCoordinator::__get__campaignFlowCoordinator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CampaignFlowCoordinator*, 0xc0>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__settingsFlowCoordinator(::GlobalNamespace::SettingsFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SettingsFlowCoordinator*, 0xc8>(this, std::forward<::GlobalNamespace::SettingsFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::SettingsFlowCoordinator* GlobalNamespace::MainFlowCoordinator::__get__settingsFlowCoordinator()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SettingsFlowCoordinator*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsFlowCoordinator*> GlobalNamespace::MainFlowCoordinator::__get__settingsFlowCoordinator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SettingsFlowCoordinator*, 0xc8>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__multiplayerModeSelectionFlowCoordinator(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*, 0xd0>(this, std::forward<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* GlobalNamespace::MainFlowCoordinator::__get__multiplayerModeSelectionFlowCoordinator()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*> GlobalNamespace::MainFlowCoordinator::__get__multiplayerModeSelectionFlowCoordinator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*, 0xd0>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__helpFlowCoordinator(::GlobalNamespace::HelpFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::HelpFlowCoordinator*, 0xd8>(this, std::forward<::GlobalNamespace::HelpFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::HelpFlowCoordinator* GlobalNamespace::MainFlowCoordinator::__get__helpFlowCoordinator()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HelpFlowCoordinator*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HelpFlowCoordinator*> GlobalNamespace::MainFlowCoordinator::__get__helpFlowCoordinator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HelpFlowCoordinator*, 0xd8>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__editAvatarFlowCoordinatorHelper(::GlobalNamespace::EditAvatarFlowCoordinatorHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*, 0xe0>(this, std::forward<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(value));
}
constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* GlobalNamespace::MainFlowCoordinator::__get__editAvatarFlowCoordinatorHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*, 0xe0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*> GlobalNamespace::MainFlowCoordinator::__get__editAvatarFlowCoordinatorHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*, 0xe0>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__simpleDialogPromptViewController(::GlobalNamespace::SimpleDialogPromptViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SimpleDialogPromptViewController*, 0xe8>(this, std::forward<::GlobalNamespace::SimpleDialogPromptViewController*>(value));
}
constexpr ::GlobalNamespace::SimpleDialogPromptViewController* GlobalNamespace::MainFlowCoordinator::__get__simpleDialogPromptViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SimpleDialogPromptViewController*, 0xe8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleDialogPromptViewController*> GlobalNamespace::MainFlowCoordinator::__get__simpleDialogPromptViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SimpleDialogPromptViewController*, 0xe8>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__mainMenuViewController(::GlobalNamespace::MainMenuViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainMenuViewController*, 0xf0>(this, std::forward<::GlobalNamespace::MainMenuViewController*>(value));
}
constexpr ::GlobalNamespace::MainMenuViewController* GlobalNamespace::MainFlowCoordinator::__get__mainMenuViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainMenuViewController*, 0xf0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainMenuViewController*> GlobalNamespace::MainFlowCoordinator::__get__mainMenuViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainMenuViewController*, 0xf0>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__playerOptionsViewController(::GlobalNamespace::PlayerOptionsViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerOptionsViewController*, 0xf8>(this, std::forward<::GlobalNamespace::PlayerOptionsViewController*>(value));
}
constexpr ::GlobalNamespace::PlayerOptionsViewController* GlobalNamespace::MainFlowCoordinator::__get__playerOptionsViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerOptionsViewController*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerOptionsViewController*> GlobalNamespace::MainFlowCoordinator::__get__playerOptionsViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerOptionsViewController*, 0xf8>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__optionsViewController(::GlobalNamespace::OptionsViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OptionsViewController*, 0x100>(this, std::forward<::GlobalNamespace::OptionsViewController*>(value));
}
constexpr ::GlobalNamespace::OptionsViewController* GlobalNamespace::MainFlowCoordinator::__get__optionsViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OptionsViewController*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionsViewController*> GlobalNamespace::MainFlowCoordinator::__get__optionsViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OptionsViewController*, 0x100>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0x108>(this, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::MainFlowCoordinator::__get__playerDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::MainFlowCoordinator::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x108>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__menuLightsManager(::GlobalNamespace::MenuLightsManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuLightsManager*, 0x110>(this, std::forward<::GlobalNamespace::MenuLightsManager*>(value));
}
constexpr ::GlobalNamespace::MenuLightsManager* GlobalNamespace::MainFlowCoordinator::__get__menuLightsManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuLightsManager*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsManager*> GlobalNamespace::MainFlowCoordinator::__get__menuLightsManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuLightsManager*, 0x110>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__fadeInOut(::GlobalNamespace::FadeInOutController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FadeInOutController*, 0x118>(this, std::forward<::GlobalNamespace::FadeInOutController*>(value));
}
constexpr ::GlobalNamespace::FadeInOutController* GlobalNamespace::MainFlowCoordinator::__get__fadeInOut()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FadeInOutController*, 0x118>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> GlobalNamespace::MainFlowCoordinator::__get__fadeInOut() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FadeInOutController*, 0x118>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0x120>(this, std::forward<::GlobalNamespace::BeatmapLevelsModel*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* GlobalNamespace::MainFlowCoordinator::__get__beatmapLevelsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0x120>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> GlobalNamespace::MainFlowCoordinator::__get__beatmapLevelsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelsModel*, 0x120>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x128>(this, std::forward<::GlobalNamespace::MenuTransitionsHelper*>(value));
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* GlobalNamespace::MainFlowCoordinator::__get__menuTransitionsHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x128>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> GlobalNamespace::MainFlowCoordinator::__get__menuTransitionsHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x128>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AppStaticSettingsSO*, 0x130>(this, std::forward<::GlobalNamespace::AppStaticSettingsSO*>(value));
}
constexpr ::GlobalNamespace::AppStaticSettingsSO* GlobalNamespace::MainFlowCoordinator::__get__appStaticSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppStaticSettingsSO*, 0x130>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppStaticSettingsSO*> GlobalNamespace::MainFlowCoordinator::__get__appStaticSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppStaticSettingsSO*, 0x130>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__analyticsModel(::GlobalNamespace::IAnalyticsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAnalyticsModel*, 0x138>(this, std::forward<::GlobalNamespace::IAnalyticsModel*>(value));
}
constexpr ::GlobalNamespace::IAnalyticsModel* GlobalNamespace::MainFlowCoordinator::__get__analyticsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnalyticsModel*, 0x138>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> GlobalNamespace::MainFlowCoordinator::__get__analyticsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnalyticsModel*, 0x138>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x140>(this, std::forward<::BeatSaber::AvatarCore::AvatarSystemCollection*>(value));
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* GlobalNamespace::MainFlowCoordinator::__get__avatarSystemCollection()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x140>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> GlobalNamespace::MainFlowCoordinator::__get__avatarSystemCollection() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarSystemCollection*, 0x140>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__menuDestinationRequest(::GlobalNamespace::MenuDestination*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuDestination*, 0x148>(this, std::forward<::GlobalNamespace::MenuDestination*>(value));
}
constexpr ::GlobalNamespace::MenuDestination* GlobalNamespace::MainFlowCoordinator::__get__menuDestinationRequest()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuDestination*, 0x148>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuDestination*> GlobalNamespace::MainFlowCoordinator::__get__menuDestinationRequest() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuDestination*, 0x148>(this);
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__afterDialogPromptFlowCoordinator(::HMUI::FlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator*, 0x150>(this, std::forward<::HMUI::FlowCoordinator*>(value));
}
constexpr ::HMUI::FlowCoordinator* GlobalNamespace::MainFlowCoordinator::__get__afterDialogPromptFlowCoordinator()  {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x150>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> GlobalNamespace::MainFlowCoordinator::__get__afterDialogPromptFlowCoordinator() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator*, 0x150>(this);
}
inline void GlobalNamespace::MainFlowCoordinator::setStaticF__startWithSettings(bool  value)  {
::cordl_internals::setStaticField<bool, "_startWithSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::MainFlowCoordinator::getStaticF__startWithSettings()  {
return ::cordl_internals::getStaticField<bool, "_startWithSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get>();
}
constexpr void GlobalNamespace::MainFlowCoordinator::__set__goToMultiplayerAfterAvatarCreation(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x158>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MainFlowCoordinator::__get__goToMultiplayerAfterAvatarCreation()  {
return ::cordl_internals::getInstanceField<bool, 0x158>(this);
}
constexpr bool const& GlobalNamespace::MainFlowCoordinator::__get__goToMultiplayerAfterAvatarCreation() const {
return ::cordl_internals::getInstanceField<bool, 0x158>(this);
}
inline void GlobalNamespace::MainFlowCoordinator::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MainFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController*  oldViewController, ::HMUI::ViewController*  newViewController, ::HMUI::__ViewController__AnimationType  animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "TopViewControllerWillChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::MainFlowCoordinator::InitialViewControllerWasPresented()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "InitialViewControllerWasPresented",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator::DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::MainFlowCoordinator::PresentFlowCoordinatorOrAskForTutorial(::HMUI::FlowCoordinator*  flowCoordinator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "PresentFlowCoordinatorOrAskForTutorial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, flowCoordinator);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleMainMenuViewControllerDidFinish(::GlobalNamespace::MainMenuViewController*  viewController, ::GlobalNamespace::__MainMenuViewController__MenuButton  subMenuType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleMainMenuViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainMenuViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainMenuViewController__MenuButton>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewController, subMenuType);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleMultiplayerDisclaimerDidFinishAction(int32_t  buttonNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleMultiplayerDisclaimerDidFinishAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buttonNumber);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleOptionsViewControllerDidFinish(::GlobalNamespace::__OptionsViewController__OptionsButton  optionsType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleOptionsViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OptionsViewController__OptionsButton>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, optionsType);
}
inline void GlobalNamespace::MainFlowCoordinator::HandlePlayerOptionsViewControllerDidFinish(::HMUI::ViewController*  viewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandlePlayerOptionsViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewController);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleHowToPlayViewControllerDidFinish(::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions  howToPlayOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleHowToPlayViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, howToPlayOptions);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleCampaignFlowCoordinatorDidFinish(::GlobalNamespace::CampaignFlowCoordinator*  flowCoordinator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleCampaignFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CampaignFlowCoordinator*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, flowCoordinator);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleEditAvatarFlowCoordinatorHelperDidFinish(::HMUI::FlowCoordinator*  flowCoordinator, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction  finishAction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleEditAvatarFlowCoordinatorHelperDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, flowCoordinator, finishAction);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleSoloFreePlayFlowCoordinatorDidFinish(::GlobalNamespace::LevelSelectionFlowCoordinator*  flowCoordinator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleSoloFreePlayFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, flowCoordinator);
}
inline void GlobalNamespace::MainFlowCoordinator::HandlePartyFreePlayFlowCoordinatorDidFinish(::GlobalNamespace::LevelSelectionFlowCoordinator*  flowCoordinator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandlePartyFreePlayFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, flowCoordinator);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleSettingsFlowCoordinatorDidFinish(::GlobalNamespace::SettingsFlowCoordinator*  settingsFlowCoordinator, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction  finishAction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleSettingsFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsFlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, settingsFlowCoordinator, finishAction);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleHelpFlowCoordinatorDidFinish(::GlobalNamespace::HelpFlowCoordinator*  helpFlowCoordinator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleHelpFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HelpFlowCoordinator*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, helpFlowCoordinator);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleMultiplayerModeSelectionFlowCoordinatorDidFinish(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*  multiplayerModeSelectionFlowCoordinator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleMultiplayerModeSelectionFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, multiplayerModeSelectionFlowCoordinator);
}
inline void GlobalNamespace::MainFlowCoordinator::HandleMainMenuViewControllerMusicPackPromoButtonWasPressed(::GlobalNamespace::IBeatmapLevelPack*  beatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "HandleMainMenuViewControllerMusicPackPromoButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapLevelPack, previewBeatmapLevel);
}
inline void GlobalNamespace::MainFlowCoordinator::ProcessMenuDestinationRequest(::GlobalNamespace::MenuDestination*  destination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "ProcessMenuDestinationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, destination);
}
/// @param presentImmediately: bool (default: true)
inline void GlobalNamespace::MainFlowCoordinator::PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator(bool  presentImmediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, presentImmediately);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MainFlowCoordinator::ProcessMenuDestinationRequestAfterFrameCoroutine(::GlobalNamespace::MenuDestination*  destination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "ProcessMenuDestinationRequestAfterFrameCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method, destination);
}
inline void GlobalNamespace::MainFlowCoordinator::BackButtonWasPressed(::HMUI::ViewController*  topViewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "BackButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, topViewController);
}
inline ::GlobalNamespace::MainFlowCoordinator* GlobalNamespace::MainFlowCoordinator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MainFlowCoordinator*>());
}
inline void GlobalNamespace::MainFlowCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator::_PresentFlowCoordinatorOrAskForTutorial_b__28_0(int32_t  buttonNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "<PresentFlowCoordinatorOrAskForTutorial>b__28_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buttonNumber);
}
inline void GlobalNamespace::MainFlowCoordinator::_PresentFlowCoordinatorOrAskForTutorial_b__28_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "<PresentFlowCoordinatorOrAskForTutorial>b__28_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator::_HandleMainMenuViewControllerDidFinish_b__29_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "<HandleMainMenuViewControllerDidFinish>b__29_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainFlowCoordinator::_PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_b__43_0(int32_t  buttonNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainFlowCoordinator*>::get(),
                            "<PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator>b__43_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buttonNumber);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
