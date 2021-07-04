// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RectangleFakeGlow
  // [ExecuteInEditMode] Offset: E10FE8
  class RectangleFakeGlow : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Vector2 _size
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Vector2 size;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private System.Single _edgeSize
    // Size: 0x4
    // Offset: 0x20
    float edgeSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x24
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Padding between fields: color and: materialPropertyBlockController
    char __padding2[0x4] = {};
    // [SpaceAttribute] Offset: 0xE1B3F0
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // Creating value type constructor for type: RectangleFakeGlow
    RectangleFakeGlow(UnityEngine::Vector2 size_ = {}, float edgeSize_ = {}, UnityEngine::Color color_ = {}, GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController_ = {}) noexcept : size{size_}, edgeSize{edgeSize_}, color{color_}, materialPropertyBlockController{materialPropertyBlockController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE1B428
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE1B438
    // Get static field: static private readonly System.Int32 _sizeParamsID
    static int _get__sizeParamsID();
    // Set static field: static private readonly System.Int32 _sizeParamsID
    static void _set__sizeParamsID(int value);
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x10AECE8
    void set_color(UnityEngine::Color value);
    // public UnityEngine.Color get_color()
    // Offset: 0x10AEDC4
    UnityEngine::Color get_color();
    // protected System.Void Awake()
    // Offset: 0x10AEDD0
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x10AEE48
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x10AF048
    void OnDisable();
    // public System.Void Refresh()
    // Offset: 0x10AEEC8
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0x10AF0C0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RectangleFakeGlow* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RectangleFakeGlow::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RectangleFakeGlow*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x10AF124
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // RectangleFakeGlow
  #pragma pack(pop)
  static check_size<sizeof(RectangleFakeGlow), 56 + sizeof(GlobalNamespace::MaterialPropertyBlockController*)> __GlobalNamespace_RectangleFakeGlowSizeCheck;
  static_assert(sizeof(RectangleFakeGlow) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RectangleFakeGlow*, "", "RectangleFakeGlow");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::RectangleFakeGlow::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RectangleFakeGlow::*)(UnityEngine::Color)>(&GlobalNamespace::RectangleFakeGlow::set_color)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RectangleFakeGlow*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RectangleFakeGlow::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::RectangleFakeGlow::*)()>(&GlobalNamespace::RectangleFakeGlow::get_color)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RectangleFakeGlow*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RectangleFakeGlow::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RectangleFakeGlow::*)()>(&GlobalNamespace::RectangleFakeGlow::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RectangleFakeGlow*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RectangleFakeGlow::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RectangleFakeGlow::*)()>(&GlobalNamespace::RectangleFakeGlow::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RectangleFakeGlow*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RectangleFakeGlow::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RectangleFakeGlow::*)()>(&GlobalNamespace::RectangleFakeGlow::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RectangleFakeGlow*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RectangleFakeGlow::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RectangleFakeGlow::*)()>(&GlobalNamespace::RectangleFakeGlow::Refresh)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RectangleFakeGlow*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RectangleFakeGlow::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RectangleFakeGlow::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::RectangleFakeGlow::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RectangleFakeGlow*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
