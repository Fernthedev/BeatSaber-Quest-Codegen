// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Layers.PacketLayerBase
#include "LiteNetLib/Layers/PacketLayerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: LiteNetLib.Layers
namespace LiteNetLib::Layers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Layers.XorEncryptLayer
  // [TokenAttribute] Offset: FFFFFFFF
  class XorEncryptLayer : public LiteNetLib::Layers::PacketLayerBase {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // private System.Byte[] _byteKey
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* byteKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: XorEncryptLayer
    XorEncryptLayer(::Array<uint8_t>* byteKey_ = {}) noexcept : byteKey{byteKey_} {}
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: private System.Byte[] _byteKey
    ::Array<uint8_t>*& dyn__byteKey();
    // public System.Void .ctor(System.Byte[] key)
    // Offset: 0x1C1C514
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XorEncryptLayer* New_ctor(::Array<uint8_t>* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Layers::XorEncryptLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XorEncryptLayer*, creationType>(key)));
    }
    // public System.Void .ctor(System.String key)
    // Offset: 0x1C1C5EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XorEncryptLayer* New_ctor(::Il2CppString* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Layers::XorEncryptLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XorEncryptLayer*, creationType>(key)));
    }
    // public System.Void SetKey(System.String key)
    // Offset: 0x1C1C620
    void SetKey(::Il2CppString* key);
    // public System.Void SetKey(System.Byte[] key)
    // Offset: 0x1C1C548
    void SetKey(::Array<uint8_t>* key);
    // public System.Void .ctor()
    // Offset: 0x1C1C4EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XorEncryptLayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Layers::XorEncryptLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XorEncryptLayer*, creationType>()));
    }
    // public override System.Void ProcessInboundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0x1C1C668
    // Implemented from: LiteNetLib.Layers.PacketLayerBase
    // Base method: System.Void PacketLayerBase::ProcessInboundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    void ProcessInboundPacket(System::Net::IPEndPoint* remoteEndPoint, ByRef<::Array<uint8_t>*> data, ByRef<int> offset, ByRef<int> length);
    // public override System.Void ProcessOutBoundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0x1C1C704
    // Implemented from: LiteNetLib.Layers.PacketLayerBase
    // Base method: System.Void PacketLayerBase::ProcessOutBoundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    void ProcessOutBoundPacket(System::Net::IPEndPoint* remoteEndPoint, ByRef<::Array<uint8_t>*> data, ByRef<int> offset, ByRef<int> length);
  }; // LiteNetLib.Layers.XorEncryptLayer
  #pragma pack(pop)
  static check_size<sizeof(XorEncryptLayer), 24 + sizeof(::Array<uint8_t>*)> __LiteNetLib_Layers_XorEncryptLayerSizeCheck;
  static_assert(sizeof(XorEncryptLayer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Layers::XorEncryptLayer*, "LiteNetLib.Layers", "XorEncryptLayer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::Layers::XorEncryptLayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::Layers::XorEncryptLayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::Layers::XorEncryptLayer::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Layers::XorEncryptLayer::*)(::Il2CppString*)>(&LiteNetLib::Layers::XorEncryptLayer::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Layers::XorEncryptLayer*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Layers::XorEncryptLayer::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Layers::XorEncryptLayer::*)(::Array<uint8_t>*)>(&LiteNetLib::Layers::XorEncryptLayer::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Layers::XorEncryptLayer*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Layers::XorEncryptLayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::Layers::XorEncryptLayer::ProcessInboundPacket
// Il2CppName: ProcessInboundPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Layers::XorEncryptLayer::*)(System::Net::IPEndPoint*, ByRef<::Array<uint8_t>*>, ByRef<int>, ByRef<int>)>(&LiteNetLib::Layers::XorEncryptLayer::ProcessInboundPacket)> {
  static const MethodInfo* get() {
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Layers::XorEncryptLayer*), "ProcessInboundPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEndPoint, data, offset, length});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Layers::XorEncryptLayer::ProcessOutBoundPacket
// Il2CppName: ProcessOutBoundPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Layers::XorEncryptLayer::*)(System::Net::IPEndPoint*, ByRef<::Array<uint8_t>*>, ByRef<int>, ByRef<int>)>(&LiteNetLib::Layers::XorEncryptLayer::ProcessOutBoundPacket)> {
  static const MethodInfo* get() {
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Layers::XorEncryptLayer*), "ProcessOutBoundPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEndPoint, data, offset, length});
  }
};
