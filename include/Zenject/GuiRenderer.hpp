// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GuiRenderableManager
  class GuiRenderableManager;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.GuiRenderer
  class GuiRenderer : public UnityEngine::MonoBehaviour {
    public:
    // private Zenject.GuiRenderableManager _renderableManager
    // Size: 0x8
    // Offset: 0x18
    Zenject::GuiRenderableManager* renderableManager;
    // Field size check
    static_assert(sizeof(Zenject::GuiRenderableManager*) == 0x8);
    // Creating value type constructor for type: GuiRenderer
    GuiRenderer(Zenject::GuiRenderableManager* renderableManager_ = {}) noexcept : renderableManager{renderableManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Construct(Zenject.GuiRenderableManager renderableManager)
    // Offset: 0x163E85C
    void Construct(Zenject::GuiRenderableManager* renderableManager);
    // public System.Void OnGUI()
    // Offset: 0x163E864
    void OnGUI();
    // public System.Void .ctor()
    // Offset: 0x163E87C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GuiRenderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GuiRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GuiRenderer*, creationType>()));
    }
  }; // Zenject.GuiRenderer
  #pragma pack(pop)
  static check_size<sizeof(GuiRenderer), 24 + sizeof(Zenject::GuiRenderableManager*)> __Zenject_GuiRendererSizeCheck;
  static_assert(sizeof(GuiRenderer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::GuiRenderer*, "Zenject", "GuiRenderer");
// Writing includes for template specializations
#include "Zenject/GuiRenderableManager.hpp"
// Writing MetadataGetter for method: Zenject::GuiRenderer::Construct
// Il2CppName: Construct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::GuiRenderer::*)(Zenject::GuiRenderableManager*)>(&Zenject::GuiRenderer::Construct)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::GuiRenderer*), "Construct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::GuiRenderableManager*>()});
  }
};
// Writing MetadataGetter for method: Zenject::GuiRenderer::OnGUI
// Il2CppName: OnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::GuiRenderer::*)()>(&Zenject::GuiRenderer::OnGUI)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::GuiRenderer*), "OnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::GuiRenderer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
