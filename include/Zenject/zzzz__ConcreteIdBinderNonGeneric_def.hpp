#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ConcreteBinderNonGeneric_def.hpp"
CORDL_MODULE_EXPORT(ConcreteIdBinderNonGeneric)
namespace Zenject {
class BindInfo;
}
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
class ConcreteBinderNonGeneric;
}
// Forward declare root types
namespace Zenject {
class ConcreteIdBinderNonGeneric;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ConcreteIdBinderNonGeneric);
// Type: Zenject::ConcreteIdBinderNonGeneric
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10672))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10674))
// CS Name: ::Zenject::ConcreteIdBinderNonGeneric*
class CORDL_TYPE ConcreteIdBinderNonGeneric : public ::Zenject::ConcreteBinderNonGeneric {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::ConcreteBinderNonGeneric)]{};

static inline ::Zenject::ConcreteIdBinderNonGeneric* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method .ctor addr 0x2ec739c size 0x34 virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method WithId addr 0x2ec73d0 size 0x1c virtual false final false
inline ::Zenject::ConcreteBinderNonGeneric* WithId(::System::Object*  identifier) ;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderNonGeneric", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConcreteIdBinderNonGeneric(ConcreteIdBinderNonGeneric && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderNonGeneric", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConcreteIdBinderNonGeneric(ConcreteIdBinderNonGeneric const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConcreteIdBinderNonGeneric()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ConcreteIdBinderNonGeneric, 0x30>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::ConcreteIdBinderNonGeneric);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConcreteIdBinderNonGeneric*, "Zenject", "ConcreteIdBinderNonGeneric");
