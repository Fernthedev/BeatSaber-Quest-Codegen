#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PS4AppInit)
namespace GlobalNamespace {
class SonyOnGoingToBackgroundSaveHandler;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataContainerSO;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
class MainSystemInit;
}
namespace GlobalNamespace {
class PS4ActivePublisherSKUSettingsSO;
}
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
// Forward declare root types
namespace GlobalNamespace {
class PS4AppInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS4AppInit);
// Type: ::PS4AppInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15392))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4040))
// CS Name: ::PS4AppInit*
class CORDL_TYPE PS4AppInit : public ::GlobalNamespace::AppInit {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::GlobalNamespace::AppInit)]{};

/// @brief Field _mainSystemInit offset 0x48
 __declspec(property(get=__get__mainSystemInit, put=__set__mainSystemInit)) ::GlobalNamespace::MainSystemInit*  _mainSystemInit;

/// @brief Field _defaultScenesTransitionsFromInit offset 0x50
 __declspec(property(get=__get__defaultScenesTransitionsFromInit, put=__set__defaultScenesTransitionsFromInit)) ::GlobalNamespace::DefaultScenesTransitionsFromInit*  _defaultScenesTransitionsFromInit;

/// @brief Field _appInitScenesTransitionSetupDataContainer offset 0x58
 __declspec(property(get=__get__appInitScenesTransitionSetupDataContainer, put=__set__appInitScenesTransitionSetupDataContainer)) ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*  _appInitScenesTransitionSetupDataContainer;

/// @brief Field _activePublisherSKUSettingsSO offset 0x60
 __declspec(property(get=__get__activePublisherSKUSettingsSO, put=__set__activePublisherSKUSettingsSO)) ::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*  _activePublisherSKUSettingsSO;

/// @brief Field _sonyOnGoingToBackgroundSaveHandler offset 0x68
 __declspec(property(get=__get__sonyOnGoingToBackgroundSaveHandler, put=__set__sonyOnGoingToBackgroundSaveHandler)) ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*  _sonyOnGoingToBackgroundSaveHandler;

constexpr void __set__mainSystemInit(::GlobalNamespace::MainSystemInit*  value) ;

constexpr ::GlobalNamespace::MainSystemInit* __get__mainSystemInit() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSystemInit*> __get__mainSystemInit() const;

constexpr void __set__defaultScenesTransitionsFromInit(::GlobalNamespace::DefaultScenesTransitionsFromInit*  value) ;

constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit* __get__defaultScenesTransitionsFromInit() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DefaultScenesTransitionsFromInit*> __get__defaultScenesTransitionsFromInit() const;

constexpr void __set__appInitScenesTransitionSetupDataContainer(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*  value) ;

constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* __get__appInitScenesTransitionSetupDataContainer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*> __get__appInitScenesTransitionSetupDataContainer() const;

constexpr void __set__activePublisherSKUSettingsSO(::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*  value) ;

constexpr ::GlobalNamespace::PS4ActivePublisherSKUSettingsSO* __get__activePublisherSKUSettingsSO() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*> __get__activePublisherSKUSettingsSO() const;

constexpr void __set__sonyOnGoingToBackgroundSaveHandler(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*  value) ;

constexpr ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler* __get__sonyOnGoingToBackgroundSaveHandler() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*> __get__sonyOnGoingToBackgroundSaveHandler() const;

/// @brief Method InitializeModules addr 0x2229e50 size 0x68 virtual false final false
static inline int32_t InitializeModules() ;

/// @brief Method AppStartAndMultiSceneEditorSetup addr 0x2229eb8 size 0x68 virtual true final false
inline void AppStartAndMultiSceneEditorSetup() ;

/// @brief Method RepeatableSetupAsync addr 0x2229f20 size 0x9c virtual true final false
inline ::System::Threading::Tasks::Task* RepeatableSetupAsync() ;

/// @brief Method TransitionToNextScene addr 0x2229fbc size 0x34 virtual true final false
inline void TransitionToNextScene() ;

/// @brief Method InstallBindings addr 0x2229ff0 size 0x1ec virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::PS4AppInit* New_ctor() ;

/// @brief Method .ctor addr 0x222a1dc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PS4AppInit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS4AppInit(PS4AppInit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS4AppInit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS4AppInit(PS4AppInit const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PS4AppInit()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4AppInit, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4AppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4AppInit*, "", "PS4AppInit");
