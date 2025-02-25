// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.TouchPhase
#include "UnityEngine/TouchPhase.hpp"
// Including type: UnityEngine.TouchType
#include "UnityEngine/TouchType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x44
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Touch
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DD6924
  struct Touch/*, public System::ValueType*/ {
    public:
    // private System.Int32 m_FingerId
    // Size: 0x4
    // Offset: 0x0
    int m_FingerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector2 m_Position
    // Size: 0x8
    // Offset: 0x4
    UnityEngine::Vector2 m_Position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_RawPosition
    // Size: 0x8
    // Offset: 0xC
    UnityEngine::Vector2 m_RawPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_PositionDelta
    // Size: 0x8
    // Offset: 0x14
    UnityEngine::Vector2 m_PositionDelta;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private System.Single m_TimeDelta
    // Size: 0x4
    // Offset: 0x1C
    float m_TimeDelta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_TapCount
    // Size: 0x4
    // Offset: 0x20
    int m_TapCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.TouchPhase m_Phase
    // Size: 0x4
    // Offset: 0x24
    UnityEngine::TouchPhase m_Phase;
    // Field size check
    static_assert(sizeof(UnityEngine::TouchPhase) == 0x4);
    // private UnityEngine.TouchType m_Type
    // Size: 0x4
    // Offset: 0x28
    UnityEngine::TouchType m_Type;
    // Field size check
    static_assert(sizeof(UnityEngine::TouchType) == 0x4);
    // private System.Single m_Pressure
    // Size: 0x4
    // Offset: 0x2C
    float m_Pressure;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_maximumPossiblePressure
    // Size: 0x4
    // Offset: 0x30
    float m_maximumPossiblePressure;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Radius
    // Size: 0x4
    // Offset: 0x34
    float m_Radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_RadiusVariance
    // Size: 0x4
    // Offset: 0x38
    float m_RadiusVariance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_AltitudeAngle
    // Size: 0x4
    // Offset: 0x3C
    float m_AltitudeAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_AzimuthAngle
    // Size: 0x4
    // Offset: 0x40
    float m_AzimuthAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Touch
    constexpr Touch(int m_FingerId_ = {}, UnityEngine::Vector2 m_Position_ = {}, UnityEngine::Vector2 m_RawPosition_ = {}, UnityEngine::Vector2 m_PositionDelta_ = {}, float m_TimeDelta_ = {}, int m_TapCount_ = {}, UnityEngine::TouchPhase m_Phase_ = {}, UnityEngine::TouchType m_Type_ = {}, float m_Pressure_ = {}, float m_maximumPossiblePressure_ = {}, float m_Radius_ = {}, float m_RadiusVariance_ = {}, float m_AltitudeAngle_ = {}, float m_AzimuthAngle_ = {}) noexcept : m_FingerId{m_FingerId_}, m_Position{m_Position_}, m_RawPosition{m_RawPosition_}, m_PositionDelta{m_PositionDelta_}, m_TimeDelta{m_TimeDelta_}, m_TapCount{m_TapCount_}, m_Phase{m_Phase_}, m_Type{m_Type_}, m_Pressure{m_Pressure_}, m_maximumPossiblePressure{m_maximumPossiblePressure_}, m_Radius{m_Radius_}, m_RadiusVariance{m_RadiusVariance_}, m_AltitudeAngle{m_AltitudeAngle_}, m_AzimuthAngle{m_AzimuthAngle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32 m_FingerId
    int& dyn_m_FingerId();
    // Get instance field reference: private UnityEngine.Vector2 m_Position
    UnityEngine::Vector2& dyn_m_Position();
    // Get instance field reference: private UnityEngine.Vector2 m_RawPosition
    UnityEngine::Vector2& dyn_m_RawPosition();
    // Get instance field reference: private UnityEngine.Vector2 m_PositionDelta
    UnityEngine::Vector2& dyn_m_PositionDelta();
    // Get instance field reference: private System.Single m_TimeDelta
    float& dyn_m_TimeDelta();
    // Get instance field reference: private System.Int32 m_TapCount
    int& dyn_m_TapCount();
    // Get instance field reference: private UnityEngine.TouchPhase m_Phase
    UnityEngine::TouchPhase& dyn_m_Phase();
    // Get instance field reference: private UnityEngine.TouchType m_Type
    UnityEngine::TouchType& dyn_m_Type();
    // Get instance field reference: private System.Single m_Pressure
    float& dyn_m_Pressure();
    // Get instance field reference: private System.Single m_maximumPossiblePressure
    float& dyn_m_maximumPossiblePressure();
    // Get instance field reference: private System.Single m_Radius
    float& dyn_m_Radius();
    // Get instance field reference: private System.Single m_RadiusVariance
    float& dyn_m_RadiusVariance();
    // Get instance field reference: private System.Single m_AltitudeAngle
    float& dyn_m_AltitudeAngle();
    // Get instance field reference: private System.Single m_AzimuthAngle
    float& dyn_m_AzimuthAngle();
    // public System.Int32 get_fingerId()
    // Offset: 0x2417F30
    int get_fingerId();
    // public UnityEngine.Vector2 get_position()
    // Offset: 0x2417F38
    UnityEngine::Vector2 get_position();
    // public UnityEngine.TouchPhase get_phase()
    // Offset: 0x2417F40
    UnityEngine::TouchPhase get_phase();
    // public UnityEngine.TouchType get_type()
    // Offset: 0x2417F48
    UnityEngine::TouchType get_type();
  }; // UnityEngine.Touch
  #pragma pack(pop)
  static check_size<sizeof(Touch), 64 + sizeof(float)> __UnityEngine_TouchSizeCheck;
  static_assert(sizeof(Touch) == 0x44);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Touch, "UnityEngine", "Touch");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Touch::get_fingerId
// Il2CppName: get_fingerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Touch::*)()>(&UnityEngine::Touch::get_fingerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Touch), "get_fingerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Touch::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::Touch::*)()>(&UnityEngine::Touch::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Touch), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Touch::get_phase
// Il2CppName: get_phase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TouchPhase (UnityEngine::Touch::*)()>(&UnityEngine::Touch::get_phase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Touch), "get_phase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Touch::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TouchType (UnityEngine::Touch::*)()>(&UnityEngine::Touch::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Touch), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
