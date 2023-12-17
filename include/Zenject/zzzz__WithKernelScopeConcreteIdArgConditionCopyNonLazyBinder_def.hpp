#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
CORDL_MODULE_EXPORT(WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder)
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
// Forward declare root types
namespace Zenject {
class WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder);
// Type: Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10926))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10941))
// CS Name: ::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*
class CORDL_TYPE WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder)]{};

/// @brief Field _subContainerBindInfo offset 0x20
 __declspec(property(get=__get__subContainerBindInfo, put=__set__subContainerBindInfo)) ::Zenject::SubContainerCreatorBindInfo*  _subContainerBindInfo;

constexpr void __set__subContainerBindInfo(::Zenject::SubContainerCreatorBindInfo*  value) ;

constexpr ::Zenject::SubContainerCreatorBindInfo* __get__subContainerBindInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorBindInfo*> __get__subContainerBindInfo() const;

static inline ::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::SubContainerCreatorBindInfo*  subContainerBindInfo, ::Zenject::BindInfo*  bindInfo) ;

/// @brief Method .ctor addr 0x2ede928 size 0x2c virtual false final false
inline void _ctor(::Zenject::SubContainerCreatorBindInfo*  subContainerBindInfo, ::Zenject::BindInfo*  bindInfo) ;

/// @brief Method WithKernel addr 0x2ede954 size 0x20 virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel() ;

/// @brief Method WithKernel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TKernel>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel() ;

// Ctor Parameters [CppParam { name: "", ty: "WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder(WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder(WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder, 0x28>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder");
