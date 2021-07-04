// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: ContainerSources because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ZenAutoInjecter
  class ZenAutoInjecter : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: Zenject::ZenAutoInjecter::ContainerSources
    struct ContainerSources;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Zenject.ZenAutoInjecter/ContainerSources
    struct ContainerSources/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ContainerSources
      constexpr ContainerSources(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Zenject.ZenAutoInjecter/ContainerSources SceneContext
      static constexpr const int SceneContext = 0;
      // Get static field: static public Zenject.ZenAutoInjecter/ContainerSources SceneContext
      static Zenject::ZenAutoInjecter::ContainerSources _get_SceneContext();
      // Set static field: static public Zenject.ZenAutoInjecter/ContainerSources SceneContext
      static void _set_SceneContext(Zenject::ZenAutoInjecter::ContainerSources value);
      // static field const value: static public Zenject.ZenAutoInjecter/ContainerSources ProjectContext
      static constexpr const int ProjectContext = 1;
      // Get static field: static public Zenject.ZenAutoInjecter/ContainerSources ProjectContext
      static Zenject::ZenAutoInjecter::ContainerSources _get_ProjectContext();
      // Set static field: static public Zenject.ZenAutoInjecter/ContainerSources ProjectContext
      static void _set_ProjectContext(Zenject::ZenAutoInjecter::ContainerSources value);
      // static field const value: static public Zenject.ZenAutoInjecter/ContainerSources SearchHierarchy
      static constexpr const int SearchHierarchy = 2;
      // Get static field: static public Zenject.ZenAutoInjecter/ContainerSources SearchHierarchy
      static Zenject::ZenAutoInjecter::ContainerSources _get_SearchHierarchy();
      // Set static field: static public Zenject.ZenAutoInjecter/ContainerSources SearchHierarchy
      static void _set_SearchHierarchy(Zenject::ZenAutoInjecter::ContainerSources value);
    }; // Zenject.ZenAutoInjecter/ContainerSources
    #pragma pack(pop)
    static check_size<sizeof(ZenAutoInjecter::ContainerSources), 0 + sizeof(int)> __Zenject_ZenAutoInjecter_ContainerSourcesSizeCheck;
    static_assert(sizeof(ZenAutoInjecter::ContainerSources) == 0x4);
    // private Zenject.ZenAutoInjecter/ContainerSources _containerSource
    // Size: 0x4
    // Offset: 0x18
    Zenject::ZenAutoInjecter::ContainerSources containerSource;
    // Field size check
    static_assert(sizeof(Zenject::ZenAutoInjecter::ContainerSources) == 0x4);
    // private System.Boolean _hasInjected
    // Size: 0x1
    // Offset: 0x1C
    bool hasInjected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ZenAutoInjecter
    ZenAutoInjecter(Zenject::ZenAutoInjecter::ContainerSources containerSource_ = {}, bool hasInjected_ = {}) noexcept : containerSource{containerSource_}, hasInjected{hasInjected_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public Zenject.ZenAutoInjecter/ContainerSources get_ContainerSource()
    // Offset: 0x23BB57C
    Zenject::ZenAutoInjecter::ContainerSources get_ContainerSource();
    // public System.Void set_ContainerSource(Zenject.ZenAutoInjecter/ContainerSources value)
    // Offset: 0x23BB584
    void set_ContainerSource(Zenject::ZenAutoInjecter::ContainerSources value);
    // public System.Void Construct()
    // Offset: 0x23BB58C
    void Construct();
    // public System.Void Awake()
    // Offset: 0x23BB5F8
    void Awake();
    // private Zenject.DiContainer LookupContainer()
    // Offset: 0x23BB644
    Zenject::DiContainer* LookupContainer();
    // private Zenject.DiContainer GetContainerForCurrentScene()
    // Offset: 0x23BB794
    Zenject::DiContainer* GetContainerForCurrentScene();
    // public System.Void .ctor()
    // Offset: 0x23BB830
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenAutoInjecter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ZenAutoInjecter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenAutoInjecter*, creationType>()));
    }
  }; // Zenject.ZenAutoInjecter
  #pragma pack(pop)
  static check_size<sizeof(ZenAutoInjecter), 28 + sizeof(bool)> __Zenject_ZenAutoInjecterSizeCheck;
  static_assert(sizeof(ZenAutoInjecter) == 0x1D);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenAutoInjecter*, "Zenject", "ZenAutoInjecter");
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenAutoInjecter::ContainerSources, "Zenject", "ZenAutoInjecter/ContainerSources");
// Writing includes for template specializations
// Writing MetadataGetter for method: Zenject::ZenAutoInjecter::get_ContainerSource
// Il2CppName: get_ContainerSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ZenAutoInjecter::ContainerSources (Zenject::ZenAutoInjecter::*)()>(&Zenject::ZenAutoInjecter::get_ContainerSource)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenAutoInjecter*), "get_ContainerSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenAutoInjecter::set_ContainerSource
// Il2CppName: set_ContainerSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenAutoInjecter::*)(Zenject::ZenAutoInjecter::ContainerSources)>(&Zenject::ZenAutoInjecter::set_ContainerSource)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenAutoInjecter*), "set_ContainerSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::ZenAutoInjecter::ContainerSources>()});
  }
};
// Writing MetadataGetter for method: Zenject::ZenAutoInjecter::Construct
// Il2CppName: Construct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenAutoInjecter::*)()>(&Zenject::ZenAutoInjecter::Construct)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenAutoInjecter*), "Construct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenAutoInjecter::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenAutoInjecter::*)()>(&Zenject::ZenAutoInjecter::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenAutoInjecter*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenAutoInjecter::LookupContainer
// Il2CppName: LookupContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (Zenject::ZenAutoInjecter::*)()>(&Zenject::ZenAutoInjecter::LookupContainer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenAutoInjecter*), "LookupContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenAutoInjecter::GetContainerForCurrentScene
// Il2CppName: GetContainerForCurrentScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (Zenject::ZenAutoInjecter::*)()>(&Zenject::ZenAutoInjecter::GetContainerForCurrentScene)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenAutoInjecter*), "GetContainerForCurrentScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenAutoInjecter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
