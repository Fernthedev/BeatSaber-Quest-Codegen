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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
  // Forward declaring type: SimpleColorSO
  class SimpleColorSO;
  // Forward declaring type: ColorScheme
  class ColorScheme;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentColorManager
  class EnvironmentColorManager : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSchemeSO _defaultColorScheme
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSchemeSO* defaultColorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE27B1C
    // private SimpleColorSO _environmentColor0
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::SimpleColorSO* environmentColor0;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleColorSO*) == 0x8);
    // private SimpleColorSO _environmentColor1
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SimpleColorSO* environmentColor1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleColorSO*) == 0x8);
    // private SimpleColorSO _environmentColor0Boost
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SimpleColorSO* environmentColor0Boost;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleColorSO*) == 0x8);
    // private SimpleColorSO _environmentColor1Boost
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::SimpleColorSO* environmentColor1Boost;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleColorSO*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0xE27B84
    // private ColorScheme _colorScheme
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::ColorScheme* colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorScheme*) == 0x8);
    // Creating value type constructor for type: EnvironmentColorManager
    EnvironmentColorManager(GlobalNamespace::ColorSchemeSO* defaultColorScheme_ = {}, GlobalNamespace::SimpleColorSO* environmentColor0_ = {}, GlobalNamespace::SimpleColorSO* environmentColor1_ = {}, GlobalNamespace::SimpleColorSO* environmentColor0Boost_ = {}, GlobalNamespace::SimpleColorSO* environmentColor1Boost_ = {}, GlobalNamespace::ColorScheme* colorScheme_ = {}) noexcept : defaultColorScheme{defaultColorScheme_}, environmentColor0{environmentColor0_}, environmentColor1{environmentColor1_}, environmentColor0Boost{environmentColor0Boost_}, environmentColor1Boost{environmentColor1Boost_}, colorScheme{colorScheme_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Color get_environmentColor0()
    // Offset: 0x103D684
    UnityEngine::Color get_environmentColor0();
    // public UnityEngine.Color get_environmentColor1()
    // Offset: 0x103D6A4
    UnityEngine::Color get_environmentColor1();
    // public UnityEngine.Color get_environmentColor0Boost()
    // Offset: 0x103D6C4
    UnityEngine::Color get_environmentColor0Boost();
    // public UnityEngine.Color get_environmentColor1Boost()
    // Offset: 0x103D718
    UnityEngine::Color get_environmentColor1Boost();
    // protected System.Void Awake()
    // Offset: 0x103D76C
    void Awake();
    // protected System.Void Start()
    // Offset: 0x103D798
    void Start();
    // public System.Void .ctor()
    // Offset: 0x103D858
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentColorManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentColorManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentColorManager*, creationType>()));
    }
  }; // EnvironmentColorManager
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentColorManager), 64 + sizeof(GlobalNamespace::ColorScheme*)> __GlobalNamespace_EnvironmentColorManagerSizeCheck;
  static_assert(sizeof(EnvironmentColorManager) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentColorManager*, "", "EnvironmentColorManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentColorManager::get_environmentColor0
// Il2CppName: get_environmentColor0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::EnvironmentColorManager::*)()>(&GlobalNamespace::EnvironmentColorManager::get_environmentColor0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentColorManager*), "get_environmentColor0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentColorManager::get_environmentColor1
// Il2CppName: get_environmentColor1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::EnvironmentColorManager::*)()>(&GlobalNamespace::EnvironmentColorManager::get_environmentColor1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentColorManager*), "get_environmentColor1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentColorManager::get_environmentColor0Boost
// Il2CppName: get_environmentColor0Boost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::EnvironmentColorManager::*)()>(&GlobalNamespace::EnvironmentColorManager::get_environmentColor0Boost)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentColorManager*), "get_environmentColor0Boost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentColorManager::get_environmentColor1Boost
// Il2CppName: get_environmentColor1Boost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::EnvironmentColorManager::*)()>(&GlobalNamespace::EnvironmentColorManager::get_environmentColor1Boost)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentColorManager*), "get_environmentColor1Boost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentColorManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentColorManager::*)()>(&GlobalNamespace::EnvironmentColorManager::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentColorManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentColorManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentColorManager::*)()>(&GlobalNamespace::EnvironmentColorManager::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentColorManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentColorManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
