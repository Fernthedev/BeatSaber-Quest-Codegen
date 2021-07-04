// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider2D
  class Collider2D;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.RaycastHit2D
  // [RequiredByNativeCodeAttribute] Offset: DB2C38
  // [NativeHeaderAttribute] Offset: DB2C38
  // [NativeClassAttribute] Offset: DB2C38
  struct RaycastHit2D/*, public System::ValueType*/ {
    public:
    // [NativeNameAttribute] Offset: 0xDB32C4
    // private UnityEngine.Vector2 m_Centroid
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Vector2 m_Centroid;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [NativeNameAttribute] Offset: 0xDB32FC
    // private UnityEngine.Vector2 m_Point
    // Size: 0x8
    // Offset: 0x8
    UnityEngine::Vector2 m_Point;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [NativeNameAttribute] Offset: 0xDB3334
    // private UnityEngine.Vector2 m_Normal
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Vector2 m_Normal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [NativeNameAttribute] Offset: 0xDB336C
    // private System.Single m_Distance
    // Size: 0x4
    // Offset: 0x18
    float m_Distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xDB33A4
    // private System.Single m_Fraction
    // Size: 0x4
    // Offset: 0x1C
    float m_Fraction;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xDB33DC
    // private System.Int32 m_Collider
    // Size: 0x4
    // Offset: 0x20
    int m_Collider;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RaycastHit2D
    constexpr RaycastHit2D(UnityEngine::Vector2 m_Centroid_ = {}, UnityEngine::Vector2 m_Point_ = {}, UnityEngine::Vector2 m_Normal_ = {}, float m_Distance_ = {}, float m_Fraction_ = {}, int m_Collider_ = {}) noexcept : m_Centroid{m_Centroid_}, m_Point{m_Point_}, m_Normal{m_Normal_}, m_Distance{m_Distance_}, m_Fraction{m_Fraction_}, m_Collider{m_Collider_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public UnityEngine.Vector2 get_point()
    // Offset: 0xF24EE8
    UnityEngine::Vector2 get_point();
    // public UnityEngine.Vector2 get_normal()
    // Offset: 0xF24EF0
    UnityEngine::Vector2 get_normal();
    // public System.Single get_distance()
    // Offset: 0xF24EF8
    float get_distance();
    // public System.Single get_fraction()
    // Offset: 0xF24F00
    float get_fraction();
    // public UnityEngine.Collider2D get_collider()
    // Offset: 0xF24F08
    UnityEngine::Collider2D* get_collider();
  }; // UnityEngine.RaycastHit2D
  #pragma pack(pop)
  static check_size<sizeof(RaycastHit2D), 32 + sizeof(int)> __UnityEngine_RaycastHit2DSizeCheck;
  static_assert(sizeof(RaycastHit2D) == 0x24);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RaycastHit2D, "UnityEngine", "RaycastHit2D");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::RaycastHit2D::get_point
// Il2CppName: get_point
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::RaycastHit2D::*)()>(&UnityEngine::RaycastHit2D::get_point)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit2D), "get_point", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit2D::get_normal
// Il2CppName: get_normal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::RaycastHit2D::*)()>(&UnityEngine::RaycastHit2D::get_normal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit2D), "get_normal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit2D::get_distance
// Il2CppName: get_distance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::RaycastHit2D::*)()>(&UnityEngine::RaycastHit2D::get_distance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit2D), "get_distance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit2D::get_fraction
// Il2CppName: get_fraction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::RaycastHit2D::*)()>(&UnityEngine::RaycastHit2D::get_fraction)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit2D), "get_fraction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit2D::get_collider
// Il2CppName: get_collider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Collider2D* (UnityEngine::RaycastHit2D::*)()>(&UnityEngine::RaycastHit2D::get_collider)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit2D), "get_collider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
