// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: QuaternionSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  struct QuaternionSerializable/*, public System::ValueType, public LiteNetLib::Utils::INetSerializable, public System::IEquatable_1<GlobalNamespace::QuaternionSerializable>*/ {
    public:
    // private System.Int32 _a
    // Size: 0x4
    // Offset: 0x0
    int a;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _b
    // Size: 0x4
    // Offset: 0x4
    int b;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _c
    // Size: 0x4
    // Offset: 0x8
    int c;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: QuaternionSerializable
    constexpr QuaternionSerializable(int a_ = {}, int b_ = {}, int c_ = {}) noexcept : a{a_}, b{b_}, c{c_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::QuaternionSerializable>
    operator System::IEquatable_1<GlobalNamespace::QuaternionSerializable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::QuaternionSerializable>*>(this);
    }
    // static field const value: static private System.Single kSqrtTwo
    static constexpr const float kSqrtTwo = 1.4142135;
    // Get static field: static private System.Single kSqrtTwo
    static float _get_kSqrtTwo();
    // Set static field: static private System.Single kSqrtTwo
    static void _set_kSqrtTwo(float value);
    // static field const value: static private System.Single kOneOverSqrtTwo
    static constexpr const float kOneOverSqrtTwo = 0.70710677;
    // Get static field: static private System.Single kOneOverSqrtTwo
    static float _get_kOneOverSqrtTwo();
    // Set static field: static private System.Single kOneOverSqrtTwo
    static void _set_kOneOverSqrtTwo(float value);
    // static field const value: static private System.Single kScale
    static constexpr const float kScale = 11584.53;
    // Get static field: static private System.Single kScale
    static float _get_kScale();
    // Set static field: static private System.Single kScale
    static void _set_kScale(float value);
    // static field const value: static private System.Single kInvScale
    static constexpr const float kInvScale = 8.632201e-05;
    // Get static field: static private System.Single kInvScale
    static float _get_kInvScale();
    // Set static field: static private System.Single kInvScale
    static void _set_kInvScale(float value);
    // Get instance field: private System.Int32 _a
    int _get__a();
    // Set instance field: private System.Int32 _a
    void _set__a(int value);
    // Get instance field: private System.Int32 _b
    int _get__b();
    // Set instance field: private System.Int32 _b
    void _set__b(int value);
    // Get instance field: private System.Int32 _c
    int _get__c();
    // Set instance field: private System.Int32 _c
    void _set__c(int value);
    // static public QuaternionSerializable get_identity()
    // Offset: 0x237C7E4
    static GlobalNamespace::QuaternionSerializable get_identity();
    // public System.Void .ctor(UnityEngine.Quaternion q)
    // Offset: 0x237D3E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    QuaternionSerializable(UnityEngine::Quaternion q) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::QuaternionSerializable::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(q)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, q);
    }
    // public System.Void .ctor(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x237DA2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    QuaternionSerializable(LiteNetLib::Utils::NetDataReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::QuaternionSerializable::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, reader);
    }
    // static private System.Void ToSmallest(UnityEngine.Quaternion q, out System.Int32 sa, out System.Int32 sb, out System.Int32 sc)
    // Offset: 0x237D510
    static void ToSmallest(UnityEngine::Quaternion q, ByRef<int> sa, ByRef<int> sb, ByRef<int> sc);
    // static private UnityEngine.Quaternion FromSmallest(System.Int32 sa, System.Int32 sb, System.Int32 sc)
    // Offset: 0x237D750
    static UnityEngine::Quaternion FromSmallest(int sa, int sb, int sc);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x237BB64
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x237B950
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(QuaternionSerializable other)
    // Offset: 0x237C960
    bool Equals(GlobalNamespace::QuaternionSerializable other);
    // public System.Boolean Approximately(QuaternionSerializable other)
    // Offset: 0x237D978
    bool Approximately(GlobalNamespace::QuaternionSerializable other);
    // public System.Int32 GetSize()
    // Offset: 0x237CC20
    int GetSize();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x237D8D0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x237CAA0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x237DA38
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // QuaternionSerializable
  #pragma pack(pop)
  static check_size<sizeof(QuaternionSerializable), 8 + sizeof(int)> __GlobalNamespace_QuaternionSerializableSizeCheck;
  static_assert(sizeof(QuaternionSerializable) == 0xC);
  // static public QuaternionSerializable op_Addition(QuaternionSerializable a, QuaternionSerializable b)
  // Offset: 0x237CEA0
  GlobalNamespace::QuaternionSerializable operator+(const GlobalNamespace::QuaternionSerializable& a, const GlobalNamespace::QuaternionSerializable& b);
  // static public QuaternionSerializable op_Subtraction(QuaternionSerializable a, QuaternionSerializable b)
  // Offset: 0x237CF3C
  GlobalNamespace::QuaternionSerializable operator-(const GlobalNamespace::QuaternionSerializable& a, const GlobalNamespace::QuaternionSerializable& b);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuaternionSerializable, "", "QuaternionSerializable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuaternionSerializable::get_identity
// Il2CppName: get_identity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::QuaternionSerializable (*)()>(&GlobalNamespace::QuaternionSerializable::get_identity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuaternionSerializable), "get_identity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuaternionSerializable::QuaternionSerializable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::QuaternionSerializable::QuaternionSerializable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::QuaternionSerializable::ToSmallest
// Il2CppName: ToSmallest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Quaternion, ByRef<int>, ByRef<int>, ByRef<int>)>(&GlobalNamespace::QuaternionSerializable::ToSmallest)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* sa = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* sb = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* sc = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuaternionSerializable), "ToSmallest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q, sa, sb, sc});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuaternionSerializable::FromSmallest
// Il2CppName: FromSmallest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(int, int, int)>(&GlobalNamespace::QuaternionSerializable::FromSmallest)> {
  static const MethodInfo* get() {
    static auto* sa = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sb = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sc = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuaternionSerializable), "FromSmallest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sa, sb, sc});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuaternionSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuaternionSerializable::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::QuaternionSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuaternionSerializable), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuaternionSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuaternionSerializable::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::QuaternionSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuaternionSerializable), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuaternionSerializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::QuaternionSerializable::*)(GlobalNamespace::QuaternionSerializable)>(&GlobalNamespace::QuaternionSerializable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "QuaternionSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuaternionSerializable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuaternionSerializable::Approximately
// Il2CppName: Approximately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::QuaternionSerializable::*)(GlobalNamespace::QuaternionSerializable)>(&GlobalNamespace::QuaternionSerializable::Approximately)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "QuaternionSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuaternionSerializable), "Approximately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuaternionSerializable::GetSize
// Il2CppName: GetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::QuaternionSerializable::*)()>(&GlobalNamespace::QuaternionSerializable::GetSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuaternionSerializable), "GetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuaternionSerializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::QuaternionSerializable::*)(::Il2CppObject*)>(&GlobalNamespace::QuaternionSerializable::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuaternionSerializable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuaternionSerializable::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::QuaternionSerializable::*)()>(&GlobalNamespace::QuaternionSerializable::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuaternionSerializable), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuaternionSerializable::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::QuaternionSerializable::*)()>(&GlobalNamespace::QuaternionSerializable::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuaternionSerializable), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuaternionSerializable::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::QuaternionSerializable::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
