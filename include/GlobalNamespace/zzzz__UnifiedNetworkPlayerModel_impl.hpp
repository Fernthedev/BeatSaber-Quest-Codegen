#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__PartyMessageHandler_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType  GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType::GameLift{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType  GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType::Platform{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::*)()>(&::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263bdf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>"
constexpr  GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*() noexcept {
return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x10>(this, std::forward<::GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_selectionMask()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x10>(this);
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_selectionMask() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x10>(this);
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__set_configuration(::GlobalNamespace::GameplayServerConfiguration  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x38>(this, std::forward<::GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_configuration()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x38>(this);
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_configuration() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x38>(this);
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__set_secret(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_secret()  {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr ::StringW const& GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_secret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__set_code(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_code()  {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr ::StringW const& GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_code() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
inline ::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig* GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*>());
}
inline void GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::*)()>(&::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263bb88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>"
constexpr  GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*() noexcept {
return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::__set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x10>(this, std::forward<::GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::__get_selectionMask()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x10>(this);
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::__get_selectionMask() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x10>(this);
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::__set_configuration(::GlobalNamespace::GameplayServerConfiguration  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x38>(this, std::forward<::GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::__get_configuration()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x38>(this);
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::__get_configuration() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x38>(this);
}
inline ::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig* GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig*>());
}
inline void GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)(int32_t)>(&::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x263ba04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(&::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x263c2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(&::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::MoveNext)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x263c2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(&::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263c7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.__m__Finally2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(&::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__m__Finally2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263c89c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::INetworkPlayer* (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(&::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263c94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(&::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x263c954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(&::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263c994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(&::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x263c99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(&::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x263ca40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
constexpr  GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
constexpr  GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__set___2__current(::GlobalNamespace::INetworkPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::INetworkPlayer*, 0x18>(this, std::forward<::GlobalNamespace::INetworkPlayer*>(value));
}
constexpr ::GlobalNamespace::INetworkPlayer* GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___2__current()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkPlayer*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___2__current() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkPlayer*, 0x18>(this);
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__set___l__initialThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___l__initialThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__set___4__this(::GlobalNamespace::UnifiedNetworkPlayerModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::UnifiedNetworkPlayerModel*, 0x28>(this, std::forward<::GlobalNamespace::UnifiedNetworkPlayerModel*>(value));
}
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel* GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::UnifiedNetworkPlayerModel*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UnifiedNetworkPlayerModel*> GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::UnifiedNetworkPlayerModel*, 0x28>(this);
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*, 0x30>(this, std::forward<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___7__wrap1()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*> GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*, 0x30>(this);
}
inline ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64* GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>(__1__state));
}
inline void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::INetworkPlayer* GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayer*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_connectedPlayerManagerCreatedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerCreatedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2639c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "add_connectedPlayerManagerCreatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_connectedPlayerManagerCreatedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2639d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "remove_connectedPlayerManagerCreatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_connectedPlayerManagerDestroyedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2639dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "add_connectedPlayerManagerDestroyedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_connectedPlayerManagerDestroyedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2639e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "remove_connectedPlayerManagerDestroyedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_partySizeChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<int32_t>*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::add_partySizeChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2639f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "add_partySizeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_partySizeChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<int32_t>*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::remove_partySizeChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2639fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "remove_partySizeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_partyRefreshingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::add_partyRefreshingEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x263a08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "add_partyRefreshingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_partyRefreshingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyRefreshingEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x263a128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "remove_partyRefreshingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_partyChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::add_partyChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263a1c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "add_partyChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_partyChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263a274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "remove_partyChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_joinRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::add_joinRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263a324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "add_joinRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_joinRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::remove_joinRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263a3d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "remove_joinRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_inviteRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::add_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263a484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "add_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_inviteRequestedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::remove_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263a534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "remove_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_activeNetworkPlayerModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::INetworkPlayerModel* (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModel)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x263a5e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_activeNetworkPlayerModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_activeNetworkPlayerModelType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModelType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263a610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_activeNetworkPlayerModelType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_localPlayerIsPartyOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_localPlayerIsPartyOwner)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x263a618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_localPlayerIsPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_hasNetworkingFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_hasNetworkingFailed)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x263a6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_hasNetworkingFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_currentPartySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_currentPartySize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x263a7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_currentPartySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_selectionMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_selectionMask)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x263a870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_configuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_configuration)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x263a958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_secret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_secret)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x263aa3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_secret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_code
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_code)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x263aa60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_code",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_connectedPlayerManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager* (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_connectedPlayerManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x263aa84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_connectedPlayerManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_publicServers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_publicServers)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x263ab44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_publicServers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_friends
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_friends)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x263ab8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_friends",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_discoveryEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_discoveryEnabled)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x263abb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_discoveryEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.set_discoveryEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(bool)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::set_discoveryEnabled)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x263ac6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "set_discoveryEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_enableFriends
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_enableFriends)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x263ad34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_enableFriends",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.set_enableFriends
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(bool)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::set_enableFriends)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x263ad58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "set_enableFriends",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::Initialize)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x263b034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::Dispose)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x263b480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_partyPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_partyPlayers)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x263b8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_partyPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_otherPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_otherPlayers)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x263b98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_otherPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.SetServerFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::SetServerFilter)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x263ba38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "SetServerFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.RefreshAlternateDiscoveryModels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::RefreshAlternateDiscoveryModels)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x263ad8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "RefreshAlternateDiscoveryModels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandlePlayersChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::HandlePlayersChanged)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x263bb90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandlePlayersChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleInviteRequested
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayer*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::HandleInviteRequested)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x263bbf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandleInviteRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleJoinRequested
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayer*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::HandleJoinRequested)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x263bc14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandleJoinRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandlePartyChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayerModel*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x263bc30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandlePartyChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandlePartySizeChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(int32_t)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartySizeChanged)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x263bc50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandlePartySizeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandlePartyRefreshing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyRefreshing)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x263bc84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandlePartyRefreshing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleFriendConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::HandleFriendConnected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x263bca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandleFriendConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleFriendConnectToMasterServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::StringW)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::HandleFriendConnectToMasterServer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x263bd04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandleFriendConnectToMasterServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleConnectedPlayerManagerCreated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayerModel*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerCreated)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x263bdfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandleConnectedPlayerManagerCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleConnectedPlayerManagerDestroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayerModel*)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerDestroyed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x263c0b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandleConnectedPlayerManagerDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.ResetMasterServerReachability
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::ResetMasterServerReachability)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x263c158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "ResetMasterServerReachability",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.DestroyPartyConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::DestroyPartyConnection)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x263c1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "DestroyPartyConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.SetActiveNetworkPlayerModelType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::SetActiveNetworkPlayerModelType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x263c268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "SetActiveNetworkPlayerModelType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263c2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IUnifiedNetworkPlayerModel"
constexpr  GlobalNamespace::UnifiedNetworkPlayerModel::operator ::GlobalNamespace::IUnifiedNetworkPlayerModel*() noexcept {
return static_cast<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
constexpr  GlobalNamespace::UnifiedNetworkPlayerModel::operator ::GlobalNamespace::INetworkPlayerModel*() noexcept {
return static_cast<::GlobalNamespace::INetworkPlayerModel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr  GlobalNamespace::UnifiedNetworkPlayerModel::operator ::Zenject::IInitializable*() noexcept {
return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::UnifiedNetworkPlayerModel::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__gameLiftNetworkPlayerModel(::GlobalNamespace::GameLiftNetworkPlayerModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameLiftNetworkPlayerModel*, 0x10>(this, std::forward<::GlobalNamespace::GameLiftNetworkPlayerModel*>(value));
}
constexpr ::GlobalNamespace::GameLiftNetworkPlayerModel* GlobalNamespace::UnifiedNetworkPlayerModel::__get__gameLiftNetworkPlayerModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameLiftNetworkPlayerModel*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameLiftNetworkPlayerModel*> GlobalNamespace::UnifiedNetworkPlayerModel::__get__gameLiftNetworkPlayerModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameLiftNetworkPlayerModel*, 0x10>(this);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__platformNetworkPlayerModel(::GlobalNamespace::PlatformNetworkPlayerModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlatformNetworkPlayerModel*, 0x18>(this, std::forward<::GlobalNamespace::PlatformNetworkPlayerModel*>(value));
}
constexpr ::GlobalNamespace::PlatformNetworkPlayerModel* GlobalNamespace::UnifiedNetworkPlayerModel::__get__platformNetworkPlayerModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlatformNetworkPlayerModel*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformNetworkPlayerModel*> GlobalNamespace::UnifiedNetworkPlayerModel::__get__platformNetworkPlayerModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlatformNetworkPlayerModel*, 0x18>(this);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*, 0x20>(this, std::forward<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* GlobalNamespace::UnifiedNetworkPlayerModel::__get_connectedPlayerManagerCreatedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> GlobalNamespace::UnifiedNetworkPlayerModel::__get_connectedPlayerManagerCreatedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*, 0x20>(this);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*, 0x28>(this, std::forward<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* GlobalNamespace::UnifiedNetworkPlayerModel::__get_connectedPlayerManagerDestroyedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> GlobalNamespace::UnifiedNetworkPlayerModel::__get_connectedPlayerManagerDestroyedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*, 0x28>(this);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_partySizeChangedEvent(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<int32_t>*, 0x30>(this, std::forward<::System::Action_1<int32_t>*>(value));
}
constexpr ::System::Action_1<int32_t>* GlobalNamespace::UnifiedNetworkPlayerModel::__get_partySizeChangedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<int32_t>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> GlobalNamespace::UnifiedNetworkPlayerModel::__get_partySizeChangedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<int32_t>*, 0x30>(this);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_partyRefreshingEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x38>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::UnifiedNetworkPlayerModel::__get_partyRefreshingEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::UnifiedNetworkPlayerModel::__get_partyRefreshingEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x38>(this);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*, 0x40>(this, std::forward<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* GlobalNamespace::UnifiedNetworkPlayerModel::__get_partyChangedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> GlobalNamespace::UnifiedNetworkPlayerModel::__get_partyChangedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*, 0x40>(this);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*, 0x48>(this, std::forward<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::__get_joinRequestedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> GlobalNamespace::UnifiedNetworkPlayerModel::__get_joinRequestedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*, 0x48>(this);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*, 0x50>(this, std::forward<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::__get_inviteRequestedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> GlobalNamespace::UnifiedNetworkPlayerModel::__get_inviteRequestedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*, 0x50>(this);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__partyMessageHandler(::GlobalNamespace::PartyMessageHandler*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PartyMessageHandler*, 0x58>(this, std::forward<::GlobalNamespace::PartyMessageHandler*>(value));
}
constexpr ::GlobalNamespace::PartyMessageHandler* GlobalNamespace::UnifiedNetworkPlayerModel::__get__partyMessageHandler()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PartyMessageHandler*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyMessageHandler*> GlobalNamespace::UnifiedNetworkPlayerModel::__get__partyMessageHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PartyMessageHandler*, 0x58>(this);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__friendPartyMessageHandler(::GlobalNamespace::PartyMessageHandler*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PartyMessageHandler*, 0x60>(this, std::forward<::GlobalNamespace::PartyMessageHandler*>(value));
}
constexpr ::GlobalNamespace::PartyMessageHandler* GlobalNamespace::UnifiedNetworkPlayerModel::__get__friendPartyMessageHandler()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PartyMessageHandler*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyMessageHandler*> GlobalNamespace::UnifiedNetworkPlayerModel::__get__friendPartyMessageHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PartyMessageHandler*, 0x60>(this);
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__activeNetworkPlayerModelType(::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType, 0x68>(this, std::forward<::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType>(value));
}
constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType& GlobalNamespace::UnifiedNetworkPlayerModel::__get__activeNetworkPlayerModelType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType, 0x68>(this);
}
constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType const& GlobalNamespace::UnifiedNetworkPlayerModel::__get__activeNetworkPlayerModelType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType, 0x68>(this);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "add_connectedPlayerManagerCreatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "remove_connectedPlayerManagerCreatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "add_connectedPlayerManagerDestroyedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "remove_connectedPlayerManagerDestroyedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_partySizeChangedEvent(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "add_partySizeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_partySizeChangedEvent(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "remove_partySizeChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_partyRefreshingEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "add_partyRefreshingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyRefreshingEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "remove_partyRefreshingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "add_partyChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "remove_partyChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "add_joinRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "remove_joinRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "add_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "remove_inviteRequestedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::INetworkPlayerModel* GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_activeNetworkPlayerModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayerModel*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModelType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_activeNetworkPlayerModelType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel::get_localPlayerIsPartyOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_localPlayerIsPartyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel::get_hasNetworkingFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_hasNetworkingFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::UnifiedNetworkPlayerModel::get_currentPartySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_currentPartySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::UnifiedNetworkPlayerModel::get_selectionMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::UnifiedNetworkPlayerModel::get_configuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::UnifiedNetworkPlayerModel::get_secret()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_secret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::UnifiedNetworkPlayerModel::get_code()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_code",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager* GlobalNamespace::UnifiedNetworkPlayerModel::get_connectedPlayerManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_connectedPlayerManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::get_publicServers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_publicServers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::get_friends()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_friends",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel::get_discoveryEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_discoveryEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::set_discoveryEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "set_discoveryEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel::get_enableFriends()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_enableFriends",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::set_enableFriends(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "set_enableFriends",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::get_partyPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_partyPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::get_otherPlayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "get_otherPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::SetServerFilter(::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::GlobalNamespace::GameplayServerConfiguration  configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "SetServerFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, selectionMask, configuration);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::RefreshAlternateDiscoveryModels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "RefreshAlternateDiscoveryModels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePlayersChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandlePlayersChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleInviteRequested(::GlobalNamespace::INetworkPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandleInviteRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, player);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleJoinRequested(::GlobalNamespace::INetworkPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandleJoinRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, player);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyChanged(::GlobalNamespace::INetworkPlayerModel*  playerModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandlePartyChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playerModel);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartySizeChanged(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandlePartySizeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, size);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyRefreshing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandlePartyRefreshing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleFriendConnected(::GlobalNamespace::IConnectedPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandleFriendConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, player);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleFriendConnectToMasterServer(::StringW  secret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandleFriendConnectToMasterServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, secret);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerCreated(::GlobalNamespace::INetworkPlayerModel*  networkPlayerModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandleConnectedPlayerManagerCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, networkPlayerModel);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerDestroyed(::GlobalNamespace::INetworkPlayerModel*  networkPlayerModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "HandleConnectedPlayerManagerDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, networkPlayerModel);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::ResetMasterServerReachability()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "ResetMasterServerReachability",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>*  partyConfig)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                        "CreatePartyConnection",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, partyConfig);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::DestroyPartyConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "DestroyPartyConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::SetActiveNetworkPlayerModelType(::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType  activeNetworkPlayerModelType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            "SetActiveNetworkPlayerModelType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, activeNetworkPlayerModelType);
}
inline ::GlobalNamespace::UnifiedNetworkPlayerModel* GlobalNamespace::UnifiedNetworkPlayerModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::UnifiedNetworkPlayerModel*>());
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
