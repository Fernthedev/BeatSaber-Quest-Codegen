#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__InstallerBase_def.hpp"
CORDL_MODULE_EXPORT(Installer)
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class Installer;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Installer);
// Type: Zenject::Installer
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11130))
// CS Name: ::Zenject::Installer*
class CORDL_TYPE Installer : public ::Zenject::InstallerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Zenject::InstallerBase)]{};

static inline ::Zenject::Installer* New_ctor() ;

/// @brief Method .ctor addr 0x2ef4a34 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2ef4a44 size 0x178 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "Installer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Installer(Installer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Installer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Installer(Installer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Installer()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Installer, 0x18>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::Installer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Installer*, "Zenject", "Installer");
