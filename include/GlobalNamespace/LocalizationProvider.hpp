// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: Localization
  class Localization;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LocalizationProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalizationProvider : public UnityEngine::ScriptableObject {
    public:
    // private Polyglot.Localization _localization
    // Size: 0x8
    // Offset: 0x18
    Polyglot::Localization* localization;
    // Field size check
    static_assert(sizeof(Polyglot::Localization*) == 0x8);
    // Creating value type constructor for type: LocalizationProvider
    LocalizationProvider(Polyglot::Localization* localization_ = {}) noexcept : localization{localization_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private LocalizationProvider _instance
    static GlobalNamespace::LocalizationProvider* _get__instance();
    // Set static field: static private LocalizationProvider _instance
    static void _set__instance(GlobalNamespace::LocalizationProvider* value);
    // Get instance field reference: private Polyglot.Localization _localization
    Polyglot::Localization*& dyn__localization();
    // public Polyglot.Localization get_localization()
    // Offset: 0x2379DDC
    Polyglot::Localization* get_localization();
    // static public LocalizationProvider get_Instance()
    // Offset: 0x2379DE4
    static GlobalNamespace::LocalizationProvider* get_Instance();
    // static public System.Void set_Instance(LocalizationProvider value)
    // Offset: 0x2379F54
    static void set_Instance(GlobalNamespace::LocalizationProvider* value);
    // static public System.Boolean get_HasInstance()
    // Offset: 0x2379E70
    static bool get_HasInstance();
    // public System.Void .ctor()
    // Offset: 0x2379FA8
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizationProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalizationProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizationProvider*, creationType>()));
    }
  }; // LocalizationProvider
  #pragma pack(pop)
  static check_size<sizeof(LocalizationProvider), 24 + sizeof(Polyglot::Localization*)> __GlobalNamespace_LocalizationProviderSizeCheck;
  static_assert(sizeof(LocalizationProvider) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalizationProvider*, "", "LocalizationProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalizationProvider::get_localization
// Il2CppName: get_localization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Polyglot::Localization* (GlobalNamespace::LocalizationProvider::*)()>(&GlobalNamespace::LocalizationProvider::get_localization)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalizationProvider*), "get_localization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalizationProvider::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LocalizationProvider* (*)()>(&GlobalNamespace::LocalizationProvider::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalizationProvider*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalizationProvider::set_Instance
// Il2CppName: set_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::LocalizationProvider*)>(&GlobalNamespace::LocalizationProvider::set_Instance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "LocalizationProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalizationProvider*), "set_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalizationProvider::get_HasInstance
// Il2CppName: get_HasInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::LocalizationProvider::get_HasInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalizationProvider*), "get_HasInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalizationProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
