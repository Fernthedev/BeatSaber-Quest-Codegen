#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSceneSetupData)
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSceneSetupData);
// Type: ::RecordingToolSceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6056))
// CS Name: ::RecordingToolSceneSetupData*
class CORDL_TYPE RecordingToolSceneSetupData : public ::GlobalNamespace::SceneSetupData {
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

/// @brief Method get_nextScenesTransitionSetupData addr 0x231cd94 size 0x8 virtual false final false
inline ::GlobalNamespace::ScenesTransitionSetupDataSO* get_nextScenesTransitionSetupData() ;

static inline ::GlobalNamespace::RecordingToolSceneSetupData* New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO*  nextScenesTransitionSetupData) ;

/// @brief Method .ctor addr 0x231cd9c size 0x28 virtual false final false
inline void _ctor(::GlobalNamespace::ScenesTransitionSetupDataSO*  nextScenesTransitionSetupData) ;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSceneSetupData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecordingToolSceneSetupData(RecordingToolSceneSetupData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSceneSetupData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecordingToolSceneSetupData(RecordingToolSceneSetupData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RecordingToolSceneSetupData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSceneSetupData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSceneSetupData*, "", "RecordingToolSceneSetupData");
