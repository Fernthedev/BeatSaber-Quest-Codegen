// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Keyframe
  // [RequiredByNativeCodeAttribute] Offset: D8DC70
  struct Keyframe/*, public System::ValueType*/ {
    public:
    // private System.Single m_Time
    // Size: 0x4
    // Offset: 0x0
    float m_Time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Value
    // Size: 0x4
    // Offset: 0x4
    float m_Value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_InTangent
    // Size: 0x4
    // Offset: 0x8
    float m_InTangent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_OutTangent
    // Size: 0x4
    // Offset: 0xC
    float m_OutTangent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_WeightedMode
    // Size: 0x4
    // Offset: 0x10
    int m_WeightedMode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single m_InWeight
    // Size: 0x4
    // Offset: 0x14
    float m_InWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_OutWeight
    // Size: 0x4
    // Offset: 0x18
    float m_OutWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Keyframe
    constexpr Keyframe(float m_Time_ = {}, float m_Value_ = {}, float m_InTangent_ = {}, float m_OutTangent_ = {}, int m_WeightedMode_ = {}, float m_InWeight_ = {}, float m_OutWeight_ = {}) noexcept : m_Time{m_Time_}, m_Value{m_Value_}, m_InTangent{m_InTangent_}, m_OutTangent{m_OutTangent_}, m_WeightedMode{m_WeightedMode_}, m_InWeight{m_InWeight_}, m_OutWeight{m_OutWeight_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.Single time, System.Single value)
    // Offset: 0xF07FB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Keyframe(float time, float value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Keyframe::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(time), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, time, value);
    }
    // public System.Void .ctor(System.Single time, System.Single value, System.Single inTangent, System.Single outTangent)
    // Offset: 0xF07FC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Keyframe(float time, float value, float inTangent, float outTangent) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Keyframe::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(time), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(inTangent), ::il2cpp_utils::ExtractType(outTangent)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, time, value, inTangent, outTangent);
    }
    // public System.Single get_time()
    // Offset: 0xF07FDC
    float get_time();
    // public System.Void set_time(System.Single value)
    // Offset: 0xF07FE4
    void set_time(float value);
    // public System.Single get_value()
    // Offset: 0xF07FEC
    float get_value();
    // public System.Void set_value(System.Single value)
    // Offset: 0xF07FF4
    void set_value(float value);
    // public System.Single get_inTangent()
    // Offset: 0xF07FFC
    float get_inTangent();
    // public System.Void set_inTangent(System.Single value)
    // Offset: 0xF08004
    void set_inTangent(float value);
    // public System.Single get_outTangent()
    // Offset: 0xF0800C
    float get_outTangent();
    // public System.Void set_outTangent(System.Single value)
    // Offset: 0xF08014
    void set_outTangent(float value);
  }; // UnityEngine.Keyframe
  #pragma pack(pop)
  static check_size<sizeof(Keyframe), 24 + sizeof(float)> __UnityEngine_KeyframeSizeCheck;
  static_assert(sizeof(Keyframe) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Keyframe, "UnityEngine", "Keyframe");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::Keyframe::Keyframe
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Keyframe::Keyframe
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Keyframe::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Keyframe::*)()>(&UnityEngine::Keyframe::get_time)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Keyframe), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Keyframe::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Keyframe::*)(float)>(&UnityEngine::Keyframe::set_time)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Keyframe), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Keyframe::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Keyframe::*)()>(&UnityEngine::Keyframe::get_value)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Keyframe), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Keyframe::set_value
// Il2CppName: set_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Keyframe::*)(float)>(&UnityEngine::Keyframe::set_value)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Keyframe), "set_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Keyframe::get_inTangent
// Il2CppName: get_inTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Keyframe::*)()>(&UnityEngine::Keyframe::get_inTangent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Keyframe), "get_inTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Keyframe::set_inTangent
// Il2CppName: set_inTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Keyframe::*)(float)>(&UnityEngine::Keyframe::set_inTangent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Keyframe), "set_inTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Keyframe::get_outTangent
// Il2CppName: get_outTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Keyframe::*)()>(&UnityEngine::Keyframe::get_outTangent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Keyframe), "get_outTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Keyframe::set_outTangent
// Il2CppName: set_outTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Keyframe::*)(float)>(&UnityEngine::Keyframe::set_outTangent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Keyframe), "set_outTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
