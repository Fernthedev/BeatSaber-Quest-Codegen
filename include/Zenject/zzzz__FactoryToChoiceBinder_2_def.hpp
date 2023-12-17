#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryFromBinder_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FactoryToChoiceBinder_2)
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
template<typename TParam1,typename TContract>
class FactoryFromBinder_2;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TContract>
class FactoryToChoiceBinder_2;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryToChoiceBinder_2<TParam1,TContract>;
}
namespace Zenject {
template<::cordl_internals::is_or_is_backed_by<int32_t> TParam1,::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryToChoiceBinder_2<TParam1,TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryToChoiceBinder_2);
// Type: Zenject::FactoryToChoiceBinder`2
// Type: Zenject::FactoryToChoiceBinder`2
namespace Zenject {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TParam1,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10849)), TypeDefinitionIndex(TypeDefinitionIndex(10725)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10725), inst: 1802 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10849), inst: 1614 })
// CS Name: ::Zenject::FactoryToChoiceBinder`2<TParam1,TContract>*
class CORDL_TYPE FactoryToChoiceBinder_2<TParam1,TContract> : public ::Zenject::FactoryFromBinder_2<TParam1,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::FactoryFromBinder_2<TParam1,TContract>)]{};

static inline ::Zenject::FactoryToChoiceBinder_2<TParam1,TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryFromBinder_2<TParam1,TContract>* ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
inline ::Zenject::FactoryFromBinder_2<TParam1,TConcrete>* To() ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryToChoiceBinder_2(FactoryToChoiceBinder_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryToChoiceBinder_2(FactoryToChoiceBinder_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryToChoiceBinder_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryToChoiceBinder`2
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10849)), TypeDefinitionIndex(TypeDefinitionIndex(10725)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10725), inst: 1802 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10849), inst: 81 })
// CS Name: ::Zenject::FactoryToChoiceBinder`2<TParam1,TContract>*
class CORDL_TYPE FactoryToChoiceBinder_2<TParam1,TContract> : public ::Zenject::FactoryFromBinder_2<TParam1,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::FactoryFromBinder_2<TParam1,TContract>)]{};

static inline ::Zenject::FactoryToChoiceBinder_2<TParam1,TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryFromBinder_2<TParam1,TContract>* ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
inline ::Zenject::FactoryFromBinder_2<TParam1,TConcrete>* To() ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryToChoiceBinder_2(FactoryToChoiceBinder_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryToChoiceBinder_2(FactoryToChoiceBinder_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryToChoiceBinder_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceBinder_2, "Zenject", "FactoryToChoiceBinder`2");
