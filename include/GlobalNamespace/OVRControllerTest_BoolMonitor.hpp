// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRControllerTest
#include "GlobalNamespace/OVRControllerTest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: OVRControllerTest/BoolMonitor
  class OVRControllerTest::BoolMonitor : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator
    class BoolGenerator;
    // private System.String m_name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private OVRControllerTest/BoolMonitor/BoolGenerator m_generator
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator* m_generator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator*) == 0x8);
    // private System.Boolean m_prevValue
    // Size: 0x1
    // Offset: 0x20
    bool m_prevValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_currentValue
    // Size: 0x1
    // Offset: 0x21
    bool m_currentValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_currentValueRecentlyChanged
    // Size: 0x1
    // Offset: 0x22
    bool m_currentValueRecentlyChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_currentValueRecentlyChanged and: m_displayTimeout
    char __padding4[0x1] = {};
    // private System.Single m_displayTimeout
    // Size: 0x4
    // Offset: 0x24
    float m_displayTimeout;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_displayTimer
    // Size: 0x4
    // Offset: 0x28
    float m_displayTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BoolMonitor
    BoolMonitor(::Il2CppString* m_name_ = {}, GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator* m_generator_ = {}, bool m_prevValue_ = {}, bool m_currentValue_ = {}, bool m_currentValueRecentlyChanged_ = {}, float m_displayTimeout_ = {}, float m_displayTimer_ = {}) noexcept : m_name{m_name_}, m_generator{m_generator_}, m_prevValue{m_prevValue_}, m_currentValue{m_currentValue_}, m_currentValueRecentlyChanged{m_currentValueRecentlyChanged_}, m_displayTimeout{m_displayTimeout_}, m_displayTimer{m_displayTimer_} {}
    // public System.Void .ctor(System.String name, OVRControllerTest/BoolMonitor/BoolGenerator generator, System.Single displayTimeout)
    // Offset: 0x12811B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRControllerTest::BoolMonitor* New_ctor(::Il2CppString* name, GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator* generator, float displayTimeout) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRControllerTest::BoolMonitor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRControllerTest::BoolMonitor*, creationType>(name, generator, displayTimeout)));
    }
    // public System.Void Update()
    // Offset: 0x1281A88
    void Update();
    // public System.Void AppendToStringBuilder(ref System.Text.StringBuilder sb)
    // Offset: 0x1281B2C
    void AppendToStringBuilder(System::Text::StringBuilder*& sb);
  }; // OVRControllerTest/BoolMonitor
  #pragma pack(pop)
  static check_size<sizeof(OVRControllerTest::BoolMonitor), 40 + sizeof(float)> __GlobalNamespace_OVRControllerTest_BoolMonitorSizeCheck;
  static_assert(sizeof(OVRControllerTest::BoolMonitor) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRControllerTest::BoolMonitor*, "", "OVRControllerTest/BoolMonitor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerTest::BoolMonitor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerTest::BoolMonitor::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerTest::BoolMonitor::*)()>(&GlobalNamespace::OVRControllerTest::BoolMonitor::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerTest::BoolMonitor*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerTest::BoolMonitor::AppendToStringBuilder
// Il2CppName: AppendToStringBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerTest::BoolMonitor::*)(System::Text::StringBuilder*&)>(&GlobalNamespace::OVRControllerTest::BoolMonitor::AppendToStringBuilder)> {
  const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerTest::BoolMonitor*), "AppendToStringBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
