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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVRAudioSourceTest
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRAudioSourceTest : public UnityEngine::MonoBehaviour {
    public:
    // public System.Single period
    // Size: 0x4
    // Offset: 0x18
    float period;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single nextActionTime
    // Size: 0x4
    // Offset: 0x1C
    float nextActionTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: OVRAudioSourceTest
    OVRAudioSourceTest(float period_ = {}, float nextActionTime_ = {}) noexcept : period{period_}, nextActionTime{nextActionTime_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single period
    float& dyn_period();
    // Get instance field reference: private System.Single nextActionTime
    float& dyn_nextActionTime();
    // private System.Void Start()
    // Offset: 0x1293A0C
    void Start();
    // private System.Void Update()
    // Offset: 0x1293B00
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1293CC4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRAudioSourceTest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRAudioSourceTest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRAudioSourceTest*, creationType>()));
    }
  }; // OVRAudioSourceTest
  #pragma pack(pop)
  static check_size<sizeof(OVRAudioSourceTest), 28 + sizeof(float)> __GlobalNamespace_OVRAudioSourceTestSizeCheck;
  static_assert(sizeof(OVRAudioSourceTest) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRAudioSourceTest*, "", "OVRAudioSourceTest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRAudioSourceTest::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRAudioSourceTest::*)()>(&GlobalNamespace::OVRAudioSourceTest::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAudioSourceTest*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAudioSourceTest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRAudioSourceTest::*)()>(&GlobalNamespace::OVRAudioSourceTest::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAudioSourceTest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAudioSourceTest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
