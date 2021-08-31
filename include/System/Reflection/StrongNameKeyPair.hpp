// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.StrongNameKeyPair
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9B9C8
  class StrongNameKeyPair : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IDeserializationCallback*/ {
    public:
    // private System.Byte[] _publicKey
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* publicKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.String _keyPairContainer
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* keyPairContainer;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _keyPairExported
    // Size: 0x1
    // Offset: 0x20
    bool keyPairExported;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: keyPairExported and: keyPairArray
    char __padding2[0x7] = {};
    // private System.Byte[] _keyPairArray
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* keyPairArray;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: StrongNameKeyPair
    StrongNameKeyPair(::Array<uint8_t>* publicKey_ = {}, ::Il2CppString* keyPairContainer_ = {}, bool keyPairExported_ = {}, ::Array<uint8_t>* keyPairArray_ = {}) noexcept : publicKey{publicKey_}, keyPairContainer{keyPairContainer_}, keyPairExported{keyPairExported_}, keyPairArray{keyPairArray_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::IDeserializationCallback
    operator System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Get instance field reference: private System.Byte[] _publicKey
    ::Array<uint8_t>*& dyn__publicKey();
    // Get instance field reference: private System.String _keyPairContainer
    ::Il2CppString*& dyn__keyPairContainer();
    // Get instance field reference: private System.Boolean _keyPairExported
    bool& dyn__keyPairExported();
    // Get instance field reference: private System.Byte[] _keyPairArray
    ::Array<uint8_t>*& dyn__keyPairArray();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x147DB04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StrongNameKeyPair* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::StrongNameKeyPair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StrongNameKeyPair*, creationType>(info, context)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x147DC7C
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0x147DD98
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
  }; // System.Reflection.StrongNameKeyPair
  #pragma pack(pop)
  static check_size<sizeof(StrongNameKeyPair), 40 + sizeof(::Array<uint8_t>*)> __System_Reflection_StrongNameKeyPairSizeCheck;
  static_assert(sizeof(StrongNameKeyPair) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::StrongNameKeyPair*, "System.Reflection", "StrongNameKeyPair");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::StrongNameKeyPair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::StrongNameKeyPair::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::StrongNameKeyPair::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Reflection::StrongNameKeyPair::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::StrongNameKeyPair*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Reflection::StrongNameKeyPair::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
// Il2CppName: System.Runtime.Serialization.IDeserializationCallback.OnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::StrongNameKeyPair::*)(::Il2CppObject*)>(&System::Reflection::StrongNameKeyPair::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::StrongNameKeyPair*), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
