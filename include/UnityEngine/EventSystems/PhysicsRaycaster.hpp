// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine/EventSystems/BaseRaycaster.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Ray
  struct Ray;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.PhysicsRaycaster
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: DE662C
  // [RequireComponent] Offset: DE662C
  class PhysicsRaycaster : public UnityEngine::EventSystems::BaseRaycaster {
    public:
    // Nested type: UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer
    class RaycastHitComparer;
    // protected UnityEngine.Camera m_EventCamera
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Camera* m_EventCamera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // protected UnityEngine.LayerMask m_EventMask
    // Size: 0x4
    // Offset: 0x28
    UnityEngine::LayerMask m_EventMask;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // protected System.Int32 m_MaxRayIntersections
    // Size: 0x4
    // Offset: 0x2C
    int m_MaxRayIntersections;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 m_LastMaxRayIntersections
    // Size: 0x4
    // Offset: 0x30
    int m_LastMaxRayIntersections;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_LastMaxRayIntersections and: m_Hits
    char __padding3[0x4] = {};
    // private UnityEngine.RaycastHit[] m_Hits
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::RaycastHit>* m_Hits;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::RaycastHit>*) == 0x8);
    // Creating value type constructor for type: PhysicsRaycaster
    PhysicsRaycaster(UnityEngine::Camera* m_EventCamera_ = {}, UnityEngine::LayerMask m_EventMask_ = {}, int m_MaxRayIntersections_ = {}, int m_LastMaxRayIntersections_ = {}, ::Array<UnityEngine::RaycastHit>* m_Hits_ = {}) noexcept : m_EventCamera{m_EventCamera_}, m_EventMask{m_EventMask_}, m_MaxRayIntersections{m_MaxRayIntersections_}, m_LastMaxRayIntersections{m_LastMaxRayIntersections_}, m_Hits{m_Hits_} {}
    // static field const value: static protected System.Int32 kNoEventMaskSet
    static constexpr const int kNoEventMaskSet = -1;
    // Get static field: static protected System.Int32 kNoEventMaskSet
    static int _get_kNoEventMaskSet();
    // Set static field: static protected System.Int32 kNoEventMaskSet
    static void _set_kNoEventMaskSet(int value);
    // Get instance field: protected UnityEngine.Camera m_EventCamera
    UnityEngine::Camera* _get_m_EventCamera();
    // Set instance field: protected UnityEngine.Camera m_EventCamera
    void _set_m_EventCamera(UnityEngine::Camera* value);
    // Get instance field: protected UnityEngine.LayerMask m_EventMask
    UnityEngine::LayerMask _get_m_EventMask();
    // Set instance field: protected UnityEngine.LayerMask m_EventMask
    void _set_m_EventMask(UnityEngine::LayerMask value);
    // Get instance field: protected System.Int32 m_MaxRayIntersections
    int _get_m_MaxRayIntersections();
    // Set instance field: protected System.Int32 m_MaxRayIntersections
    void _set_m_MaxRayIntersections(int value);
    // Get instance field: protected System.Int32 m_LastMaxRayIntersections
    int _get_m_LastMaxRayIntersections();
    // Set instance field: protected System.Int32 m_LastMaxRayIntersections
    void _set_m_LastMaxRayIntersections(int value);
    // Get instance field: private UnityEngine.RaycastHit[] m_Hits
    ::Array<UnityEngine::RaycastHit>* _get_m_Hits();
    // Set instance field: private UnityEngine.RaycastHit[] m_Hits
    void _set_m_Hits(::Array<UnityEngine::RaycastHit>* value);
    // public System.Int32 get_depth()
    // Offset: 0x146B324
    int get_depth();
    // public System.Int32 get_finalEventMask()
    // Offset: 0x146B1A8
    int get_finalEventMask();
    // public UnityEngine.LayerMask get_eventMask()
    // Offset: 0x146B3FC
    UnityEngine::LayerMask get_eventMask();
    // public System.Void set_eventMask(UnityEngine.LayerMask value)
    // Offset: 0x146B404
    void set_eventMask(UnityEngine::LayerMask value);
    // public System.Int32 get_maxRayIntersections()
    // Offset: 0x146B40C
    int get_maxRayIntersections();
    // public System.Void set_maxRayIntersections(System.Int32 value)
    // Offset: 0x146B414
    void set_maxRayIntersections(int value);
    // protected System.Boolean ComputeRayAndDistance(UnityEngine.EventSystems.PointerEventData eventData, ref UnityEngine.Ray ray, ref System.Int32 eventDisplayIndex, ref System.Single distanceToClipPlane)
    // Offset: 0x146AE34
    bool ComputeRayAndDistance(UnityEngine::EventSystems::PointerEventData* eventData, ByRef<UnityEngine::Ray> ray, ByRef<int> eventDisplayIndex, ByRef<float> distanceToClipPlane);
    // public override UnityEngine.Camera get_eventCamera()
    // Offset: 0x146B27C
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: UnityEngine.Camera BaseRaycaster::get_eventCamera()
    UnityEngine::Camera* get_eventCamera();
    // protected System.Void .ctor()
    // Offset: 0x146A8DC
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhysicsRaycaster* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::PhysicsRaycaster::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhysicsRaycaster*, creationType>()));
    }
    // public override System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0x146B41C
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    void Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList);
  }; // UnityEngine.EventSystems.PhysicsRaycaster
  #pragma pack(pop)
  static check_size<sizeof(PhysicsRaycaster), 56 + sizeof(::Array<UnityEngine::RaycastHit>*)> __UnityEngine_EventSystems_PhysicsRaycasterSizeCheck;
  static_assert(sizeof(PhysicsRaycaster) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::PhysicsRaycaster*, "UnityEngine.EventSystems", "PhysicsRaycaster");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::PhysicsRaycaster::get_depth
// Il2CppName: get_depth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&UnityEngine::EventSystems::PhysicsRaycaster::get_depth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PhysicsRaycaster*), "get_depth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PhysicsRaycaster::get_finalEventMask
// Il2CppName: get_finalEventMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&UnityEngine::EventSystems::PhysicsRaycaster::get_finalEventMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PhysicsRaycaster*), "get_finalEventMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PhysicsRaycaster::get_eventMask
// Il2CppName: get_eventMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LayerMask (UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&UnityEngine::EventSystems::PhysicsRaycaster::get_eventMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PhysicsRaycaster*), "get_eventMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PhysicsRaycaster::set_eventMask
// Il2CppName: set_eventMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::PhysicsRaycaster::*)(UnityEngine::LayerMask)>(&UnityEngine::EventSystems::PhysicsRaycaster::set_eventMask)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PhysicsRaycaster*), "set_eventMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PhysicsRaycaster::get_maxRayIntersections
// Il2CppName: get_maxRayIntersections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&UnityEngine::EventSystems::PhysicsRaycaster::get_maxRayIntersections)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PhysicsRaycaster*), "get_maxRayIntersections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PhysicsRaycaster::set_maxRayIntersections
// Il2CppName: set_maxRayIntersections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::PhysicsRaycaster::*)(int)>(&UnityEngine::EventSystems::PhysicsRaycaster::set_maxRayIntersections)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PhysicsRaycaster*), "set_maxRayIntersections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PhysicsRaycaster::ComputeRayAndDistance
// Il2CppName: ComputeRayAndDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::PhysicsRaycaster::*)(UnityEngine::EventSystems::PointerEventData*, ByRef<UnityEngine::Ray>, ByRef<int>, ByRef<float>)>(&UnityEngine::EventSystems::PhysicsRaycaster::ComputeRayAndDistance)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->this_arg;
    static auto* eventDisplayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* distanceToClipPlane = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PhysicsRaycaster*), "ComputeRayAndDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData, ray, eventDisplayIndex, distanceToClipPlane});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PhysicsRaycaster::get_eventCamera
// Il2CppName: get_eventCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Camera* (UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&UnityEngine::EventSystems::PhysicsRaycaster::get_eventCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PhysicsRaycaster*), "get_eventCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PhysicsRaycaster::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::EventSystems::PhysicsRaycaster::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::PhysicsRaycaster::*)(UnityEngine::EventSystems::PointerEventData*, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>*)>(&UnityEngine::EventSystems::PhysicsRaycaster::Raycast)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* resultAppendList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "RaycastResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PhysicsRaycaster*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData, resultAppendList});
  }
};
