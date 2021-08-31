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
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: OVRControllerTest
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRControllerTest : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRControllerTest::BoolMonitor
    class BoolMonitor;
    // Nested type: GlobalNamespace::OVRControllerTest::$$c
    class $$c;
    // public UnityEngine.UI.Text uiText
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Text* uiText;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Text*) == 0x8);
    // private System.Collections.Generic.List`1<OVRControllerTest/BoolMonitor> monitors
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::OVRControllerTest::BoolMonitor*>* monitors;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::OVRControllerTest::BoolMonitor*>*) == 0x8);
    // private System.Text.StringBuilder data
    // Size: 0x8
    // Offset: 0x28
    System::Text::StringBuilder* data;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // Creating value type constructor for type: OVRControllerTest
    OVRControllerTest(UnityEngine::UI::Text* uiText_ = {}, System::Collections::Generic::List_1<GlobalNamespace::OVRControllerTest::BoolMonitor*>* monitors_ = {}, System::Text::StringBuilder* data_ = {}) noexcept : uiText{uiText_}, monitors{monitors_}, data{data_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private System.String prevConnected
    static ::Il2CppString* _get_prevConnected();
    // Set static field: static private System.String prevConnected
    static void _set_prevConnected(::Il2CppString* value);
    // Get static field: static private OVRControllerTest/BoolMonitor controllers
    static GlobalNamespace::OVRControllerTest::BoolMonitor* _get_controllers();
    // Set static field: static private OVRControllerTest/BoolMonitor controllers
    static void _set_controllers(GlobalNamespace::OVRControllerTest::BoolMonitor* value);
    // Get instance field: public UnityEngine.UI.Text uiText
    UnityEngine::UI::Text* _get_uiText();
    // Set instance field: public UnityEngine.UI.Text uiText
    void _set_uiText(UnityEngine::UI::Text* value);
    // Get instance field: private System.Collections.Generic.List`1<OVRControllerTest/BoolMonitor> monitors
    System::Collections::Generic::List_1<GlobalNamespace::OVRControllerTest::BoolMonitor*>* _get_monitors();
    // Set instance field: private System.Collections.Generic.List`1<OVRControllerTest/BoolMonitor> monitors
    void _set_monitors(System::Collections::Generic::List_1<GlobalNamespace::OVRControllerTest::BoolMonitor*>* value);
    // Get instance field: private System.Text.StringBuilder data
    System::Text::StringBuilder* _get_data();
    // Set instance field: private System.Text.StringBuilder data
    void _set_data(System::Text::StringBuilder* value);
    // private System.Void Start()
    // Offset: 0x12985E8
    void Start();
    // private System.Void Update()
    // Offset: 0x1299DD4
    void Update();
    // public System.Void .ctor()
    // Offset: 0x129A788
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRControllerTest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRControllerTest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRControllerTest*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x129A790
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVRControllerTest
  #pragma pack(pop)
  static check_size<sizeof(OVRControllerTest), 40 + sizeof(System::Text::StringBuilder*)> __GlobalNamespace_OVRControllerTestSizeCheck;
  static_assert(sizeof(OVRControllerTest) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRControllerTest*, "", "OVRControllerTest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerTest::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerTest::*)()>(&GlobalNamespace::OVRControllerTest::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerTest*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerTest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerTest::*)()>(&GlobalNamespace::OVRControllerTest::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerTest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerTest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerTest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRControllerTest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerTest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
