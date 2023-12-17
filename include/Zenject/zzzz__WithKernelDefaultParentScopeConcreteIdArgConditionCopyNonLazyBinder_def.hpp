#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
CORDL_MODULE_EXPORT(WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder)
namespace Zenject {
class DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
// Forward declare root types
namespace Zenject {
class WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder);
// Type: Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10702))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10940))
// CS Name: ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*
class CORDL_TYPE WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder)]{};

static inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::SubContainerCreatorBindInfo*  subContainerBindInfo, ::Zenject::BindInfo*  bindInfo) ;

/// @brief Method .ctor addr 0x2edb818 size 0x8 virtual false final false
inline void _ctor(::Zenject::SubContainerCreatorBindInfo*  subContainerBindInfo, ::Zenject::BindInfo*  bindInfo) ;

/// @brief Method WithKernel addr 0x2ede908 size 0x20 virtual false final false
inline ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel() ;

/// @brief Method WithKernel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TKernel>
inline ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel() ;

// Ctor Parameters [CppParam { name: "", ty: "WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder, 0x28>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder");
