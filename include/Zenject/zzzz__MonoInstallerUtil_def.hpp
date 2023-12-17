#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoInstallerUtil)
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class MonoInstallerUtil;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::MonoInstallerUtil);
// Type: Zenject::MonoInstallerUtil
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11145))
// CS Name: ::Zenject::MonoInstallerUtil*
class CORDL_TYPE MonoInstallerUtil : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetDefaultResourcePath addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
static inline ::StringW GetDefaultResourcePath() ;

/// @brief Method CreateInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
static inline TInstaller CreateInstaller(::StringW  resourcePath, ::Zenject::DiContainer*  container) ;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstallerUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoInstallerUtil(MonoInstallerUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstallerUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoInstallerUtil(MonoInstallerUtil const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoInstallerUtil()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::MonoInstallerUtil, 0x10>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::MonoInstallerUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::MonoInstallerUtil*, "Zenject", "MonoInstallerUtil");
