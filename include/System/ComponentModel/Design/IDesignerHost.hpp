// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.IServiceProvider
#include "System/IServiceProvider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IComponent
  class IComponent;
}
// Completed forward declares
// Type namespace: System.ComponentModel.Design
namespace System::ComponentModel::Design {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.Design.IDesignerHost
  // [ComVisibleAttribute] Offset: D87B70
  class IDesignerHost/*, public System::IServiceProvider*/ {
    public:
    // Creating value type constructor for type: IDesignerHost
    IDesignerHost() noexcept {}
    // Creating interface conversion operator: operator System::IServiceProvider
    operator System::IServiceProvider() noexcept {
      return *reinterpret_cast<System::IServiceProvider*>(this);
    }
    // public System.ComponentModel.IComponent get_RootComponent()
    // Offset: 0xFFFFFFFF
    System::ComponentModel::IComponent* get_RootComponent();
  }; // System.ComponentModel.Design.IDesignerHost
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Design::IDesignerHost*, "System.ComponentModel.Design", "IDesignerHost");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::Design::IDesignerHost::get_RootComponent
// Il2CppName: get_RootComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::IComponent* (System::ComponentModel::Design::IDesignerHost::*)()>(&System::ComponentModel::Design::IDesignerHost::get_RootComponent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Design::IDesignerHost*), "get_RootComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
