// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: ParametricBoxFakeGlowController
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: E18AD0
  // [RequireComponent] Offset: E18AD0
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class ParametricBoxFakeGlowController : public UnityEngine::MonoBehaviour {
    public:
    // public System.Single width
    // Size: 0x4
    // Offset: 0x18
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single height
    // Size: 0x4
    // Offset: 0x1C
    float height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single length
    // Size: 0x4
    // Offset: 0x20
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single edgeSize
    // Size: 0x4
    // Offset: 0x24
    float edgeSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single edgeSizeMultiplier
    // Size: 0x4
    // Offset: 0x28
    float edgeSizeMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x2C
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Padding between fields: color and: meshRenderer
    char __padding5[0x4] = {};
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // Creating value type constructor for type: ParametricBoxFakeGlowController
    ParametricBoxFakeGlowController(float width_ = {}, float height_ = {}, float length_ = {}, float edgeSize_ = {}, float edgeSizeMultiplier_ = {}, UnityEngine::Color color_ = {}, UnityEngine::MeshRenderer* meshRenderer_ = {}, GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController_ = {}) noexcept : width{width_}, height{height_}, length{length_}, edgeSize{edgeSize_}, edgeSizeMultiplier{edgeSizeMultiplier_}, color{color_}, meshRenderer{meshRenderer_}, materialPropertyBlockController{materialPropertyBlockController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE19434
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE19444
    // Get static field: static private readonly System.Int32 _sizeParamsID
    static int _get__sizeParamsID();
    // Set static field: static private readonly System.Int32 _sizeParamsID
    static void _set__sizeParamsID(int value);
    // Get instance field reference: public System.Single width
    float& dyn_width();
    // Get instance field reference: public System.Single height
    float& dyn_height();
    // Get instance field reference: public System.Single length
    float& dyn_length();
    // Get instance field reference: public System.Single edgeSize
    float& dyn_edgeSize();
    // Get instance field reference: public System.Single edgeSizeMultiplier
    float& dyn_edgeSizeMultiplier();
    // Get instance field reference: public UnityEngine.Color color
    UnityEngine::Color& dyn_color();
    // Get instance field reference: private UnityEngine.MeshRenderer _meshRenderer
    UnityEngine::MeshRenderer*& dyn__meshRenderer();
    // Get instance field reference: private MaterialPropertyBlockController _materialPropertyBlockController
    GlobalNamespace::MaterialPropertyBlockController*& dyn__materialPropertyBlockController();
    // public System.Void set_localPosition(UnityEngine.Vector3 value)
    // Offset: 0x1E1DCA8
    void set_localPosition(UnityEngine::Vector3 value);
    // protected System.Void Awake()
    // Offset: 0x1E1DCF4
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x1E1DD14
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1E1DEC8
    void OnDisable();
    // public System.Void Refresh()
    // Offset: 0x1E1DD48
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0x1E1DEE8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParametricBoxFakeGlowController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ParametricBoxFakeGlowController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParametricBoxFakeGlowController*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1E1DF04
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // ParametricBoxFakeGlowController
  #pragma pack(pop)
  static check_size<sizeof(ParametricBoxFakeGlowController), 72 + sizeof(GlobalNamespace::MaterialPropertyBlockController*)> __GlobalNamespace_ParametricBoxFakeGlowControllerSizeCheck;
  static_assert(sizeof(ParametricBoxFakeGlowController) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParametricBoxFakeGlowController*, "", "ParametricBoxFakeGlowController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxFakeGlowController::set_localPosition
// Il2CppName: set_localPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParametricBoxFakeGlowController::*)(UnityEngine::Vector3)>(&GlobalNamespace::ParametricBoxFakeGlowController::set_localPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxFakeGlowController*), "set_localPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxFakeGlowController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParametricBoxFakeGlowController::*)()>(&GlobalNamespace::ParametricBoxFakeGlowController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxFakeGlowController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxFakeGlowController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParametricBoxFakeGlowController::*)()>(&GlobalNamespace::ParametricBoxFakeGlowController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxFakeGlowController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxFakeGlowController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParametricBoxFakeGlowController::*)()>(&GlobalNamespace::ParametricBoxFakeGlowController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxFakeGlowController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxFakeGlowController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParametricBoxFakeGlowController::*)()>(&GlobalNamespace::ParametricBoxFakeGlowController::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxFakeGlowController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxFakeGlowController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxFakeGlowController::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ParametricBoxFakeGlowController::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxFakeGlowController*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
