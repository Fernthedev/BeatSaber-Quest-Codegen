#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet.get_beatmapCharacteristic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapCharacteristicSO* (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::*)()>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::get_beatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2345970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>::get(),
                            "get_beatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet.get_difficultyBeatmaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::*)()>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2345978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>::get(),
                            "get_difficultyBeatmaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::*)(::GlobalNamespace::BeatmapCharacteristicSO*, ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>)>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2345980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet.SetParentLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::*)(::GlobalNamespace::IBeatmapLevel*)>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::SetParentLevel)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2344dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>::get(),
                            "SetParentLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IDifficultyBeatmapSet"
constexpr  GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::operator ::GlobalNamespace::IDifficultyBeatmapSet*() noexcept {
return static_cast<::GlobalNamespace::IDifficultyBeatmapSet*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::__set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x10>(this, std::forward<::GlobalNamespace::BeatmapCharacteristicSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::__get__beatmapCharacteristic()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::__get__beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x10>(this);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::__set__difficultyBeatmaps(::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::__get__difficultyBeatmaps()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> const& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::__get__difficultyBeatmaps() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>, 0x18>(this);
}
inline ::GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::get_beatmapCharacteristic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>::get(),
                            "get_beatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristicSO*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::get_difficultyBeatmaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>::get(),
                            "get_difficultyBeatmaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet* GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::New_ctor(::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>  difficultyBeatmaps)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>(beatmapCharacteristic, difficultyBeatmaps));
}
inline void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::_ctor(::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>  difficultyBeatmaps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapCharacteristic, difficultyBeatmaps);
}
inline void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet::SetParentLevel(::GlobalNamespace::IBeatmapLevel*  level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>::get(),
                            "SetParentLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, level);
}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::*)()>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2345c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2345e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*> const& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__set___4__this(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>(value));
}
constexpr ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap* GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*> GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*>& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*> const& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>  __t__builder, ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::*)()>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x2345e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2346164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> const& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__set___4__this(::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>(value));
}
constexpr ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap* GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*> GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::EnvironmentInfoSO*>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get_environmentInfo()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get_environmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerSpecificSettings*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::PlayerSpecificSettings*>(value));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get_playerSpecificSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSpecificSettings*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSpecificSettings*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> const& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "environmentInfo", ty: "::GlobalNamespace::EnvironmentInfoSO*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>  __t__builder, ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*  __4__this, ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->environmentInfo = environmentInfo;
this->playerSpecificSettings = playerSpecificSettings;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap.get_difficulty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::*)()>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::get_difficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23459ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "get_difficulty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap.get_difficultyRank
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::*)()>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::get_difficultyRank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23459b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "get_difficultyRank",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap.get_noteJumpMovementSpeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::*)()>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::get_noteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23459bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "get_noteJumpMovementSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap.get_noteJumpStartBeatOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::*)()>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::get_noteJumpStartBeatOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23459c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "get_noteJumpStartBeatOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap.get_environmentNameIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::*)()>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::get_environmentNameIdx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23459cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "get_environmentNameIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap.GetBeatmapDataBasicInfoAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::*)()>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::GetBeatmapDataBasicInfoAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23459d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "GetBeatmapDataBasicInfoAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap.GetBeatmapDataAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::*)(::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::PlayerSpecificSettings*)>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::GetBeatmapDataAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2345ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "GetBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap.get_level
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevel* (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::*)()>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::get_level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2345bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "get_level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap.get_parentDifficultyBeatmapSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmapSet* (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::*)()>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::get_parentDifficultyBeatmapSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2345bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "get_parentDifficultyBeatmapSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap.SetParents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::*)(::GlobalNamespace::IBeatmapLevel*, ::GlobalNamespace::IDifficultyBeatmapSet*)>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::SetParents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233f3b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "SetParents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmapSet*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::*)(::GlobalNamespace::IBeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, int32_t, float_t, float_t, int32_t, ::GlobalNamespace::BeatmapDataSO*)>(&::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2345bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataSO*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IDifficultyBeatmap"
constexpr  GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::operator ::GlobalNamespace::IDifficultyBeatmap*() noexcept {
return static_cast<::GlobalNamespace::IDifficultyBeatmap*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__set__difficulty(::GlobalNamespace::BeatmapDifficulty  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x10>(this, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__get__difficulty()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x10>(this);
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__get__difficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x10>(this);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__set__difficultyRank(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__get__difficultyRank()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__get__difficultyRank() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__set__noteJumpMovementSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__get__noteJumpMovementSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__get__noteJumpMovementSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__set__noteJumpStartBeatOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__get__noteJumpStartBeatOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__get__noteJumpStartBeatOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__set__environmentNameIdx(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__get__environmentNameIdx()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__get__environmentNameIdx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__set__beatmapData(::GlobalNamespace::BeatmapDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataSO*, 0x28>(this, std::forward<::GlobalNamespace::BeatmapDataSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataSO* GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__get__beatmapData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataSO*> GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__get__beatmapData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataSO*, 0x28>(this);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__set__parentLevel(::GlobalNamespace::IBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevel*, 0x30>(this, std::forward<::GlobalNamespace::IBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevel* GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__get__parentLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevel*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__get__parentLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevel*, 0x30>(this);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__set__parentDifficultyBeatmapSet(::GlobalNamespace::IDifficultyBeatmapSet*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IDifficultyBeatmapSet*, 0x38>(this, std::forward<::GlobalNamespace::IDifficultyBeatmapSet*>(value));
}
constexpr ::GlobalNamespace::IDifficultyBeatmapSet* GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__get__parentDifficultyBeatmapSet()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IDifficultyBeatmapSet*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmapSet*> GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::__get__parentDifficultyBeatmapSet() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IDifficultyBeatmapSet*, 0x38>(this);
}
inline ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::get_difficulty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "get_difficulty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::get_difficultyRank()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "get_difficultyRank",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::get_noteJumpMovementSpeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "get_noteJumpMovementSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::get_noteJumpStartBeatOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "get_noteJumpStartBeatOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::get_environmentNameIdx()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "get_environmentNameIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::GetBeatmapDataBasicInfoAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "GetBeatmapDataBasicInfoAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>*, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::GetBeatmapDataAsync(::GlobalNamespace::EnvironmentInfoSO*  environmentInfo, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "GetBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*, false>(*this, ___internal_method, environmentInfo, playerSpecificSettings);
}
inline ::GlobalNamespace::IBeatmapLevel* GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::get_level()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "get_level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevel*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::IDifficultyBeatmapSet* GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::get_parentDifficultyBeatmapSet()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "get_parentDifficultyBeatmapSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDifficultyBeatmapSet*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::SetParents(::GlobalNamespace::IBeatmapLevel*  parentLevel, ::GlobalNamespace::IDifficultyBeatmapSet*  parentDifficultyBeatmapSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            "SetParents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmapSet*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parentLevel, parentDifficultyBeatmapSet);
}
inline ::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap* GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::New_ctor(::GlobalNamespace::IBeatmapLevel*  parentLevel, ::GlobalNamespace::BeatmapDifficulty  difficulty, int32_t  difficultyRank, float_t  noteJumpMovementSpeed, float_t  noteJumpStartBeatOffset, int32_t  environmentNameIdx, ::GlobalNamespace::BeatmapDataSO*  beatmapData)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>(parentLevel, difficulty, difficultyRank, noteJumpMovementSpeed, noteJumpStartBeatOffset, environmentNameIdx, beatmapData));
}
inline void GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap::_ctor(::GlobalNamespace::IBeatmapLevel*  parentLevel, ::GlobalNamespace::BeatmapDifficulty  difficulty, int32_t  difficultyRank, float_t  noteJumpMovementSpeed, float_t  noteJumpStartBeatOffset, int32_t  environmentNameIdx, ::GlobalNamespace::BeatmapDataSO*  beatmapData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parentLevel, difficulty, difficultyRank, noteJumpMovementSpeed, noteJumpStartBeatOffset, environmentNameIdx, beatmapData);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result  GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result::OK{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result  GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result::NotOwned{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result  GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result::Fail{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult::*)(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result, ::GlobalNamespace::IBeatmapLevelData*)>(&::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23461bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult::__set_result(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result>(value));
}
constexpr ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result& GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult::__get_result()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result const& GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult::__get_result() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult::__set_beatmapLevelData(::GlobalNamespace::IBeatmapLevelData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevelData*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::IBeatmapLevelData*>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevelData* GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult::__get_beatmapLevelData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelData*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelData*> GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult::__get_beatmapLevelData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelData*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult::_ctor(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result  result, ::GlobalNamespace::IBeatmapLevelData*  beatmapLevelData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result, beatmapLevelData);
}
// Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult::__BeatmapLevelSO__GetBeatmapLevelDataResult(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult__Result  result, ::GlobalNamespace::IBeatmapLevelData*  beatmapLevelData) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->result = result;
this->beatmapLevelData = beatmapLevelData;
}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::*)()>(&::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::MoveNext)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x23461c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23463f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>& GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*> const& GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::__set___4__this(::GlobalNamespace::BeatmapLevelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::BeatmapLevelSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSO* GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>& GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> const& GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelSO*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71::__BeatmapLevelSO___GetPreviewAudioClipAsync_d__71(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::BeatmapLevelSO*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::*)()>(&::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::MoveNext)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2346450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2346680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>& GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> const& GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::__set___4__this(::GlobalNamespace::BeatmapLevelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::BeatmapLevelSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSO* GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>& GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> const& GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelSO*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelSO___GetCoverImageAsync_d__72::__BeatmapLevelSO___GetCoverImageAsync_d__72(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::BeatmapLevelSO*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::*)()>(&::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::MoveNext)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x23466d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2346978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>& GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> const& GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::__set___4__this(::GlobalNamespace::BeatmapLevelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::BeatmapLevelSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSO* GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>& GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult> const& GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelSO*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76::__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__76(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>  __t__builder, ::GlobalNamespace::BeatmapLevelSO*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_levelID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_levelID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_levelID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_songName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songSubName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songSubName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_songSubName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songAuthorName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_songAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_levelAuthorName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_levelAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_levelAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_beatsPerMinute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_beatsPerMinute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_beatsPerMinute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songTimeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_songTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_shuffle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_shuffle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_shuffle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_shufflePeriod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_shufflePeriod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_shufflePeriod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_previewStartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_previewStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_previewStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_previewDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_previewDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_previewDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_coverImage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_coverImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_coverImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_environmentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_environmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_environmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_allDirectionsEnvironmentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_allDirectionsEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_allDirectionsEnvironmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_environmentInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*> (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_environmentInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_environmentInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_difficultyBeatmapSets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_difficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2344c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_difficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_contentRating
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSensitivityFlag (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_contentRating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_contentRating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songDuration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2344c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_songDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_previewDifficultyBeatmapSets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_previewDifficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2344c68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_previewDifficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songPreviewAudioClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songPreviewAudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_songPreviewAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songAudioClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songAudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2344c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_songAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2344c94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.InitData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::InitData)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2344cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "InitData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.GetPreviewAudioClipAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (::GlobalNamespace::BeatmapLevelSO::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelSO::GetPreviewAudioClipAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2344e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "GetPreviewAudioClipAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.GetCoverImageAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* (::GlobalNamespace::BeatmapLevelSO::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelSO::GetCoverImageAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2344f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "GetCoverImageAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_beatmapLevelData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelData* (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_beatmapLevelData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2345014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_beatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.__SetEnvironmentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)(::GlobalNamespace::EnvironmentInfoSO*)>(&::GlobalNamespace::BeatmapLevelSO::__SetEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2345094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "__SetEnvironmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.GetBeatmapLevelDataAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* (::GlobalNamespace::BeatmapLevelSO::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x234509c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "GetBeatmapLevelDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.GetDifficultyBeatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmap* (::GlobalNamespace::BeatmapLevelSO::*)(::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapLevelSO::GetDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x79c;
  constexpr static std::size_t addrs = 0x2345194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "GetDifficultyBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.InitFull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::UnityEngine::AudioClip*, float_t, float_t, float_t, float_t, float_t, float_t, ::UnityEngine::Sprite*, ::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::EnvironmentInfoSO*, ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>, ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*>)>(&::GlobalNamespace::BeatmapLevelSO::InitFull)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2345930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "InitFull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2345960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevel"
constexpr  GlobalNamespace::BeatmapLevelSO::operator ::GlobalNamespace::IBeatmapLevel*() noexcept {
return static_cast<::GlobalNamespace::IBeatmapLevel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPreviewBeatmapLevel"
constexpr  GlobalNamespace::BeatmapLevelSO::operator ::GlobalNamespace::IPreviewBeatmapLevel*() noexcept {
return static_cast<::GlobalNamespace::IPreviewBeatmapLevel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IAssetSongAudioClipProvider"
constexpr  GlobalNamespace::BeatmapLevelSO::operator ::GlobalNamespace::IAssetSongAudioClipProvider*() noexcept {
return static_cast<::GlobalNamespace::IAssetSongAudioClipProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
constexpr  GlobalNamespace::BeatmapLevelSO::operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider*() noexcept {
return static_cast<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__levelID(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelSO::__get__levelID()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelSO::__get__levelID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__songName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelSO::__get__songName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelSO::__get__songName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__songSubName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelSO::__get__songSubName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelSO::__get__songSubName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__songAuthorName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelSO::__get__songAuthorName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelSO::__get__songAuthorName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__levelAuthorName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelSO::__get__levelAuthorName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelSO::__get__levelAuthorName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__audioClip(::UnityEngine::AudioClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioClip*, 0x40>(this, std::forward<::UnityEngine::AudioClip*>(value));
}
constexpr ::UnityEngine::AudioClip* GlobalNamespace::BeatmapLevelSO::__get__audioClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> GlobalNamespace::BeatmapLevelSO::__get__audioClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip*, 0x40>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__beatsPerMinute(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__get__beatsPerMinute()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__get__beatsPerMinute() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__songTimeOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__get__songTimeOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__get__songTimeOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__shuffle(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__get__shuffle()  {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__get__shuffle() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__shufflePeriod(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__get__shufflePeriod()  {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__get__shufflePeriod() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__previewStartTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__get__previewStartTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__get__previewStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__previewDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__get__previewDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__get__previewDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__coverImage(::UnityEngine::Sprite*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Sprite*, 0x60>(this, std::forward<::UnityEngine::Sprite*>(value));
}
constexpr ::UnityEngine::Sprite* GlobalNamespace::BeatmapLevelSO::__get__coverImage()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> GlobalNamespace::BeatmapLevelSO::__get__coverImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite*, 0x60>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__environmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x68>(this, std::forward<::GlobalNamespace::EnvironmentInfoSO*>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::BeatmapLevelSO::__get__environmentInfo()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> GlobalNamespace::BeatmapLevelSO::__get__environmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x68>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__allDirectionsEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x70>(this, std::forward<::GlobalNamespace::EnvironmentInfoSO*>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::BeatmapLevelSO::__get__allDirectionsEnvironmentInfo()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> GlobalNamespace::BeatmapLevelSO::__get__allDirectionsEnvironmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x70>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__environmentInfos(::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>, 0x78>(this, std::forward<::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>& GlobalNamespace::BeatmapLevelSO::__get__environmentInfos()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>, 0x78>(this);
}
constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*> const& GlobalNamespace::BeatmapLevelSO::__get__environmentInfos() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>, 0x78>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__difficultyBeatmapSets(::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*>, 0x80>(this, std::forward<::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*>& GlobalNamespace::BeatmapLevelSO::__get__difficultyBeatmapSets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*>, 0x80>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*> const& GlobalNamespace::BeatmapLevelSO::__get__difficultyBeatmapSets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*>, 0x80>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__contentRating(::GlobalNamespace::PlayerSensitivityFlag  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerSensitivityFlag, 0x88>(this, std::forward<::GlobalNamespace::PlayerSensitivityFlag>(value));
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::BeatmapLevelSO::__get__contentRating()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSensitivityFlag, 0x88>(this);
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::BeatmapLevelSO::__get__contentRating() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSensitivityFlag, 0x88>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__ignore360MovementBeatmaps(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::BeatmapLevelSO::__get__ignore360MovementBeatmaps()  {
return ::cordl_internals::getInstanceField<bool, 0x8c>(this);
}
constexpr bool const& GlobalNamespace::BeatmapLevelSO::__get__ignore360MovementBeatmaps() const {
return ::cordl_internals::getInstanceField<bool, 0x8c>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__no360MovementDifficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*, 0x90>(this, std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>* GlobalNamespace::BeatmapLevelSO::__get__no360MovementDifficultyBeatmapSets()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*> GlobalNamespace::BeatmapLevelSO::__get__no360MovementDifficultyBeatmapSets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*, 0x90>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__previewDifficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*, 0x98>(this, std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* GlobalNamespace::BeatmapLevelSO::__get__previewDifficultyBeatmapSets()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> GlobalNamespace::BeatmapLevelSO::__get__previewDifficultyBeatmapSets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*, 0x98>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__no360MovementPreviewDifficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*, 0xa0>(this, std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* GlobalNamespace::BeatmapLevelSO::__get__no360MovementPreviewDifficultyBeatmapSets()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> GlobalNamespace::BeatmapLevelSO::__get__no360MovementPreviewDifficultyBeatmapSets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*, 0xa0>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__beatmapLevelData(::GlobalNamespace::IBeatmapLevelData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevelData*, 0xa8>(this, std::forward<::GlobalNamespace::IBeatmapLevelData*>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevelData* GlobalNamespace::BeatmapLevelSO::__get__beatmapLevelData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelData*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelData*> GlobalNamespace::BeatmapLevelSO::__get__beatmapLevelData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelData*, 0xa8>(this);
}
constexpr void GlobalNamespace::BeatmapLevelSO::__set__getBeatmapLevelDataResult(::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult, 0xb0>(this, std::forward<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>(value));
}
constexpr ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult& GlobalNamespace::BeatmapLevelSO::__get__getBeatmapLevelDataResult()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult, 0xb0>(this);
}
constexpr ::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult const& GlobalNamespace::BeatmapLevelSO::__get__getBeatmapLevelDataResult() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult, 0xb0>(this);
}
inline ::StringW GlobalNamespace::BeatmapLevelSO::get_levelID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_levelID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelSO::get_songName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_songName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelSO::get_songSubName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_songSubName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelSO::get_songAuthorName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_songAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelSO::get_levelAuthorName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_levelAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_beatsPerMinute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_beatsPerMinute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_songTimeOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_songTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_shuffle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_shuffle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_shufflePeriod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_shufflePeriod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_previewStartTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_previewStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_previewDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_previewDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::Sprite* GlobalNamespace::BeatmapLevelSO::get_coverImage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_coverImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Sprite*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::BeatmapLevelSO::get_environmentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_environmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::BeatmapLevelSO::get_allDirectionsEnvironmentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_allDirectionsEnvironmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO*, false>(*this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*> GlobalNamespace::BeatmapLevelSO::get_environmentInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_environmentInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* GlobalNamespace::BeatmapLevelSO::get_difficultyBeatmapSets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_difficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSensitivityFlag GlobalNamespace::BeatmapLevelSO::get_contentRating()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_contentRating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSensitivityFlag, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_songDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_songDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* GlobalNamespace::BeatmapLevelSO::get_previewDifficultyBeatmapSets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_previewDifficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*, false>(*this, ___internal_method);
}
inline ::UnityEngine::AudioClip* GlobalNamespace::BeatmapLevelSO::get_songPreviewAudioClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_songPreviewAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioClip*, false>(*this, ___internal_method);
}
inline ::UnityEngine::AudioClip* GlobalNamespace::BeatmapLevelSO::get_songAudioClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_songAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioClip*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelSO::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelSO::InitData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "InitData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GlobalNamespace::BeatmapLevelSO::GetPreviewAudioClipAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "GetPreviewAudioClipAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*, false>(*this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* GlobalNamespace::BeatmapLevelSO::GetCoverImageAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "GetCoverImageAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*, false>(*this, ___internal_method, cancellationToken);
}
inline ::GlobalNamespace::IBeatmapLevelData* GlobalNamespace::BeatmapLevelSO::get_beatmapLevelData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "get_beatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelData*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelSO::__SetEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO*  environmentInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "__SetEnvironmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, environmentInfo);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataAsync(::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "GetBeatmapLevelDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*, false>(*this, ___internal_method, token);
}
inline ::GlobalNamespace::IDifficultyBeatmap* GlobalNamespace::BeatmapLevelSO::GetDifficultyBeatmap(::GlobalNamespace::BeatmapCharacteristicSO*  characteristic, ::GlobalNamespace::BeatmapDifficulty  difficulty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "GetDifficultyBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDifficultyBeatmap*, false>(*this, ___internal_method, characteristic, difficulty);
}
inline void GlobalNamespace::BeatmapLevelSO::InitFull(::StringW  levelID, ::StringW  songName, ::StringW  songSubName, ::StringW  songAuthorName, ::StringW  levelAuthorName, ::UnityEngine::AudioClip*  audioClip, float_t  beatsPerMinute, float_t  songTimeOffset, float_t  shuffle, float_t  shufflePeriod, float_t  previewStartTime, float_t  previewDuration, ::UnityEngine::Sprite*  coverImage, ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo, ::GlobalNamespace::EnvironmentInfoSO*  allDirectionsEnvironmentInfo, ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>  environmentInfos, ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*>  difficultyBeatmapSets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            "InitFull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*,::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmapSet*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, levelID, songName, songSubName, songAuthorName, levelAuthorName, audioClip, beatsPerMinute, songTimeOffset, shuffle, shufflePeriod, previewStartTime, previewDuration, coverImage, environmentInfo, allDirectionsEnvironmentInfo, environmentInfos, difficultyBeatmapSets);
}
inline ::GlobalNamespace::BeatmapLevelSO* GlobalNamespace::BeatmapLevelSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapLevelSO*>());
}
inline void GlobalNamespace::BeatmapLevelSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
