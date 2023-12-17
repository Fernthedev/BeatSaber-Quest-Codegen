#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(ObjectsMovementRecorderEditorInstaller)
// Forward declare root types
namespace GlobalNamespace {
class ObjectsMovementRecorderEditorInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObjectsMovementRecorderEditorInstaller);
// Type: ::ObjectsMovementRecorderEditorInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5921))
// CS Name: ::ObjectsMovementRecorderEditorInstaller*
class CORDL_TYPE ObjectsMovementRecorderEditorInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Method InstallBindings addr 0x23001dc size 0x4 virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::ObjectsMovementRecorderEditorInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x23001e0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorderEditorInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectsMovementRecorderEditorInstaller(ObjectsMovementRecorderEditorInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorderEditorInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectsMovementRecorderEditorInstaller(ObjectsMovementRecorderEditorInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObjectsMovementRecorderEditorInstaller()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObjectsMovementRecorderEditorInstaller, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObjectsMovementRecorderEditorInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectsMovementRecorderEditorInstaller*, "", "ObjectsMovementRecorderEditorInstaller");
