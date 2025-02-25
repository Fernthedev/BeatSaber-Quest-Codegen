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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ClickButtonWithCommandArgument
  // [TokenAttribute] Offset: FFFFFFFF
  class ClickButtonWithCommandArgument : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ClickButtonWithCommandArgument::$Start$d__2
    class $Start$d__2;
    // private System.String _argument
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* argument;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.UI.Button _button
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Button* button;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // Creating value type constructor for type: ClickButtonWithCommandArgument
    ClickButtonWithCommandArgument(::Il2CppString* argument_ = {}, UnityEngine::UI::Button* button_ = {}) noexcept : argument{argument_}, button{button_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _argument
    ::Il2CppString*& dyn__argument();
    // Get instance field reference: private UnityEngine.UI.Button _button
    UnityEngine::UI::Button*& dyn__button();
    // protected System.Collections.IEnumerator Start()
    // Offset: 0x125CFEC
    System::Collections::IEnumerator* Start();
    // public System.Void .ctor()
    // Offset: 0x125D088
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClickButtonWithCommandArgument* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ClickButtonWithCommandArgument::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClickButtonWithCommandArgument*, creationType>()));
    }
  }; // ClickButtonWithCommandArgument
  #pragma pack(pop)
  static check_size<sizeof(ClickButtonWithCommandArgument), 32 + sizeof(UnityEngine::UI::Button*)> __GlobalNamespace_ClickButtonWithCommandArgumentSizeCheck;
  static_assert(sizeof(ClickButtonWithCommandArgument) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ClickButtonWithCommandArgument*, "", "ClickButtonWithCommandArgument");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ClickButtonWithCommandArgument::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::ClickButtonWithCommandArgument::*)()>(&GlobalNamespace::ClickButtonWithCommandArgument::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClickButtonWithCommandArgument*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClickButtonWithCommandArgument::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
