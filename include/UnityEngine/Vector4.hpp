// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Vector4
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: DAED88
  // [RequiredByNativeCodeAttribute] Offset: DAED88
  // [NativeClassAttribute] Offset: DAED88
  // [NativeHeaderAttribute] Offset: DAED88
  struct Vector4/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Vector4>*/ {
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single z
    // Size: 0x4
    // Offset: 0x8
    float z;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single w
    // Size: 0x4
    // Offset: 0xC
    float w;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Vector4
    constexpr Vector4(float x_ = {}, float y_ = {}, float z_ = {}, float w_ = {}) noexcept : x{x_}, y{y_}, z{z_}, w{w_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Vector4>
    operator System::IEquatable_1<UnityEngine::Vector4>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Vector4>*>(this);
    }
    // static field const value: static public System.Single kEpsilon
    static constexpr const float kEpsilon = 1e-05;
    // Get static field: static public System.Single kEpsilon
    static float _get_kEpsilon();
    // Set static field: static public System.Single kEpsilon
    static void _set_kEpsilon(float value);
    // Get static field: static private readonly UnityEngine.Vector4 zeroVector
    static UnityEngine::Vector4 _get_zeroVector();
    // Set static field: static private readonly UnityEngine.Vector4 zeroVector
    static void _set_zeroVector(UnityEngine::Vector4 value);
    // Get static field: static private readonly UnityEngine.Vector4 oneVector
    static UnityEngine::Vector4 _get_oneVector();
    // Set static field: static private readonly UnityEngine.Vector4 oneVector
    static void _set_oneVector(UnityEngine::Vector4 value);
    // Get static field: static private readonly UnityEngine.Vector4 positiveInfinityVector
    static UnityEngine::Vector4 _get_positiveInfinityVector();
    // Set static field: static private readonly UnityEngine.Vector4 positiveInfinityVector
    static void _set_positiveInfinityVector(UnityEngine::Vector4 value);
    // Get static field: static private readonly UnityEngine.Vector4 negativeInfinityVector
    static UnityEngine::Vector4 _get_negativeInfinityVector();
    // Set static field: static private readonly UnityEngine.Vector4 negativeInfinityVector
    static void _set_negativeInfinityVector(UnityEngine::Vector4 value);
    // Get instance field reference: public System.Single x
    float& dyn_x();
    // Get instance field reference: public System.Single y
    float& dyn_y();
    // Get instance field reference: public System.Single z
    float& dyn_z();
    // Get instance field reference: public System.Single w
    float& dyn_w();
    // public System.Single get_Item(System.Int32 index)
    // Offset: 0x23677EC
    float get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Single value)
    // Offset: 0x23678AC
    void set_Item(int index, float value);
    // public System.Single get_magnitude()
    // Offset: 0x2367D6C
    float get_magnitude();
    // public System.Single get_sqrMagnitude()
    // Offset: 0x2367E44
    float get_sqrMagnitude();
    // static public UnityEngine.Vector4 get_zero()
    // Offset: 0x2367CE0
    static UnityEngine::Vector4 get_zero();
    // static public UnityEngine.Vector4 get_one()
    // Offset: 0x2367ED8
    static UnityEngine::Vector4 get_one();
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z, System.Single w)
    // Offset: 0x2367978
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Vector4(float x, float y, float z, float w)
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z)
    // Offset: 0x2367984
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Vector4(float x, float y, float z) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Vector4::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x), ::il2cpp_utils::ExtractType(y), ::il2cpp_utils::ExtractType(z)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, x, y, z);
    }
    // static private System.Void .cctor()
    // Offset: 0x236848C
    static void _cctor();
    // public System.Boolean Equals(UnityEngine.Vector4 other)
    // Offset: 0x2367AB4
    bool Equals(UnityEngine::Vector4 other);
    // public System.Void Normalize()
    // Offset: 0x2367AF0
    void Normalize();
    // static public System.Single Dot(UnityEngine.Vector4 a, UnityEngine.Vector4 b)
    // Offset: 0x2367D4C
    static float Dot(UnityEngine::Vector4 a, UnityEngine::Vector4 b);
    // static public System.Single Magnitude(UnityEngine.Vector4 a)
    // Offset: 0x2367BF0
    static float Magnitude(UnityEngine::Vector4 a);
    // public System.String ToString(System.String format)
    // Offset: 0x2368258
    ::Il2CppString* ToString(::Il2CppString* format);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2367994
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x23679FC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0x23680B4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Vector4
  #pragma pack(pop)
  static check_size<sizeof(Vector4), 12 + sizeof(float)> __UnityEngine_Vector4SizeCheck;
  static_assert(sizeof(Vector4) == 0x10);
  // static public UnityEngine.Vector4 op_Addition(UnityEngine.Vector4 a, UnityEngine.Vector4 b)
  // Offset: 0x2367F44
  UnityEngine::Vector4 operator+(const UnityEngine::Vector4& a, const UnityEngine::Vector4& b);
  // static public UnityEngine.Vector4 op_Subtraction(UnityEngine.Vector4 a, UnityEngine.Vector4 b)
  // Offset: 0x2367F58
  UnityEngine::Vector4 operator-(const UnityEngine::Vector4& a, const UnityEngine::Vector4& b);
  // static public UnityEngine.Vector4 op_Multiply(UnityEngine.Vector4 a, System.Single d)
  // Offset: 0x2367F6C
  UnityEngine::Vector4 operator*(const UnityEngine::Vector4& a, const float& d);
  // static public UnityEngine.Vector4 op_Division(UnityEngine.Vector4 a, System.Single d)
  // Offset: 0x2367CCC
  UnityEngine::Vector4 operator/(const UnityEngine::Vector4& a, const float& d);
  // static public System.Boolean op_Equality(UnityEngine.Vector4 lhs, UnityEngine.Vector4 rhs)
  // Offset: 0x2367F80
  bool operator ==(const UnityEngine::Vector4& lhs, const UnityEngine::Vector4& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Vector4 lhs, UnityEngine.Vector4 rhs)
  // Offset: 0x2367FC0
  bool operator !=(const UnityEngine::Vector4& lhs, const UnityEngine::Vector4& rhs);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Vector4, "UnityEngine", "Vector4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Vector4::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Vector4::*)(int)>(&UnityEngine::Vector4::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector4), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector4::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Vector4::*)(int, float)>(&UnityEngine::Vector4::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector4), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector4::get_magnitude
// Il2CppName: get_magnitude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Vector4::*)()>(&UnityEngine::Vector4::get_magnitude)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector4), "get_magnitude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector4::get_sqrMagnitude
// Il2CppName: get_sqrMagnitude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Vector4::*)()>(&UnityEngine::Vector4::get_sqrMagnitude)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector4), "get_sqrMagnitude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector4::get_zero
// Il2CppName: get_zero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (*)()>(&UnityEngine::Vector4::get_zero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector4), "get_zero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector4::get_one
// Il2CppName: get_one
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (*)()>(&UnityEngine::Vector4::get_one)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector4), "get_one", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector4::Vector4
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Vector4::Vector4
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Vector4::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Vector4::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector4), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector4::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Vector4::*)(UnityEngine::Vector4)>(&UnityEngine::Vector4::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector4), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector4::Normalize
// Il2CppName: Normalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Vector4::*)()>(&UnityEngine::Vector4::Normalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector4), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector4::Dot
// Il2CppName: Dot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::Vector4, UnityEngine::Vector4)>(&UnityEngine::Vector4::Dot)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector4), "Dot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector4::Magnitude
// Il2CppName: Magnitude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::Vector4)>(&UnityEngine::Vector4::Magnitude)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector4), "Magnitude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector4::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Vector4::*)(::Il2CppString*)>(&UnityEngine::Vector4::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector4), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector4::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Vector4::*)()>(&UnityEngine::Vector4::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector4), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector4::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Vector4::*)(::Il2CppObject*)>(&UnityEngine::Vector4::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector4), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector4::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Vector4::*)()>(&UnityEngine::Vector4::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector4), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector4::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Vector4::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Vector4::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Vector4::operator/
// Il2CppName: op_Division
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Vector4::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Vector4::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
