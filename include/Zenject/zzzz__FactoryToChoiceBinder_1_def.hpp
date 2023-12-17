#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryFromBinder_1_def.hpp"
CORDL_MODULE_EXPORT(FactoryToChoiceBinder_1)
namespace Zenject {
template<typename TContract>
class FactoryFromBinder_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class BindInfo;
}
namespace System {
class Type;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class FactoryFromBinderUntyped;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class FactoryToChoiceBinder_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryToChoiceBinder_1<TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryToChoiceBinder_1);
// Type: Zenject::FactoryToChoiceBinder`1
// Type: Zenject::FactoryToChoiceBinder`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10716), inst: 1789 }), TypeDefinitionIndex(TypeDefinitionIndex(10848)), TypeDefinitionIndex(TypeDefinitionIndex(10716))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10848), inst: 2 })
// CS Name: ::Zenject::FactoryToChoiceBinder`1<TContract>*
class CORDL_TYPE FactoryToChoiceBinder_1<TContract> : public ::Zenject::FactoryFromBinder_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::FactoryFromBinder_1<TContract>)]{};

static inline ::Zenject::FactoryToChoiceBinder_1<TContract>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryFromBinder_1<TContract>* ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryFromBinderUntyped* To(::System::Type*  concreteType) ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
inline ::Zenject::FactoryFromBinder_1<TConcrete>* To() ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryToChoiceBinder_1(FactoryToChoiceBinder_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryToChoiceBinder_1(FactoryToChoiceBinder_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryToChoiceBinder_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceBinder_1, "Zenject", "FactoryToChoiceBinder`1");
