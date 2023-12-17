#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr void GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState  GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::SongFinished{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState  GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::NotFinished{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState  GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::NotStarted{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::Cleared{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::Failed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::GivenUp{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::Quit{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::HostEndedLevel{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::WasInactive{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::StartupFailed{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::ConnectedAfterLevelEnded{static_cast<int32_t>(0x7)};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.get_playerLevelEndState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState (::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&::GlobalNamespace::MultiplayerLevelCompletionResults::get_playerLevelEndState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe49b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "get_playerLevelEndState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.get_playerLevelEndReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason (::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&::GlobalNamespace::MultiplayerLevelCompletionResults::get_playerLevelEndReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe49b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "get_playerLevelEndReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.get_levelCompletionResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults* (::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&::GlobalNamespace::MultiplayerLevelCompletionResults::get_levelCompletionResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe49b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "get_levelCompletionResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.get_hasAnyResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&::GlobalNamespace::MultiplayerLevelCompletionResults::get_hasAnyResults)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe49b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "get_hasAnyResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.get_failedOrGivenUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&::GlobalNamespace::MultiplayerLevelCompletionResults::get_failedOrGivenUp)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe49b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "get_failedOrGivenUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&::GlobalNamespace::MultiplayerLevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe49b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelCompletionResults::*)(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState, ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::MultiplayerLevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xe49b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelCompletionResults::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::MultiplayerLevelCompletionResults::Serialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe49b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.CreateFromSerializedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerLevelCompletionResults* (::GlobalNamespace::MultiplayerLevelCompletionResults::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::MultiplayerLevelCompletionResults::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xe49bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MultiplayerLevelCompletionResults::*)(::System::Object*)>(&::GlobalNamespace::MultiplayerLevelCompletionResults::CompareTo)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xe49ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.HasAnyResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState)>(&::GlobalNamespace::MultiplayerLevelCompletionResults::HasAnyResult)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe49b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "HasAnyResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>"
constexpr  GlobalNamespace::MultiplayerLevelCompletionResults::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*() noexcept {
return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
constexpr  GlobalNamespace::MultiplayerLevelCompletionResults::operator ::System::IComparable*() noexcept {
return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::MultiplayerLevelCompletionResults::__set__playerLevelEndState(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState, 0x10>(this, std::forward<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState>(value));
}
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState& GlobalNamespace::MultiplayerLevelCompletionResults::__get__playerLevelEndState()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState, 0x10>(this);
}
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState const& GlobalNamespace::MultiplayerLevelCompletionResults::__get__playerLevelEndState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState, 0x10>(this);
}
constexpr void GlobalNamespace::MultiplayerLevelCompletionResults::__set__playerLevelEndReason(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason, 0x14>(this, std::forward<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason>(value));
}
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason& GlobalNamespace::MultiplayerLevelCompletionResults::__get__playerLevelEndReason()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason, 0x14>(this);
}
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const& GlobalNamespace::MultiplayerLevelCompletionResults::__get__playerLevelEndReason() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason, 0x14>(this);
}
constexpr void GlobalNamespace::MultiplayerLevelCompletionResults::__set__levelCompletionResults(::GlobalNamespace::LevelCompletionResults*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelCompletionResults*, 0x18>(this, std::forward<::GlobalNamespace::LevelCompletionResults*>(value));
}
constexpr ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::MultiplayerLevelCompletionResults::__get__levelCompletionResults()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelCompletionResults*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> GlobalNamespace::MultiplayerLevelCompletionResults::__get__levelCompletionResults() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelCompletionResults*, 0x18>(this);
}
inline ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState GlobalNamespace::MultiplayerLevelCompletionResults::get_playerLevelEndState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "get_playerLevelEndState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason GlobalNamespace::MultiplayerLevelCompletionResults::get_playerLevelEndReason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "get_playerLevelEndReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::MultiplayerLevelCompletionResults::get_levelCompletionResults()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "get_levelCompletionResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLevelCompletionResults::get_hasAnyResults()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "get_hasAnyResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLevelCompletionResults::get_failedOrGivenUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "get_failedOrGivenUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLevelCompletionResults* GlobalNamespace::MultiplayerLevelCompletionResults::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLevelCompletionResults*>());
}
inline void GlobalNamespace::MultiplayerLevelCompletionResults::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLevelCompletionResults* GlobalNamespace::MultiplayerLevelCompletionResults::New_ctor(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState  playerLevelEndState, ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  playerLevelEndReason, ::GlobalNamespace::LevelCompletionResults*  levelCompletionResults)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLevelCompletionResults*>(playerLevelEndState, playerLevelEndReason, levelCompletionResults));
}
inline void GlobalNamespace::MultiplayerLevelCompletionResults::_ctor(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState  playerLevelEndState, ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  playerLevelEndReason, ::GlobalNamespace::LevelCompletionResults*  levelCompletionResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playerLevelEndState, playerLevelEndReason, levelCompletionResults);
}
inline void GlobalNamespace::MultiplayerLevelCompletionResults::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
inline ::GlobalNamespace::MultiplayerLevelCompletionResults* GlobalNamespace::MultiplayerLevelCompletionResults::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerLevelCompletionResults*, false>(*this, ___internal_method, reader);
}
inline int32_t GlobalNamespace::MultiplayerLevelCompletionResults::CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, obj);
}
inline bool GlobalNamespace::MultiplayerLevelCompletionResults::HasAnyResult(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState  playerLevelEndState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                            "HasAnyResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, playerLevelEndState);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
