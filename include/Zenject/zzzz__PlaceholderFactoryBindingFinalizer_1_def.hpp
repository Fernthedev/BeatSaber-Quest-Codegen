#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
CORDL_MODULE_EXPORT(PlaceholderFactoryBindingFinalizer_1)
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class PlaceholderFactoryBindingFinalizer_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class PlaceholderFactoryBindingFinalizer_1<TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PlaceholderFactoryBindingFinalizer_1);
// Type: Zenject::PlaceholderFactoryBindingFinalizer`1
// Type: Zenject::PlaceholderFactoryBindingFinalizer`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10966)), TypeDefinitionIndex(TypeDefinitionIndex(10864))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10864), inst: 2 })
// CS Name: ::Zenject::PlaceholderFactoryBindingFinalizer`1<TContract>*
class CORDL_TYPE PlaceholderFactoryBindingFinalizer_1<TContract> : public ::Zenject::ProviderBindingFinalizer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Zenject::ProviderBindingFinalizer)]{};

/// @brief Field _factoryBindInfo offset 0x18
 __declspec(property(get=__get__factoryBindInfo, put=__set__factoryBindInfo)) ::Zenject::FactoryBindInfo*  _factoryBindInfo;

constexpr void __set__factoryBindInfo(::Zenject::FactoryBindInfo*  value) ;

constexpr ::Zenject::FactoryBindInfo* __get__factoryBindInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryBindInfo*> __get__factoryBindInfo() const;

static inline ::Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>* New_ctor(::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method OnFinalizeBinding addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnFinalizeBinding(::Zenject::DiContainer*  container) ;

// Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactoryBindingFinalizer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlaceholderFactoryBindingFinalizer_1(PlaceholderFactoryBindingFinalizer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactoryBindingFinalizer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlaceholderFactoryBindingFinalizer_1(PlaceholderFactoryBindingFinalizer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlaceholderFactoryBindingFinalizer_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PlaceholderFactoryBindingFinalizer_1, "Zenject", "PlaceholderFactoryBindingFinalizer`1");
