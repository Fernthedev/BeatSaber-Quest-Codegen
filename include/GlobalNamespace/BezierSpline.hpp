// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BezierCurve
#include "GlobalNamespace/BezierCurve.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BezierSpline
  // [TokenAttribute] Offset: FFFFFFFF
  class BezierSpline : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BezierSpline::ComputeControlPointsResults
    struct ComputeControlPointsResults;
    // Nested type: GlobalNamespace::BezierSpline::$$c
    class $$c;
    // private readonly System.Collections.Generic.List`1<BezierCurve> _segments
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::BezierCurve>* segments;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BezierCurve>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Vector3> _sourceDataPoints
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::Vector3>* sourceDataPoints;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: BezierSpline
    BezierSpline(System::Collections::Generic::List_1<GlobalNamespace::BezierCurve>* segments_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector3>* sourceDataPoints_ = {}) noexcept : segments{segments_}, sourceDataPoints{sourceDataPoints_} {}
    // Get instance field reference: private readonly System.Collections.Generic.List`1<BezierCurve> _segments
    System::Collections::Generic::List_1<GlobalNamespace::BezierCurve>*& dyn__segments();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.Vector3> _sourceDataPoints
    System::Collections::Generic::List_1<UnityEngine::Vector3>*& dyn__sourceDataPoints();
    // public System.Collections.Generic.List`1<BezierCurve> get_segments()
    // Offset: 0x10CF430
    System::Collections::Generic::List_1<GlobalNamespace::BezierCurve>* get_segments();
    // public System.Void AddPoint(System.Single distance, UnityEngine.Vector2 point)
    // Offset: 0x10CE24C
    void AddPoint(float distance, UnityEngine::Vector2 point);
    // public System.Void SortSourceData()
    // Offset: 0x10CF438
    void SortSourceData();
    // public System.Void AddArtificialStartAndFinishPoint()
    // Offset: 0x10CE2F8
    void AddArtificialStartAndFinishPoint();
    // public System.Void ComputeControlPoints()
    // Offset: 0x10CE4A4
    void ComputeControlPoints();
    // public System.Void Clear()
    // Offset: 0x10CFB00
    void Clear();
    // private BezierSpline/ComputeControlPointsResults ComputeControlPoints(System.Collections.Generic.List`1<System.Single> k)
    // Offset: 0x10CF530
    GlobalNamespace::BezierSpline::ComputeControlPointsResults ComputeControlPoints(System::Collections::Generic::List_1<float>* k);
    // public System.Void .ctor()
    // Offset: 0x10CDE5C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BezierSpline* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BezierSpline::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BezierSpline*, creationType>()));
    }
  }; // BezierSpline
  #pragma pack(pop)
  static check_size<sizeof(BezierSpline), 24 + sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*)> __GlobalNamespace_BezierSplineSizeCheck;
  static_assert(sizeof(BezierSpline) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BezierSpline*, "", "BezierSpline");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BezierSpline::get_segments
// Il2CppName: get_segments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::BezierCurve>* (GlobalNamespace::BezierSpline::*)()>(&GlobalNamespace::BezierSpline::get_segments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSpline*), "get_segments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierSpline::AddPoint
// Il2CppName: AddPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierSpline::*)(float, UnityEngine::Vector2)>(&GlobalNamespace::BezierSpline::AddPoint)> {
  static const MethodInfo* get() {
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSpline*), "AddPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distance, point});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierSpline::SortSourceData
// Il2CppName: SortSourceData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierSpline::*)()>(&GlobalNamespace::BezierSpline::SortSourceData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSpline*), "SortSourceData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierSpline::AddArtificialStartAndFinishPoint
// Il2CppName: AddArtificialStartAndFinishPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierSpline::*)()>(&GlobalNamespace::BezierSpline::AddArtificialStartAndFinishPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSpline*), "AddArtificialStartAndFinishPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierSpline::ComputeControlPoints
// Il2CppName: ComputeControlPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierSpline::*)()>(&GlobalNamespace::BezierSpline::ComputeControlPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSpline*), "ComputeControlPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierSpline::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierSpline::*)()>(&GlobalNamespace::BezierSpline::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSpline*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierSpline::ComputeControlPoints
// Il2CppName: ComputeControlPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BezierSpline::ComputeControlPointsResults (GlobalNamespace::BezierSpline::*)(System::Collections::Generic::List_1<float>*)>(&GlobalNamespace::BezierSpline::ComputeControlPoints)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSpline*), "ComputeControlPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierSpline::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
