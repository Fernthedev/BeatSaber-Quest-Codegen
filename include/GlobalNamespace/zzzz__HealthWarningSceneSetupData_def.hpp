#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(HealthWarningSceneSetupData)
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HealthWarningSceneSetupData);
// Type: ::HealthWarningSceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6053))
// CS Name: ::HealthWarningSceneSetupData*
class CORDL_TYPE HealthWarningSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::GlobalNamespace::SceneSetupData)]{};

/// @brief Field _nextScenesTransitionSetupData offset 0x10
 __declspec(property(get=__get__nextScenesTransitionSetupData, put=__set__nextScenesTransitionSetupData)) ::GlobalNamespace::ScenesTransitionSetupDataSO*  _nextScenesTransitionSetupData;

 __declspec(property(get=get_nextScenesTransitionSetupData)) ::GlobalNamespace::ScenesTransitionSetupDataSO*  nextScenesTransitionSetupData;

constexpr void __set__nextScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO* __get__nextScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> __get__nextScenesTransitionSetupData() const;

/// @brief Method get_nextScenesTransitionSetupData addr 0x231ccb0 size 0x8 virtual false final false
inline ::GlobalNamespace::ScenesTransitionSetupDataSO* get_nextScenesTransitionSetupData() ;

static inline ::GlobalNamespace::HealthWarningSceneSetupData* New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO*  nextScenesTransitionSetupData) ;

/// @brief Method .ctor addr 0x231ccb8 size 0x28 virtual false final false
inline void _ctor(::GlobalNamespace::ScenesTransitionSetupDataSO*  nextScenesTransitionSetupData) ;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningSceneSetupData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HealthWarningSceneSetupData(HealthWarningSceneSetupData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningSceneSetupData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HealthWarningSceneSetupData(HealthWarningSceneSetupData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HealthWarningSceneSetupData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningSceneSetupData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningSceneSetupData*, "", "HealthWarningSceneSetupData");
