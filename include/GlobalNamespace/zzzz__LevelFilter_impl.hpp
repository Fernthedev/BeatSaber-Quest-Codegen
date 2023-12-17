#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelFilter_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__LevelFilter_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::*)()>(&::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0xe00;
  constexpr static std::size_t addrs = 0x234abb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x234b9b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*>& GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*> const& GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__set_packs(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get_packs()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get_packs() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__set_filter(::GlobalNamespace::LevelFilter  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelFilter, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::LevelFilter>(value));
}
constexpr ::GlobalNamespace::LevelFilter& GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get_filter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelFilter, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::LevelFilter const& GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get_filter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelFilter, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__set_additionalContentModel(::GlobalNamespace::IAdditionalContentModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAdditionalContentModel*, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::IAdditionalContentModel*>(value));
}
constexpr ::GlobalNamespace::IAdditionalContentModel* GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get_additionalContentModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAdditionalContentModel*, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get_additionalContentModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAdditionalContentModel*, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x80>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x80>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x80>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__set_playerDataModel(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get_playerDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get_playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__set__filteredLevels_5__2(::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, 0x90>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>* GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get__filteredLevels_5__2()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, 0x90>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get__filteredLevels_5__2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, 0x90>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__set___7__wrap2(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get___7__wrap2()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__set___7__wrap3(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xa0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get___7__wrap3()  {
return ::cordl_internals::getInstanceField<int32_t, 0xa0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get___7__wrap3() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__set___7__wrap4(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>* GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get___7__wrap4()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get___7__wrap4() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__set__level_5__6(::GlobalNamespace::IPreviewBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0xb0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::IPreviewBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get__level_5__6()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0xb0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get__level_5__6() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0xb0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>, 0xb8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>& GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>, 0xb8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> const& GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>, 0xb8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "packs", ty: "::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "filter", ty: "::GlobalNamespace::LevelFilter", modifiers: "", def_value: Some("{}") }, CppParam { name: "additionalContentModel", ty: "::GlobalNamespace::IAdditionalContentModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerDataModel", ty: "::GlobalNamespace::PlayerDataModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_filteredLevels_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap2", ty: "::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty: "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_level_5__6", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13::__LevelFilter___FilterLevelsAsync_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*>  __t__builder, ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  packs, ::GlobalNamespace::LevelFilter  filter, ::GlobalNamespace::IAdditionalContentModel*  additionalContentModel, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::PlayerDataModel*  playerDataModel, ::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  _filteredLevels_5__2, ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  __7__wrap2, int32_t  __7__wrap3, ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  __7__wrap4, ::GlobalNamespace::IPreviewBeatmapLevel*  _level_5__6, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0xc0>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->packs = packs;
this->filter = filter;
this->additionalContentModel = additionalContentModel;
this->cancellationToken = cancellationToken;
this->playerDataModel = playerDataModel;
this->_filteredLevels_5__2 = _filteredLevels_5__2;
this->__7__wrap2 = __7__wrap2;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->_level_5__6 = _level_5__6;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__LevelFilter____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelFilter____c::*)()>(&::GlobalNamespace::__LevelFilter____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234ba6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilter____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelFilter____c._FilterLevelByText_b__14_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__LevelFilter____c::*)(::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>, ::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>)>(&::GlobalNamespace::__LevelFilter____c::_FilterLevelByText_b__14_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x234ba74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilter____c*>::get(),
                            "<FilterLevelByText>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__LevelFilter____c::setStaticF___9(::GlobalNamespace::__LevelFilter____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__LevelFilter____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilter____c*>::get>(std::forward<::GlobalNamespace::__LevelFilter____c*>(value));
}
inline ::GlobalNamespace::__LevelFilter____c* GlobalNamespace::__LevelFilter____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__LevelFilter____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilter____c*>::get>();
}
inline void GlobalNamespace::__LevelFilter____c::setStaticF___9__14_0(::System::Comparison_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>>*, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilter____c*>::get>(std::forward<::System::Comparison_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>>*>(value));
}
inline ::System::Comparison_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>>* GlobalNamespace::__LevelFilter____c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>>*, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilter____c*>::get>();
}
inline ::GlobalNamespace::__LevelFilter____c* GlobalNamespace::__LevelFilter____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LevelFilter____c*>());
}
inline void GlobalNamespace::__LevelFilter____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilter____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::__LevelFilter____c::_FilterLevelByText_b__14_0(::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>  x, ::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilter____c*>::get(),
                            "<FilterLevelByText>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, x, y);
}
//  Writing Method size for method: ::GlobalNamespace::LevelFilter.IsWithoutFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::GlobalNamespace::LevelFilter>, bool)>(&::GlobalNamespace::LevelFilter::IsWithoutFilter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2349588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(),
                            "IsWithoutFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::LevelFilter>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter.FilterLevelsAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelCollection*>* (*)(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, ::GlobalNamespace::LevelFilter, ::GlobalNamespace::PlayerDataModel*, ::GlobalNamespace::IAdditionalContentModel*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::LevelFilter::FilterLevelsAsync)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2349638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(),
                            "FilterLevelsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelFilter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAdditionalContentModel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter.FilterLevelByText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>* (*)(::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, ::ArrayW<::StringW,::Array<::StringW>*>)>(&::GlobalNamespace::LevelFilter::FilterLevelByText)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x234976c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(),
                            "FilterLevelByText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter._FilterLevelsAsync_g__HasPlayedAnyDifficulty_13_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::PlayerDataModel*)>(&::GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__HasPlayedAnyDifficulty_13_0)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x234a07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(),
                            "<FilterLevelsAsync>g__HasPlayedAnyDifficulty|13_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter._FilterLevelsAsync_g__MatchesCharacteristic_13_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*, ::StringW)>(&::GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__MatchesCharacteristic_13_1)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x234a514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(),
                            "<FilterLevelsAsync>g__MatchesCharacteristic|13_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter._FilterLevelsAsync_g__MatchesDifficulty_13_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*, ::GlobalNamespace::BeatmapDifficultyMask)>(&::GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__MatchesDifficulty_13_2)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x234a83c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(),
                            "<FilterLevelsAsync>g__MatchesDifficulty|13_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter._FilterLevelByText_g__CalculateMatchScore_14_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::ArrayW<::StringW,::Array<::StringW>*>)>(&::GlobalNamespace::LevelFilter::_FilterLevelByText_g__CalculateMatchScore_14_1)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2349ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(),
                            "<FilterLevelByText>g__CalculateMatchScore|14_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LevelFilter::__set_songOwned(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LevelFilter::__get_songOwned()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::LevelFilter::__get_songOwned() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::LevelFilter::__set_songNotOwned(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LevelFilter::__get_songNotOwned()  {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::LevelFilter::__get_songNotOwned() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::LevelFilter::__set_songUnplayed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LevelFilter::__get_songUnplayed()  {
return ::cordl_internals::getInstanceField<bool, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::LevelFilter::__get_songUnplayed() const {
return ::cordl_internals::getInstanceField<bool, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::LevelFilter::__set_difficulties(::GlobalNamespace::BeatmapDifficultyMask  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficultyMask, 0x3>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::BeatmapDifficultyMask>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask& GlobalNamespace::LevelFilter::__get_difficulties()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficultyMask, 0x3>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask const& GlobalNamespace::LevelFilter::__get_difficulties() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficultyMask, 0x3>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::LevelFilter::__set_songPacks(::GlobalNamespace::SongPackMask  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongPackMask, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SongPackMask>(value));
}
constexpr ::GlobalNamespace::SongPackMask& GlobalNamespace::LevelFilter::__get_songPacks()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMask, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::SongPackMask const& GlobalNamespace::LevelFilter::__get_songPacks() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMask, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::LevelFilter::__set_characteristicSerializedName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::LevelFilter::__get_characteristicSerializedName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::LevelFilter::__get_characteristicSerializedName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::LevelFilter::__set_minBpm(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LevelFilter::__get_minBpm()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::LevelFilter::__get_minBpm() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::LevelFilter::__set_maxBpm(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LevelFilter::__get_maxBpm()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::LevelFilter::__get_maxBpm() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::LevelFilter::__set_sensitivity(::GlobalNamespace::PlayerSensitivityFlag  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerSensitivityFlag, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::PlayerSensitivityFlag>(value));
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::LevelFilter::__get_sensitivity()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSensitivityFlag, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::LevelFilter::__get_sensitivity() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSensitivityFlag, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::LevelFilter::__set_searchText(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::LevelFilter::__get_searchText()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::LevelFilter::__get_searchText() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::LevelFilter::__set_limitIds(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& GlobalNamespace::LevelFilter::__get_limitIds()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& GlobalNamespace::LevelFilter::__get_limitIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::LevelFilter::setStaticF_bpmOptions(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t,::Array<float_t>*>, "bpmOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get>(std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t,::Array<float_t>*> GlobalNamespace::LevelFilter::getStaticF_bpmOptions()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t,::Array<float_t>*>, "bpmOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get>();
}
inline bool GlobalNamespace::LevelFilter::IsWithoutFilter(ByRef<::GlobalNamespace::LevelFilter>  filter, bool  ignoreFilterBySongs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(),
                            "IsWithoutFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::LevelFilter>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, filter, ignoreFilterBySongs);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelCollection*>* GlobalNamespace::LevelFilter::FilterLevelsAsync(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  packs, ::GlobalNamespace::LevelFilter  filter, ::GlobalNamespace::PlayerDataModel*  playerDataModel, ::GlobalNamespace::IAdditionalContentModel*  additionalContentModel, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(),
                            "FilterLevelsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelFilter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAdditionalContentModel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelCollection*>*, false>(nullptr, ___internal_method, packs, filter, playerDataModel, additionalContentModel, cancellationToken);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>* GlobalNamespace::LevelFilter::FilterLevelByText(::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  levels, ::ArrayW<::StringW,::Array<::StringW>*>  searchTerms)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(),
                            "FilterLevelByText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, false>(nullptr, ___internal_method, levels, searchTerms);
}
inline bool GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__HasPlayedAnyDifficulty_13_0(::GlobalNamespace::IPreviewBeatmapLevel*  level, ::GlobalNamespace::PlayerDataModel*  playerDataModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(),
                            "<FilterLevelsAsync>g__HasPlayedAnyDifficulty|13_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, level, playerDataModel);
}
inline bool GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__MatchesCharacteristic_13_1(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*  difficultySets, ::StringW  characteristicFilter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(),
                            "<FilterLevelsAsync>g__MatchesCharacteristic|13_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, difficultySets, characteristicFilter);
}
inline bool GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__MatchesDifficulty_13_2(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*  difficultySets, ::GlobalNamespace::BeatmapDifficultyMask  difficultyFilter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(),
                            "<FilterLevelsAsync>g__MatchesDifficulty|13_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, difficultySets, difficultyFilter);
}
inline int32_t GlobalNamespace::LevelFilter::_FilterLevelByText_g__CalculateMatchScore_14_1(::StringW  levelString, ::ArrayW<::StringW,::Array<::StringW>*>  searchTerms)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(),
                            "<FilterLevelByText>g__CalculateMatchScore|14_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, levelString, searchTerms);
}
// Ctor Parameters [CppParam { name: "songOwned", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "songNotOwned", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "songUnplayed", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "difficulties", ty: "::GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "songPacks", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "characteristicSerializedName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "minBpm", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxBpm", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sensitivity", ty: "::GlobalNamespace::PlayerSensitivityFlag", modifiers: "", def_value: Some("{}") }, CppParam { name: "searchText", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "limitIds", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::LevelFilter::LevelFilter(bool  songOwned, bool  songNotOwned, bool  songUnplayed, ::GlobalNamespace::BeatmapDifficultyMask  difficulties, ::GlobalNamespace::SongPackMask  songPacks, ::StringW  characteristicSerializedName, float_t  minBpm, float_t  maxBpm, ::GlobalNamespace::PlayerSensitivityFlag  sensitivity, ::StringW  searchText, ::ArrayW<::StringW,::Array<::StringW>*>  limitIds) noexcept : ::bs_hook::ValueTypeWrapper<0x50>() {this->songOwned = songOwned;
this->songNotOwned = songNotOwned;
this->songUnplayed = songUnplayed;
this->difficulties = difficulties;
this->songPacks = songPacks;
this->characteristicSerializedName = characteristicSerializedName;
this->minBpm = minBpm;
this->maxBpm = maxBpm;
this->sensitivity = sensitivity;
this->searchText = searchText;
this->limitIds = limitIds;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
