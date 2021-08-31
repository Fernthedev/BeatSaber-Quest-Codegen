// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Forward declaring type: MainCamera
  class MainCamera;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentShaderWarmup
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentShaderWarmup : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::EnvironmentShaderWarmup::$Start$d__6
    class $Start$d__6;
    // private UnityEngine.Material[] _materials
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::Material*>* materials;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Material*>*) == 0x8);
    // [InjectAttribute] Offset: 0xE2FF90
    // private readonly MainCamera _mainCamera
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MainCamera* mainCamera;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainCamera*) == 0x8);
    // [InjectAttribute] Offset: 0xE2FFA0
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // private UnityEngine.Transform _parentingTransform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* parentingTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: EnvironmentShaderWarmup
    EnvironmentShaderWarmup(::Array<UnityEngine::Material*>* materials_ = {}, GlobalNamespace::MainCamera* mainCamera_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, UnityEngine::Transform* parentingTransform_ = {}) noexcept : materials{materials_}, mainCamera{mainCamera_}, gameScenesManager{gameScenesManager_}, parentingTransform{parentingTransform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kNumberOfColumns
    static constexpr const int kNumberOfColumns = 4;
    // Get static field: static private System.Int32 kNumberOfColumns
    static int _get_kNumberOfColumns();
    // Set static field: static private System.Int32 kNumberOfColumns
    static void _set_kNumberOfColumns(int value);
    // static field const value: static private System.Int32 kNumberOfRows
    static constexpr const int kNumberOfRows = 4;
    // Get static field: static private System.Int32 kNumberOfRows
    static int _get_kNumberOfRows();
    // Set static field: static private System.Int32 kNumberOfRows
    static void _set_kNumberOfRows(int value);
    // Get instance field: private UnityEngine.Material[] _materials
    ::Array<UnityEngine::Material*>* _get__materials();
    // Set instance field: private UnityEngine.Material[] _materials
    void _set__materials(::Array<UnityEngine::Material*>* value);
    // Get instance field: private readonly MainCamera _mainCamera
    GlobalNamespace::MainCamera* _get__mainCamera();
    // Set instance field: private readonly MainCamera _mainCamera
    void _set__mainCamera(GlobalNamespace::MainCamera* value);
    // Get instance field: private readonly GameScenesManager _gameScenesManager
    GlobalNamespace::GameScenesManager* _get__gameScenesManager();
    // Set instance field: private readonly GameScenesManager _gameScenesManager
    void _set__gameScenesManager(GlobalNamespace::GameScenesManager* value);
    // Get instance field: private UnityEngine.Transform _parentingTransform
    UnityEngine::Transform* _get__parentingTransform();
    // Set instance field: private UnityEngine.Transform _parentingTransform
    void _set__parentingTransform(UnityEngine::Transform* value);
    // protected System.Collections.IEnumerator Start()
    // Offset: 0x1052C30
    System::Collections::IEnumerator* Start();
    // public System.Void .ctor()
    // Offset: 0x1052CCC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentShaderWarmup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentShaderWarmup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentShaderWarmup*, creationType>()));
    }
  }; // EnvironmentShaderWarmup
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentShaderWarmup), 48 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_EnvironmentShaderWarmupSizeCheck;
  static_assert(sizeof(EnvironmentShaderWarmup) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentShaderWarmup*, "", "EnvironmentShaderWarmup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentShaderWarmup::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::EnvironmentShaderWarmup::*)()>(&GlobalNamespace::EnvironmentShaderWarmup::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentShaderWarmup*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentShaderWarmup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
