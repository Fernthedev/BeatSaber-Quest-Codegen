#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(AbstractAdapterInstallerSO)
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AbstractAdapterInstallerSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AbstractAdapterInstallerSO);
// Type: BeatSaber.AvatarCore::AbstractAdapterInstallerSO
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11147))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15165))
// CS Name: ::BeatSaber.AvatarCore::AbstractAdapterInstallerSO*
class CORDL_TYPE AbstractAdapterInstallerSO : public ::Zenject::ScriptableObjectInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Zenject::ScriptableObjectInstaller)]{};

/// @brief Method InstallBindings addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InstallBindings(::Zenject::DiContainer*  container) ;

static inline ::BeatSaber::AvatarCore::AbstractAdapterInstallerSO* New_ctor() ;

/// @brief Method .ctor addr 0xe0a66c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AbstractAdapterInstallerSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractAdapterInstallerSO(AbstractAdapterInstallerSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractAdapterInstallerSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractAdapterInstallerSO(AbstractAdapterInstallerSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AbstractAdapterInstallerSO()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO, 0x20>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AbstractAdapterInstallerSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AbstractAdapterInstallerSO*, "BeatSaber.AvatarCore", "AbstractAdapterInstallerSO");
