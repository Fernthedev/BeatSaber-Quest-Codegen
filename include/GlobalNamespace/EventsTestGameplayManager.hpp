// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EventsTestGameplayManager
  class EventsTestGameplayManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::EventsTestGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EventsTestGameplayManager*, "", "EventsTestGameplayManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: EventsTestGameplayManager
  // [TokenAttribute] Offset: FFFFFFFF
  class EventsTestGameplayManager : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [InjectAttribute] Offset: 0x1242FD4
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // private BeatmapEventType _beatmapEventType
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::BeatmapEventType beatmapEventType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // private System.Single _floatValue
    // Size: 0x4
    // Offset: 0x24
    float floatValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,BeatmapEventType> _beatmapEventTypeBindings
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, GlobalNamespace::BeatmapEventType>* beatmapEventTypeBindings;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, GlobalNamespace::BeatmapEventType>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Int32> _beatmapValuesBindings
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, int>* beatmapValuesBindings;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, int>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Single> _floatValuesBindings
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, float>* floatValuesBindings;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, float>*) == 0x8);
    // private System.Boolean _rotatingLasers
    // Size: 0x1
    // Offset: 0x40
    bool rotatingLasers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    GlobalNamespace::IBeatmapObjectCallbackController*& dyn__beatmapObjectCallbackController();
    // Get instance field reference: private BeatmapEventType _beatmapEventType
    GlobalNamespace::BeatmapEventType& dyn__beatmapEventType();
    // Get instance field reference: private System.Single _floatValue
    float& dyn__floatValue();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,BeatmapEventType> _beatmapEventTypeBindings
    System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, GlobalNamespace::BeatmapEventType>*& dyn__beatmapEventTypeBindings();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Int32> _beatmapValuesBindings
    System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, int>*& dyn__beatmapValuesBindings();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Single> _floatValuesBindings
    System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, float>*& dyn__floatValuesBindings();
    // Get instance field reference: private System.Boolean _rotatingLasers
    bool& dyn__rotatingLasers();
    // protected System.Void Update()
    // Offset: 0x13FC7BC
    void Update();
    // public System.Void .ctor()
    // Offset: 0x13FCC40
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventsTestGameplayManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EventsTestGameplayManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventsTestGameplayManager*, creationType>()));
    }
  }; // EventsTestGameplayManager
  #pragma pack(pop)
  static check_size<sizeof(EventsTestGameplayManager), 64 + sizeof(bool)> __GlobalNamespace_EventsTestGameplayManagerSizeCheck;
  static_assert(sizeof(EventsTestGameplayManager) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EventsTestGameplayManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EventsTestGameplayManager::*)()>(&GlobalNamespace::EventsTestGameplayManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EventsTestGameplayManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EventsTestGameplayManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
