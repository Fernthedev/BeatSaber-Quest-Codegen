// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Graphic
#include "UnityEngine/UI/Graphic.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.EmptyBoxGraphic
  class EmptyBoxGraphic : public UnityEngine::UI::Graphic {
    public:
    // Writing base type padding for base size: 0x89 to desired offset: 0x8C
    char ___base_padding[0x3] = {};
    // private System.Single _depth
    // Size: 0x4
    // Offset: 0x8C
    float depth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: EmptyBoxGraphic
    EmptyBoxGraphic(float depth_ = {}) noexcept : depth{depth_} {}
    // protected System.Void OnDrawGizmosSelected()
    // Offset: 0x131053C
    void OnDrawGizmosSelected();
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x131017C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* vh);
    // public System.Void .ctor()
    // Offset: 0x13107A8
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyBoxGraphic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::EmptyBoxGraphic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyBoxGraphic*, creationType>()));
    }
  }; // HMUI.EmptyBoxGraphic
  #pragma pack(pop)
  static check_size<sizeof(EmptyBoxGraphic), 140 + sizeof(float)> __HMUI_EmptyBoxGraphicSizeCheck;
  static_assert(sizeof(EmptyBoxGraphic) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::EmptyBoxGraphic*, "HMUI", "EmptyBoxGraphic");
// Writing includes for template specializations
#include "UnityEngine/UI/VertexHelper.hpp"
// Writing MetadataGetter for method: HMUI::EmptyBoxGraphic::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::EmptyBoxGraphic::*)()>(&HMUI::EmptyBoxGraphic::OnDrawGizmosSelected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::EmptyBoxGraphic*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::EmptyBoxGraphic::OnPopulateMesh
// Il2CppName: OnPopulateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::EmptyBoxGraphic::*)(UnityEngine::UI::VertexHelper*)>(&HMUI::EmptyBoxGraphic::OnPopulateMesh)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::EmptyBoxGraphic*), "OnPopulateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::UI::VertexHelper*>()});
  }
};
// Writing MetadataGetter for method: HMUI::EmptyBoxGraphic::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
