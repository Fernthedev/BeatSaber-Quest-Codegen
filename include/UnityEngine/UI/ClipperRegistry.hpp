// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI::Collections
namespace UnityEngine::UI::Collections {
  // Forward declaring type: IndexedSet`1<T>
  template<typename T>
  class IndexedSet_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: IClipper
  class IClipper;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.ClipperRegistry
  // [TokenAttribute] Offset: FFFFFFFF
  class ClipperRegistry : public ::Il2CppObject {
    public:
    // private readonly UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.IClipper> m_Clippers
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::IClipper*>* m_Clippers;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::IClipper*>*) == 0x8);
    // Creating value type constructor for type: ClipperRegistry
    ClipperRegistry(UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::IClipper*>* m_Clippers_ = {}) noexcept : m_Clippers{m_Clippers_} {}
    // Creating conversion operator: operator UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::IClipper*>*
    constexpr operator UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::IClipper*>*() const noexcept {
      return m_Clippers;
    }
    // Get static field: static private UnityEngine.UI.ClipperRegistry s_Instance
    static UnityEngine::UI::ClipperRegistry* _get_s_Instance();
    // Set static field: static private UnityEngine.UI.ClipperRegistry s_Instance
    static void _set_s_Instance(UnityEngine::UI::ClipperRegistry* value);
    // Get instance field reference: private readonly UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.IClipper> m_Clippers
    UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::IClipper*>*& dyn_m_Clippers();
    // static public UnityEngine.UI.ClipperRegistry get_instance()
    // Offset: 0x14733CC
    static UnityEngine::UI::ClipperRegistry* get_instance();
    // public System.Void Cull()
    // Offset: 0x1473448
    void Cull();
    // static public System.Void Register(UnityEngine.UI.IClipper c)
    // Offset: 0x1473FDC
    static void Register(UnityEngine::UI::IClipper* c);
    // static public System.Void Unregister(UnityEngine.UI.IClipper c)
    // Offset: 0x1474050
    static void Unregister(UnityEngine::UI::IClipper* c);
    // protected System.Void .ctor()
    // Offset: 0x1473F6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClipperRegistry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ClipperRegistry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClipperRegistry*, creationType>()));
    }
  }; // UnityEngine.UI.ClipperRegistry
  #pragma pack(pop)
  static check_size<sizeof(ClipperRegistry), 16 + sizeof(UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::IClipper*>*)> __UnityEngine_UI_ClipperRegistrySizeCheck;
  static_assert(sizeof(ClipperRegistry) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ClipperRegistry*, "UnityEngine.UI", "ClipperRegistry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::ClipperRegistry::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::ClipperRegistry* (*)()>(&UnityEngine::UI::ClipperRegistry::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ClipperRegistry*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ClipperRegistry::Cull
// Il2CppName: Cull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ClipperRegistry::*)()>(&UnityEngine::UI::ClipperRegistry::Cull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ClipperRegistry*), "Cull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ClipperRegistry::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::IClipper*)>(&UnityEngine::UI::ClipperRegistry::Register)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "IClipper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ClipperRegistry*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ClipperRegistry::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::IClipper*)>(&UnityEngine::UI::ClipperRegistry::Unregister)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "IClipper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ClipperRegistry*), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ClipperRegistry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
