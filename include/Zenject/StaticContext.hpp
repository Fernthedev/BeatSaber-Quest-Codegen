// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.StaticContext
  // [TokenAttribute] Offset: FFFFFFFF
  class StaticContext : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: StaticContext
    StaticContext() noexcept {}
    // Get static field: static private Zenject.DiContainer _container
    static Zenject::DiContainer* _get__container();
    // Set static field: static private Zenject.DiContainer _container
    static void _set__container(Zenject::DiContainer* value);
    // static public System.Boolean get_HasContainer()
    // Offset: 0x1724600
    static bool get_HasContainer();
    // static public Zenject.DiContainer get_Container()
    // Offset: 0x171EFCC
    static Zenject::DiContainer* get_Container();
    // static public System.Void Clear()
    // Offset: 0x17245B0
    static void Clear();
  }; // Zenject.StaticContext
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::StaticContext*, "Zenject", "StaticContext");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::StaticContext::get_HasContainer
// Il2CppName: get_HasContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Zenject::StaticContext::get_HasContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::StaticContext*), "get_HasContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::StaticContext::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (*)()>(&Zenject::StaticContext::get_Container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::StaticContext*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::StaticContext::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::StaticContext::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::StaticContext*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
