#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSceneSetup)
namespace GlobalNamespace {
class RecordingToolSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSceneSetup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSceneSetup);
// Type: ::RecordingToolSceneSetup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6045))
// CS Name: ::RecordingToolSceneSetup*
class CORDL_TYPE RecordingToolSceneSetup : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Field _sceneSetupData offset 0x20
 __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData)) ::GlobalNamespace::RecordingToolSceneSetupData*  _sceneSetupData;

constexpr void __set__sceneSetupData(::GlobalNamespace::RecordingToolSceneSetupData*  value) ;

constexpr ::GlobalNamespace::RecordingToolSceneSetupData* __get__sceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolSceneSetupData*> __get__sceneSetupData() const;

/// @brief Method InstallBindings addr 0x231c288 size 0xc4 virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::RecordingToolSceneSetup* New_ctor() ;

/// @brief Method .ctor addr 0x231c34c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSceneSetup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecordingToolSceneSetup(RecordingToolSceneSetup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSceneSetup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecordingToolSceneSetup(RecordingToolSceneSetup const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RecordingToolSceneSetup()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSceneSetup, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSceneSetup*, "", "RecordingToolSceneSetup");
