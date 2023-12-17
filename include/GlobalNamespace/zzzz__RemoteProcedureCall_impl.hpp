#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__IRemoteProcedureCall_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.get_syncTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::RemoteProcedureCall::*)()>(&::GlobalNamespace::RemoteProcedureCall::get_syncTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe543f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                            "get_syncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.set_syncTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)(int64_t)>(&::GlobalNamespace::RemoteProcedureCall::set_syncTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe543fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                            "set_syncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.SerializeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)(::LiteNetLib::Utils::NetDataWriter*, uint32_t)>(&::GlobalNamespace::RemoteProcedureCall::SerializeData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe54404;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.DeserializeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)(::LiteNetLib::Utils::NetDataReader*, uint32_t)>(&::GlobalNamespace::RemoteProcedureCall::DeserializeData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe54408;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.LiteNetLib_Utils_INetSerializable_Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Serialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xe5440c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                            "LiteNetLib.Utils.INetSerializable.Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.LiteNetLib_Utils_INetSerializable_Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Deserialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe54450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                            "LiteNetLib.Utils.INetSerializable.Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)()>(&::GlobalNamespace::RemoteProcedureCall::Release)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe54490;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IRemoteProcedureCall* (::GlobalNamespace::RemoteProcedureCall::*)(int64_t)>(&::GlobalNamespace::RemoteProcedureCall::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe54590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)()>(&::GlobalNamespace::RemoteProcedureCall::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe49244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IRemoteProcedureCall"
constexpr  GlobalNamespace::RemoteProcedureCall::operator ::GlobalNamespace::IRemoteProcedureCall*() noexcept {
return static_cast<::GlobalNamespace::IRemoteProcedureCall*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr  GlobalNamespace::RemoteProcedureCall::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr  GlobalNamespace::RemoteProcedureCall::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::RemoteProcedureCall::__set__syncTime_k__BackingField(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::RemoteProcedureCall::__get__syncTime_k__BackingField()  {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr int64_t const& GlobalNamespace::RemoteProcedureCall::__get__syncTime_k__BackingField() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
inline int64_t GlobalNamespace::RemoteProcedureCall::get_syncTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                            "get_syncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::RemoteProcedureCall::set_syncTime(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                            "set_syncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::RemoteProcedureCall::SerializeData(::LiteNetLib::Utils::NetDataWriter*  writer, uint32_t  protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                            "SerializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, protocolVersion);
}
inline void GlobalNamespace::RemoteProcedureCall::DeserializeData(::LiteNetLib::Utils::NetDataReader*  reader, uint32_t  protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                            "DeserializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, protocolVersion);
}
inline void GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                            "LiteNetLib.Utils.INetSerializable.Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Deserialize(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                            "LiteNetLib.Utils.INetSerializable.Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
inline void GlobalNamespace::RemoteProcedureCall::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::IRemoteProcedureCall* GlobalNamespace::RemoteProcedureCall::Init(int64_t  syncTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IRemoteProcedureCall*, false>(*this, ___internal_method, syncTime);
}
inline ::GlobalNamespace::RemoteProcedureCall* GlobalNamespace::RemoteProcedureCall::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RemoteProcedureCall*>());
}
inline void GlobalNamespace::RemoteProcedureCall::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::get_hasValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SongPackMask (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::*)(::GlobalNamespace::SongPackMask)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::__set__v(::GlobalNamespace::SongPackMask  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongPackMask, 0x10>(this, std::forward<::GlobalNamespace::SongPackMask>(value));
}
constexpr ::GlobalNamespace::SongPackMask& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::__get__v()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMask, 0x10>(this);
}
constexpr ::GlobalNamespace::SongPackMask const& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::__get__v() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMask, 0x10>(this);
}
inline bool GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::Set(::GlobalNamespace::SongPackMask  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, v);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::Deserialize(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>* GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>());
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::get_hasValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::__set__v(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x10>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::__get__v()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x10>(this);
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::__get__v() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x10>(this);
}
inline bool GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::Set(::UnityEngine::Quaternion  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, v);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::Deserialize(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>* GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>());
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
constexpr void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::__set__v(T  value)  {
::cordl_internals::setInstanceField<T, 0x10>(this, std::forward<T>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
constexpr T& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::__get__v()  {
return ::cordl_internals::getInstanceField<T, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
constexpr T const& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::__get__v() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline bool GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline T GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::Set(T  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, v);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::Deserialize(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>* GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>());
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::get_hasValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::*)(::UnityEngine::Vector4)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::__set__v(::UnityEngine::Vector4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector4, 0x10>(this, std::forward<::UnityEngine::Vector4>(value));
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::__get__v()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x10>(this);
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::__get__v() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x10>(this);
}
inline bool GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector4 GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::Set(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, v);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::Deserialize(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>* GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>());
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::get_hasValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::*)(uint8_t)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::__set__v(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x10>(this, std::forward<uint8_t>(value));
}
constexpr uint8_t& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::__get__v()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x10>(this);
}
constexpr uint8_t const& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::__get__v() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x10>(this);
}
inline bool GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline uint8_t GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::Set(uint8_t  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, v);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::Deserialize(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>* GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>());
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::get_hasValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::__set__v(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x10>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::__get__v()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::__get__v() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this);
}
inline bool GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::Set(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, v);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::Deserialize(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>* GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>());
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::get_hasValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::*)(float_t)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::__set__v(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::__get__v()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::__get__v() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
inline bool GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::Set(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, v);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::Deserialize(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>* GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>());
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::get_hasValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::*)(int64_t)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::__set__v(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::__get__v()  {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr int64_t const& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::__get__v() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
inline bool GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int64_t GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::Set(int64_t  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, v);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::Deserialize(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>* GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>());
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::get_hasValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::*)(bool)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::__set__v(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::__get__v()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::__get__v() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline bool GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::Set(bool  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, v);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::Deserialize(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>* GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>());
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::get_hasValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::*)(int32_t)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::*)()>(&::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::__set__v(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::__get__v()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::__get__v() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
inline bool GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::Set(int32_t  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, v);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::Deserialize(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>* GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>());
}
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::__set__v(T  value)  {
::cordl_internals::setInstanceField<T, 0x10>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::__get__v()  {
return ::cordl_internals::getInstanceField<T, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::__get__v() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::Set(T  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, v);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::Deserialize(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>* GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
