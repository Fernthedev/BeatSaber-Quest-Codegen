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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
  // Forward declaring type: TextAlignmentOptions
  struct TextAlignmentOptions;
}
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Skipping declaration: LanguageDirection because it is already included!
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // WARNING Size may be invalid!
  // Autogenerated type: Polyglot.LocalizedTextMeshPro
  // [AddComponentMenu] Offset: DFC41C
  // [RequireComponent] Offset: DFC41C
  class LocalizedTextMeshPro : public Polyglot::LocalizedTextComponent_1<TMPro::TextMeshPro*> {
    public:
    // Creating value type constructor for type: LocalizedTextMeshPro
    LocalizedTextMeshPro() noexcept {}
    // protected System.Void SetText(TMPro.TextMeshPro text, System.String value)
    // Offset: 0x2350C4C
    void SetText(TMPro::TextMeshPro* text, ::Il2CppString* value);
    // protected System.Void UpdateAlignment(TMPro.TextMeshPro text, Polyglot.LanguageDirection direction)
    // Offset: 0x2350C6C
    void UpdateAlignment(TMPro::TextMeshPro* text, Polyglot::LanguageDirection direction);
    // private System.Boolean IsOppositeDirection(TMPro.TextAlignmentOptions alignment, Polyglot.LanguageDirection direction)
    // Offset: 0x2350D44
    bool IsOppositeDirection(TMPro::TextAlignmentOptions alignment, Polyglot::LanguageDirection direction);
    // private System.Boolean IsAlignmentRight(TMPro.TextAlignmentOptions alignment)
    // Offset: 0x2350D9C
    bool IsAlignmentRight(TMPro::TextAlignmentOptions alignment);
    // private System.Boolean IsAlignmentLeft(TMPro.TextAlignmentOptions alignment)
    // Offset: 0x2350DC4
    bool IsAlignmentLeft(TMPro::TextAlignmentOptions alignment);
    // public System.Void .ctor()
    // Offset: 0x2350DEC
    // Implemented from: Polyglot.LocalizedTextComponent`1
    // Base method: System.Void LocalizedTextComponent_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedTextMeshPro* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextMeshPro::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedTextMeshPro*, creationType>()));
    }
  }; // Polyglot.LocalizedTextMeshPro
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizedTextMeshPro*, "Polyglot", "LocalizedTextMeshPro");
// Writing includes for template specializations
#include "TMPro/TextMeshPro.hpp"
#include "TMPro/TextAlignmentOptions.hpp"
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshPro::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizedTextMeshPro::*)(TMPro::TextMeshPro*, ::Il2CppString*)>(&Polyglot::LocalizedTextMeshPro::SetText)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMeshPro*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TextMeshPro*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshPro::UpdateAlignment
// Il2CppName: UpdateAlignment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizedTextMeshPro::*)(TMPro::TextMeshPro*, Polyglot::LanguageDirection)>(&Polyglot::LocalizedTextMeshPro::UpdateAlignment)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMeshPro*), "UpdateAlignment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TextMeshPro*>(), ::il2cpp_utils::ExtractIndependentType<Polyglot::LanguageDirection>()});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshPro::IsOppositeDirection
// Il2CppName: IsOppositeDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::LocalizedTextMeshPro::*)(TMPro::TextAlignmentOptions, Polyglot::LanguageDirection)>(&Polyglot::LocalizedTextMeshPro::IsOppositeDirection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMeshPro*), "IsOppositeDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TextAlignmentOptions>(), ::il2cpp_utils::ExtractIndependentType<Polyglot::LanguageDirection>()});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshPro::IsAlignmentRight
// Il2CppName: IsAlignmentRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::LocalizedTextMeshPro::*)(TMPro::TextAlignmentOptions)>(&Polyglot::LocalizedTextMeshPro::IsAlignmentRight)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMeshPro*), "IsAlignmentRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TextAlignmentOptions>()});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshPro::IsAlignmentLeft
// Il2CppName: IsAlignmentLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::LocalizedTextMeshPro::*)(TMPro::TextAlignmentOptions)>(&Polyglot::LocalizedTextMeshPro::IsAlignmentLeft)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMeshPro*), "IsAlignmentLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TextAlignmentOptions>()});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshPro::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
