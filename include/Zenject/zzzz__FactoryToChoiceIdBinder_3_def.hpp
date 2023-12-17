#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FactoryToChoiceIdBinder_3)
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TContract>
class FactoryArgumentsToChoiceBinder_3;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TContract>
class FactoryToChoiceIdBinder_3;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryToChoiceIdBinder_3<TParam1,TParam2,TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::cordl_internals::is_or_is_backed_by<int32_t> TParam2,::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryToChoiceIdBinder_3<TParam1,TParam2,TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryToChoiceIdBinder_3);
// Type: Zenject::FactoryToChoiceIdBinder`3
// Type: Zenject::FactoryToChoiceIdBinder`3
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::cordl_internals::is_or_is_backed_by<int32_t> TParam2,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10706)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10706), inst: 1775 }), TypeDefinitionIndex(TypeDefinitionIndex(10859))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10859), inst: 6142 })
// CS Name: ::Zenject::FactoryToChoiceIdBinder`3<TParam1,TParam2,TContract>*
class CORDL_TYPE FactoryToChoiceIdBinder_3<TParam1,TParam2,TContract> : public ::Zenject::FactoryArgumentsToChoiceBinder_3<TParam1,TParam2,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::FactoryArgumentsToChoiceBinder_3<TParam1,TParam2,TContract>)]{};

static inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1,TParam2,TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryArgumentsToChoiceBinder_3<TParam1,TParam2,TContract>* WithId(::System::Object*  identifier) ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryToChoiceIdBinder_3(FactoryToChoiceIdBinder_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryToChoiceIdBinder_3(FactoryToChoiceIdBinder_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryToChoiceIdBinder_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryToChoiceIdBinder`3
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10706)), TypeDefinitionIndex(TypeDefinitionIndex(10859)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10706), inst: 1775 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10859), inst: 5330 })
// CS Name: ::Zenject::FactoryToChoiceIdBinder`3<TParam1,TParam2,TContract>*
class CORDL_TYPE FactoryToChoiceIdBinder_3<TParam1,TParam2,TContract> : public ::Zenject::FactoryArgumentsToChoiceBinder_3<TParam1,TParam2,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::FactoryArgumentsToChoiceBinder_3<TParam1,TParam2,TContract>)]{};

static inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1,TParam2,TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryArgumentsToChoiceBinder_3<TParam1,TParam2,TContract>* WithId(::System::Object*  identifier) ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryToChoiceIdBinder_3(FactoryToChoiceIdBinder_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryToChoiceIdBinder_3(FactoryToChoiceIdBinder_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryToChoiceIdBinder_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceIdBinder_3, "Zenject", "FactoryToChoiceIdBinder`3");
