#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
CORDL_MODULE_EXPORT(IdScopeConcreteIdArgConditionCopyNonLazyBinder)
namespace Zenject {
class BindInfo;
}
namespace System {
class Object;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declare root types
namespace Zenject {
class IdScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder);
// Type: Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10926))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10921))
// CS Name: ::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*
class CORDL_TYPE IdScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder)]{};

static inline ::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::BindInfo*  bindInfo) ;

/// @brief Method .ctor addr 0x2edb16c size 0x8 virtual false final false
inline void _ctor(::Zenject::BindInfo*  bindInfo) ;

/// @brief Method WithId addr 0x2edb17c size 0x1c virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* WithId(::System::Object*  identifier) ;

// Ctor Parameters [CppParam { name: "", ty: "IdScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IdScopeConcreteIdArgConditionCopyNonLazyBinder(IdScopeConcreteIdArgConditionCopyNonLazyBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IdScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IdScopeConcreteIdArgConditionCopyNonLazyBinder(IdScopeConcreteIdArgConditionCopyNonLazyBinder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IdScopeConcreteIdArgConditionCopyNonLazyBinder()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder, 0x20>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "IdScopeConcreteIdArgConditionCopyNonLazyBinder");
