// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Polyglot.LocalizedTextComponent`1
#include "Polyglot/LocalizedTextComponent_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHint
  class HoverHint;
}
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Skipping declaration: LanguageDirection because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LocalizedHoverHint
  class LocalizedHoverHint : public Polyglot::LocalizedTextComponent_1<HMUI::HoverHint*> {
    public:
    // Creating value type constructor for type: LocalizedHoverHint
    LocalizedHoverHint() noexcept {}
    // protected System.Void SetText(HMUI.HoverHint hoverHint, System.String value)
    // Offset: 0x23FFC20
    void SetText(HMUI::HoverHint* hoverHint, ::Il2CppString* value);
    // protected System.Void UpdateAlignment(HMUI.HoverHint hoverHint, Polyglot.LanguageDirection direction)
    // Offset: 0x23FFC38
    void UpdateAlignment(HMUI::HoverHint* hoverHint, Polyglot::LanguageDirection direction);
    // public System.Void .ctor()
    // Offset: 0x23FFC3C
    // Implemented from: Polyglot.LocalizedTextComponent`1
    // Base method: System.Void LocalizedTextComponent_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedHoverHint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalizedHoverHint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedHoverHint*, creationType>()));
    }
  }; // LocalizedHoverHint
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalizedHoverHint*, "", "LocalizedHoverHint");
// Writing includes for template specializations
#include "HMUI/HoverHint.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalizedHoverHint::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalizedHoverHint::*)(HMUI::HoverHint*, ::Il2CppString*)>(&GlobalNamespace::LocalizedHoverHint::SetText)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalizedHoverHint*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::HoverHint*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalizedHoverHint::UpdateAlignment
// Il2CppName: UpdateAlignment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalizedHoverHint::*)(HMUI::HoverHint*, Polyglot::LanguageDirection)>(&GlobalNamespace::LocalizedHoverHint::UpdateAlignment)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalizedHoverHint*), "UpdateAlignment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::HoverHint*>(), ::il2cpp_utils::ExtractIndependentType<Polyglot::LanguageDirection>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalizedHoverHint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
