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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.IntVec4
  struct IntVec4/*, public System::ValueType, public System::IEquatable_1<UnityEngine::ProBuilder::IntVec4>*/ {
    public:
    // public UnityEngine.Vector4 value
    // Size: 0x10
    // Offset: 0x0
    UnityEngine::Vector4 value;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
    // Creating value type constructor for type: IntVec4
    constexpr IntVec4(UnityEngine::Vector4 value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::ProBuilder::IntVec4>
    operator System::IEquatable_1<UnityEngine::ProBuilder::IntVec4>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::ProBuilder::IntVec4>*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Vector4
    constexpr operator UnityEngine::Vector4() const noexcept {
      return value;
    }
    // public System.Single get_x()
    // Offset: 0xF04224
    float get_x();
    // public System.Single get_y()
    // Offset: 0xF0422C
    float get_y();
    // public System.Single get_z()
    // Offset: 0xF04234
    float get_z();
    // public System.Single get_w()
    // Offset: 0xF0423C
    float get_w();
    // public System.Void .ctor(UnityEngine.Vector4 vector)
    // Offset: 0xF04244
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  IntVec4(UnityEngine::Vector4 vector)
    // public System.Boolean Equals(UnityEngine.ProBuilder.IntVec4 p)
    // Offset: 0xF04258
    bool Equals(UnityEngine::ProBuilder::IntVec4 p);
    // public System.Boolean Equals(UnityEngine.Vector4 p)
    // Offset: 0xF04260
    bool Equals(UnityEngine::Vector4 p);
    // static private System.Int32 round(System.Single v)
    // Offset: 0x1ABD898
    static int round(float v);
    // public override System.String ToString()
    // Offset: 0xF04250
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object b)
    // Offset: 0xF04268
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object b)
    bool Equals(::Il2CppObject* b);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF04270
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.IntVec4
  #pragma pack(pop)
  static check_size<sizeof(IntVec4), 0 + sizeof(UnityEngine::Vector4)> __UnityEngine_ProBuilder_IntVec4SizeCheck;
  static_assert(sizeof(IntVec4) == 0x10);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.IntVec4 a, UnityEngine.ProBuilder.IntVec4 b)
  // Offset: 0x1ABD764
  bool operator ==(const UnityEngine::ProBuilder::IntVec4& a, const UnityEngine::ProBuilder::IntVec4& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.IntVec4 a, UnityEngine.ProBuilder.IntVec4 b)
  // Offset: 0x1ABD858
  bool operator !=(const UnityEngine::ProBuilder::IntVec4& a, const UnityEngine::ProBuilder::IntVec4& b);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::IntVec4, "UnityEngine.ProBuilder", "IntVec4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec4::get_x
// Il2CppName: get_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::IntVec4::*)()>(&UnityEngine::ProBuilder::IntVec4::get_x)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec4), "get_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec4::get_y
// Il2CppName: get_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::IntVec4::*)()>(&UnityEngine::ProBuilder::IntVec4::get_y)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec4), "get_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec4::get_z
// Il2CppName: get_z
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::IntVec4::*)()>(&UnityEngine::ProBuilder::IntVec4::get_z)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec4), "get_z", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec4::get_w
// Il2CppName: get_w
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::IntVec4::*)()>(&UnityEngine::ProBuilder::IntVec4::get_w)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec4), "get_w", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec4::IntVec4
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec4::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::IntVec4::*)(UnityEngine::ProBuilder::IntVec4)>(&UnityEngine::ProBuilder::IntVec4::Equals)> {
  const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "IntVec4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec4), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec4::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::IntVec4::*)(UnityEngine::Vector4)>(&UnityEngine::ProBuilder::IntVec4::Equals)> {
  const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec4), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec4::round
// Il2CppName: round
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&UnityEngine::ProBuilder::IntVec4::round)> {
  const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec4), "round", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec4::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::IntVec4::*)()>(&UnityEngine::ProBuilder::IntVec4::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec4), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec4::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::IntVec4::*)(::Il2CppObject*)>(&UnityEngine::ProBuilder::IntVec4::Equals)> {
  const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec4), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec4::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::IntVec4::*)()>(&UnityEngine::ProBuilder::IntVec4::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::IntVec4), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec4::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::IntVec4::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
