#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorUtil)
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorUtil;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorUtil);
// Type: Zenject::SubContainerCreatorUtil
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11296))
// CS Name: ::Zenject::SubContainerCreatorUtil*
class CORDL_TYPE SubContainerCreatorUtil : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ApplyBindSettings addr 0x2f0b324 size 0x304 virtual false final false
static inline void ApplyBindSettings(::Zenject::SubContainerCreatorBindInfo*  subContainerBindInfo, ::Zenject::DiContainer*  subContainer) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorUtil(SubContainerCreatorUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorUtil(SubContainerCreatorUtil const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerCreatorUtil()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorUtil, 0x10>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorUtil*, "Zenject", "SubContainerCreatorUtil");
