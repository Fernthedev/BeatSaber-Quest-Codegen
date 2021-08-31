// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRNativeBuffer
  class OVRNativeBuffer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OVRBoundary
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRBoundary : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRBoundary::Node
    struct Node;
    // Nested type: GlobalNamespace::OVRBoundary::BoundaryType
    struct BoundaryType;
    // Nested type: GlobalNamespace::OVRBoundary::BoundaryTestResult
    struct BoundaryTestResult;
    // private System.Collections.Generic.List`1<UnityEngine.Vector3> cachedGeometryList
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Vector3>* cachedGeometryList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: OVRBoundary
    OVRBoundary(System::Collections::Generic::List_1<UnityEngine::Vector3>* cachedGeometryList_ = {}) noexcept : cachedGeometryList{cachedGeometryList_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<UnityEngine::Vector3>*
    constexpr operator System::Collections::Generic::List_1<UnityEngine::Vector3>*() const noexcept {
      return cachedGeometryList;
    }
    // Get static field: static private System.Int32 cachedVector3fSize
    static int _get_cachedVector3fSize();
    // Set static field: static private System.Int32 cachedVector3fSize
    static void _set_cachedVector3fSize(int value);
    // Get static field: static private OVRNativeBuffer cachedGeometryNativeBuffer
    static GlobalNamespace::OVRNativeBuffer* _get_cachedGeometryNativeBuffer();
    // Set static field: static private OVRNativeBuffer cachedGeometryNativeBuffer
    static void _set_cachedGeometryNativeBuffer(GlobalNamespace::OVRNativeBuffer* value);
    // Get static field: static private System.Single[] cachedGeometryManagedBuffer
    static ::Array<float>* _get_cachedGeometryManagedBuffer();
    // Set static field: static private System.Single[] cachedGeometryManagedBuffer
    static void _set_cachedGeometryManagedBuffer(::Array<float>* value);
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Vector3> cachedGeometryList
    System::Collections::Generic::List_1<UnityEngine::Vector3>*& dyn_cachedGeometryList();
    // static private System.Void .cctor()
    // Offset: 0x1294860
    static void _cctor();
    // public System.Boolean GetConfigured()
    // Offset: 0x1293EF8
    bool GetConfigured();
    // public OVRBoundary/BoundaryTestResult TestNode(OVRBoundary/Node node, OVRBoundary/BoundaryType boundaryType)
    // Offset: 0x1293F9C
    GlobalNamespace::OVRBoundary::BoundaryTestResult TestNode(GlobalNamespace::OVRBoundary::Node node, GlobalNamespace::OVRBoundary::BoundaryType boundaryType);
    // public OVRBoundary/BoundaryTestResult TestPoint(UnityEngine.Vector3 point, OVRBoundary/BoundaryType boundaryType)
    // Offset: 0x1294078
    GlobalNamespace::OVRBoundary::BoundaryTestResult TestPoint(UnityEngine::Vector3 point, GlobalNamespace::OVRBoundary::BoundaryType boundaryType);
    // public UnityEngine.Vector3[] GetGeometry(OVRBoundary/BoundaryType boundaryType)
    // Offset: 0x1294178
    ::Array<UnityEngine::Vector3>* GetGeometry(GlobalNamespace::OVRBoundary::BoundaryType boundaryType);
    // public UnityEngine.Vector3 GetDimensions(OVRBoundary/BoundaryType boundaryType)
    // Offset: 0x1294598
    UnityEngine::Vector3 GetDimensions(GlobalNamespace::OVRBoundary::BoundaryType boundaryType);
    // public System.Boolean GetVisible()
    // Offset: 0x129469C
    bool GetVisible();
    // public System.Void SetVisible(System.Boolean value)
    // Offset: 0x1294740
    void SetVisible(bool value);
    // public System.Void .ctor()
    // Offset: 0x12947F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRBoundary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRBoundary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRBoundary*, creationType>()));
    }
  }; // OVRBoundary
  #pragma pack(pop)
  static check_size<sizeof(OVRBoundary), 16 + sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*)> __GlobalNamespace_OVRBoundarySizeCheck;
  static_assert(sizeof(OVRBoundary) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRBoundary*, "", "OVRBoundary");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRBoundary::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRBoundary::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBoundary*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBoundary::GetConfigured
// Il2CppName: GetConfigured
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRBoundary::*)()>(&GlobalNamespace::OVRBoundary::GetConfigured)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBoundary*), "GetConfigured", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBoundary::TestNode
// Il2CppName: TestNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRBoundary::BoundaryTestResult (GlobalNamespace::OVRBoundary::*)(GlobalNamespace::OVRBoundary::Node, GlobalNamespace::OVRBoundary::BoundaryType)>(&GlobalNamespace::OVRBoundary::TestNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("", "OVRBoundary/Node")->byval_arg;
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("", "OVRBoundary/BoundaryType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBoundary*), "TestNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, boundaryType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBoundary::TestPoint
// Il2CppName: TestPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRBoundary::BoundaryTestResult (GlobalNamespace::OVRBoundary::*)(UnityEngine::Vector3, GlobalNamespace::OVRBoundary::BoundaryType)>(&GlobalNamespace::OVRBoundary::TestPoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("", "OVRBoundary/BoundaryType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBoundary*), "TestPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, boundaryType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBoundary::GetGeometry
// Il2CppName: GetGeometry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Vector3>* (GlobalNamespace::OVRBoundary::*)(GlobalNamespace::OVRBoundary::BoundaryType)>(&GlobalNamespace::OVRBoundary::GetGeometry)> {
  static const MethodInfo* get() {
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("", "OVRBoundary/BoundaryType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBoundary*), "GetGeometry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boundaryType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBoundary::GetDimensions
// Il2CppName: GetDimensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::OVRBoundary::*)(GlobalNamespace::OVRBoundary::BoundaryType)>(&GlobalNamespace::OVRBoundary::GetDimensions)> {
  static const MethodInfo* get() {
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("", "OVRBoundary/BoundaryType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBoundary*), "GetDimensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boundaryType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBoundary::GetVisible
// Il2CppName: GetVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRBoundary::*)()>(&GlobalNamespace::OVRBoundary::GetVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBoundary*), "GetVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBoundary::SetVisible
// Il2CppName: SetVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRBoundary::*)(bool)>(&GlobalNamespace::OVRBoundary::SetVisible)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBoundary*), "SetVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBoundary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
