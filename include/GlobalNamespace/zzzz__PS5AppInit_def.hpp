#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
CORDL_MODULE_EXPORT(PS5AppInit)
namespace GlobalNamespace {
class PS5SharedPackageSKUsSO;
}
namespace GlobalNamespace {
class MainSystemInit;
}
namespace GlobalNamespace {
class SonyBackgroundExecutionHelper;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
class SonyOnGoingToBackgroundSaveHandler;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataContainerSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PS5AppInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5AppInit);
// Type: ::PS5AppInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15392))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4041))
// CS Name: ::PS5AppInit*
class CORDL_TYPE PS5AppInit : public ::GlobalNamespace::AppInit {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::GlobalNamespace::AppInit)]{};

/// @brief Field _mainSystemInit offset 0x48
 __declspec(property(get=__get__mainSystemInit, put=__set__mainSystemInit)) ::GlobalNamespace::MainSystemInit*  _mainSystemInit;

/// @brief Field _defaultScenesTransitionsFromInit offset 0x50
 __declspec(property(get=__get__defaultScenesTransitionsFromInit, put=__set__defaultScenesTransitionsFromInit)) ::GlobalNamespace::DefaultScenesTransitionsFromInit*  _defaultScenesTransitionsFromInit;

/// @brief Field _appInitScenesTransitionSetupDataContainer offset 0x58
 __declspec(property(get=__get__appInitScenesTransitionSetupDataContainer, put=__set__appInitScenesTransitionSetupDataContainer)) ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*  _appInitScenesTransitionSetupDataContainer;

/// @brief Field _ps5SharedPackageSKUs offset 0x60
 __declspec(property(get=__get__ps5SharedPackageSKUs, put=__set__ps5SharedPackageSKUs)) ::GlobalNamespace::PS5SharedPackageSKUsSO*  _ps5SharedPackageSKUs;

/// @brief Field _sonyOnGoingToBackgroundSaveHandler offset 0x68
 __declspec(property(get=__get__sonyOnGoingToBackgroundSaveHandler, put=__set__sonyOnGoingToBackgroundSaveHandler)) ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*  _sonyOnGoingToBackgroundSaveHandler;

/// @brief Field _ps5AdvancedHapticPlayerPrefab offset 0x70
 __declspec(property(get=__get__ps5AdvancedHapticPlayerPrefab, put=__set__ps5AdvancedHapticPlayerPrefab)) ::UnityEngine::GameObject*  _ps5AdvancedHapticPlayerPrefab;

/// @brief Field _backgroundExecutionHelper offset 0x78
 __declspec(property(get=__get__backgroundExecutionHelper, put=__set__backgroundExecutionHelper)) ::GlobalNamespace::SonyBackgroundExecutionHelper*  _backgroundExecutionHelper;

constexpr void __set__mainSystemInit(::GlobalNamespace::MainSystemInit*  value) ;

constexpr ::GlobalNamespace::MainSystemInit* __get__mainSystemInit() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSystemInit*> __get__mainSystemInit() const;

constexpr void __set__defaultScenesTransitionsFromInit(::GlobalNamespace::DefaultScenesTransitionsFromInit*  value) ;

constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit* __get__defaultScenesTransitionsFromInit() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DefaultScenesTransitionsFromInit*> __get__defaultScenesTransitionsFromInit() const;

constexpr void __set__appInitScenesTransitionSetupDataContainer(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*  value) ;

constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* __get__appInitScenesTransitionSetupDataContainer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*> __get__appInitScenesTransitionSetupDataContainer() const;

constexpr void __set__ps5SharedPackageSKUs(::GlobalNamespace::PS5SharedPackageSKUsSO*  value) ;

constexpr ::GlobalNamespace::PS5SharedPackageSKUsSO* __get__ps5SharedPackageSKUs() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5SharedPackageSKUsSO*> __get__ps5SharedPackageSKUs() const;

constexpr void __set__sonyOnGoingToBackgroundSaveHandler(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*  value) ;

constexpr ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler* __get__sonyOnGoingToBackgroundSaveHandler() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*> __get__sonyOnGoingToBackgroundSaveHandler() const;

constexpr void __set__ps5AdvancedHapticPlayerPrefab(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__ps5AdvancedHapticPlayerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__ps5AdvancedHapticPlayerPrefab() const;

constexpr void __set__backgroundExecutionHelper(::GlobalNamespace::SonyBackgroundExecutionHelper*  value) ;

constexpr ::GlobalNamespace::SonyBackgroundExecutionHelper* __get__backgroundExecutionHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyBackgroundExecutionHelper*> __get__backgroundExecutionHelper() const;

/// @brief Method AppStartAndMultiSceneEditorSetup addr 0x222a1e4 size 0x68 virtual true final false
inline void AppStartAndMultiSceneEditorSetup() ;

/// @brief Method RepeatableSetupAsync addr 0x222a24c size 0x9c virtual true final false
inline ::System::Threading::Tasks::Task* RepeatableSetupAsync() ;

/// @brief Method TransitionToNextScene addr 0x222a2e8 size 0x4 virtual true final false
inline void TransitionToNextScene() ;

/// @brief Method TransitionToNextSceneInternal addr 0x222a2ec size 0x54 virtual false final false
inline void TransitionToNextSceneInternal() ;

/// @brief Method InstallBindings addr 0x222a340 size 0x1ec virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::PS5AppInit* New_ctor() ;

/// @brief Method .ctor addr 0x222a52c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PS5AppInit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS5AppInit(PS5AppInit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS5AppInit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS5AppInit(PS5AppInit const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PS5AppInit()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5AppInit, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5AppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5AppInit*, "", "PS5AppInit");
