// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: KeyboardShortcutsManager
  // [TokenAttribute] Offset: FFFFFFFF
  class KeyboardShortcutsManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut
    class KeyboardShortcut;
    // private System.Collections.Generic.Dictionary`2<KeyboardShortcutsManager/KeyboardShortcut,System.Collections.Generic.List`1<System.Action>> _keyboardShortcutActions
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Collections::Generic::List_1<System::Action*>*>* keyboardShortcutActions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Collections::Generic::List_1<System::Action*>*>*) == 0x8);
    // Creating value type constructor for type: KeyboardShortcutsManager
    KeyboardShortcutsManager(System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Collections::Generic::List_1<System::Action*>*>* keyboardShortcutActions_ = {}) noexcept : keyboardShortcutActions{keyboardShortcutActions_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<KeyboardShortcutsManager/KeyboardShortcut,System.Collections.Generic.List`1<System.Action>> _keyboardShortcutActions
    System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Collections::Generic::List_1<System::Action*>*>*& dyn__keyboardShortcutActions();
    // protected System.Void Update()
    // Offset: 0x126A114
    void Update();
    // public System.Void RemoveKeyboardShortcuts(System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Action> shortcutActions)
    // Offset: 0x126A3A4
    void RemoveKeyboardShortcuts(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, System::Action*>* shortcutActions);
    // public System.Void RemoveKeyboardShortcuts(System.Collections.Generic.Dictionary`2<KeyboardShortcutsManager/KeyboardShortcut,System.Action> shortcutActions)
    // Offset: 0x126A4C0
    void RemoveKeyboardShortcuts(System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Action*>* shortcutActions);
    // public System.Void RemoveKeyboardShortcut(KeyboardShortcutsManager/KeyboardShortcut keyboardShortcut, System.Action callback)
    // Offset: 0x126A5C0
    void RemoveKeyboardShortcut(GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut* keyboardShortcut, System::Action* callback);
    // public System.Void RemoveKeyboardShortcut(UnityEngine.KeyCode mainKey, UnityEngine.KeyCode combinationKey1, UnityEngine.KeyCode combinationKey2, System.Action callback)
    // Offset: 0x126A660
    void RemoveKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, UnityEngine::KeyCode combinationKey2, System::Action* callback);
    // public System.Void RemoveKeyboardShortcut(UnityEngine.KeyCode mainKey, UnityEngine.KeyCode combinationKey1, System.Action callback)
    // Offset: 0x126A730
    void RemoveKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, System::Action* callback);
    // public System.Void RemoveKeyboardShortcut(UnityEngine.KeyCode mainKey, System.Action callback)
    // Offset: 0x126A4B0
    void RemoveKeyboardShortcut(UnityEngine::KeyCode mainKey, System::Action* callback);
    // public System.Void AddKeyboardShortcuts(System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Action> shortcutActions)
    // Offset: 0x126A73C
    void AddKeyboardShortcuts(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, System::Action*>* shortcutActions);
    // public System.Void AddKeyboardShortcuts(System.Collections.Generic.Dictionary`2<KeyboardShortcutsManager/KeyboardShortcut,System.Action> shortcutActions)
    // Offset: 0x126A858
    void AddKeyboardShortcuts(System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Action*>* shortcutActions);
    // public System.Void AddKeyboardShortcut(KeyboardShortcutsManager/KeyboardShortcut keyboardShortcut, System.Action callback)
    // Offset: 0x126A958
    void AddKeyboardShortcut(GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut* keyboardShortcut, System::Action* callback);
    // public System.Void AddKeyboardShortcut(UnityEngine.KeyCode mainKey, UnityEngine.KeyCode combinationKey1, UnityEngine.KeyCode combinationKey2, System.Action callback)
    // Offset: 0x126AA40
    void AddKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, UnityEngine::KeyCode combinationKey2, System::Action* callback);
    // public System.Void AddKeyboardShortcut(UnityEngine.KeyCode mainKey, UnityEngine.KeyCode combinationKey1, System.Action callback)
    // Offset: 0x126AAD0
    void AddKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, System::Action* callback);
    // public System.Void AddKeyboardShortcut(UnityEngine.KeyCode mainKey, System.Action callback)
    // Offset: 0x126A848
    void AddKeyboardShortcut(UnityEngine::KeyCode mainKey, System::Action* callback);
    // public System.Void .ctor()
    // Offset: 0x126AADC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyboardShortcutsManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::KeyboardShortcutsManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyboardShortcutsManager*, creationType>()));
    }
  }; // KeyboardShortcutsManager
  #pragma pack(pop)
  static check_size<sizeof(KeyboardShortcutsManager), 24 + sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Collections::Generic::List_1<System::Action*>*>*)> __GlobalNamespace_KeyboardShortcutsManagerSizeCheck;
  static_assert(sizeof(KeyboardShortcutsManager) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KeyboardShortcutsManager*, "", "KeyboardShortcutsManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)()>(&GlobalNamespace::KeyboardShortcutsManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardShortcutsManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcuts
// Il2CppName: RemoveKeyboardShortcuts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, System::Action*>*)>(&GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcuts)> {
  static const MethodInfo* get() {
    static auto* shortcutActions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode"), ::il2cpp_utils::GetClassFromName("System", "Action")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardShortcutsManager*), "RemoveKeyboardShortcuts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shortcutActions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcuts
// Il2CppName: RemoveKeyboardShortcuts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Action*>*)>(&GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcuts)> {
  static const MethodInfo* get() {
    static auto* shortcutActions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "KeyboardShortcutsManager/KeyboardShortcut"), ::il2cpp_utils::GetClassFromName("System", "Action")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardShortcutsManager*), "RemoveKeyboardShortcuts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shortcutActions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut
// Il2CppName: RemoveKeyboardShortcut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Action*)>(&GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut)> {
  static const MethodInfo* get() {
    static auto* keyboardShortcut = &::il2cpp_utils::GetClassFromName("", "KeyboardShortcutsManager/KeyboardShortcut")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardShortcutsManager*), "RemoveKeyboardShortcut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyboardShortcut, callback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut
// Il2CppName: RemoveKeyboardShortcut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(UnityEngine::KeyCode, UnityEngine::KeyCode, UnityEngine::KeyCode, System::Action*)>(&GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut)> {
  static const MethodInfo* get() {
    static auto* mainKey = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    static auto* combinationKey1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    static auto* combinationKey2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardShortcutsManager*), "RemoveKeyboardShortcut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainKey, combinationKey1, combinationKey2, callback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut
// Il2CppName: RemoveKeyboardShortcut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(UnityEngine::KeyCode, UnityEngine::KeyCode, System::Action*)>(&GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut)> {
  static const MethodInfo* get() {
    static auto* mainKey = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    static auto* combinationKey1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardShortcutsManager*), "RemoveKeyboardShortcut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainKey, combinationKey1, callback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut
// Il2CppName: RemoveKeyboardShortcut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(UnityEngine::KeyCode, System::Action*)>(&GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut)> {
  static const MethodInfo* get() {
    static auto* mainKey = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardShortcutsManager*), "RemoveKeyboardShortcut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainKey, callback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcuts
// Il2CppName: AddKeyboardShortcuts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, System::Action*>*)>(&GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcuts)> {
  static const MethodInfo* get() {
    static auto* shortcutActions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode"), ::il2cpp_utils::GetClassFromName("System", "Action")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardShortcutsManager*), "AddKeyboardShortcuts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shortcutActions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcuts
// Il2CppName: AddKeyboardShortcuts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Action*>*)>(&GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcuts)> {
  static const MethodInfo* get() {
    static auto* shortcutActions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "KeyboardShortcutsManager/KeyboardShortcut"), ::il2cpp_utils::GetClassFromName("System", "Action")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardShortcutsManager*), "AddKeyboardShortcuts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shortcutActions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut
// Il2CppName: AddKeyboardShortcut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Action*)>(&GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut)> {
  static const MethodInfo* get() {
    static auto* keyboardShortcut = &::il2cpp_utils::GetClassFromName("", "KeyboardShortcutsManager/KeyboardShortcut")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardShortcutsManager*), "AddKeyboardShortcut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyboardShortcut, callback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut
// Il2CppName: AddKeyboardShortcut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(UnityEngine::KeyCode, UnityEngine::KeyCode, UnityEngine::KeyCode, System::Action*)>(&GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut)> {
  static const MethodInfo* get() {
    static auto* mainKey = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    static auto* combinationKey1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    static auto* combinationKey2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardShortcutsManager*), "AddKeyboardShortcut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainKey, combinationKey1, combinationKey2, callback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut
// Il2CppName: AddKeyboardShortcut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(UnityEngine::KeyCode, UnityEngine::KeyCode, System::Action*)>(&GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut)> {
  static const MethodInfo* get() {
    static auto* mainKey = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    static auto* combinationKey1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardShortcutsManager*), "AddKeyboardShortcut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainKey, combinationKey1, callback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut
// Il2CppName: AddKeyboardShortcut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(UnityEngine::KeyCode, System::Action*)>(&GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut)> {
  static const MethodInfo* get() {
    static auto* mainKey = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardShortcutsManager*), "AddKeyboardShortcut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainKey, callback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
