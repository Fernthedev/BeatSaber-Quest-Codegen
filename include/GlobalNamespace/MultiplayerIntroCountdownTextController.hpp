// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerIntroCountdownTextController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerIntroCountdownTextController : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshPro[] _texts
    // Size: 0x8
    // Offset: 0x18
    ::Array<TMPro::TextMeshPro*>* texts;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TextMeshPro*>*) == 0x8);
    // Creating value type constructor for type: MultiplayerIntroCountdownTextController
    MultiplayerIntroCountdownTextController(::Array<TMPro::TextMeshPro*>* texts_ = {}) noexcept : texts{texts_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshPro[] _texts
    ::Array<TMPro::TextMeshPro*>*& dyn__texts();
    // public System.Void set_hide(System.Boolean value)
    // Offset: 0x11D5214
    void set_hide(bool value);
    // public System.Single get_fontSize()
    // Offset: 0x11D524C
    float get_fontSize();
    // public System.Void set_fontSize(System.Single value)
    // Offset: 0x11D56D8
    void set_fontSize(float value);
    // public System.Single get_alpha()
    // Offset: 0x11D5290
    float get_alpha();
    // public System.Void set_alpha(System.Single value)
    // Offset: 0x11D576C
    void set_alpha(float value);
    // public System.Void SetText(System.String text)
    // Offset: 0x11D626C
    void SetText(::Il2CppString* text);
    // public System.Void SetDistances(System.Single distance)
    // Offset: 0x11D58C8
    void SetDistances(float distance);
    // public System.Void .ctor()
    // Offset: 0x11D6494
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerIntroCountdownTextController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerIntroCountdownTextController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerIntroCountdownTextController*, creationType>()));
    }
  }; // MultiplayerIntroCountdownTextController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerIntroCountdownTextController), 24 + sizeof(::Array<TMPro::TextMeshPro*>*)> __GlobalNamespace_MultiplayerIntroCountdownTextControllerSizeCheck;
  static_assert(sizeof(MultiplayerIntroCountdownTextController) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerIntroCountdownTextController*, "", "MultiplayerIntroCountdownTextController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdownTextController::set_hide
// Il2CppName: set_hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroCountdownTextController::*)(bool)>(&GlobalNamespace::MultiplayerIntroCountdownTextController::set_hide)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdownTextController*), "set_hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdownTextController::get_fontSize
// Il2CppName: get_fontSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MultiplayerIntroCountdownTextController::*)()>(&GlobalNamespace::MultiplayerIntroCountdownTextController::get_fontSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdownTextController*), "get_fontSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdownTextController::set_fontSize
// Il2CppName: set_fontSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroCountdownTextController::*)(float)>(&GlobalNamespace::MultiplayerIntroCountdownTextController::set_fontSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdownTextController*), "set_fontSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdownTextController::get_alpha
// Il2CppName: get_alpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MultiplayerIntroCountdownTextController::*)()>(&GlobalNamespace::MultiplayerIntroCountdownTextController::get_alpha)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdownTextController*), "get_alpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdownTextController::set_alpha
// Il2CppName: set_alpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroCountdownTextController::*)(float)>(&GlobalNamespace::MultiplayerIntroCountdownTextController::set_alpha)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdownTextController*), "set_alpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdownTextController::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroCountdownTextController::*)(::Il2CppString*)>(&GlobalNamespace::MultiplayerIntroCountdownTextController::SetText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdownTextController*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdownTextController::SetDistances
// Il2CppName: SetDistances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroCountdownTextController::*)(float)>(&GlobalNamespace::MultiplayerIntroCountdownTextController::SetDistances)> {
  static const MethodInfo* get() {
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdownTextController*), "SetDistances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distance});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdownTextController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
