// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: TutorialEndStateType because it is already included!
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: SceneInfo
  class SceneInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TutorialScenesTransitionSetupDataSO
  class TutorialScenesTransitionSetupDataSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::TutorialScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialScenesTransitionSetupDataSO*, "", "TutorialScenesTransitionSetupDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: TutorialScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    // Nested type: GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType
    struct TutorialEndStateType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: TutorialScenesTransitionSetupDataSO/TutorialEndStateType
    // [TokenAttribute] Offset: FFFFFFFF
    struct TutorialEndStateType/*, public System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: TutorialEndStateType
      constexpr TutorialEndStateType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public TutorialScenesTransitionSetupDataSO/TutorialEndStateType Completed
      static constexpr const int Completed = 0;
      // Get static field: static public TutorialScenesTransitionSetupDataSO/TutorialEndStateType Completed
      static GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType _get_Completed();
      // Set static field: static public TutorialScenesTransitionSetupDataSO/TutorialEndStateType Completed
      static void _set_Completed(GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType value);
      // static field const value: static public TutorialScenesTransitionSetupDataSO/TutorialEndStateType ReturnToMenu
      static constexpr const int ReturnToMenu = 1;
      // Get static field: static public TutorialScenesTransitionSetupDataSO/TutorialEndStateType ReturnToMenu
      static GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType _get_ReturnToMenu();
      // Set static field: static public TutorialScenesTransitionSetupDataSO/TutorialEndStateType ReturnToMenu
      static void _set_ReturnToMenu(GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType value);
      // static field const value: static public TutorialScenesTransitionSetupDataSO/TutorialEndStateType Restart
      static constexpr const int Restart = 2;
      // Get static field: static public TutorialScenesTransitionSetupDataSO/TutorialEndStateType Restart
      static GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType _get_Restart();
      // Set static field: static public TutorialScenesTransitionSetupDataSO/TutorialEndStateType Restart
      static void _set_Restart(GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // TutorialScenesTransitionSetupDataSO/TutorialEndStateType
    #pragma pack(pop)
    static check_size<sizeof(TutorialScenesTransitionSetupDataSO::TutorialEndStateType), 0 + sizeof(int)> __GlobalNamespace_TutorialScenesTransitionSetupDataSO_TutorialEndStateTypeSizeCheck;
    static_assert(sizeof(TutorialScenesTransitionSetupDataSO::TutorialEndStateType) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private EnvironmentInfoSO _environmentInfo
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private SceneInfo _tutorialSceneInfo
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SceneInfo* tutorialSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private SceneInfo _gameCoreSceneInfo
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::SceneInfo* gameCoreSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private System.Action`2<TutorialScenesTransitionSetupDataSO,TutorialScenesTransitionSetupDataSO/TutorialEndStateType> didFinishEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO*, GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO*, GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType>*) == 0x8);
    public:
    // Get instance field reference: private EnvironmentInfoSO _environmentInfo
    GlobalNamespace::EnvironmentInfoSO*& dyn__environmentInfo();
    // Get instance field reference: private SceneInfo _tutorialSceneInfo
    GlobalNamespace::SceneInfo*& dyn__tutorialSceneInfo();
    // Get instance field reference: private SceneInfo _gameCoreSceneInfo
    GlobalNamespace::SceneInfo*& dyn__gameCoreSceneInfo();
    // Get instance field reference: private System.Action`2<TutorialScenesTransitionSetupDataSO,TutorialScenesTransitionSetupDataSO/TutorialEndStateType> didFinishEvent
    System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO*, GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`2<TutorialScenesTransitionSetupDataSO,TutorialScenesTransitionSetupDataSO/TutorialEndStateType> value)
    // Offset: 0x2AED904
    void add_didFinishEvent(System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO*, GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<TutorialScenesTransitionSetupDataSO,TutorialScenesTransitionSetupDataSO/TutorialEndStateType> value)
    // Offset: 0x2AED9A8
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO*, GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType>* value);
    // public System.Void Init()
    // Offset: 0x2AEC688
    void Init();
    // public System.Void Finish(TutorialScenesTransitionSetupDataSO/TutorialEndStateType endState)
    // Offset: 0x2AEBC48
    void Finish(GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType endState);
    // public System.Void .ctor()
    // Offset: 0x2AEDA4C
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // TutorialScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(TutorialScenesTransitionSetupDataSO), 64 + sizeof(System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO*, GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType>*)> __GlobalNamespace_TutorialScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(TutorialScenesTransitionSetupDataSO) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType, "", "TutorialScenesTransitionSetupDataSO/TutorialEndStateType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialScenesTransitionSetupDataSO::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO*, GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType>*)>(&GlobalNamespace::TutorialScenesTransitionSetupDataSO::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "TutorialScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "TutorialScenesTransitionSetupDataSO/TutorialEndStateType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialScenesTransitionSetupDataSO*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialScenesTransitionSetupDataSO::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO*, GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType>*)>(&GlobalNamespace::TutorialScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "TutorialScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "TutorialScenesTransitionSetupDataSO/TutorialEndStateType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialScenesTransitionSetupDataSO*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::TutorialScenesTransitionSetupDataSO::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialScenesTransitionSetupDataSO::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType)>(&GlobalNamespace::TutorialScenesTransitionSetupDataSO::Finish)> {
  static const MethodInfo* get() {
    static auto* endState = &::il2cpp_utils::GetClassFromName("", "TutorialScenesTransitionSetupDataSO/TutorialEndStateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialScenesTransitionSetupDataSO*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
