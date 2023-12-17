#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncStateDeltaNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ISyncStateDeltaSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>* (*)()>(&::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe5a870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.get_baseId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SyncStateId (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)()>(&::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_baseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5a8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "get_baseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.set_baseId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)(::GlobalNamespace::SyncStateId)>(&::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_baseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5a8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "set_baseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.get_timeOffsetMs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)()>(&::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_timeOffsetMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5a8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "get_timeOffsetMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.set_timeOffsetMs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)(int32_t)>(&::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_timeOffsetMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5a8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "set_timeOffsetMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.get_delta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StandardScoreSyncState (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)()>(&::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_delta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe5a8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.set_delta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)(::GlobalNamespace::StandardScoreSyncState)>(&::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_delta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe5a8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "set_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardScoreSyncState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe5a8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xe5a9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)()>(&::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Release)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xe5aa08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)()>(&::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5aab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr  GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr  GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>"
constexpr  GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::operator ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>*() noexcept {
return static_cast<::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__set__delta(::GlobalNamespace::StandardScoreSyncState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardScoreSyncState, 0x10>(this, std::forward<::GlobalNamespace::StandardScoreSyncState>(value));
}
constexpr ::GlobalNamespace::StandardScoreSyncState& GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__get__delta()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardScoreSyncState, 0x10>(this);
}
constexpr ::GlobalNamespace::StandardScoreSyncState const& GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__get__delta() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardScoreSyncState, 0x10>(this);
}
constexpr void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__set__baseId_k__BackingField(::GlobalNamespace::SyncStateId  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SyncStateId, 0x24>(this, std::forward<::GlobalNamespace::SyncStateId>(value));
}
constexpr ::GlobalNamespace::SyncStateId& GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__get__baseId_k__BackingField()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SyncStateId, 0x24>(this);
}
constexpr ::GlobalNamespace::SyncStateId const& GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__get__baseId_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SyncStateId, 0x24>(this);
}
constexpr void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__set__timeOffsetMs_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__get__timeOffsetMs_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__get__timeOffsetMs_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
inline ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>* GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::SyncStateId GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_baseId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "get_baseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SyncStateId, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_baseId(::GlobalNamespace::SyncStateId  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "set_baseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_timeOffsetMs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "get_timeOffsetMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_timeOffsetMs(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "set_timeOffsetMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::StandardScoreSyncState GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_delta()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StandardScoreSyncState, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_delta(::GlobalNamespace::StandardScoreSyncState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "set_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardScoreSyncState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
inline void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable* GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>());
}
inline void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
