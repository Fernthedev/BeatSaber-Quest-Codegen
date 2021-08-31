// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ColorSO
#include "GlobalNamespace/ColorSO.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: SimpleColorSO
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleColorSO : public GlobalNamespace::ColorSO {
    public:
    // protected UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: SimpleColorSO
    SimpleColorSO(UnityEngine::Color color_ = {}) noexcept : color{color_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected UnityEngine.Color _color
    UnityEngine::Color& dyn__color();
    // public System.Void SetColor(UnityEngine.Color c)
    // Offset: 0x241F32C
    void SetColor(UnityEngine::Color c);
    // public override UnityEngine.Color get_color()
    // Offset: 0x241F320
    // Implemented from: ColorSO
    // Base method: UnityEngine.Color ColorSO::get_color()
    UnityEngine::Color get_color();
    // public System.Void .ctor()
    // Offset: 0x241F338
    // Implemented from: ColorSO
    // Base method: System.Void ColorSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleColorSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleColorSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleColorSO*, creationType>()));
    }
  }; // SimpleColorSO
  #pragma pack(pop)
  static check_size<sizeof(SimpleColorSO), 24 + sizeof(UnityEngine::Color)> __GlobalNamespace_SimpleColorSOSizeCheck;
  static_assert(sizeof(SimpleColorSO) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleColorSO*, "", "SimpleColorSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SimpleColorSO::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleColorSO::*)(UnityEngine::Color)>(&GlobalNamespace::SimpleColorSO::SetColor)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleColorSO*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleColorSO::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::SimpleColorSO::*)()>(&GlobalNamespace::SimpleColorSO::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleColorSO*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleColorSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
