// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableResponse
#include "BGNet/Core/Messages/BaseReliableResponse.hpp"
// Including type: BGNet.Core.Messages.IHandshakeServerToClientMessage
#include "BGNet/Core/Messages/IHandshakeServerToClientMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: HelloVerifyRequest
  class HelloVerifyRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(BGNet::Core::Messages::HelloVerifyRequest);
DEFINE_IL2CPP_ARG_TYPE(BGNet::Core::Messages::HelloVerifyRequest*, "BGNet.Core.Messages", "HelloVerifyRequest");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.HelloVerifyRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class HelloVerifyRequest : public BGNet::Core::Messages::BaseReliableResponse/*, public BGNet::Core::Messages::IHandshakeServerToClientMessage*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly ByteArrayNetSerializable cookie
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ByteArrayNetSerializable* cookie;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    public:
    // Creating interface conversion operator: operator BGNet::Core::Messages::IHandshakeServerToClientMessage
    operator BGNet::Core::Messages::IHandshakeServerToClientMessage() noexcept {
      return *reinterpret_cast<BGNet::Core::Messages::IHandshakeServerToClientMessage*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::ByteArrayNetSerializable*
    constexpr operator GlobalNamespace::ByteArrayNetSerializable*() const noexcept {
      return cookie;
    }
    // Get instance field reference: public readonly ByteArrayNetSerializable cookie
    GlobalNamespace::ByteArrayNetSerializable*& dyn_cookie();
    // static public PacketPool`1<BGNet.Core.Messages.HelloVerifyRequest> get_pool()
    // Offset: 0x2B7F988
    static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::HelloVerifyRequest*>* get_pool();
    // public BGNet.Core.Messages.HelloVerifyRequest Init(System.Byte[] cookie)
    // Offset: 0x2B84D7C
    BGNet::Core::Messages::HelloVerifyRequest* Init(::ArrayW<uint8_t> cookie);
    // public System.Void .ctor()
    // Offset: 0x2B8837C
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelloVerifyRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("BGNet::Core::Messages::HelloVerifyRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelloVerifyRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2B882AC
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2B882E0
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x2B88314
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Release()
    void Release();
  }; // BGNet.Core.Messages.HelloVerifyRequest
  #pragma pack(pop)
  static check_size<sizeof(HelloVerifyRequest), 24 + sizeof(GlobalNamespace::ByteArrayNetSerializable*)> __BGNet_Core_Messages_HelloVerifyRequestSizeCheck;
  static_assert(sizeof(HelloVerifyRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::HelloVerifyRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<BGNet::Core::Messages::HelloVerifyRequest*>* (*)()>(&BGNet::Core::Messages::HelloVerifyRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::HelloVerifyRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::HelloVerifyRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::Messages::HelloVerifyRequest* (BGNet::Core::Messages::HelloVerifyRequest::*)(::ArrayW<uint8_t>)>(&BGNet::Core::Messages::HelloVerifyRequest::Init)> {
  static const MethodInfo* get() {
    static auto* cookie = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::HelloVerifyRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cookie});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::HelloVerifyRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::HelloVerifyRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::HelloVerifyRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&BGNet::Core::Messages::HelloVerifyRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::HelloVerifyRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::HelloVerifyRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::HelloVerifyRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&BGNet::Core::Messages::HelloVerifyRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::HelloVerifyRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::HelloVerifyRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::HelloVerifyRequest::*)()>(&BGNet::Core::Messages::HelloVerifyRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::HelloVerifyRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
