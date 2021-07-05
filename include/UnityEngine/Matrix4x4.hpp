// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
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
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Matrix4x4
  // [RequiredByNativeCodeAttribute] Offset: D8F634
  // [NativeHeaderAttribute] Offset: D8F634
  // [NativeTypeAttribute] Offset: D8F634
  // [DefaultMemberAttribute] Offset: D8F634
  // [NativeClassAttribute] Offset: D8F634
  struct Matrix4x4/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Matrix4x4>*/ {
    public:
    // [NativeNameAttribute] Offset: 0xD9370C
    // public System.Single m00
    // Size: 0x4
    // Offset: 0x0
    float m00;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD93744
    // public System.Single m10
    // Size: 0x4
    // Offset: 0x4
    float m10;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD9377C
    // public System.Single m20
    // Size: 0x4
    // Offset: 0x8
    float m20;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD937B4
    // public System.Single m30
    // Size: 0x4
    // Offset: 0xC
    float m30;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD937EC
    // public System.Single m01
    // Size: 0x4
    // Offset: 0x10
    float m01;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD93824
    // public System.Single m11
    // Size: 0x4
    // Offset: 0x14
    float m11;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD9385C
    // public System.Single m21
    // Size: 0x4
    // Offset: 0x18
    float m21;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD93894
    // public System.Single m31
    // Size: 0x4
    // Offset: 0x1C
    float m31;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD938CC
    // public System.Single m02
    // Size: 0x4
    // Offset: 0x20
    float m02;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD93904
    // public System.Single m12
    // Size: 0x4
    // Offset: 0x24
    float m12;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD9393C
    // public System.Single m22
    // Size: 0x4
    // Offset: 0x28
    float m22;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD93974
    // public System.Single m32
    // Size: 0x4
    // Offset: 0x2C
    float m32;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD939AC
    // public System.Single m03
    // Size: 0x4
    // Offset: 0x30
    float m03;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD939E4
    // public System.Single m13
    // Size: 0x4
    // Offset: 0x34
    float m13;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD93A1C
    // public System.Single m23
    // Size: 0x4
    // Offset: 0x38
    float m23;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xD93A54
    // public System.Single m33
    // Size: 0x4
    // Offset: 0x3C
    float m33;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Matrix4x4
    constexpr Matrix4x4(float m00_ = {}, float m10_ = {}, float m20_ = {}, float m30_ = {}, float m01_ = {}, float m11_ = {}, float m21_ = {}, float m31_ = {}, float m02_ = {}, float m12_ = {}, float m22_ = {}, float m32_ = {}, float m03_ = {}, float m13_ = {}, float m23_ = {}, float m33_ = {}) noexcept : m00{m00_}, m10{m10_}, m20{m20_}, m30{m30_}, m01{m01_}, m11{m11_}, m21{m21_}, m31{m31_}, m02{m02_}, m12{m12_}, m22{m22_}, m32{m32_}, m03{m03_}, m13{m13_}, m23{m23_}, m33{m33_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Matrix4x4>
    operator System::IEquatable_1<UnityEngine::Matrix4x4>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Matrix4x4>*>(this);
    }
    // Get static field: static private readonly UnityEngine.Matrix4x4 zeroMatrix
    static UnityEngine::Matrix4x4 _get_zeroMatrix();
    // Set static field: static private readonly UnityEngine.Matrix4x4 zeroMatrix
    static void _set_zeroMatrix(UnityEngine::Matrix4x4 value);
    // Get static field: static private readonly UnityEngine.Matrix4x4 identityMatrix
    static UnityEngine::Matrix4x4 _get_identityMatrix();
    // Set static field: static private readonly UnityEngine.Matrix4x4 identityMatrix
    static void _set_identityMatrix(UnityEngine::Matrix4x4 value);
    // private UnityEngine.Vector3 GetLossyScale()
    // Offset: 0xF080E0
    UnityEngine::Vector3 GetLossyScale();
    // public UnityEngine.Vector3 get_lossyScale()
    // Offset: 0xF080E8
    UnityEngine::Vector3 get_lossyScale();
    // static public UnityEngine.Matrix4x4 TRS(UnityEngine.Vector3 pos, UnityEngine.Quaternion q, UnityEngine.Vector3 s)
    // Offset: 0x1C11A30
    static UnityEngine::Matrix4x4 TRS(UnityEngine::Vector3 pos, UnityEngine::Quaternion q, UnityEngine::Vector3 s);
    // static public UnityEngine.Matrix4x4 Inverse(UnityEngine.Matrix4x4 m)
    // Offset: 0x1C11B70
    static UnityEngine::Matrix4x4 Inverse(UnityEngine::Matrix4x4 m);
    // public UnityEngine.Matrix4x4 get_inverse()
    // Offset: 0xF080F0
    UnityEngine::Matrix4x4 get_inverse();
    // static public UnityEngine.Matrix4x4 Transpose(UnityEngine.Matrix4x4 m)
    // Offset: 0x1C11D38
    static UnityEngine::Matrix4x4 Transpose(UnityEngine::Matrix4x4 m);
    // public UnityEngine.Matrix4x4 get_transpose()
    // Offset: 0xF080F8
    UnityEngine::Matrix4x4 get_transpose();
    // static public UnityEngine.Matrix4x4 Ortho(System.Single left, System.Single right, System.Single bottom, System.Single top, System.Single zNear, System.Single zFar)
    // Offset: 0x1C11F00
    static UnityEngine::Matrix4x4 Ortho(float left, float right, float bottom, float top, float zNear, float zFar);
    // public System.Void .ctor(UnityEngine.Vector4 column0, UnityEngine.Vector4 column1, UnityEngine.Vector4 column2, UnityEngine.Vector4 column3)
    // Offset: 0xF08100
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Matrix4x4(UnityEngine::Vector4 column0, UnityEngine::Vector4 column1, UnityEngine::Vector4 column2, UnityEngine::Vector4 column3) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Matrix4x4::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(column0), ::il2cpp_utils::ExtractType(column1), ::il2cpp_utils::ExtractType(column2), ::il2cpp_utils::ExtractType(column3)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, column0, column1, column2, column3);
    }
    // public System.Single get_Item(System.Int32 row, System.Int32 column)
    // Offset: 0xF08110
    float get_Item(int row, int column);
    // public System.Void set_Item(System.Int32 row, System.Int32 column, System.Single value)
    // Offset: 0xF0811C
    void set_Item(int row, int column, float value);
    // public System.Single get_Item(System.Int32 index)
    // Offset: 0xF08128
    float get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Single value)
    // Offset: 0xF08130
    void set_Item(int index, float value);
    // public System.Boolean Equals(UnityEngine.Matrix4x4 other)
    // Offset: 0xF08148
    bool Equals(UnityEngine::Matrix4x4 other);
    // public UnityEngine.Vector4 GetColumn(System.Int32 index)
    // Offset: 0xF08180
    UnityEngine::Vector4 GetColumn(int index);
    // public System.Void SetColumn(System.Int32 index, UnityEngine.Vector4 column)
    // Offset: 0xF08188
    void SetColumn(int index, UnityEngine::Vector4 column);
    // public UnityEngine.Vector3 MultiplyPoint(UnityEngine.Vector3 point)
    // Offset: 0xF08190
    UnityEngine::Vector3 MultiplyPoint(UnityEngine::Vector3 point);
    // public UnityEngine.Vector3 MultiplyPoint3x4(UnityEngine.Vector3 point)
    // Offset: 0xF08198
    UnityEngine::Vector3 MultiplyPoint3x4(UnityEngine::Vector3 point);
    // public UnityEngine.Vector3 MultiplyVector(UnityEngine.Vector3 vector)
    // Offset: 0xF081A0
    UnityEngine::Vector3 MultiplyVector(UnityEngine::Vector3 vector);
    // static public UnityEngine.Matrix4x4 Rotate(UnityEngine.Quaternion q)
    // Offset: 0x1C128BC
    static UnityEngine::Matrix4x4 Rotate(UnityEngine::Quaternion q);
    // static public UnityEngine.Matrix4x4 get_identity()
    // Offset: 0x1C12954
    static UnityEngine::Matrix4x4 get_identity();
    // static private System.Void .cctor()
    // Offset: 0x1C12E70
    static void _cctor();
    // static private System.Void GetLossyScale_Injected(ref UnityEngine.Matrix4x4 _unity_self, out UnityEngine.Vector3 ret)
    // Offset: 0x1C119DC
    static void GetLossyScale_Injected(UnityEngine::Matrix4x4& _unity_self, UnityEngine::Vector3& ret);
    // static private System.Void TRS_Injected(ref UnityEngine.Vector3 pos, ref UnityEngine.Quaternion q, ref UnityEngine.Vector3 s, out UnityEngine.Matrix4x4 ret)
    // Offset: 0x1C11B08
    static void TRS_Injected(UnityEngine::Vector3& pos, UnityEngine::Quaternion& q, UnityEngine::Vector3& s, UnityEngine::Matrix4x4& ret);
    // static private System.Void Inverse_Injected(ref UnityEngine.Matrix4x4 m, out UnityEngine.Matrix4x4 ret)
    // Offset: 0x1C11C2C
    static void Inverse_Injected(UnityEngine::Matrix4x4& m, UnityEngine::Matrix4x4& ret);
    // static private System.Void Transpose_Injected(ref UnityEngine.Matrix4x4 m, out UnityEngine.Matrix4x4 ret)
    // Offset: 0x1C11DF4
    static void Transpose_Injected(UnityEngine::Matrix4x4& m, UnityEngine::Matrix4x4& ret);
    // static private System.Void Ortho_Injected(System.Single left, System.Single right, System.Single bottom, System.Single top, System.Single zNear, System.Single zFar, out UnityEngine.Matrix4x4 ret)
    // Offset: 0x1C11FF4
    static void Ortho_Injected(float left, float right, float bottom, float top, float zNear, float zFar, UnityEngine::Matrix4x4& ret);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF08138
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xF08140
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0xF081A8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Matrix4x4
  #pragma pack(pop)
  static check_size<sizeof(Matrix4x4), 60 + sizeof(float)> __UnityEngine_Matrix4x4SizeCheck;
  static_assert(sizeof(Matrix4x4) == 0x40);
  // static public UnityEngine.Matrix4x4 op_Multiply(UnityEngine.Matrix4x4 lhs, UnityEngine.Matrix4x4 rhs)
  // Offset: 0x1C12640
  UnityEngine::Matrix4x4 operator*(const UnityEngine::Matrix4x4& lhs, const UnityEngine::Matrix4x4& rhs);
  // static public UnityEngine.Vector4 op_Multiply(UnityEngine.Matrix4x4 lhs, UnityEngine.Vector4 vector)
  // Offset: 0x1C126EC
  UnityEngine::Vector4 operator*(const UnityEngine::Matrix4x4& lhs, const UnityEngine::Vector4& vector);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Matrix4x4, "UnityEngine", "Matrix4x4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::GetLossyScale
// Il2CppName: GetLossyScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Matrix4x4::*)()>(&UnityEngine::Matrix4x4::GetLossyScale)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "GetLossyScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::get_lossyScale
// Il2CppName: get_lossyScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Matrix4x4::*)()>(&UnityEngine::Matrix4x4::get_lossyScale)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "get_lossyScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::TRS
// Il2CppName: TRS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (*)(UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3)>(&UnityEngine::Matrix4x4::TRS)> {
  const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "TRS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, q, s});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Inverse
// Il2CppName: Inverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (*)(UnityEngine::Matrix4x4)>(&UnityEngine::Matrix4x4::Inverse)> {
  const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Inverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::get_inverse
// Il2CppName: get_inverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (UnityEngine::Matrix4x4::*)()>(&UnityEngine::Matrix4x4::get_inverse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "get_inverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Transpose
// Il2CppName: Transpose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (*)(UnityEngine::Matrix4x4)>(&UnityEngine::Matrix4x4::Transpose)> {
  const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Transpose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::get_transpose
// Il2CppName: get_transpose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (UnityEngine::Matrix4x4::*)()>(&UnityEngine::Matrix4x4::get_transpose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "get_transpose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Ortho
// Il2CppName: Ortho
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (*)(float, float, float, float, float, float)>(&UnityEngine::Matrix4x4::Ortho)> {
  const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bottom = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* top = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* zNear = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* zFar = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Ortho", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right, bottom, top, zNear, zFar});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Matrix4x4
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Matrix4x4::*)(int, int)>(&UnityEngine::Matrix4x4::get_Item)> {
  const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* column = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row, column});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Matrix4x4::*)(int, int, float)>(&UnityEngine::Matrix4x4::set_Item)> {
  const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* column = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row, column, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Matrix4x4::*)(int)>(&UnityEngine::Matrix4x4::get_Item)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Matrix4x4::*)(int, float)>(&UnityEngine::Matrix4x4::set_Item)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Matrix4x4::*)(UnityEngine::Matrix4x4)>(&UnityEngine::Matrix4x4::Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::GetColumn
// Il2CppName: GetColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (UnityEngine::Matrix4x4::*)(int)>(&UnityEngine::Matrix4x4::GetColumn)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "GetColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::SetColumn
// Il2CppName: SetColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Matrix4x4::*)(int, UnityEngine::Vector4)>(&UnityEngine::Matrix4x4::SetColumn)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* column = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "SetColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, column});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::MultiplyPoint
// Il2CppName: MultiplyPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Matrix4x4::*)(UnityEngine::Vector3)>(&UnityEngine::Matrix4x4::MultiplyPoint)> {
  const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "MultiplyPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::MultiplyPoint3x4
// Il2CppName: MultiplyPoint3x4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Matrix4x4::*)(UnityEngine::Vector3)>(&UnityEngine::Matrix4x4::MultiplyPoint3x4)> {
  const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "MultiplyPoint3x4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::MultiplyVector
// Il2CppName: MultiplyVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Matrix4x4::*)(UnityEngine::Vector3)>(&UnityEngine::Matrix4x4::MultiplyVector)> {
  const MethodInfo* get() {
    static auto* vector = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "MultiplyVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vector});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Rotate
// Il2CppName: Rotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (*)(UnityEngine::Quaternion)>(&UnityEngine::Matrix4x4::Rotate)> {
  const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Rotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::get_identity
// Il2CppName: get_identity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (*)()>(&UnityEngine::Matrix4x4::get_identity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "get_identity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Matrix4x4::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::GetLossyScale_Injected
// Il2CppName: GetLossyScale_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Matrix4x4&, UnityEngine::Vector3&)>(&UnityEngine::Matrix4x4::GetLossyScale_Injected)> {
  const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "GetLossyScale_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::TRS_Injected
// Il2CppName: TRS_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3&, UnityEngine::Quaternion&, UnityEngine::Vector3&, UnityEngine::Matrix4x4&)>(&UnityEngine::Matrix4x4::TRS_Injected)> {
  const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "TRS_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, q, s, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Inverse_Injected
// Il2CppName: Inverse_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Matrix4x4&, UnityEngine::Matrix4x4&)>(&UnityEngine::Matrix4x4::Inverse_Injected)> {
  const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Inverse_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Transpose_Injected
// Il2CppName: Transpose_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Matrix4x4&, UnityEngine::Matrix4x4&)>(&UnityEngine::Matrix4x4::Transpose_Injected)> {
  const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Transpose_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Ortho_Injected
// Il2CppName: Ortho_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float, float, float, float, float, UnityEngine::Matrix4x4&)>(&UnityEngine::Matrix4x4::Ortho_Injected)> {
  const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bottom = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* top = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* zNear = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* zFar = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Ortho_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right, bottom, top, zNear, zFar, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Matrix4x4::*)()>(&UnityEngine::Matrix4x4::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Matrix4x4::*)(::Il2CppObject*)>(&UnityEngine::Matrix4x4::Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Matrix4x4::*)()>(&UnityEngine::Matrix4x4::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
