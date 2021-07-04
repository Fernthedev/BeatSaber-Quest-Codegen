// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeView
  class ColorSchemeView;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: ColorSchemeTableCell
  class ColorSchemeTableCell : public HMUI::TableCell {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x50
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private ColorSchemeView _colorSchemeView
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::ColorSchemeView* colorSchemeView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeView*) == 0x8);
    // private UnityEngine.UI.Image _editIcon
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::UI::Image* editIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // Creating value type constructor for type: ColorSchemeTableCell
    ColorSchemeTableCell(TMPro::TextMeshProUGUI* text_ = {}, GlobalNamespace::ColorSchemeView* colorSchemeView_ = {}, UnityEngine::UI::Image* editIcon_ = {}) noexcept : text{text_}, colorSchemeView{colorSchemeView_}, editIcon{editIcon_} {}
    // public System.Void set_text(System.String value)
    // Offset: 0x1192EB0
    void set_text(::Il2CppString* value);
    // public System.String get_text()
    // Offset: 0x11932E8
    ::Il2CppString* get_text();
    // public System.Void set_showEditIcon(System.Boolean value)
    // Offset: 0x1192E90
    void set_showEditIcon(bool value);
    // public System.Void SetColors(UnityEngine.Color saberAColor, UnityEngine.Color saberBColor, UnityEngine.Color environment0Color, UnityEngine.Color environment1Color, UnityEngine.Color obstacleColor)
    // Offset: 0x1192ECC
    void SetColors(UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color environment0Color, UnityEngine::Color environment1Color, UnityEngine::Color obstacleColor);
    // public System.Void .ctor()
    // Offset: 0x1193304
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSchemeTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorSchemeTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSchemeTableCell*, creationType>()));
    }
  }; // ColorSchemeTableCell
  #pragma pack(pop)
  static check_size<sizeof(ColorSchemeTableCell), 96 + sizeof(UnityEngine::UI::Image*)> __GlobalNamespace_ColorSchemeTableCellSizeCheck;
  static_assert(sizeof(ColorSchemeTableCell) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeTableCell*, "", "ColorSchemeTableCell");
// Writing includes for template specializations
#include "UnityEngine/Color.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeTableCell::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeTableCell::*)(::Il2CppString*)>(&GlobalNamespace::ColorSchemeTableCell::set_text)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeTableCell*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeTableCell::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::ColorSchemeTableCell::*)()>(&GlobalNamespace::ColorSchemeTableCell::get_text)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeTableCell*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeTableCell::set_showEditIcon
// Il2CppName: set_showEditIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeTableCell::*)(bool)>(&GlobalNamespace::ColorSchemeTableCell::set_showEditIcon)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeTableCell*), "set_showEditIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeTableCell::SetColors
// Il2CppName: SetColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeTableCell::*)(UnityEngine::Color, UnityEngine::Color, UnityEngine::Color, UnityEngine::Color, UnityEngine::Color)>(&GlobalNamespace::ColorSchemeTableCell::SetColors)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeTableCell*), "SetColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
