// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.UIItemsList`1
#include "HMUI/UIItemsList_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageWithHint
  class ImageWithHint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ImageWithHintItemsList
  class ImageWithHintItemsList : public HMUI::UIItemsList_1<HMUI::ImageWithHint*> {
    public:
    // Creating value type constructor for type: ImageWithHintItemsList
    ImageWithHintItemsList() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x10C3DB4
    // Implemented from: HMUI.UIItemsList`1
    // Base method: System.Void UIItemsList_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImageWithHintItemsList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ImageWithHintItemsList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImageWithHintItemsList*, creationType>()));
    }
  }; // ImageWithHintItemsList
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ImageWithHintItemsList*, "", "ImageWithHintItemsList");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ImageWithHintItemsList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
