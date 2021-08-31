// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutter
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteCutter : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::NoteCutter::CuttableBySaberSortParams
    class CuttableBySaberSortParams;
    // Nested type: GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer
    class CuttableBySaberSortParamsComparer;
    // private readonly UnityEngine.Collider[] _colliders
    // Size: 0x8
    // Offset: 0x10
    ::Array<UnityEngine::Collider*>* colliders;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Collider*>*) == 0x8);
    // private readonly NoteCutter/CuttableBySaberSortParams[] _cuttableBySaberSortParams
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::NoteCutter::CuttableBySaberSortParams*>* cuttableBySaberSortParams;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::NoteCutter::CuttableBySaberSortParams*>*) == 0x8);
    // private readonly NoteCutter/CuttableBySaberSortParamsComparer _comparer
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer* comparer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer*) == 0x8);
    // Creating value type constructor for type: NoteCutter
    NoteCutter(::Array<UnityEngine::Collider*>* colliders_ = {}, ::Array<GlobalNamespace::NoteCutter::CuttableBySaberSortParams*>* cuttableBySaberSortParams_ = {}, GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer* comparer_ = {}) noexcept : colliders{colliders_}, cuttableBySaberSortParams{cuttableBySaberSortParams_}, comparer{comparer_} {}
    // static field const value: static private System.Int32 kMaxNumberOfColliders
    static constexpr const int kMaxNumberOfColliders = 16;
    // Get static field: static private System.Int32 kMaxNumberOfColliders
    static int _get_kMaxNumberOfColliders();
    // Set static field: static private System.Int32 kMaxNumberOfColliders
    static void _set_kMaxNumberOfColliders(int value);
    // Get instance field: private readonly UnityEngine.Collider[] _colliders
    ::Array<UnityEngine::Collider*>* _get__colliders();
    // Set instance field: private readonly UnityEngine.Collider[] _colliders
    void _set__colliders(::Array<UnityEngine::Collider*>* value);
    // Get instance field: private readonly NoteCutter/CuttableBySaberSortParams[] _cuttableBySaberSortParams
    ::Array<GlobalNamespace::NoteCutter::CuttableBySaberSortParams*>* _get__cuttableBySaberSortParams();
    // Set instance field: private readonly NoteCutter/CuttableBySaberSortParams[] _cuttableBySaberSortParams
    void _set__cuttableBySaberSortParams(::Array<GlobalNamespace::NoteCutter::CuttableBySaberSortParams*>* value);
    // Get instance field: private readonly NoteCutter/CuttableBySaberSortParamsComparer _comparer
    GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer* _get__comparer();
    // Set instance field: private readonly NoteCutter/CuttableBySaberSortParamsComparer _comparer
    void _set__comparer(GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer* value);
    // public System.Void Cut(Saber saber)
    // Offset: 0x1048AC0
    void Cut(GlobalNamespace::Saber* saber);
    // public System.Void .ctor()
    // Offset: 0x1048988
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutter*, creationType>()));
    }
  }; // NoteCutter
  #pragma pack(pop)
  static check_size<sizeof(NoteCutter), 32 + sizeof(GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer*)> __GlobalNamespace_NoteCutterSizeCheck;
  static_assert(sizeof(NoteCutter) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutter*, "", "NoteCutter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteCutter::Cut
// Il2CppName: Cut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutter::*)(GlobalNamespace::Saber*)>(&GlobalNamespace::NoteCutter::Cut)> {
  static const MethodInfo* get() {
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutter*), "Cut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saber});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
