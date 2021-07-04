// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Vector3Serializable
  struct Vector3Serializable/*, public System::ValueType, public LiteNetLib::Utils::INetSerializable, public System::IEquatable_1<GlobalNamespace::Vector3Serializable>*/ {
    public:
    // private System.Int32 _x
    // Size: 0x4
    // Offset: 0x0
    int x;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _y
    // Size: 0x4
    // Offset: 0x4
    int y;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _z
    // Size: 0x4
    // Offset: 0x8
    int z;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Vector3Serializable
    constexpr Vector3Serializable(int x_ = {}, int y_ = {}, int z_ = {}) noexcept : x{x_}, y{y_}, z{z_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::Vector3Serializable>
    operator System::IEquatable_1<GlobalNamespace::Vector3Serializable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::Vector3Serializable>*>(this);
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xF21530
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xF21538
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(Vector3Serializable other)
    // Offset: 0xF21540
    bool Equals(GlobalNamespace::Vector3Serializable other);
    // public System.Boolean Approximately(Vector3Serializable other)
    // Offset: 0xF21574
    bool Approximately(GlobalNamespace::Vector3Serializable other);
    // public System.Int32 GetSize()
    // Offset: 0xF215B8
    int GetSize();
    // public System.Void .ctor(UnityEngine.Vector3 v)
    // Offset: 0xF215C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Vector3Serializable(UnityEngine::Vector3 v) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::Vector3Serializable::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(v)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, v);
    }
    // public System.Void .ctor(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xF215C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Vector3Serializable(LiteNetLib::Utils::NetDataReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::Vector3Serializable::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, reader);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF21580
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF21588
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xF215B0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // Vector3Serializable
  #pragma pack(pop)
  static check_size<sizeof(Vector3Serializable), 8 + sizeof(int)> __GlobalNamespace_Vector3SerializableSizeCheck;
  static_assert(sizeof(Vector3Serializable) == 0xC);
  // static public Vector3Serializable op_Addition(Vector3Serializable a, Vector3Serializable b)
  // Offset: 0x234A5F4
  GlobalNamespace::Vector3Serializable operator+(const GlobalNamespace::Vector3Serializable& a, const GlobalNamespace::Vector3Serializable& b);
  // static public Vector3Serializable op_Subtraction(Vector3Serializable a, Vector3Serializable b)
  // Offset: 0x234A690
  GlobalNamespace::Vector3Serializable operator-(const GlobalNamespace::Vector3Serializable& a, const GlobalNamespace::Vector3Serializable& b);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Vector3Serializable, "", "Vector3Serializable");
// Writing includes for template specializations
#include "LiteNetLib/Utils/NetDataWriter.hpp"
#include "LiteNetLib/Utils/NetDataReader.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Vector3Serializable::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::Vector3Serializable::Serialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3Serializable), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataWriter*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Vector3Serializable::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::Vector3Serializable::Deserialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3Serializable), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataReader*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::Vector3Serializable::*)(GlobalNamespace::Vector3Serializable)>(&GlobalNamespace::Vector3Serializable::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3Serializable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::Vector3Serializable>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::Approximately
// Il2CppName: Approximately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::Vector3Serializable::*)(GlobalNamespace::Vector3Serializable)>(&GlobalNamespace::Vector3Serializable::Approximately)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3Serializable), "Approximately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::Vector3Serializable>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::GetSize
// Il2CppName: GetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::Vector3Serializable::*)()>(&GlobalNamespace::Vector3Serializable::GetSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3Serializable), "GetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::Vector3Serializable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::Vector3Serializable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::Vector3Serializable::*)(::Il2CppObject*)>(&GlobalNamespace::Vector3Serializable::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3Serializable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::Vector3Serializable::*)()>(&GlobalNamespace::Vector3Serializable::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3Serializable), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::Vector3Serializable::*)()>(&GlobalNamespace::Vector3Serializable::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3Serializable), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::Vector3Serializable::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
