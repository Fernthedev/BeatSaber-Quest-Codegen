// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MenuEnvironmentManager
#include "GlobalNamespace/MenuEnvironmentManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MenuEnvironmentManager/MenuEnvironmentObjects
  // [TokenAttribute] Offset: FFFFFFFF
  class MenuEnvironmentManager::MenuEnvironmentObjects : public ::Il2CppObject {
    public:
    // private MenuEnvironmentManager/MenuEnvironmentType _menuEnvironmentType
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType menuEnvironmentType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType) == 0x4);
    // Padding between fields: menuEnvironmentType and: wrapper
    char __padding0[0x4] = {};
    // private UnityEngine.GameObject _wrapper
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* wrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: MenuEnvironmentObjects
    MenuEnvironmentObjects(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType menuEnvironmentType_ = {}, UnityEngine::GameObject* wrapper_ = {}) noexcept : menuEnvironmentType{menuEnvironmentType_}, wrapper{wrapper_} {}
    // Get instance field: private MenuEnvironmentManager/MenuEnvironmentType _menuEnvironmentType
    GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType _get__menuEnvironmentType();
    // Set instance field: private MenuEnvironmentManager/MenuEnvironmentType _menuEnvironmentType
    void _set__menuEnvironmentType(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType value);
    // Get instance field: private UnityEngine.GameObject _wrapper
    UnityEngine::GameObject* _get__wrapper();
    // Set instance field: private UnityEngine.GameObject _wrapper
    void _set__wrapper(UnityEngine::GameObject* value);
    // public MenuEnvironmentManager/MenuEnvironmentType get_menuEnvironmentType()
    // Offset: 0x10E5C64
    GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType get_menuEnvironmentType();
    // public UnityEngine.GameObject get_wrapper()
    // Offset: 0x10E5C6C
    UnityEngine::GameObject* get_wrapper();
    // public System.Void .ctor()
    // Offset: 0x10E5C74
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuEnvironmentManager::MenuEnvironmentObjects* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuEnvironmentManager::MenuEnvironmentObjects*, creationType>()));
    }
  }; // MenuEnvironmentManager/MenuEnvironmentObjects
  #pragma pack(pop)
  static check_size<sizeof(MenuEnvironmentManager::MenuEnvironmentObjects), 24 + sizeof(UnityEngine::GameObject*)> __GlobalNamespace_MenuEnvironmentManager_MenuEnvironmentObjectsSizeCheck;
  static_assert(sizeof(MenuEnvironmentManager::MenuEnvironmentObjects) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects*, "", "MenuEnvironmentManager/MenuEnvironmentObjects");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::get_menuEnvironmentType
// Il2CppName: get_menuEnvironmentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType (GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::*)()>(&GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::get_menuEnvironmentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects*), "get_menuEnvironmentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::get_wrapper
// Il2CppName: get_wrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::*)()>(&GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::get_wrapper)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects*), "get_wrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
