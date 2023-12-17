#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FactoryToChoiceIdBinder_2)
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template<typename TParam1,typename TContract>
class FactoryArgumentsToChoiceBinder_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TContract>
class FactoryToChoiceIdBinder_2;
}
namespace Zenject {
template<::cordl_internals::is_or_is_backed_by<int32_t> TParam1,::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryToChoiceIdBinder_2<TParam1,TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryToChoiceIdBinder_2<TParam1,TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryToChoiceIdBinder_2);
// Type: Zenject::FactoryToChoiceIdBinder`2
// Type: Zenject::FactoryToChoiceIdBinder`2
namespace Zenject {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TParam1,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10704)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10704), inst: 1774 }), TypeDefinitionIndex(TypeDefinitionIndex(10857))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10857), inst: 1614 })
// CS Name: ::Zenject::FactoryToChoiceIdBinder`2<TParam1,TContract>*
class CORDL_TYPE FactoryToChoiceIdBinder_2<TParam1,TContract> : public ::Zenject::FactoryArgumentsToChoiceBinder_2<TParam1,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::FactoryArgumentsToChoiceBinder_2<TParam1,TContract>)]{};

static inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1,TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryArgumentsToChoiceBinder_2<TParam1,TContract>* WithId(::System::Object*  identifier) ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryToChoiceIdBinder_2(FactoryToChoiceIdBinder_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryToChoiceIdBinder_2(FactoryToChoiceIdBinder_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryToChoiceIdBinder_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryToChoiceIdBinder`2
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10704)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10704), inst: 1774 }), TypeDefinitionIndex(TypeDefinitionIndex(10857))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10857), inst: 81 })
// CS Name: ::Zenject::FactoryToChoiceIdBinder`2<TParam1,TContract>*
class CORDL_TYPE FactoryToChoiceIdBinder_2<TParam1,TContract> : public ::Zenject::FactoryArgumentsToChoiceBinder_2<TParam1,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::FactoryArgumentsToChoiceBinder_2<TParam1,TContract>)]{};

static inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1,TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryArgumentsToChoiceBinder_2<TParam1,TContract>* WithId(::System::Object*  identifier) ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryToChoiceIdBinder_2(FactoryToChoiceIdBinder_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryToChoiceIdBinder_2(FactoryToChoiceIdBinder_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryToChoiceIdBinder_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceIdBinder_2, "Zenject", "FactoryToChoiceIdBinder`2");
