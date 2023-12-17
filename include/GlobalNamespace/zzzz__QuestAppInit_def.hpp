#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
CORDL_MODULE_EXPORT(QuestAppInit)
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
class MainSystemInit;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class QuestAppInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuestAppInit);
// Type: ::QuestAppInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15392))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4042))
// CS Name: ::QuestAppInit*
class CORDL_TYPE QuestAppInit : public ::GlobalNamespace::AppInit {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::GlobalNamespace::AppInit)]{};

/// @brief Field _mainSystemInit offset 0x48
 __declspec(property(get=__get__mainSystemInit, put=__set__mainSystemInit)) ::GlobalNamespace::MainSystemInit*  _mainSystemInit;

/// @brief Field _defaultScenesTransitionsFromInit offset 0x50
 __declspec(property(get=__get__defaultScenesTransitionsFromInit, put=__set__defaultScenesTransitionsFromInit)) ::GlobalNamespace::DefaultScenesTransitionsFromInit*  _defaultScenesTransitionsFromInit;

/// @brief Field _mainSettingsModel offset 0x58
 __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel)) ::GlobalNamespace::MainSettingsModelSO*  _mainSettingsModel;

constexpr void __set__mainSystemInit(::GlobalNamespace::MainSystemInit*  value) ;

constexpr ::GlobalNamespace::MainSystemInit* __get__mainSystemInit() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSystemInit*> __get__mainSystemInit() const;

constexpr void __set__defaultScenesTransitionsFromInit(::GlobalNamespace::DefaultScenesTransitionsFromInit*  value) ;

constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit* __get__defaultScenesTransitionsFromInit() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DefaultScenesTransitionsFromInit*> __get__defaultScenesTransitionsFromInit() const;

constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO*  value) ;

constexpr ::GlobalNamespace::MainSettingsModelSO* __get__mainSettingsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> __get__mainSettingsModel() const;

/// @brief Method AppStartAndMultiSceneEditorSetup addr 0x222a534 size 0x4 virtual true final false
inline void AppStartAndMultiSceneEditorSetup() ;

/// @brief Method RepeatableSetupAsync addr 0x222a538 size 0x9c virtual true final false
inline ::System::Threading::Tasks::Task* RepeatableSetupAsync() ;

/// @brief Method TransitionToNextScene addr 0x222a5d4 size 0x98 virtual true final false
inline void TransitionToNextScene() ;

/// @brief Method InstallBindings addr 0x222a66c size 0x280 virtual true final false
inline void InstallBindings() ;

/// @brief Method ApplyDeviceSettings addr 0x222a8ec size 0x254 virtual false final false
inline void ApplyDeviceSettings() ;

static inline ::GlobalNamespace::QuestAppInit* New_ctor() ;

/// @brief Method .ctor addr 0x222ab40 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "QuestAppInit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QuestAppInit(QuestAppInit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuestAppInit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuestAppInit(QuestAppInit const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 QuestAppInit()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuestAppInit, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuestAppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuestAppInit*, "", "QuestAppInit");
